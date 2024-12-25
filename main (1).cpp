#include<iostream.h>
#include<conio.h>
int main()
{
int returnTotalBill(void);
int totalBill=returnTotalBill();
cout<<"your total Bill Amount is "<<totalBill;
cout<<"Thank you for your order "<<endl;
}
int returnTotalBill(){
char c;
char item;
char vegItem;
int billAmount=0;
char selectAgain;
char nonvegItem;
cout<<".........welcome to online food order......."<<endl;
cout<<"...........please follow below instructions....."<<endl;
cout<<"step 1 : please press s to start your order"<<endl;
cout<<"step 2 : you can order both veg and nonveg Item"<<endl;
cout<<"step 3 : please press a to select veg item"<<endl;
cout<<"step 4 : please press b to select nonveg item"<<endl;
cout<<"step 5 : you will get your final Bill after your order"<<endl;
start:
cin>>c;
if(c=='s' || C=='S'){
items:
cout<<"please select your choice"<<endl;
cout<<"(a)veg Items (b)Nonveg Items"<<endl;
cin>>Item;
if(item=='a' || item=='A'){
vegItemList:
cout<<"please slect 1,2,3,4,5,as per your choice "<<endl;
cout<<"(1)panner : price : Rs-250"<<endl;
cout<<"(2)burger : price : Rs-50"<<endl;
cout<<"(3)pizza : price : Rs-100"<<endl;
cout<<"(4)chowmin : price : Rs-150"<<endl;
cout<<"(5)vegroll : price : Rs-100"<<endl;
cin>>vegItem;
if(vegItem=='1'){
billAmount=billAmount+250;
}
else if(vegItem=='2'){
billAmount=billAmount+50;
}
else if(vegItem=='3'){
billAmount=billAmount+100;
}
else if(vegItem=='4'){
billAmount=billAmount+150;
}
else if(vegItem=='5'){
billAmount=billAmount+100;
}
else{
cout<<"you have entered wrong value,please try again"<<endl;
goto vegItemList;
}
cout<<"do you want to add more Items,y or n?"<<endl;
cin>>selectAgain;
if(selectAgain=='y'){
goto items;
}
else{
return billAmount;
}
}
else if(item=='b' || item=='B'){
nonvegItemList;
cout<<"please select 1,2,3,4,5,as per your choice"<<endl;
cout<<"(1)chicken : price : Rs-350"<<endl;
cout<<"(2)burger : price : Rs-100"<<endl;
cout<<"(3)pizza : price : Rs-150"<<endl;
cout<<"(4)chowmin : price : Rs-200"<<endl;
cout<<"(5)nonvegRoll : price : Rs-200"<<endl;
cin>>nonvegItem;
if(nonvegItem=='1'){
billAmount=billAmount+350;
}
else if(nonvegItem=='2'){
billAmount=billAmount+100;
}
else if(nonvegItem=='3'){
billAmount=billamount+150;
}
else if(nonvegItem=='4'){
billAmount=billAmount+200;
}
else if(nonvegItem=='5'){
billAmount=billAmount+200;
}
else{
cout<<"you have entered wrong value,please try again!"<<endl;
goto nonvegItemList;
}
cout<<"do you want add more items y or n?"<<endl;
cin>selectAgain;
if(selectAgain=='y'){
goto items;
}
else{
return billAmount;
}
}
else{
cout<<"you have entered wrong value,please try again"<<endl;
goto items;
}
}
else{cout<<"you have entered wrong value,please press s"<<endl;
goto start;
}
return billAmount;
}