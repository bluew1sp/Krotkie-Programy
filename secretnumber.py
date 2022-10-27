import random
secret_number = random.randint(0,10)
#gra w zgadywanie losowej liczby
guess_count = 0
guess_limit = 3
while guess_count < guess_limit:
    guess = int(input('guess(0-10): '))
    guess_count += 1
    if guess == secret_number:
        print("you won!")
        break
    elif guess < secret_number:
        print("too small")
    elif guess > secret_number:
        print("too big")
else:
    print("it was" ,secret_number)