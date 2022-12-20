function onGameOver()
    --os.execute "FatalError.exe"

    addHaxeLibrary('Sys')
    runHaxeCode([[
        Sys.exit(0);
    ]])
end
