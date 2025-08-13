#include <iostream>
using namespace std;




//    int a = 5;
//    cout << a << endl;
   
//    char ch = 'R';
//    cout << ch << endl;

//    bool A = false;
//    cout << A << endl;

//    float f = 1.2345;
//    cout << f << endl;

//    double d = 12.9875643;
//    cout << d << endl;

//    unsigned m = -112;
//    cout << m << endl;

//    signed p = -112;
//    cout << p << endl;

//    Type casting 

// int g = 'a' ;
// cout << g << endl;

// char mh = 98 ;
// cout << mh << endl;


// Relational Operator


// int a = 10 , b=8;

// bool first = (a==b);
// cout << first << endl;

// bool second = (a<b);
// cout << second << endl;

// bool third = (a>b);
// cout << third << endl;

// bool fourth = (a<=b);
// cout << fourth << endl;

// bool fifth = (a>=b);
// cout << fifth << endl;

// bool sixth = (a=!b);
// cout << sixth << endl;

// char ch ;
// cout << " enter the character ";
// cin >> ch;


// if (ch >= 'a' && ch <='z' )

//   {

//      cout << "lowecase";
     
//   }


//   else if  (ch >= 'A' && ch <='Z' )

//    {

//      cout << "UPPERCASE ";
     
//   }

//    else if (ch >= '0' && ch <='9' )

//     {

//      cout << "numeric ";
     
//   }

//   else
//   {

//   cout << " any special character u have enterd ";

//   }



// return 0 ; 


// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int sum;

//     // Formula: sum = (n * (n + 1)) / 2
//     sum = (n * (n + 1)) / 2;

//     cout << "Value of sum is: " << sum << endl;

//     return 0;
// }


int main ()

{
  int n ;
  cout << "Give the value to check the number is prime or not : " ;
  cin >> n;

  int i = 2 ;

  while (i<n)

{
   if (n%i==0)
     {
     cout<<" not prime";
     }
   else
   {
      cout<< " prime";
   }
   i=i+1;

}

return 0;

}