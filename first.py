import phonenumbers
from phonenumbers import geocoder
phone_number1=phonenumbers.parse("+919000073811")
phone_number2=phonenumbers.parse("+918639264219")
phone_number3=phonenumbers.parse("+919441335320")

print("\nPhone Numbers Location\n")
print(geocoder.description_for_number(phone_number1,"en"));
print(geocoder.description_for_number(phone_number2,"en"));
print(geocoder.description_for_number(phone_number3,"en"));

