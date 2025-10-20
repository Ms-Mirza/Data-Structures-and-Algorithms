# Convert and expression from infix to postfix
def infix_to_postfix(expression):

    stack = []
    postfix = ""

    for char in expression:
        if (char.isalnum()):
            postfix += char
        elif (char == '('):
            stack.append(char)
        elif (char == ')'):
            while stack and stack[-1] != '(':
                postfix += stack.pop()
            if stack and stack[-1] == '(':
                stack.pop()

        else:
            while stack and precedence(char) <= precedence(stack[-1]):
                postfix += stack.pop()
            stack.append(char)
    while stack:
        postfix += stack.pop()
    return postfix        

def precedence(operator):
    if operator in ('+', '-'):
        return 1
    elif operator in ('*', '/'):
        return 2
    elif operator == '^':
        return 3
    return 0
                 

expr = input()
print("Postfix:", infix_to_postfix(expr))              