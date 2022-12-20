function onCreate()

  makeLuaSprite('sky', 'SonicP2/sky', -414, -440.8); 
  scaleObject('sky', 1.4, 1.4);
  setScrollFactor('sky', 1, 1);
  addLuaSprite('sky', false);

  makeLuaSprite('backtrees', 'SonicP2/backtrees', -290.55, -298.3); 
  scaleObject('backtrees', 1.2, 1.2);
  setScrollFactor('backtrees', 1, 1);
  addLuaSprite('backtrees', false);

  makeLuaSprite('trees', 'SonicP2/trees', -290.55, -298.3); 
  scaleObject('trees', 1.2, 1.2);
  setScrollFactor('trees', 1, 1);
  addLuaSprite('trees', false);

  makeLuaSprite('ground', "SonicP2/ground", -290.55, -298.3); 
  scaleObject('ground', 1.2, 1.2);
  setScrollFactor('ground', 1, 1);
  addLuaSprite('ground', false);
  
end

--i hope you don't steal this
function onBeatHit()
  if curBeat %1 == 0 then
    setProperty('timeBar.color', getColorFromHex('ff0000'))
  end
end
