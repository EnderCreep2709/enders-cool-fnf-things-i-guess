function onCreate()
    makeLuaSprite('mountains', 'marble/mountains', 100, 0);
    scaleObject('mountains', 1.7, 1.7);
    setScrollFactor('mountains', 1, 1);
    setProperty('mountains.antialiasing', false);
    addLuaSprite('mountains', false);

    makeLuaSprite('grass', 'marble/grass', 100, 0);
    scaleObject('grass', 1.7, 1.7);
    setScrollFactor('grass', 1, 1);
    setProperty('grass.antialiasing', false);
    addLuaSprite('grass', false);

    makeLuaSprite('fg', 'marble/fg', 100, 0);
    scaleObject('fg', 1.7, 1.7);
    setScrollFactor('fg', 1, 1);
    setProperty('fg.antialiasing', false);
    addLuaSprite('fg', false);

    makeLuaSprite('pillar', 'marble/pillar', 175, 0);
    scaleObject('pillar', 1.7, 1.7);
    setScrollFactor('pillar', 1.5, 1);
    setProperty('pillar.antialiasing', false);
    addLuaSprite('pillar', true);
end

function onUpdate()
    
end

beatHitFuncs = 
{ 
    [12] = function()
        setProperty('defaultCamZoom',2);
    end,
    [20] = function()
        setProperty('defaultCamZoom',1.5);
    end,
    [28] = function()
        setProperty('defaultCamZoom',2);
    end,
    [31] = function()
        setProperty('defaultCamZoom',2.5);
    end,
    [34] = function()
        setProperty('defaultCamZoom',2);
    end,
    [36] = function()
        setProperty('defaultCamZoom',1.7);
    end,
    [44] = function()
        setProperty('defaultCamZoom',1.3);
    end,
    [52] = function()
        setProperty('defaultCamZoom',1.5);
    end,
    [55] = function()
        setProperty('defaultCamZoom',1.7);
    end,
    [56] = function()
        setProperty('defaultCamZoom',1.6);
    end,
    [59] = function()
        setProperty('defaultCamZoom',1.3);
    end,
    [60] = function()
        setProperty('defaultCamZoom',1.6);
    end,
    [63] = function()
        setProperty('defaultCamZoom',2);
    end,
    [64] = function()
        setProperty('defaultCamZoom',2.5);
    end,
    [65] = function()
        setProperty('defaultCamZoom',2);
    end,
    [68] = function()
        setProperty('defaultCamZoom',1.7);
    end,
    [76] = function()
        setProperty('defaultCamZoom',2.3);
        doTweenAngle('tilt', 'camGame', 0, 0.2, 'quintOut');
    end,
    [80] = function()
        setProperty('defaultCamZoom',2.6);
        doTweenAngle('tilt', 'camGame', 5, 0.4, 'quadOut');
    end,
    [84] = function()
        setProperty('defaultCamZoom',2.5);
    end,
    [88] = function()
        setProperty('defaultCamZoom',2.8);
        doTweenAngle('tilt', 'camGame', -5, 0.4, 'quadOut');
    end,
    [91] = function()
        setProperty('defaultCamZoom',2);
        doTweenAngle('tilt', 'camGame', 2.5, 0.4, 'quadOut');
    end,
    [92] = function()
        setProperty('defaultCamZoom',1.5);
        doTweenAngle('tilt', 'camGame', 0, 0.4, 'quadOut');
    end
}

stepHitFuncs = 
{ 
    [118] = function()
        setProperty('defaultCamZoom',2.2);
    end,
    [230] = function()
        setProperty('defaultCamZoom',1.4);
    end,
    [246] = function()
        setProperty('defaultCamZoom',1.8);
    end,
    [302] = function()
        setProperty('defaultCamZoom',0.7);
        doTweenAngle('tilt', 'camGame', -20, 0.5, 'quintOut');
    end,
    [326] = function()
        setProperty('defaultCamZoom',2.3);
        doTweenAngle('tilt', 'camGame', 0, 0.2, 'quintOut');
    end,
    [358] = function()
        setProperty('defaultCamZoom',2.5);
        doTweenAngle('tilt', 'camGame', 5, 0.4, 'quadOut');
    end,
}

function onBeatHit()
    if beatHitFuncs[curBeat] then 
        beatHitFuncs[curBeat]()
    end

    if mustHitSection == true then
        --doTweenAngle('tilt', 'camGame', -2, 0.05, 'quadInOut');
    else
        --doTweenAngle('tilt', 'camGame', 2, 0.05, 'quadInOut');
    end
end

function onStepHit()
    if stepHitFuncs[curStep] then 
        stepHitFuncs[curStep]()
    end
end