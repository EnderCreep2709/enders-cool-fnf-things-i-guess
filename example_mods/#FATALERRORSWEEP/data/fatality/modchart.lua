local angleshit = 0.6;
local anglevar = 0.6;

function onBeatHit()
	if (curBeat >= 128 and curBeat < 224) or (curBeat >= 432 and curBeat < 496) then

		if curBeat % 4 == 0 then
			angleshit = anglevar;
			setProperty('camHUD.angle',angleshit*3)
			setProperty('camGame.angle',angleshit*3)
			doTweenAngle('turn', 'camHUD', angleshit, stepCrochet*0.002, 'circOut')
			doTweenX('tuin', 'camHUD', -angleshit*8, crochet*0.001, 'linear')
			doTweenAngle('tt', 'camGame', angleshit, stepCrochet*0.002, 'circOut')
			doTweenX('ttrn', 'camGame', -angleshit*8, crochet*0.001, 'linear')

		elseif curBeat % 4 == 2 then
			angleshit = -anglevar;
			setProperty('camHUD.angle',angleshit*3)
			setProperty('camGame.angle',angleshit*3)
			doTweenAngle('turn', 'camHUD', angleshit, stepCrochet*0.002, 'circOut')
			doTweenX('tuin', 'camHUD', -angleshit*8, crochet*0.001, 'linear')
			doTweenAngle('tt', 'camGame', angleshit, stepCrochet*0.002, 'circOut')
			doTweenX('ttrn', 'camGame', -angleshit*8, crochet*0.001, 'linear')
		else
			
		end
		
	else
		setProperty('camHUD.angle',0)
		setProperty('camHUD.x',0)
		setProperty('camGame.x',0)
		setProperty('camGame.angle',0)
	end

	if (curBeat >= 64 and curBeat < 128) or (curBeat >= 496 and curBeat < 560) then

		if curBeat % 8 == 0 then
			angleshit = anglevar;
		elseif curBeat % 8 == 4 then
			angleshit = -anglevar;
		else
			
		end
		setProperty('camHUD.angle',angleshit*3)
		setProperty('camGame.angle',angleshit*3)
		doTweenAngle('turn', 'camHUD', angleshit, stepCrochet*0.002, 'circOut')
		doTweenX('tuin', 'camHUD', -angleshit*8, crochet*0.001, 'linear')
		doTweenAngle('tt', 'camGame', angleshit, stepCrochet*0.002, 'circOut')
		doTweenX('ttrn', 'camGame', -angleshit*8, crochet*0.001, 'linear')
		
	else
		setProperty('camHUD.angle',0)
		setProperty('camHUD.x',0)
		setProperty('camGame.x',0)
		setProperty('camGame.angle',0)
	end

	if curBeat >= 560 and curBeat < 632 then

		if curBeat % 2 == 0 then
			angleshit = anglevar;
		else
			angleshit = -anglevar;
		end

		setProperty('camHUD.angle',angleshit*3)
		setProperty('camGame.angle',angleshit*3)
		doTweenAngle('turn', 'camHUD', angleshit, stepCrochet*0.002, 'circOut')
		doTweenX('tuin', 'camHUD', -angleshit*8, crochet*0.001, 'linear')
		doTweenAngle('tt', 'camGame', angleshit, stepCrochet*0.002, 'circOut')
		doTweenX('ttrn', 'camGame', -angleshit*8, crochet*0.001, 'linear')

	else
		setProperty('camHUD.angle',0)
		setProperty('camHUD.x',0)
		setProperty('camGame.x',0)
		setProperty('camGame.angle',0)
	end
		
end