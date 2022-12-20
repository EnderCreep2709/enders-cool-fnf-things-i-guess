spun = 0

function onEvent(name, value1, value2)
	if name == 'LinearSpin' or name == 'TweenSpin' then

		-- whats the solution to jank? even more jank!
		--nuh uh

		--noteTweenAngle('AJ',4 , 0 , 0.01, linear);
		--noteTweenAngle('BJ',5 , 0 , 0.01, linear);
		--noteTweenAngle('CJ',6 , 0 , 0.01, linear);
		--noteTweenAngle('DJ',7 , 0 , 0.01, linear);
		--noteTweenAngle('EJ',0 , 0 , 0.01, linear);
		--noteTweenAngle('FJ',1 , 0 , 0.01, linear);
		--noteTweenAngle('GJ',2 , 0 , 0.01, linear);
		--noteTweenAngle('HJ',3 , 0 , 0.01, linear);

		-- bf notespin
		noteTweenAngle('A',4 , value2 , value1, quartOut);
		noteTweenAngle('B',5 , value2 , value1, quartOut);
		noteTweenAngle('C',6 , value2 , value1, quartOut);
		noteTweenAngle('D',7 , value2 , value1, quartOut);
		
		-- oppt notespin
		noteTweenAngle('E',0 , value2 , value1, quartOut);
		noteTweenAngle('F',1 , value2 , value1, quartOut);
		noteTweenAngle('G',2 , value2 , value1, quartOut);
		noteTweenAngle('H',3 , value2 , value1, quartOut);

		--NOT SO LINEAR NOW HUH
		
		spun = spun + 1
		
	end
end

function onBeatHit()

	if spun == 3  then
		
		-- bf notespin
		noteTweenAngle('A',4 , 0 , 0.00001, linear);
		noteTweenAngle('B',5 , 0 , 0.00001, linear);
		noteTweenAngle('C',6 , 0 , 0.00001, linear);
		noteTweenAngle('D',7 , 0 , 0.00001, linear);
		
		-- oppt notespin
		noteTweenAngle('E',0 , 0 , 0.00001, linear);
		noteTweenAngle('F',1 , 0 , 0.00001, linear);
		noteTweenAngle('G',2 , 0 , 0.00001, linear);
		noteTweenAngle('H',3 , 0 , 0.00001, linear);
	
	end

end