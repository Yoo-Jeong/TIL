#include <iostream>

using namespace std;

int main(void){
    int coin[6] = {500, 100, 50, 10, 5, 1};
    int pay;
    
    cin>>pay;
    
    int total = 1000 - pay;
    int count = 0;
    
    for(int i=0; i<6; i++){
        while(total>=coin[i]){
            total -= coin[i];
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}