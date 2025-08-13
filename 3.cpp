// #include<iostream>
// using namespace std;

// int main (){

// int n ;
// cout << " Enter the value ";
// cin>>n;

// int a=0 ;
// int b=1 ;

// cout << a << endl;
// cout << b << endl; ;

// for ( int i=0;i<=n;i++)
// {
//   int sum= a+b;
//   cout<< a+b << endl;
//   a=b;
//   b=sum;

// }

// return 0;

// }


#include<iostream>
using namespace std;
int main (){
int n ;

cout << " enter the value ";
cin >> n;

for ( int i =0 ; i <= n ; i ++)

    { 
       for (int j = 0 ; j <= i ; j++)
        
       {
         cout << " * ";
         
       }

       cout << endl;
    }

    for ( int i =n-1 ; i >=0 ; i--)

    { 
       for (int j = 1 ; j <= i+1; j++)
        
       {
         cout << " * ";
         
       }

       cout << endl;
    }



}
