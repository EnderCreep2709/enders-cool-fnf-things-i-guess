function onBeatHit()
    if curBeat == 60 then
        makeLuaSprite('freeze', 'freeze', -1000, -1000);
        scaleObject('freeze', 4, 4);
        addLuaSprite('freeze', true);
        setObjectCamera('freeze','hud');
        
        makeAnimatedLuaSprite('unrespPop', 'unrespPop', 90, 0);
            addAnimationByPrefix('unrespPop', 'unrespPop', 'unrespPop', 20, false);  
        addLuaSprite('unrespPop', true);
        setProperty('unrespPop.antialiasing', false); 
        scaleObject('unrespPop', 1.8, 1.8);
        setObjectCamera('unrespPop','hud');
    end
    if curBeat == 64 then
        setProperty('freeze.visible', false);
        setProperty('unrespPop.visible', false);
    end
    if curBeat == 124 then
        setProperty('freeze.visible', true);
        setProperty('unrespPop.visible', true);
        objectPlayAnimation('unrespPop', 'unrespPop', false)
    end
    if curBeat == 128 then
        setProperty('freeze.visible', false);
        setProperty('unrespPop.visible', false);
    end
    if curBeat == 260 then
        setProperty('freeze.visible', true);
        setProperty('unrespPop.visible', true);
        objectPlayAnimation('unrespPop', 'unrespPop', false)
    end
    if curBeat == 264 then
        setProperty('freeze.visible', false);
        setProperty('unrespPop.visible', false);
    end
end
