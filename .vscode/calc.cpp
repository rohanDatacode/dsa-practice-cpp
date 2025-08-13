// #include<iostream>
// using namespace std;

// int main (){

// int a , b ;

// cout<< " Enter the value of a :";
// cin>>a;

// cout<<"Enter the value of b :";
// cin>>b;

// char op;
// cout<<"Enter the operation you want to perform :";
// cin>>op;


// switch(op){


//     case '+': cout << (a+b) << endl;
//     break;
//     case '-':cout << (a-b) << endl;
//     break;
//     case '*':cout << (a*b) << endl;
//     break;
//     case '/':cout << (a/b) << endl;
//     break;
//     default:cout<< " Please Enter the valid Operation"<< endl;
// }




// }



#include<iostream>
using namespace std;


int main(){

int amount ;
cout << " Enter the value of amount for knowing the notes :" ;
cin>>amount;


int n100 , n50 , n20 , n10;

switch (100) {

case 100 :
    n100=amount/100;
    amount%=100;
case 50 :
     n50=amount/50;
    amount%=50;
case 20:
    n20=amount/20;
    amount%=20;
case 10:
    n10=amount/10;
    amount%=10;

}
  
cout << " total note req. for 100 is " << n100 << endl;
cout << " total note req. for 50 is " << n50 << endl;
cout << " total note req. for 20 is " << n20 << endl;
cout << " total note req. for 10 is " << n10 << endl;


}