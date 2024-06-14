"""If three sides of triangle are entered. Write a program to check
triangle is isosceles, equilateral or right angled triangle."""

# Take input for points A, B, and C
a = int(input("Point A : "))
b = int(input("Point B : "))
c = int(input("Point C : "))
print("\n\n")

# Check for the type of triangle
if a == b and b == c and c == a:
    print("Equilateral Triangle")  # All sides are equal
if a == b or b == c or c == a:
    print("Isosceles Triangle")  # At least two sides are equal

if a + b == c or b + c == a or c + a == b:
    print("Right angled Triangle")
