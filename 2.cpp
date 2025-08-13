// #include<iostream>
// using namespace std;

// int main() {

//     int i = 1  , n ;
//     cout << " enter the value to print :";
//     cin >> n ;
//    while (i <= n )
//     {
//       int j = 1;
//       while (j<=n)
//        {
//          cout << n-j+1 ;   // opposite number print karane ke liye ham kar skte hai " n-j+1"
//          j =j+1; 
//        }
//        cout << endl;
//        i=i+1;
//     }

// }


// #include<iostream>
// using namespace std;

// int main()
// {
//    int n;
//    int i = 1 ;
//    int count = 1 ;
//    cout << " Enter the value of number :";
//    cin >> n ;

//    while (i<=n)
//    {
//     int j=1;
//    while(j<=n)
//    {
//       cout<<count <<" ";
//       count=count+1;
//       j=j+1;
//    }
//    cout << endl;
//    i=i+1;
// }
// return 0;
// }


#include<iostream>
using namespace std;

int main ()
{
   int n ;
   cout << " enter the value :";
   cin >> n;
 

   int i=1 ;

   while (i<=n)
   {
      int j=1;
      while (j<=i)
      {
         cout<< " * "<< " " ;
         j++;
      }
      cout << endl;
      i++;
   }
return 0;
}


// #include<iostream>
// using namespace std;

// int main ()
// {
//    int n ;
//    cout << " enter the value :";
//    cin >> n;

//    int i = 1;

//    while (i <= n)
//    {
//       int j = 1;
//       while (j <= i)
//       {
//          cout << " * ";
//          j++;
//       }
//       cout << endl;
//       i++;
//    }
//    return 0;
// }
