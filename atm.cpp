#pragma once
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>

#include "stdafx.h"
using namespace std;
//global variables
float acc_num;
int activity;
int w_opt;
float dep_amnt;
float neck;
float bal = 500;
//methods
float Welcome ();
float menu();
float balance ();
float withdraw ();
float deposit ();
float eject ();
int main ()//main
{
cout<<"***********************************************************"<<endl;
cout<<"********VIP Welcomes you to ATM ********"<<endl;
cout<<"***********************************************************"<<endl;
cout<<"Standing by..."<<endl;
cout<<"--INSERT CARD--"<<endl;
system("pause");
Welcome ();
system("pause");
return 0;
}

float Welcome(){//welcome method where user first gets to
system("cls");
cout<<"***********************************************************"<<endl;
cout<<"********VIP Welcomes you to ATM ********"<<endl;
cout<<"***********************************************************"<<endl;
cout<<"Processing..."<<endl;
cout<<endl;
cout<<"Card detected! Enter 5 digit card activation number..."<<endl;
cin>>acc_num;
cout<<"You entered "<<acc_num<<endl;
cout<<"Would you like to Proceed (y) or Re-enter (n)???"<<endl;
cin>>neck;
system("cls");
while(neck!= "y"){
cout<<"You entered "<<acc_num<<endl;
cout<<"NOTE THAT ANY INPUT OTHER THAN PROCEED (y) WILL BE CONSIDERED AS REENTER (n). \nTHANK YOU"<<endl;
cout<<"Please re-enter your 5 digit card activation number..."<<endl;
cin>>acc_num;
cout<<"Would you like to Proceed (y) or Re-enter (n)???"<<endl;
cin>>neck;
}
menu ();
return 0;
}


float menu(){//main menu
do{
system ("cls");
cout<<"***********************************************************"<<endl;
cout<<"******************VIP MAIN MENU***************************"<<endl;
cout<<"***********************************************************"<<endl;
cout<<"***********************************************************"<<endl;
cout<<" 1. CURRENT BALANCE "<<endl;
cout<<"***********************************************************"<<endl;
cout<<endl;
cout<<"***********************************************************"<<endl;
cout<<" 2. WITHDRAW "<<endl;
cout<<"***********************************************************"<<endl;
cout<<endl;
cout<<"***********************************************************"<<endl;
cout<<" 3. DEPOSIT
"<<endl;
cout<<"***********************************************************"<<endl;
cout<<endl;
cout<<"***********************************************************"<<endl;
cout<<" 4. EXIT CARD "<<endl;
cout<<"***********************************************************"<<endl;
cout<<"Please select above banking activity number between 1 to 4 "<<endl;
cout<<endl;
cin>>activity;
}while(activity<1 || activity>4);

switch(activity){
case 1:
balance ();
break;
case 2:
withdraw ();
break;
case 3:
deposit ();
break;
case 4:
eject ();
}
return 0;
}


float balance ()//method for balance
{
system("cls");
cout<<"\nRetrieving account balance from a/c ..."<<endl;
cout<<"ACCOUNT: "<<acc_num<<endl;
cout<<"Your balance is Rs. "<<bal<<endl;
system("pause");
menu ();
return 0;
}


