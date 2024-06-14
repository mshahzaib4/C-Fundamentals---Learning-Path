# The if statement is used to execute a block of code only if a specified condition is True. 

"""While purchasing certain items, a discount of 10% is offered if
quantity purchased is more than 1000. If quantity and price per item are
input through keyboard , write a program to calculate total expenses."""

# Get input for cost of items and quantity
cost = int(input("Enter Cost of Items: ")) 
qu = int(input("Enter Quantity: ")) 

# Calculate the total discount
dis = cost * qu

# Checking if the total discount is greater than 1000
if dis > 1000:
    disfinal = (dis / 100) * 10 
    disfinal = dis - disfinal  

    print(f"\n\nTotal Bill with 10 percent discount is: {disfinal:4.2f}\n\n")
else:
    print(f"\n\nTotal Bill: {dis:4.2f}\n\n")
