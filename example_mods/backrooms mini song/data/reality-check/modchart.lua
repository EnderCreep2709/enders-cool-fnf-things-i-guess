function onCreate() --start of song
    setProperty('healthBar.visible', false);
    setProperty('healthBarBG.visible', false);
    setProperty('iconP1.visible', false);
    setProperty('iconP2.visible', false);
    setProperty('scoreTxt.visible', false);
    setProperty('timeTxt.visible', false);
    setProperty('timeBarBG.visible', false);
    setProperty('timeBar.visible', false);
    -- remove all hud elements besides notes and strums
end

function onBeatHit()

    if curBeat == 16  then

            noteTweenX('pNote0', 4, 412, 59, 'quadIn');
            noteTweenX('pNote1', 5, 524, 59, 'quadIn');
            noteTweenX('pNote2', 6, 636, 59, 'quadIn');
            noteTweenX('pNote3', 7, 748, 59, 'quadIn');

        for i = 0, 3 do
            noteTweenAlpha('alphaNote'..i, i, 0, 59.05, 'linear')
        end

    end
end