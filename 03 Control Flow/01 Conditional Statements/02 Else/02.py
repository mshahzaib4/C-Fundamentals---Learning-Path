"""If cost price and selling price of item is input through the keyboard ,
write a program to determine whether seller has made profit or incurred
loss. Also determine how much profit he made or loss he incurred."""

items = int(input("Enter The cost Price of Items : "))
selling_price = int(input("Enter The selling Price of Items : "))

profit = 0

if items >= selling_price:
    profit = items - selling_price
    print("\n\nCongrats! You are in profit.")
    print(f"And You Have \"{profit} PKR\" profit in selling items\n\n")
else:
    profit = items - selling_price
    profit = -profit
    print("\n\nYou are in Loss")
    print(f"You Have \"{profit} PKR\" loss in selling items\n\n")
