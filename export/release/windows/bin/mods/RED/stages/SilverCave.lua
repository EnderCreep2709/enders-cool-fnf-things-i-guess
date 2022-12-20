local PokBar = 0.5; --the fucking bar
n = false; --Normal
s = false; --slightly
a = false; --aggresive
FearFull = false; --instant death

function onCreate()
  precacheImage('PIXEL_assets')
  setPropertyFromClass('GameOverSubstate', 'characterName', 'pixel-bf-dead');
  setPropertyFromClass('GameOverSubstate', 'endSoundName', 'gameOverEndRed');
  --background
  makeLuaSprite('bg','red/fondo_pokemon_1',-450,-300)
  makeAnimatedLuaSprite('charizard','charizard',550,-250)
  scaleObject('charizard',0.65,0.65)
  addAnimationByPrefix('charizard','idle','chari idle',24,true)
  addAnimationByPrefix('charizard', 'atack', 'charizard atack', 24, true)
  objectPlayAnimation('charizard','idle',true)
  makeAnimatedLuaSprite('pika','pikachu',1100,50)
  scaleObject('pika',0.7,0.7)
  addAnimationByPrefix('pika','idle','PIKACHU IDLE',24,true)
  addAnimationByPrefix('pika', 'atack', 'pikaatack', 24, true)
  objectPlayAnimation('pika','idle',true)
  makeLuaSprite('healthBG', 'health', 600, 500);
  scaleObject('healthBG', 0.44, 0.44);
  setObjectCamera('healthBG','hud');
  makeLuaSprite('health', 'healthBar', 630, 550);
  scaleObject('health', 0.44, 0.44);
  setObjectCamera('health','hud');
  makeLuaSprite('bared', nil, 990, 582)
  makeGraphic('bared', 509, 5, 'FF0000') --260
  setObjectCamera('bared', 'hud')
  setProperty('bared.angle', 180)
  makeLuaSprite('bar', nil, 990, 582)
  makeGraphic('bar', 509, 5, 'adff2f') --260
  setObjectCamera('bar', 'hud')
  setProperty('bar.angle', 180)

  setProperty('bared.scale.x', PokBar)
  setProperty('bared.origin.x', getProperty('bar.height'));
  setProperty('bar.scale.x', PokBar)
  setProperty('bar.origin.x', getProperty('bar.height'));

  scaleObject('bg',1.2,1.2)
  addLuaSprite('bg',false)
  addLuaSprite('charizard',false)
  addLuaSprite('pika',true)
  addLuaSprite('healthBG',true)
  addLuaSprite('health',true)
  addLuaSprite('bared', true)
  addLuaSprite('bar', true)
end
function onCreatePost()
-- FONT
   setTextSize('Watermark', 20);
   setTextSize('scoreTxt', 20);
   setTextSize('healthCounter', 20);
   setTextSize('timeTxt', 20);
   setTextSize('botplayTxt', 20);
   setTextSize('judgementCounter', 20);

   setProperty('iconP1.visible', false);
   setProperty('iconP2.visible', false);
   setProperty('healthBar.visible', false);
   setProperty('healthBarBG.visible', false);
end
function noteMiss()
  setProperty('bar.scale.x', getProperty('bar.scale.x') - 0.05)
