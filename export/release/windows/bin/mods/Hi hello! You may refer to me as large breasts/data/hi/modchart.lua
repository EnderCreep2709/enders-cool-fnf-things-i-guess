function onStepHit()
	if curBeat >= 68 and curBeat < 131 then
		if curStep % 4 == 0 then
			noteTweenY('a', 0, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('b', 1, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('c', 2, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('d', 3, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('e', 4, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('f', 5, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('g', 6, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('h', 7, 20, stepCrochet*0.002, 'circOut')
		end
		if curStep % 4 == 2 then
			noteTweenY('a', 0, defaultOpponentStrumY0, stepCrochet*0.002, 'sineIn')
			noteTweenY('b', 1, defaultOpponentStrumY1, stepCrochet*0.002, 'sineIn')
			noteTweenY('c', 2, defaultOpponentStrumY2, stepCrochet*0.002, 'sineIn')
			noteTweenY('d', 3, defaultOpponentStrumY3, stepCrochet*0.002, 'sineIn')
			noteTweenY('e', 4, defaultPlayerStrumY0, stepCrochet*0.002, 'sineIn')
			noteTweenY('f', 5, defaultPlayerStrumY1, stepCrochet*0.002, 'sineIn')
			noteTweenY('g', 6, defaultPlayerStrumY2, stepCrochet*0.002, 'sineIn')
			noteTweenY('h', 7, defaultPlayerStrumY3, stepCrochet*0.002, 'sineIn')
		end
	end

	if curBeat >= 296 and curBeat < 344 then
		if curStep % 4 == 0 then
			noteTweenY('a', 0, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('b', 1, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('c', 2, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('d', 3, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('e', 4, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('f', 5, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('g', 6, 20, stepCrochet*0.002, 'circOut')
			noteTweenY('h', 7, 20, stepCrochet*0.002, 'circOut')
		end
		if curStep % 4 == 2 then
			noteTweenY('a', 0, defaultOpponentStrumY0, stepCrochet*0.002, 'sineIn')
			noteTweenY('b', 1, defaultOpponentStrumY1, stepCrochet*0.002, 'sineIn')
			noteTweenY('c', 2, defaultOpponentStrumY2, stepCrochet*0.002, 'sineIn')
			noteTweenY('d', 3, defaultOpponentStrumY3, stepCrochet*0.002, 'sineIn')
			noteTweenY('e', 4, defaultPlayerStrumY0, stepCrochet*0.002, 'sineIn')
			noteTweenY('f', 5, defaultPlayerStrumY1, stepCrochet*0.002, 'sineIn')
			noteTweenY('g', 6, defaultPlayerStrumY2, stepCrochet*0.002, 'sineIn')
			noteTweenY('h', 7, defaultPlayerStrumY3, stepCrochet*0.002, 'sineIn')
		end
	end

end