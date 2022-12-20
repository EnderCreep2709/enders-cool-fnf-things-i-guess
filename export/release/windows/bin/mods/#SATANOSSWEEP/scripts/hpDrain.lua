local currentBarPorcent = 0

--make staticMAYBE and make it hide
function onCreatePost()
    makeLuaSprite('staticMAYBE','staticMAYBE', -200,-170)
    scaleObject('staticMAYBE',2,1.7)
    setObjectCamera('staticMAYBE','camOther')
    doTweenAlpha('staticMAYBE','staticMAYBE',0,0.01,'linear')
    setProperty('staticMAYBE.visible',false);
    addLuaSprite('staticMAYBE',true)
end

--um do the thing
function onUpdate()

    --default GONE
    if currentBarPorcent == 0 then
        setProperty('staticMAYBE.visible',false);
    --update opacity/alpha
    else
        doTweenAlpha('staticMAYBE','staticMAYBE',currentBarPorcent,0.1,'linear')
    end

    --max 
    if currentBarPorcent > 0.85 then
        currentBarPorcent  = 0.85
    end

    --min
    if currentBarPorcent <= 0 then
        currentBarPorcent = 0
        setProperty('staticMAYBE.visible',false);
    else
        setProperty('staticMAYBE.visible',true);
    end
end

--note hits change things
function opponentNoteHit()

    if currentBarPorcent < 0.85 then
        currentBarPorcent = currentBarPorcent + 0.005
    end
end
function goodNoteHit()
    if currentBarPorcent > 0 then
        currentBarPorcent = currentBarPorcent - 0.005
    end
end
function noteMiss(id,dir,type,sustain)
    if type == '' then
        if currentBarPorcent < 1 then
            currentBarPorcent = currentBarPorcent + 0.005
        end
    end
end

--the schmoves ended :{
    if curBeat == 708 then
        doTweenAlpha('staticMAYBE','staticMAYBE',0,3,'linear')
    end