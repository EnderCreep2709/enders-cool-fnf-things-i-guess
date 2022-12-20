function onBeatHit()
    if curBeat == 92 then
        makeLuaSprite('dark', 'dark', -1000, -1000);
        scaleObject('dark', 4, 4);
        addLuaSprite('dark', true);
    end
    if curBeat == 93 then
        makeAnimatedLuaSprite('NOTSOFAST', 'NOTSOFAST', 25, 130);
            addAnimationByPrefix('NOTSOFAST', 'NOTSOFAST', 'NOTSOFAST', 22, false);  
        addLuaSprite('NOTSOFAST', true);
        setScrollFactor('NOTSOFAST', 0, 0)
        setObjectCamera('NOTSOFAST','hud')
        setProperty('NOTSOFAST.antialiasing', false); 
        scaleObject('NOTSOFAST', 2.3, 2.3);
    end
    if curBeat == 96 then
        removeLuaSprite('dark', true);
        removeLuaSprite('NOTSOFAST', true);
    end
end
