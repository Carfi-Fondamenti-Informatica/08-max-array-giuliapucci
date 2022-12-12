#include <iostream>
using namespace std;
float x=0;
int main(){
  int n=0; cin >> n;
    float numeri[n];
    for (int i=0; i<n; i++){
     cin >> numeri[i];
    }
    for (int i=0; i<n; i++){
        float m = maggiore(numeri[i], numeri[i-1]);
        if (m>x){
            x=m;
        }
    }
    cout << x;
  return 0;
}
