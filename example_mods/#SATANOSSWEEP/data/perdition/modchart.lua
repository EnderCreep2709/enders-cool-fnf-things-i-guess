local HudPieces = {'healthBarBG','healthBar','scoreTxt','iconP1','iconP2','timeBar','timeBarBG','timeTxt'}
local index = 1

local scrollangleup = 180
local scrollangledown = 0
local speed = 0.5

local leftSide = {92, 204, 316, 428}
local rightSide = {732, 844, 956, 1068}
local middleWay = {412, 524, 636, 748}
local splitWay = {82, 194, 971, 1083}
local splitWay1 = {-82, -194, 2913, 3249}
local splitWay2 = {-182, -194, 2913, 3249}
local spreadWay = {92, 428, 732, 1068}
local leftSider = {2, 114, 226, 338}
local rightSider = {822, 934, 1046, 1158}

local wigglefreq = 0
local wiggleamp = 0

function onSongStart()
    setProperty("timeBar.color",getColorFromHex("FF0000"))
end
function onCreate()
    setProperty('skipCountdown', true);
end

--fix holds & stuff for keychange
function onUpdate()
    songPos = getSongPosition();
    local currentBeat = (songPos/5000)*(curBpm/60);

    noteCount = getProperty('notes.length');
    for i = 0, noteCount - 1 do
        if getPropertyFromGroup('notes', i, 'isSustainNote') and isDownscroll then
            setPropertyFromGroup('notes', i, 'angle', scrollangleup)
        elseif getPropertyFromGroup('notes', i, 'isSustainNote') and not isDownscroll then
            setPropertyFromGroup('notes', i, 'angle', scrollangledown)
        end
    end

    --floaty modchart
    if curBeat >= 572 and curBeat < 708 then
        for i = 0, 3 do
            if downscroll then
                noteTweenY('defaultPlayerStrumY'..i, i+4, 550 - 40*math.sin((currentBeat+(i+4)*0.25)*math.pi), 0.5)
                noteTweenY('defaultOpponentStrumY'..i, i, 50 - 40*math.sin((currentBeat+(i+4)*0.25)*math.pi), 0.5)
            else
                noteTweenY('defaultPlayerStrumY'..i, i+4, 50 - 40*math.sin((currentBeat+(i+4)*0.25)*math.pi), 0.5)
                noteTweenY('defaultOpponentStrumY'..i, i, 550 - 40*math.sin((currentBeat+(i+4)*0.25)*math.pi), 0.5)
            end
        end
    end
    --xtra floaty
    if curBeat >= 604 and curBeat < 708 then
        for i = 0, 3 do
            noteTweenX('defaultPlayerStrumX'..i, i+4, middleWay[i+1] - 40*math.sin((currentBeat+(i+4)*0.25)*math.pi), 0.5)
            noteTweenX('defaultOpponentStrumX'..i, i, spreadWay[i+1] - 40*math.sin((currentBeat+(i+4)*0.25)*math.pi), 0.5)
        end
    end
    --now we schmovin
    if curBeat >= 636 and curBeat < 708 then
        for i = 0, 3 do
            noteTweenX('defaultPlayerStrumX'..i, i+4, middleWay[i+1] - 40*math.sin((currentBeat+1*0.25)*math.pi), 0.5)
            noteTweenX('defaultOpponentStrumX'..i, i, spreadWay[i+1] - 40*math.sin((currentBeat+1*0.25)*math.pi), 0.5)
        end
    end
    --the schmoves never end!!!!!
    if curBeat >= 668 then
        local songPos = getPropertyFromClass('Conductor', 'songPosition') / 500 --How long it will take.
        setProperty("camHUD.angle", 10 * math.sin(songPos))
    end

end	

--wiggle fades away
function onStepHit()
    wigglefreq = wigglefreq + 1;
	wiggleamp = wiggleamp - 1;

    if curBeat <= 236 or curBeat >= 300 then
        wigglefreq = wigglefreq + 2;
	    wiggleamp = wiggleamp - 2;
    end

    if wiggleamp < 0 then
        wiggleamp = 0
    end    
end

