#!/bin/bash
# function for money transaction calculation

function deposit(){

if [ $amount -lt $reamaunt ]
then

echo " You have no enough money!!!!"
echo "Thank you for visiting"

else
amount=$(($amount - $reamaunt))

echo "Balance remaining  is: "$amount
fi
}


# this funcation verify the pin code
function pinCheck()
{
 
 read -p "Enter Pin: " passwordmy_dkash
while [ $passwordmy_dkash -ne $password2 ]
do
echo " This pin number is wrong "
read -p "Enter the agnin pin : " passwordmy_dkash
done

}



read -p "Enter Your phone number for creating dcash account +880 : " phone_number


while [ $phone_number -lt 1000000000 ] || [ $phone_number -gt 9999999999 ]
do

echo -e " \nInvalid number Try again\n "
read -p "Again Enter Your phone number for creating dcash account +880 : " phone_number

done


read -p "Enter a new 4 digit pin : " password1
read -p "conform 4 digit pin : " password2
while [ $password1 -ne $password2 ] || [ $password1 -lt 1000 ] || [ $password1 -gt 10000 ]
do

echo -e " \n pin not match Try again or format invalid \n "

read -p "Enter a new 4 digit pin : " password1
read -p "conform 4 digit pin : " password2
done

read -p "Insert the money of your account: " amount

read -p "Enter the Dkash entring number as like *343# : " dkash
if [ "$dkash" = "*343#" ];
then
echo -e "Name: MD. Mustafizur Rahman \n ID: 193-35-2918\n\n"
echo -e "Welcome to Dkash\n"

while read -p "Are you are you continue it press y : " check
do

if [ "$check" = "y" ]
then 
echo "dkash"
echo "1 send Money"
echo "2 Mobile Recharge "
echo "3 Cash Out"
echo "4 Pay Bill"
echo "5 Get TK 75 bonus now!!"
echo "6 My dkash"
echo "7 Reset Pin"
read -p "Press: " press

if [ $press == 1 ]
then
echo "Send Money "

read -p "Enter the account number +880 : " other


while [ $other -lt 1000000000 ] || [ $other -gt 9999999999 ] || [ $other -eq $phone_number ]
do

echo -e " \nInvalid number Try again\n "
read -p "Again enter the account number +880 : " other

done

read -p "Enter The amount: " reamaunt
echo -e "\nTransaction number is: "$other
echo -e "\n Transaction amount is: "$reamaunt
pinCheck
deposit


elif [ $press == 2 ]
then
echo "Mobile Recharge"

echo -e "1 Self \n2 Other"
read -"press: " select
if [ $select -eq 1 ]
then
read -p "Enter The amount: " reamaunt
echo "Transaction number is: "$phone_number
echo -e "\n Transaction amount is: "$reamaunt
pinCheck
deposit
else
read -p "Enter the phone number for recharge +880 : " other


while [ $other -lt 1000000000 ] || [ $other -gt 9999999999 ] || [ $other -eq $phone_number ]
do

echo -e " \nInvalid number Try again\n "
read -p "Again Enter the phone number for recharge +880 : " other

done

read -p "Enter The amount: " reamaunt
echo -e "\nTransaction number is: "$other
echo -e "\n Transaction amount is:"$reamaunt
pinCheck
deposit


fi



elif [ $press == 3 ]
then
echo "Cash Out"
read -p "Enter the Agent Phone number +880 : " agent


while [ $agent -lt 1000000000 ] || [ $agent -gt 9999999999 ] || [ $agent -eq $phone_number ]
do

echo -e " \nInvalid number Try again\n "
read -p "Again enter the agent phone number: +880 : " agent

done

read -p "Enter The amount: " reamaunt
echo -e "\nTransaction number is: "$other
echo -e "\n Transaction amount is"$reamaunt
pinCheck
deposit



elif [ $press == 4 ]
then
echo "Pay Bill"
echo "this is service is not available"

elif [ $press == 5 ]
then
echo "7 Get TK 75 bonus now!!"

echo "Please Download The dkash app"

elif [ $press == 6 ]
then

echo "My dkash"

echo "1 check Balance "
read -p "press: " num

pinCheck

echo "Now Your amount is: "$amount

elif [ $press == 7 ]
then

echo "+880 "$phone_number
echo "Reset PIN"
read -p "Enter the old pin : " oldPassword


while [ $oldPassword -ne $password2 ]
do
echo " old pin not match try again "
read -p "Enter the old pin : " oldPassword
done

while [ $oldPassword -eq $password2 ] || [ $password1 -lt 1000 ] || [ $password1 -gt 10000 ] || [ $password1 -ne $password2 ]
do
echo -e " \n password not match or invalid format Try again \n "
read -p "Enter a new 4 digit pin : " password1
read -p "conform 4 digit pin : " password2
done 


else
echo "Wrong key word"   
fi

else
echo -e "Take care \nsee you soon"
break
fi
done
else
echo "Thank you for Visiting"
fi


