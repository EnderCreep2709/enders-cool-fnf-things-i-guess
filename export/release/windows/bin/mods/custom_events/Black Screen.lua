local firstBSUse = true;

function onEvent(name,value1,value2)

    if name == 'Black Screen' then

        if firstBSUse == true then 
            makeLuaSprite('black ooOOooOO', 'black ooOOooOO', -100, -100);
            scaleObject('black ooOOooOO', 2, 2);
            firstBSUse = false;
        end    

        if firstBSUse == false then
            if value2 == '1' then
                addLuaSprite('black ooOOooOO', true);
			    if value1 == 'game' then
                    setObjectCamera('black ooOOooOO', 'hud');
                    setObjectOrder("black ooOOooOO", getObjectOrder(camHUD) + 1)
                elseif value1 == 'hud' then
                    setObjectCamera('black ooOOooOO', 'other');
                end

            elseif value2 == '2' then
                removeLuaSprite('black ooOOooOO', false);
            end
        end
	end
end	