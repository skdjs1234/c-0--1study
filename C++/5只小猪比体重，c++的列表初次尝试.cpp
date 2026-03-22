#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {300,350,200,400,250};
    int compare=v[0];
    for(int i =0;i<v.size();i++){
        if (v[i] >compare){
            compare=v[i];
        }
    }
    cout<<compare<<endl;
    system("pause");
return 0;
}