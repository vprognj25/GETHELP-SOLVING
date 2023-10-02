#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int arr[5]={2,11,14,15,7};
    int n;
    cout<<"enter the target sum :- ";
    cin>>n;
    for (int i = 0; i<5; i++) {
        for (int j = (i + 1); j<=5; j++) {
            if (arr[i] + arr[j] == n) {
            }
        }
    }
 
    return 0;
}

       
    

