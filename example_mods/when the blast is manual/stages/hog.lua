redArea = false;
hogster = true;

function onCreate()

	----precach
	precacheImage('hog/Glitch');
	precacheImage('hitStatic');

	precacheImage('hog/hell/hellsky');
	precacheImage('hog/hell/hellsun');
	precacheImage('hog/hell/hellshad');
	precacheImage('hog/hell/hellbg');
	precacheImage('hog/hell/hellfloor');

	addCharacterToList('scorched', 'dad')
	addCharacterToList('scorchedglitch', 'dad');
	addCharacterToList('scorchedglitch2', 'dad');

	----hog bg stuff
	--bg sky
	makeLuaSprite('bg', 'hog/bg', -1500, -300);
	setScrollFactor('bg', 1, 0.8);
	scaleLuaSprite('bg', 2, 2);
	addLuaSprite('bg', false);

	--mountain
	makeLuaSprite('mountain', 'hog/mountain', -500, 0);
	setScrollFactor('mountain', 0.75, 0.75);
	scaleLuaSprite('mountain', 1, 1);
	addLuaSprite('mountain', false);

	--waterfalls
	makeAnimatedLuaSprite('Waterfalls', 'hog/Waterfalls', -1000, 200);
    addAnimationByPrefix('Waterfalls', 'Waterfalls', 'Waterfalls', 12, true);  
    objectPlayAnimation('Waterfalls', 'Waterfalls', true)
	setScrollFactor('Waterfalls', 0.8, 0.8);
    addLuaSprite('Waterfalls', false);

	--da hills and da loops
    makeAnimatedLuaSprite('HillsandHills', 'hog/HillsandHills', -200, 220);
    addAnimationByPrefix('HillsandHills', 'HillsandHills', 'HillsandHills', 12, true);  
    objectPlayAnimation('HillsandHills', 'HillsandHills', true)
	setScrollFactor('HillsandHills', 0.9, 0.9);
    addLuaSprite('HillsandHills', false);

	--treeeeeees
	makeLuaSprite('trees', 'hog/trees', -500, -50);
	addLuaSprite('trees', false);
	scaleLuaSprite('trees', 2, 2);

	--da floor
	makeLuaSprite('floor', 'hog/floor', -750, 750);
	addLuaSprite('floor', false);

	--"It's not just a boulder..."
	makeLuaSprite('rocks', 'hog/rocks', -600, 690);
	addLuaSprite('rocks', true);
	setScrollFactor('rocks', 1.1, 1);
	scaleLuaSprite('rocks', 2, 2);
	
	--silly lighting overlay
	makeLuaSprite('overlay', 'hog/overlay', -1500, -630);
	addLuaSprite('overlay', true);
	scaleLuaSprite('overlay', 1.5, 1.5);

	--[[higher number = more in front
	setObjectOrder('bg', 1)]]
end

----silly glitchkills that look cool
glitchHitFuncs = { 
  [1182] = function()
	glitchKill('sayo');
	glitchKill('hills');
	glitchKill('sunset');
  end,
}