end
function onStepHit()
  if curStep==512 then
    makeLuaSprite('bg','red/fondo_pokemon_2',-450,-300)
    scaleObject('bg',1.2,1.2)
    makeAnimatedLuaSprite('charizard','pixelcharizard',550,-150)
    scaleObject('charizard',0.65,0.65)
    addAnimationByPrefix('charizard','idle','chariidle',24,true)
    objectPlayAnimation('charizard','idle',true)
    makeAnimatedLuaSprite('pika','pixelpikachu',1100,50)
    addAnimationByPrefix('pika','idle','pikachu idle',24,true)
    objectPlayAnimation('pika','idle',true)
    scaleObject('pika',0.7,0.7)
    addLuaSprite('bg',false)
    addLuaSprite('charizard',false)
    addLuaSprite('pika',true)
  end
  if curStep==576 then
  makeLuaSprite('bg','red/fondo_pokemon_1',-450,-300)
  makeAnimatedLuaSprite('charizard','charizard',550,-250)
  scaleObject('charizard',0.65,0.65)
  addAnimationByPrefix('charizard','idle','chari idle',24,true)
  addAnimationByPrefix('charizard', 'atack', 'charizard atack', 24, true)
  objectPlayAnimation('charizard','idle',true)
  makeAnimatedLuaSprite('pika','pikachu',1100,50)
  scaleObject('pika',0.7,0.7)
  addAnimationByPrefix('pika','idle','PIKACHU IDLE',24,true)
  addAnimationByPrefix('pika', 'atack', 'pikaatack', 24, true)
  objectPlayAnimation('pika','idle',true)
  scaleObject('bg',1.2,1.2)
  addLuaSprite('bg',false)
  addLuaSprite('charizard',false)
  addLuaSprite('pika',true)
  end
  if curStep==640 then
    makeLuaSprite('bg','red/fondo_pokemon_2',-450,-300)
    scaleObject('bg',1.2,1.2)
    makeAnimatedLuaSprite('charizard','pixelcharizard',550,-150)
    scaleObject('charizard',0.65,0.65)
    addAnimationByPrefix('charizard','idle','chariidle',24,true)
    objectPlayAnimation('charizard','idle',true)
    makeAnimatedLuaSprite('pika','pixelpikachu',1100,50)
    addAnimationByPrefix('pika','idle','pikachu idle',24,true)
    objectPlayAnimation('pika','idle',true)
    scaleObject('pika',0.7,0.7)
    addLuaSprite('bg',false)
    addLuaSprite('charizard',false)
    addLuaSprite('pika',true)
    end
  if curStep==704 then
  makeLuaSprite('bg','red/fondo_pokemon_1',-450,-300)
  makeAnimatedLuaSprite('charizard','charizard',550,-250)
  scaleObject('charizard',0.65,0.65)
  addAnimationByPrefix('charizard','idle','chari idle',24,true)
  addAnimationByPrefix('charizard', 'atack', 'charizard atack', 24, true)
  objectPlayAnimation('charizard','idle',true)
  makeAnimatedLuaSprite('pika','pikachu',1100,50)
  scaleObject('pika',0.7,0.7)
  addAnimationByPrefix('pika','idle','PIKACHU IDLE',24,true)
  addAnimationByPrefix('pika', 'atack', 'pikaatack', 24, true)
  objectPlayAnimation('pika','idle',true)
  scaleObject('bg',1.2,1.2)
  addLuaSprite('bg',false)
  addLuaSprite('charizard',false)
  addLuaSprite('pika',true)
  end
  if curStep==1056 then
    makeLuaSprite('bg','red/fondo_pokemon_2',-450,-300)
    scaleObject('bg',1.2,1.2)
    makeAnimatedLuaSprite('charizard','pixelcharizard',550,-150)
    scaleObject('charizard',0.65,0.65)
    addAnimationByPrefix('charizard','idle','chariidle',24,true)
    objectPlayAnimation('charizard','idle',true)
    makeAnimatedLuaSprite('pika','pixelpikachu',1100,50)
    addAnimationByPrefix('pika','idle','pikachu idle',24,true)
    objectPlayAnimation('pika','idle',true)
    scaleObject('pika',0.7,0.7)
    addLuaSprite('bg',false)
    addLuaSprite('charizard',false)
    addLuaSprite('pika',true)
    end
  if curStep==1263 then
  makeLuaSprite('bg','red/fondo_pokemon_1',-450,-300)
  makeAnimatedLuaSprite('charizard','charizard',550,-250)
  scaleObject('charizard',0.65,0.65)
  addAnimationByPrefix('charizard','idle','chari idle',24,true)
  addAnimationByPrefix('charizard', 'atack', 'charizard atack', 24, true)
  objectPlayAnimation('charizard','idle',true)
  makeAnimatedLuaSprite('pika','pikachu',1100,50)
  scaleObject('pika',0.7,0.7)
  addAnimationByPrefix('pika','idle','PIKACHU IDLE',24,true)
  addAnimationByPrefix('pika', 'atack', 'pikaatack', 24, true)
  objectPlayAnimation('pika','idle',true)
  scaleObject('bg',1.2,1.2)
  addLuaSprite('bg',false)
  addLuaSprite('charizard',false)
  addLuaSprite('pika',true)
  end
  end

  function onUpdate()
    if FearFull == true then--Instant Death
        setProperty('health', -500)
    end
    if getProperty(misses) > 10 and getProperty(misses) < 1 then --wow
      FearFull = false;
    end

    if getProperty(misses) > 10 then --wow
      FearFull = true;
    end
end

function onGameOver()
	setProperty('cameraSpeed', 100)
	cameraSetTarget('boyfriend')
end