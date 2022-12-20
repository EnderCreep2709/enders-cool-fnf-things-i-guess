function onBeatHit()

    if curBeat == 64 then
        setProperty('defaultCamZoom',1.1)
    end
    if curBeat == 68 then
        setProperty('defaultCamZoom',0.7)
    end

    if curBeat == 196 then
        setProperty('defaultCamZoom',0.85)
    end

    if curBeat == 196 then
        setProperty('defaultCamZoom',1.1)
    end
    if curBeat == 199 then
        setProperty('defaultCamZoom',0.7)
    end
    if curBeat == 200 then
        setProperty('defaultCamZoom',0.9)
    end


    if curBeat == 296 then
        setProperty('defaultCamZoom',0.7)
    end

    if curBeat == 308 then
        setProperty('defaultCamZoom',0.9)
    end
    if curBeat == 312 then
        setProperty('defaultCamZoom',0.7)
    end
    if curBeat == 324 then
        setProperty('defaultCamZoom',0.9)
    end
    if curBeat == 328 then
        setProperty('defaultCamZoom',0.7)
    end

    if curBeat == 344 then
        setProperty('defaultCamZoom',0.9)
    end
    if curBeat == 348 then
        setProperty('defaultCamZoom',0.8)
    end
    if curBeat == 352 then
        setProperty('defaultCamZoom',0.7)
    end
    if curBeat == 356 then
        setProperty('defaultCamZoom',1.1)
    end
    if curBeat == 357 then
        setProperty('defaultCamZoom',1.0)
    end
    if curBeat == 358 then
        setProperty('defaultCamZoom',0.9)
    end
    if curBeat == 359 then
        setProperty('defaultCamZoom',0.8)
    end
    if curBeat == 360 then
        setProperty('defaultCamZoom',0.7)
    end

    if curBeat == 388 then
        setProperty('defaultCamZoom',1.1)
    end
    if curBeat == 392 then
        setProperty('defaultCamZoom',0.7)
    end
	
end

function onSectionHit()

    if curBeat >= 200 and curBeat < 296 then
        triggerEvent("Add Camera Zoom","","");
    end

end