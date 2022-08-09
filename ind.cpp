#include <iostream>


using namespace std;


int main(){
    int n;
    cin >> n;
    int A[n];
    for(int m = 0; m < n ; m++){
        cin >> A[m]; 
    }
    int vec[n];
    bool troca = true;
    for(int j = 0; j < n; j++){
        vec[j] = A[j];
    }
    while(troca == true){
        troca = false;
        
        for(int i = 0; i <= n-1; i++){
            if(A[i] > A[i+1]){
                swap(A[i], A[i+1]);
                troca = true;
            }
        }
    }
    int ind[n];
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n; k++){
            if(A[l] == vec[k]){
                ind[l] = k;
                cout << ind[l];
                if(ind[l] != ind[n-1]) cout << " ";
            }
        }
    }
    cout << endl;
}    
