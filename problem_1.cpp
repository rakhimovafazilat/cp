#include <iostream>
#include <iomanip>
using namespace std;
    float fazilat(float x, float y){
        return x/y;
    }
int main (){
    float j,s;
    cin>>j;
    cin>>s;
    
    cout<< setprecision(3) <<fazilat(j,s);
    return 0;
}
