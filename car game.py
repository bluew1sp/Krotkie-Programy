#"gra" z samochodem
ride = 0
while 1==1:
    command = input("")
    if command == 'help':
        print("start - to start the car")
        print("stop - to stop the car")
        print("quit - to exit")
    elif command == 'start':
        if ride == 0:
            print("starting the car...prt..prt")
            ride = 1
        else:
            print("the car is already riding")
    elif command == 'stop':
        if ride == 0:
            print("the car is already stopped")
        else:
            print("stopping the car")
            ride = 0
    elif command == 'quit':
        print("naura")
        break
    else:
        print("blad")

