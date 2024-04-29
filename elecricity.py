#for claculating the electric bill
units=int(input("Enter the number of the units:\n"))
if(units<=50 and units>0):
    bill=units*3.50
    print("electricity=",bill)
elif(units<=150 and units>50):
    bill=50*3.50+(units-50)*4
    print("electricity=",bill)
elif(units<=250 and units>150):
    bill=50*3.50+100*4+(units-150)*5.70
    print("electricity=",bill)
elif(units>250):
    bill=50*3.50+100*4+100*5.70+(units-250)*6.50
    print("electricity=",bill)
else:
    print("Enter a valid input:")
