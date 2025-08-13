// #include<iostream>
// using namespace std;

// int factorial(int n){


//     int fact=1;

//     for( int i=1;i<=n;i++){

//      fact = fact * i;
//     }
// return fact;
// }

// int ncr( int n , int r ){

//     int num = factorial(n);

//     int deno = (factorial(r) * factorial(n-r));

//     return num/deno;

// }

// int main (){
  
//     int n , r ;
//     cout << " Enter the value of n :" ;
//     cin>> n ;

//     cout << " Enter the value of r :";
//     cin>> r;

//     cout<< " The Value of ncr is :" << ncr(n,r) << endl;


// }



// #include<iostream>
// using namespace std ;

// void printcounting(int n ){

//     for ( int i=0 ; i<=n ; i++){

//       cout<<i<< endl;

//     }
// } 

// int main (){

//     int n ;

//     cin>>n;

//     printcounting(n);
// }



#include<iostream>
using namespace std;

bool isPrime(int n ){

    for( int i=2;i<=n;i++){
        if (n%i==0){
            return 0;
        }
        return 1;
    }
}

int main (){
    int n ;
    cout<< "Enter the value off n :";
    cin>>n;

    if (isPrime(n)){
        cout<< " is a prime number";
    }
    else{
    cout << " Not a prime number ";
    }
}





