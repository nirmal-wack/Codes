
def fizzbuzz(a1):
    if(a1%5==0 and a1%3==0):
        print("FizzBuzz")
    elif(a1%5==0):
        print("Buzz")
    elif(a1%3==0):
        print("Fizz")
    else:
        print(a1)

a1=int(input())
fizzbuzz(a1)
