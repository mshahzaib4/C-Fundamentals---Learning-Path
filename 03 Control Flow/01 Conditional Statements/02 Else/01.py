"""While purchasing certain items, a discount of 10% is offered if quantity purchased is more than 1000. 
If quantity and price per item are input through keyboard , write a program to calculate total expenses."""

quantity = int(input("Enter the quantity purchased: "))
price_item = float(input("Enter the price per item: "))

total_expenses = quantity * price_item

# Check if quantity is more than 1000 to apply discount
if quantity > 1000:
    discount = 0.1 * total_expenses
    total_expenses -= discount

print("Total expenses: $", total_expenses)