float withdraw ()//method for withdrawing
{
system("cls");
do{
cout<<"***********************************************************"<<endl;
cout<<"******************VIP WITHDRAWALS MENU***************************"<<endl;
cout<<"***********************************************************"<<endl;
cout<<"\nPlease select amount you want to withdraw from the listed options
"<<endl;
cout<<"\n 1. Rs.100 (One Hundred Only)"<<endl;
cout<<"\n 2. Rs.200 (Two Hundred Only)"<<endl;
cout<<"\n 3. Rs.500 (Five Hundred Only)"<<endl;
cout<<"\n 4. Rs.2000 (Two Thousand Only)"<<endl;
cout<<"\n 5. Rs.5000 (Five Thousand Only)"<<endl;
cout<<"\n 6. Rs.10000 (Ten Thousand Only)"<<endl;
cout<<"\n 7. CANCEL (Exit & Return to Main Menu"<<endl;
cout<<"\nPlease select amount you want to withdraw from the listed options
"<<endl;
cin>>w_opt;
cout<<endl;
}while(w_opt<1 || w_opt>7);

switch(w_opt){
case 1:
if(bal<100){
cout<<"\nINSUFFICIENT FUNDS, SORRY!"<<endl;
cout<<"\nAVAILABLE BALANCE: Rs. "<<bal<<endl;
cout<<endl;
system("pause");
eject ();
}
else
{
cout<<"\nWithdrawing Rs. hundred only from: \nACCOUNT:
"<<acc_num<<endl;
bal = bal-100;
cout<<"New Balance: Rs. "<<bal<<endl;
}
break;
case 2:
if(bal<200){
cout<<"\nINSUFFICIENT FUNDS, SORRY!"<<endl;
cout<<"\nAVAILABLE BALANCE: Rs. "<<bal<<endl;
cout<<endl;
system("pause");
eject ();
}
else
{
cout<<"\nWithdrawing Rs. Two hundred only from: \nACCOUNT:
"<<acc_num<<endl;
bal = bal-200;
cout<<"New Balance: Rs. "<<bal<<endl;
}
break;

case 3:
if(bal<500){
cout<<"\nINSUFFICIENT FUNDS, SORRY!"<<endl;
cout<<"\nAVAILABLE BALANCE: Rs. "<<bal<<endl;
cout<<endl;
system("pause");
eject();
}
else{
cout<<"\nWithdrawing Rs. Five hundred only from: \nACCOUNT:
"<<acc_num<<endl;
bal = bal-500;
cout<<"New Balance: Rs. "<<bal<<endl;
}
break;
case 4:
if(bal<2000){
cout<<"\nINSUFFICIENT FUNDS, SORRY!"<<endl;
cout<<"\nAVAILABLE BALANCE: Rs."<<bal<<endl;
cout<<endl;
system("pause");
eject ();
}
else{
cout<<"\nWithdrawing Rs. Two thousand only from: \nACCOUNT:
"<<acc_num<<endl;
bal = bal-2000;
cout<<"New Balance: Rs. "<<bal<<endl;
}
break;

case 5:
if(bal<5000){
cout<<"\nINSUFFICIENT FUNDS, SORRY!"<<endl;
cout<<"\nAVAILABLE BALANCE: Rs. "<<bal<<endl;
cout<<endl;
system("pause");
eject ();
}
else{
cout<<"\nWithdrawing Rs. Five thousand only from: \nACCOUNT:
"<<acc_num<<endl;
bal = bal-5000;
cout<<"New Balance: Rs. "<<bal<<endl;
}
break;
case 6:
if(bal<10000){
cout<<"\nINSUFFICIENT FUNDS, SORRY!"<<endl;
cout<<"\nAVAILABLE BALANCE: Rs. "<<bal<<endl;
cout<<endl;
system("pause");
eject ();
}
else{
cout<<"\nWithdrawing Rs. Ten thousand only from: \nACCOUNT:
"<<acc_num<<endl;
bal = bal-10000;
cout<<"\nNew Balance: Rs. "<<bal<<endl;}break;

case 7:
cout<<"\nEXITING WITHDRAWAL MENU..."<<endl;
cout<<"\nReturning to Main Menu..."<<endl;
cout<<"\nPlease wait..."<<endl;
system("pause");
system("cls");
menu ();
break;
}
cout<<"NOTE:\nPLEASE CHECK & SECURE YOUR MONEY BEFORE LEAVING ATM COUNTER."<<endl;
system("pause");
menu ();
return 0;
}


float deposit ()//method for deposits
{
system("cls");
cout<<"***********************************************************"<<endl;
cout<<"******************VIP Bank***************"<<endl;
cout<<"***********************************************************"<<endl;
cout<<"\nEnter Deposit AMOUNT:  & PRESS ENTER"<<endl;
cin>>dep_amnt;
system("pause");
cout<<"\n>> Please wait while funds are verified..."<<endl;
bal= bal+dep_amnt;
cout<<"\nDepositing Rs. "<<dep_amnt <<" to:\nACCOUNT: "<<acc_num<<endl;
cout<<"\nNEW BALANCE: Rs. "<<bal<<endl;
cout<<"\nThank you!"<<endl;
cout<<endl;
system("pause");
menu ();
return 0;
}


float eject ()//method for ejecting
{
system("cls");
cout<<"***********************************************************"<<endl;
cout<<"******************VIP Bank***************"<<endl;
cout<<"***********************************************************"<<endl;
cout<<"\nCard ejecting..."<<endl;
cout<<"\nPlease wait..."<<endl;
cout<<"\nCard ejected!"<<endl;
cout<<"\nThank you for using VIP ATM, \nPLEASE CALL AGAIN!!!\nVIP SYSTEMS (C) 2018"<<endl;
cout<<endl;
system("pause");
system("cls");
main ();
return 0;
}
