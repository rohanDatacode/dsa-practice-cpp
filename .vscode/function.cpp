// #include<iostream>
// using namespace std;


// int power(int num1 , int num2){
    

//     int ans =1;

// for( int i=1;i<=num2;i++){

//      ans = ans*num1;
// }
// return ans;

// }

// int main(){
// int a , b;
// cin>>a>>b;

// int answer = power(a,b);
// cout<< answer << endl;


// int c , d;
// cin>>c>>d;

//  answer = power(c,d);
// cout<< answer << endl;


// }



#include<iostream>
using namespace std;


bool isEven (int a ){

    if (a & 1){

        return 0;
    }

    else {

        return 1;
    }

}


int main (){

  int a ;
  cin>> a;

   if (isEven(a)){

    cout << " number is even ";
   }

   else {

    cout << " number is odd";
   }
  return 0;

}