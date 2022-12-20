local allowCountdown = false
function onStartCountdown()
	if not allowCountdown and not seenCutscene then
	    startVideo("CUTSCENE");
		allowCountdown = true;
		return Function_Stop;
	end
	return Function_Continue;
end

function onCreatePost()
	for i = 0,3 do
        triggerEvent('Opponent Notes Left Side', 0,0)
    end
end

local evilMode = 0;
local xx = 900;
local yy = 080;
local xx2 = 590;
local yy2 = 330;
local ofs = 40;
local followchars = true;
local del = 0;
local del2 = 0;

function onEvent(name,a,b)
    if name == 'Opponent Notes Left Side' then
        setPropertyFromGroup('opponentStrums', 0, 'x', defaultOpponentStrumX0 + 40)
        setPropertyFromGroup('opponentStrums', 1, 'x', defaultOpponentStrumX1 + 40)
        setPropertyFromGroup('opponentStrums', 2, 'x', defaultOpponentStrumX2 + 40)
        setPropertyFromGroup('opponentStrums', 3, 'x', defaultOpponentStrumX2 + 40)
        setPropertyFromGroup('opponentStrums', 4, 'x', defaultOpponentStrumX3 + 40)

        setPropertyFromGroup('playerStrums', 0, 'x', defaultPlayerStrumX0)
        setPropertyFromGroup('playerStrums', 1, 'x', defaultPlayerStrumX1)
        setPropertyFromGroup('playerStrums', 2, 'x', defaultPlayerStrumX2)
        setPropertyFromGroup('playerStrums', 3, 'x', defaultPlayerStrumX3)
        setPropertyFromGroup('playerStrums', 4, 'x', defaultPlayerStrumX4)
    end

    if name == 'Opponent Notes Right Side' then
        setPropertyFromGroup('playerStrums', 0, 'x', defaultOpponentStrumX0)
        setPropertyFromGroup('playerStrums', 1, 'x', defaultOpponentStrumX1)
        setPropertyFromGroup('playerStrums', 2, 'x', defaultOpponentStrumX2)
        setPropertyFromGroup('playerStrums', 3, 'x', defaultOpponentStrumX3)
        setPropertyFromGroup('playerStrums', 4, 'x', defaultOpponentStrumX4)

        setPropertyFromGroup('opponentStrums', 0, 'x', defaultPlayerStrumX0 + 600)
        setPropertyFromGroup('opponentStrums', 1, 'x', defaultPlayerStrumX1 + 600)
        setPropertyFromGroup('opponentStrums', 2, 'x', defaultPlayerStrumX2 + 600)
        setPropertyFromGroup('opponentStrums', 3, 'x', defaultPlayerStrumX2 + 600)
        setPropertyFromGroup('opponentStrums', 4, 'x', defaultPlayerStrumX3 + 600)
    end
end

function onUpdate(elapsed) 
    if curStep == 512 then 
    for i=0,4,1 do 
    setPropertyFromGroup('opponentStrums', i, 'texture', 'PIXEL_assets') setPropertyFromGroup('playerStrums', i, 'texture', 'PIXEL_assets') 
    end for i = 0, getProperty('unspawnNotes.length')-0 do if not getPropertyFromGroup('notes', i, 'mustPress') then setPropertyFromGroup('notes', i, 'texture', 'PIXEL_assets'); 
    end if not getPropertyFromGroup('unspawnNotes', i, 'mustPress') then setPropertyFromGroup('unspawnNotes', i, 'texture', 'PIXEL_assets'); 
    end end end 

    if curStep == 576 then 
    for i=0,4,1 do 
    setPropertyFromGroup('opponentStrums', i, 'texture', 'NOTE_assets') setPropertyFromGroup('playerStrums', i, 'texture', 'NOTE_assets') 
    end for i = 0, getProperty('unspawnNotes.length')-0 do if not getPropertyFromGroup('notes', i, 'mustPress') then setPropertyFromGroup('notes', i, 'texture', 'NOTE_assets'); 
    end if not getPropertyFromGroup('unspawnNotes', i, 'mustPress') then setPropertyFromGroup('unspawnNotes', i, 'texture', 'NOTE_assets'); 
    end end end

    if curStep == 640 then 
    for i=0,4,1 do 
    setPropertyFromGroup('opponentStrums', i, 'texture', 'PIXEL_assets') setPropertyFromGroup('playerStrums', i, 'texture', 'PIXEL_assets') 
    end for i = 0, getProperty('unspawnNotes.length')-0 do if not getPropertyFromGroup('notes', i, 'mustPress') then setPropertyFromGroup('notes', i, 'texture', 'PIXEL_assets'); 
    end if not getPropertyFromGroup('unspawnNotes', i, 'mustPress') then setPropertyFromGroup('unspawnNotes', i, 'texture', 'PIXEL_assets'); 
    end end end

    if curStep == 704 then 
    for i=0,4,1 do 
    setPropertyFromGroup('opponentStrums', i, 'texture', 'NOTE_assets') setPropertyFromGroup('playerStrums', i, 'texture', 'NOTE_assets') 
    end for i = 0, getProperty('unspawnNotes.length')-0 do if not getPropertyFromGroup('notes', i, 'mustPress') then setPropertyFromGroup('notes', i, 'texture', 'NOTE_assets'); 
    end if not getPropertyFromGroup('unspawnNotes', i, 'mustPress') then setPropertyFromGroup('unspawnNotes', i, 'texture', 'NOTE_assets'); 
    end end end

    if curStep == 1056 then 
    for i=0,4,1 do 
    setPropertyFromGroup('opponentStrums', i, 'texture', 'PIXEL_assets') setPropertyFromGroup('playerStrums', i, 'texture', 'PIXEL_assets') 
    end for i = 0, getProperty('unspawnNotes.length')-0 do if not getPropertyFromGroup('notes', i, 'mustPress') then setPropertyFromGroup('notes', i, 'texture', 'PIXEL_assets'); 
    end if not getPropertyFromGroup('unspawnNotes', i, 'mustPress') then setPropertyFromGroup('unspawnNotes', i, 'texture', 'PIXEL_assets'); 
    end end end

    if curStep == 1263 then 
    for i=0,4,1 do 
    setPropertyFromGroup('opponentStrums', i, 'texture', 'NOTE_assets') setPropertyFromGroup('playerStrums', i, 'texture', 'NOTE_assets') 
    end for i = 0, getProperty('unspawnNotes.length')-0 do if not getPropertyFromGroup('notes', i, 'mustPress') then setPropertyFromGroup('notes', i, 'texture', 'NOTE_assets'); 
    end if not getPropertyFromGroup('unspawnNotes', i, 'mustPress') then setPropertyFromGroup('unspawnNotes', i, 'texture', 'NOTE_assets'); 
    end end end end



function onBeatHit()

    if curBeat == 511 then

        for i = 0,3, getProperty('playerStrums.length') -1 do
            setPropertyFromGroup('playerStrums', i, 'texture', 'PIXEL_assets')

        end

    end
end