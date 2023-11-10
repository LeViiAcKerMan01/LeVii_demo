#include<iostream>
using namespace std;

int main()
{
    int luckyNum[3][2]={(2,4), (3,11), (11,4)};
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<luckyNum[i][j];

        }
        cout<<endl;
    }
    return 0;
}