# Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

# 1st way:


def reverse(x):
    if -2**31 <= x <= 2**31 - 1:
        num = abs(x)
        rev = 0

        while(num>0):
            digit = num % 10
            rev = (rev*10) + digit
            num = num//10
        if -2**31 <= rev <= 2**31 - 1:    
            if(x<0):
                return rev * (-1)
            else:
                return rev
        else:
            return 0
    else:
        return 0

# 2nd way:


def reverse(x):
    INT_MIN, INT_MAX = -2**31, 2**31 - 1

    # Handle sign and make x positive
    sign = -1 if x < 0 else 1
    x *= sign

    # Reverse the digits
    rev = 0
    while x > 0:
        rev = rev * 10 + x % 10
        x //= 10

    rev *= sign  # Restore original sign

    # Check overflow after reversing
    if rev < INT_MIN or rev > INT_MAX:
        return 0
    return rev


# 3rd way:


def reverse(x):
    rev = int(str(abs(x))[::-1]) * (-1 if x < 0 else 1)
    return rev if -2**31 <= rev <= 2**31 - 1 else 0