--da modchart events
function onBeatHit()

    --hud elements leave
    if curBeat == 40 then
        
        for Alphas = 1,8 do
			doTweenAlpha('Alpha'..Alphas, HudPieces[index], 0, 0.5 - 0.1);
			index = index + 1
    				
			if index > #HudPieces then
				index = 1
			end
			
		end
    end

    --satanos switches scroll direction
    if curBeat == 72 then

        for i = 0,3 do
            if downscroll then
                noteTweenY('gn'..i, i, 50, speed, 'quintOut');
                setPropertyFromGroup('opponentStrums',i,'downScroll',false);
            elseif not downscroll then
                noteTweenY('gn1'..i, i, 550, speed, 'quintOut');
                setPropertyFromGroup('opponentStrums',i,'downScroll',true);
            end
        end

    end

   

    --note overlay time
    if curBeat == 108 then
		for i = 4, 7 do
			noteTweenX('moveNoteX'..i, i, middleWay[i-3], 0.5, 'quadOut');
		end
		for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, middleWay[i+1], 0.5, 'quadOut');
			noteTweenAlpha('alphaNote' .. i, i, 0.5, 0.5, 'quadOut');
		end
    end

    --both switch scroll direction
    if curBeat == 140 then

        for i = 0,3 do
            if downscroll then
                noteTweenY('gn'..i, i, 550, speed, 'quintOut');
                setPropertyFromGroup('opponentStrums',i,'downScroll',true);
                setPropertyFromGroup('playerStrums',i,'downScroll',false);
            elseif not downscroll then
                noteTweenY('gn1'..i, i, 50, speed, 'quintOut');  
                setPropertyFromGroup('opponentStrums',i,'downScroll',false);
                setPropertyFromGroup('playerStrums',i,'downScroll',true);   
            end
        end

        for i = 4,7 do
            if downscroll then
                noteTweenY('gn'..i, i, 50, speed, 'quintOut');
            elseif not downscroll then
                noteTweenY('gn1'..i, i, 550, speed, 'quintOut');     
            end
        end

    end

    --reset notes
    if curBeat == 172 or curBeat == 428 then
        for i = 4, 7 do
			noteTweenX('moveNoteX'..i, i, rightSide[i-3], 1, 'quadOut');
            
            if downscroll then
                noteTweenY('gn1'..i, i, 550, 1, 'sineOut'); 
                noteTweenY('gn1'..i-4, i-4, 550, 1, 'sineOut'); 
                setPropertyFromGroup('playerStrums',i-4,'downScroll',true);	
                setPropertyFromGroup('opponentStrums',i-4,'downScroll',true);	
            else
                noteTweenY('gn1'..i, i, 50, 1, 'sineOut');
                noteTweenY('gn1'..i-4, i-4, 50, 1, 'sineOut');
                setPropertyFromGroup('playerStrums',i-4,'downScroll',false);	
                setPropertyFromGroup('opponentStrums',i-4,'downScroll',false);	
            end

		end
		for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, leftSide[i+1], 1, 'quadOut');
			noteTweenAlpha('alphaNote' .. i, i, 1, 1, 'sineOut');
		end

    end

    --HERE IT COMES
    if curBeat == 232 then
        wigglefreq = 5;
		wiggleamp = 25;
    end
    if curBeat == 234 then
        wigglefreq = 8;
		wiggleamp = 20;
    end

    --ASCENSION
    if curBeat == 236 then
        wigglefreq = 1;
		wiggleamp = 30;
        for i = 4, 7 do
			noteTweenX('moveNoteX'..i, i, splitWay[i-3], 1, 'quadOut');
		end
		for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, middleWay[i+1], 1, 'quadOut');
			noteTweenAlpha('alphaNote' .. i, i, 0.5, 0.5, 'quadOut');
		end
    end

    --replace this lol
    if curBeat == 244 then
        wigglefreq = 20;
		wiggleamp = 13;
    end

    if curBeat == 252 then
        wigglefreq = 20;
		wiggleamp = 8;
    end
    if curBeat == 253 then
        wigglefreq = 20;
		wiggleamp = 11;
    end
    if curBeat == 255 then
        wigglefreq = 10;
		wiggleamp = 15;
    end
    if curBeat == 257 then
        wigglefreq = 15;
		wiggleamp = 11;
    end
    if curBeat == 259 then
        wigglefreq = 20;
		wiggleamp = 7;
    end

    if curBeat == 260 then
        wigglefreq = 20;
		wiggleamp = 8;
    end
    if curBeat == 261 then
        wigglefreq = 20;
		wiggleamp = 11;
    end
    if curBeat == 263 then
        wigglefreq = 20;
		wiggleamp = 15;
    end
    if curBeat == 265 then
        wigglefreq = 10;
		wiggleamp = 20;
    end
    if curBeat == 266 then
        wigglefreq = 15;
		wiggleamp = 15;
    end
    if curBeat == 267 then
        wigglefreq = 20;
		wiggleamp = 10;
    end

    if curBeat == 268 then
        wigglefreq = 1;
		wiggleamp = 30;
    end
    if curBeat == 276 then
        wigglefreq = 20;
		wiggleamp = 13;
    end

    if curBeat == 284 then
        wigglefreq = 20;
		wiggleamp = 8;
    end
    if curBeat == 285 then
        wigglefreq = 20;
		wiggleamp = 11;
    end
    if curBeat == 287 then
        wigglefreq = 10;
		wiggleamp = 15;
    end
    if curBeat == 289 then
        wigglefreq = 15;
		wiggleamp = 11;
    end
    if curBeat == 291 then
        wigglefreq = 20;
		wiggleamp = 7;
    end

    if curBeat == 292 then
        wigglefreq = 20;
		wiggleamp = 8;
    end
    if curBeat == 293 then
        wigglefreq = 20;
		wiggleamp = 11;
    end
    if curBeat == 295 then
        wigglefreq = 20;
		wiggleamp = 15;
    end
    if curBeat == 297 then
        wigglefreq = 10;
		wiggleamp = 20;
    end
    if curBeat == 298 then
        wigglefreq = 15;
		wiggleamp = 15;
    end
    if curBeat == 298 then
        wigglefreq = 20;
		wiggleamp = 10;
    end

    if curBeat == 268 then
        for i = 4, 7 do
            noteTweenX('moveNoteX'..i, i, middleWay[i-3], 0.5, 'quintOut');

		end
		for i = 0, 3 do
			noteTweenX('moveNoteX'..i, i, splitWay[i+1], 0.5, 'quintOut');
		end
    end

    --go crazy
    if curBeat == 300 then
        for i = 4, 7 do
			noteTweenY('moveNoteY'..i, i, 275, 1, 'quadOut');
		end
		for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, splitWay1[i+1], 1, 'quadOut');
			noteTweenAlpha('alphaNote' .. i, i, 0, 0.5, 'quadOut');
		end

        if downscroll then
            setPropertyFromGroup('playerStrums',2,'downScroll',false);	
            setPropertyFromGroup('playerStrums',3,'downScroll',false); 

        elseif not downscroll then	
            setPropertyFromGroup('playerStrums',2,'downScroll',true);	
            setPropertyFromGroup('playerStrums',3,'downScroll',true);
             
        end
    end

    if curBeat == 308 then

        if downscroll then
            noteTweenY('moveNoteY4', 4, 550, speed, 'quintOut');
            noteTweenY('moveNoteY5', 5, 550, speed, 'quintOut');
            noteTweenY('moveNoteY6', 6, 50, speed, 'quintOut');
            noteTweenY('moveNoteY7', 7, 50, speed, 'quintOut');

        elseif not downscroll then	
            noteTweenY('moveNoteY4', 4, 50, speed, 'quintOut');
            noteTweenY('moveNoteY5', 5, 50, speed, 'quintOut');
            noteTweenY('moveNoteY6', 6, 550, speed, 'quintOut');
            noteTweenY('moveNoteY7', 7, 550, speed, 'quintOut');
             
        end
    end

    if curBeat == 316 then
        for i = 4, 7 do
			noteTweenY('moveNoteY'..i, i, 275, 1, 'quadOut');
		end

        if downscroll then
            setPropertyFromGroup('playerStrums',0,'downScroll',false);	
            setPropertyFromGroup('playerStrums',1,'downScroll',false); 
            setPropertyFromGroup('playerStrums',2,'downScroll',true);	
            setPropertyFromGroup('playerStrums',3,'downScroll',true); 

        elseif not downscroll then	
            setPropertyFromGroup('playerStrums',0,'downScroll',true);	
            setPropertyFromGroup('playerStrums',1,'downScroll',true); 
            setPropertyFromGroup('playerStrums',2,'downScroll',false);	
            setPropertyFromGroup('playerStrums',3,'downScroll',false); 
             
        end
    end

    if curBeat == 324 then
        if downscroll then
            noteTweenY('moveNoteY4', 4, 50, speed, 'quintOut');
            noteTweenY('moveNoteY5', 5, 50, speed, 'quintOut');
            noteTweenY('moveNoteY6', 6, 550, speed, 'quintOut');
            noteTweenY('moveNoteY7', 7, 550, speed, 'quintOut');

        elseif not downscroll then	
            noteTweenY('moveNoteY4', 4, 550, speed, 'quintOut');
            noteTweenY('moveNoteY5', 5, 550, speed, 'quintOut');
            noteTweenY('moveNoteY6', 6, 50, speed, 'quintOut');
            noteTweenY('moveNoteY7', 7, 50, speed, 'quintOut');
             
        end
    end

    --movey thingies
    if curBeat == 332 then
        if downscroll then
            for i = 4, 7 do
                noteTweenY('moveNoteY'..i, i, 50, speed, 'quintOut');
                setPropertyFromGroup('playerStrums',i-4,'downScroll',false);	
            end

        elseif not downscroll then	
            for i = 4, 7 do
                noteTweenY('moveNoteY'..i, i, 550, speed, 'quintOut');
                setPropertyFromGroup('playerStrums',i-4,'downScroll',true);	
            end
             
        end
    end

    --split more
    if curBeat == 336 then
        wigglefreq = 2;
		wiggleamp = 40;
        for i = 4, 7 do
			noteTweenX('moveNoteX'..i, i, spreadWay[i-3], 0.5, 'quadOut');
		end
    end

    --bf flips scroll direction
    if curBeat == 348 then
        if downscroll then
            for i = 4, 7 do
                noteTweenY('moveNoteY'..i, i, 550, speed, 'quintOut');
                setPropertyFromGroup('playerStrums',i-4,'downScroll',true);	
            end

        elseif not downscroll then	
            for i = 4, 7 do
                noteTweenY('moveNoteY'..i, i, 50, speed, 'quintOut');
                setPropertyFromGroup('playerStrums',i-4,'downScroll',false);	
            end
             
        end
    end

    --both in center same direction
    if curBeat == 364 then
        for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, middleWay[i+1], 0.5, 'quadOut');
            noteTweenX('moveNoteX'..i+4, i+4, middleWay[i+1], 0.5, 'quadOut');
            noteTweenAlpha('alphaNote' .. i, i, 0.25, 0.5, 'quadOut');
		end
    end

    --both flip
    if curBeat == 380 or curBeat == 476 then

        for i = 0,3 do
            if downscroll then
                noteTweenY('gn'..i, i, 550, speed, 'quintOut');
                setPropertyFromGroup('opponentStrums',i,'downScroll',false);
                setPropertyFromGroup('playerStrums',i,'downScroll',false);
            elseif not downscroll then
                noteTweenY('gn1'..i, i, 50, speed, 'quintOut');  
                setPropertyFromGroup('opponentStrums',i,'downScroll',true);
                setPropertyFromGroup('playerStrums',i,'downScroll',true);   
            end
        end

        for i = 0,3 do
            if downscroll then
                noteTweenY('gn'..i, i, 50, speed, 'quintOut');
                noteTweenY('gn'..i+4, i+4, 50, speed, 'quintOut');
            elseif not downscroll then
                noteTweenY('gn1'..i, i, 550, speed, 'quintOut');
                noteTweenY('gn1'..i+4, i+4, 550, speed, 'quintOut');   
            end
        end

    end

    if curBeat == 388 then
        wigglefreq = 2;
		wiggleamp = 10;
    end

    --fight for center
    if curBeat >= 396 and curBeat < 408 then
        
        for i = 0, 3 do
            noteTweenAlpha('alphaNote'..i, i, 0.25, 0.5, 'quintOut');
        end

        if curBeat % 4 == 0 then
            for i = 0, 3 do
                noteTweenX('moveNoteX'..i, i, middleWay[i+1], 0.5, 'quintOut');
                noteTweenX('moveNoteX'..i+4, i+4, rightSider[i+1], 0.5, 'quintOut');
            end
        elseif curBeat % 4 == 2 then
            for i = 0, 3 do
                noteTweenX('moveNoteX'..i, i, leftSider[i+1], 0.5, 'quintOut');
                noteTweenX('moveNoteX'..i+4, i+4, middleWay[i+1], 0.5, 'quintOut');
            end
        end
    end

    if curBeat == 408 then
        for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, middleWay[i+1], 0.5, 'quintOut');
            noteTweenX('moveNoteX'..i+4, i+4, middleWay[i+1], 0.5, 'quintOut');
            noteTweenAlpha('alphaNote' .. i, i, 0.25, 0.5, 'quintOut');
		end
    end

    if curBeat == 420 then
        if downscroll then
            for i = 4, 7 do
                noteTweenY('moveNoteY'..i, i, 550, speed, 'quintOut');
                noteTweenY('moveNoteY'..i-4, i-4, 550, speed, 'quintOut');
                setPropertyFromGroup('playerStrums',i-4,'downScroll',true);	
                setPropertyFromGroup('opponentStrums',i-4,'downScroll',true);	
            end

        elseif not downscroll then	
            for i = 4, 7 do
                noteTweenY('moveNoteY'..i, i, 50, speed, 'quintOut');
                noteTweenY('moveNoteY'..i-4, i-4, 50, speed, 'quintOut');
                setPropertyFromGroup('playerStrums',i-4,'downScroll',false);
                setPropertyFromGroup('opponentStrums',i-4,'downScroll',false);	
            end
             
        end
    end

    --both switch sides
    if curBeat == 444 then
        for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, rightSide[i+1], 0.5, 'quadOut');
            noteTweenX('moveNoteX'..i+4, i+4, leftSide[i+1], 0.5, 'quadOut');
        end
    end

    if curBeat == 492 then
        for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, middleWay[i+1], 0.5, 'quintOut');
            
            noteTweenAlpha('alphaNote' .. i, i, 0.5, 0.5, 'quintOut');
            if downscroll then
                setPropertyFromGroup('opponentStrums',i,'downScroll',true);
                noteTweenY('moveNoteY'..i, i, 550, speed, 'quadOut');
            else
                setPropertyFromGroup('opponentStrums',i,'downScroll',false);
                noteTweenY('moveNoteY'..i, i, 50, speed, 'quadOut');
            end
        end
        
    end
    if curBeat == 500 then
        for i = 0, 3 do
            noteTweenX('moveNoteX'..i+4, i+4, middleWay[i+1], 0.5, 'quintOut');
        end
    end

    --um that one part before the part before the key change
    if curBeat == 508 then
        for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, spreadWay[i+1], 1, 'quadOut');
            noteTweenX('moveNoteX'..i+4, i+4, spreadWay[i+1], 1, 'quadOut');
        end
    end

    if curBeat == 512 then
        wigglefreq = 5;
		wiggleamp = 20;
    end
    if curBeat == 524 then
        wigglefreq = 5;
		wiggleamp = 20;
    end
    if curBeat == 548 then
        wigglefreq = 10;
		wiggleamp = 25;
    end
    if curBeat == 564 then
        wigglefreq = 10;
		wiggleamp = 25;
    end

    if curBeat == 540 then
        for i = 0, 3 do
            if downscroll then
                noteTweenY('moveNoteY'..i, i, 50, speed, 'quintOut');
                noteTweenY('moveNoteY'..i+4, i+4, 550, speed, 'quintOut');
                setPropertyFromGroup('opponentStrums',i,'downScroll',false);
                setPropertyFromGroup('playerStrums',i,'downScroll',true);
            else
                noteTweenY('moveNoteY'..i, i, 550, speed, 'quintOut');
                noteTweenY('moveNoteY'..i+4, i+4, 50, speed, 'quintOut');
                setPropertyFromGroup('opponentStrums',i,'downScroll',true);
                setPropertyFromGroup('playerStrums',i,'downScroll',false);
            end
        end
    end

    --key change build up
    if curBeat == 564 then
        for i = 0, 3 do
            noteTweenX('moveNoteX'..i+4, i+4, middleWay[i+1], 2.8, 'quadOut');
            noteTweenAlpha('alphaNote' .. i, i, 0.25, 2.8, 'quadOut');
        end
    end

    --the schmoves ended :{
    if curBeat == 708 then
        wigglefreq = 2;
		wiggleamp = 35;
        doTweenZoom('end', 'camHUD', 4, 2, 'quadOut')
        for i = 0, 3 do
            noteTweenX('moveNoteX'..i, i, splitWay2[i+1], 3, 'quadOut');
            noteTweenX('moveNoteX'..i+4, i+4, splitWay2[i+1], 3, 'quadOut');
        end
    end

end

function onUpdatePost()
    if not inGameOver then
        for i=0,getProperty('notes.length') do
            strum = getPropertyFromGroup('notes',i,'strumTime');
            woom = (strum-getSongPosition());
            
            if wiggleamp > 0 then
                woom = (strum-getSongPosition())/wigglefreq;
            end

            setPropertyFromGroup('notes',i,'angle',wiggleamp *math.sin(woom));
        end
    end
end