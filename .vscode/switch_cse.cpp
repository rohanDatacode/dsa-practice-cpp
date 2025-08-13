// #include<iostream>
// using namespace std;

// int main(){

//  char ch = 'a';

//  switch(ch)

//  {
//     case 'a' : cout << " first "<< endl;
//      break;

//      case 2 : cout << " second "<< endl;
//      break;

//      default: cout<<" it is default case "<< endl;

//  }

// }




// #include <iostream>
// #include <cstdlib> // for exit()
// using namespace std;

// int main() {
//     while (1) {
//         char ch;
//         cin >> ch;

//         switch (ch) {
//             case 'a':
//                 cout << "First\n";
//                 break;
//             case 'b':
//                 cout << "Second\n";
//                 break;
//                 exit(0); // instantly stops program
//             default:
//                 cout << "Default\n";
//         }
//     }
// }


#include <iostream>
using namespace std;

int main() {
    bool run = true;

    while (run) {
        char ch;
        cin >> ch;

        switch (ch) {
            case 'a':
                cout << "First\n";
                break;
            case 'b':
                cout << "Second\n";
                // run = false; // This will stop the loop
                break;
            default:
                cout << "Default\n";
        }
    }

    cout << "Loop ended, program still running...\n";
}
