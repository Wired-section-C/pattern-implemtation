#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the side: ";
    cin >> n;
    // giving 3 chance for invalid trial
    for(int i=0;i<2&&n<=0;i++){
    cout << "Error invalid input \nEnter the valid side: ";
    cin >> n; 
    }
    if(n<=0)
    return 0;
    int space=n-2 , letter(1);
    for(int i=0;i<(n-1)/2;i++){
        for(int j=0;j<letter;j++){
            cout << char(65+j)<<" ";
        }
        for(int j=0;j<space&&space>=0;j++){
            cout <<"  ";
        }
        for(int j=letter;j>0;j--){
            cout<<char(64+j)<<" ";;
        }
        space=space-2;
        letter++;
        cout<<endl;
    }//to make the middle row
    for(int i=0;i<(n%2==1?1:2);i++){
        for(int j=0;j<=(n-1)/2;j++){
            cout << char(65+j)<<" ";
        }
        for(int j=n/2;j>0;j--){
            cout<<char(64+j)<<" ";
        }
        cout << endl;
    }
    space=(n%2==1?1:2); // to function for both odd and even input
    letter=n%2==1?n/2:n/2-1; // to function for both odd and even input
    // to make last half row
    for(int i=0;i<(n-1)/2;i++){
        for(int j=0;j<letter;j++){
            cout<<char(65+j)<<" ";;
        }
        for(int j=0;j<space;j++){
            cout <<"  ";
        }
        for(int j=letter;j>0;j--){
            cout << char(64+j)<<" ";;
        }
        space=space+2;
        letter--;
        cout << endl;}
    }
