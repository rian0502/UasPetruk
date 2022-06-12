#include <bits/stdc++.h>

using namespace std;


void funct(int* a, int n){
    int sum = 0;    

    for (int i = 0; i < n; i++){ 
        sum += *(a-(n-i));  
    }
    cout<<"sum : "<<sum<<endl;
}


int main(int argc, char const *argv[]){

    
    return 0;
}

