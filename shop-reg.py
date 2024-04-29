item=int(input("Enter the number of items:\n"))
price=int(input("Enter the of the each item:\n"))
discount=int(input("Enter the discount:\n"))
tax=int(input("Enter the tax :\n"))
sub_total=item*price
discount1=(sub_total*discount)/100
total=sub_total-discount1
tax1=(total*tax)/100
grand_total=total+tax1
print("name of the shop:\n")
print("price of the item:",item)
print("discount=",discount1)
print("tax=",tax1)
print("grand_total=",grand_total)
print("THANK you.......visit again...")
