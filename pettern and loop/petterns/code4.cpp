//peramid pattern
#include<iostream>
using namespace std;
int main(){
    int n=8;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

//holow diamond pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for half of the diamond: ";
    cin >> rows;

    // 1. Print the Upper Half
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print stars and hollow spaces
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    // 2. Print the Lower Half
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print stars and hollow spaces
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