function onBeatHit()

	if glitchHitFuncs[curBeat] then 
        glitchHitFuncs[curBeat]()
    end

	--cutaway gag
	if curBeat == 128 then
		makeLuaSprite('black ooOOooOO', 'black ooOOooOO', 0, 0);
        scaleObject('black ooOOooOO', 4, 4);
		setObjectCamera('black ooOOooOO', 'camOther');
        addLuaSprite('black ooOOooOO', true);
	end

	--its scorchin time
	if curBeat == 200 then
		hogster = false;
		--glitch image jumpscare
		makeLuaSprite('Glitch', 'hog/Glitch', 0, 0);
		setScrollFactor('Glitch', 1, 1);
		scaleLuaSprite('Glitch', 1, 1);
		--addLuaSprite('Glitch', false);

		----scorched bg stuff in in playstate.hx lmfao	
		removeLuaSprite('bg', true);	
		removeLuaSprite('mountain', true);
		removeLuaSprite('Waterfalls', true);
		removeLuaSprite('HillsandHills', true);
		removeLuaSprite('trees', true);
		removeLuaSprite('floor', true);
		removeLuaSprite('rocks', true);
		removeLuaSprite('overlay', true);

		--waterfall
		-- makeAnimatedLuaSprite('Waterfall', 'hog/scorch/Waterfall', -1000, 200);
		-- addAnimationByPrefix('Waterfall', 'Waterfall', 'Waterfall', 12, true);  
		-- objectPlayAnimation('Waterfall', 'Waterfall', true);
		-- setScrollFactor('Waterfall', 0.8, 0.8);
		
    end

	if curBeat == 216 then
		removeLuaSprite('black ooOOooOO', false);
	end

	----scorched all over the place
	if curBeat == 312 then

		redArea = true;

		makeAnimatedLuaSprite('flash', 'hitStatic', 0, 0);
		addAnimationByPrefix('flash', 'flash', "staticANIMATION", 24, true);
		setObjectCamera('flash', 'camOther');
		addLuaSprite('flash', true);
		doTweenAlpha('flash', 'flash', 0, 0.5, 'linear');

		--bg hellsunset
		makeLuaSprite('hellsky', 'hog/hell/hellsky', -800, -400);
		setScrollFactor('hellsky', 0.3, 0.3);
		scaleLuaSprite('hellsky', 2.1, 3.2);
		addLuaSprite('hellsky', false);

		--epic badass mountains on my screen
		makeLuaSprite('hellsun', 'hog/hell/hellsun', -710, 0);
		setScrollFactor('hellsun', 0, 0);
		scaleLuaSprite('hellsun', 2.5, 2.5);
		addLuaSprite('hellsun', false);

		--bloodfall
		makeAnimatedLuaSprite('bloodfall', 'hog/Waterfalls', -2200, 300);
		addAnimationByPrefix('bloodfall', 'bloodfall', 'Waterfalls', 3, true);  
		objectPlayAnimation('bloodfall', 'bloodfall', true);
		setScrollFactor('bloodfall', 0.2, 0.2);
		scaleLuaSprite('bloodfall', 1.5, 1.5);
		addLuaSprite('bloodfall', false);

		--da hellfloor
		makeLuaSprite('hellfloor', 'hog/hell/hellfloor', -1000, -600);
		setScrollFactor('hellfloor', 1, 1);
		scaleLuaSprite('hellfloor', 2.75, 2.75);
		addLuaSprite('hellfloor', false);

		--bye rocks
		removeLuaSprite('rocks', true);
		removeLuaSprite('stones', false);

		--recolor
		doTweenColor('bloodfall', 'bloodfall', 'CF0000', 0.0005, 'linear');
		doTweenColor('dad', 'dad', 'FF6060', 0.0005, 'linear');
		doTweenColor('boyfriend', 'boyfriend', 'FF6060', 0.0005, 'linear');
		doTweenColor('gf', 'gf', 'FF6060', 0.0005, 'linear');
		doTweenColor('hellfloor', 'hellfloor', 'FF9C9C', 0.0005, 'linear');

	end

	--family guy
	if curBeat == 1032 then
		setObjectCamera('black ooOOooOO', 'game');
        addLuaSprite('black ooOOooOO', true);
		setObjectOrder('black ooOOooOO', 99);
		setProperty('black ooOOooOO.x', -1000);
		setProperty('black ooOOooOO.y', -1000);
	end

	--manually blasting
	if curBeat == 1040 then

		redArea = false;
		
		removeLuaSprite('black ooOOooOO', false);

		removeLuaSprite('hellsky', true);
		removeLuaSprite('hellsun', false);
		removeLuaSprite('bloodfall', true);
		removeLuaSprite('hellfloor', false);

		addLuaSprite('stones', true);


	end

end

stepHitFuncs = { --do da hog targets

  [208] = function()
		makeAnimatedLuaSprite('TargetLock', 'TargetLock', 670, 300);
		addAnimationByPrefix('TargetLock', 'TargetLock', 'TargetLock', 24, false);
		scaleLuaSprite('TargetLock', 1.5, 1.5);
		addLuaSprite('TargetLock', true);
		objectPlayAnimation('TargetLock', 'TargetLock', false);
  end,

  [216] = function()
		setProperty('TargetLock.visible', false);
  end,

  [296] = function()
		objectPlayAnimation('TargetLock', 'TargetLock', false);
		setProperty('TargetLock.visible', true);
  end,

  [304] = function()
		setProperty('TargetLock.visible', false);
  end
}

function onStepHit()
	--hog target
	if stepHitFuncs[curStep] then 
        stepHitFuncs[curStep]()
    end
end

function onEvent(name,value1,value2)
	if name == 'Screen_Glitch' then
		if value1 ~= 0 then
				runTimer('Glitchh', 0.095, 1);
				doTweenColor('dad', 'dad', 'B2FCFF', 0.00001, 'linear');
				doTweenColor('boyfriend', 'boyfriend', 'B2FCFF', 0.00001, 'linear');
		end
	end
end

function onTimerCompleted(tag, loops, loopsLeft)
	if tag == 'Glitchh' then
		if redArea then
			doTweenColor('dad', 'dad', 'FF6060', 0.1, 'linear');
			doTweenColor('boyfriend', 'boyfriend', 'FF6060', 0.1, 'linear');
		else 
			doTweenColor('dad', 'dad', '0xFFFFFFFF', 0.1, 'linear');
			doTweenColor('boyfriend', 'boyfriend', '0xFFFFFFFF', 0.1, 'linear');
		end
	end
end