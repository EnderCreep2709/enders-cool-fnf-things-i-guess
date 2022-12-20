function onBeatHit()
	if (curBeat >= 64 and curBeat < 124) or (curBeat >= 158 and curBeat < 192) or (curBeat >= 266 and curBeat < 334) then
		triggerEvent('Screen Shake','0.1,0.005','0.1,0.005')

		if curbeat >= 328 then
			triggerEvent('Screen Shake','0.1,0.01','0.1,0.01')
		end
	end

	if curBeat == 196 then
		
		noteTweenX('oNote0X', 0, getPropertyFromGroup('opponentStrums', 0, 'x')-5*8, 0.01, 'linear');
		noteTweenY('oNote1Y', 1,  getPropertyFromGroup('opponentStrums', 1, 'y')+5*8, 0.01, 'linear');
		noteTweenY('oNote2Y', 2, getPropertyFromGroup('opponentStrums', 2, 'y')-5*8, 0.01, 'linear');
		noteTweenX('oNote3X', 3, getPropertyFromGroup('opponentStrums', 3, 'x')+5*8, 0.01, 'linear');

		--

		noteTweenX('bNote0X', 4, getPropertyFromGroup('playerStrums', 0, 'x')-5*3, 0.01, 'linear');	
		noteTweenY('bNote1Y', 5,  getPropertyFromGroup('playerStrums', 1, 'y')+5*3, 0.01, 'linear');	
		noteTweenY('bNote2Y', 6, getPropertyFromGroup('playerStrums', 2, 'y')-5*3, 0.01, 'linear');	
		noteTweenX('bNote3X', 7, getPropertyFromGroup('playerStrums', 3, 'x')+5*3, 0.01, 'linear');	
		
	end

	if curBeat == 264 then
		
		noteTweenX('oNote0X', 0, getPropertyFromGroup('opponentStrums', 0, 'x')+5*8, 0.01, 'linear');
		noteTweenY('oNote1Y', 1,  getPropertyFromGroup('opponentStrums', 1, 'y')-5*8, 0.01, 'linear');
		noteTweenY('oNote2Y', 2, getPropertyFromGroup('opponentStrums', 2, 'y')+5*8, 0.01, 'linear');
		noteTweenX('oNote3X', 3, getPropertyFromGroup('opponentStrums', 3, 'x')-5*8, 0.01, 'linear');

		--

		noteTweenX('bNote0X', 4, getPropertyFromGroup('playerStrums', 0, 'x')+5*3, 0.01, 'linear');	
		noteTweenY('bNote1Y', 5,  getPropertyFromGroup('playerStrums', 1, 'y')-5*3, 0.01, 'linear');	
		noteTweenY('bNote2Y', 6, getPropertyFromGroup('playerStrums', 2, 'y')+5*3, 0.01, 'linear');	
		noteTweenX('bNote3X', 7, getPropertyFromGroup('playerStrums', 3, 'x')-5*3, 0.01, 'linear');	
		
	end
	
end