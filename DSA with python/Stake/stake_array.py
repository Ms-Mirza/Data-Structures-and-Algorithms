stake = []

def push(item):
    stake.append(item)
    print(f"{item} pushed to stake.")

def pop():
    if not stake:
        print("The stake is empty.")
    else:
        item = stake.pop()
        print(f"{item} popped form stake.")
    
def peek():
    if not stake:
        print("The stake is empty.")
    else:
        item = stake[-1]
        print(f"Top element is {item}.")

def display():
    if not stake:
        print("The stake is empty.")
    else:
        print("The elements are:")
        for item in reversed(stake):
            print(item)

push(10)
push(20)
push(30)
display()
pop()
pop()
pop()
push(10)
push(20)
push(30)
pop()
pop()
push(100)
peek()
display()