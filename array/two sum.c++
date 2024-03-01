#include<iostream>
using namespace std;
int main(){
    int num[4] = {2,7,11,15};
    int target[1]={9};
    int i,j;
    for (i=0;i<4;i++)
    {   
        for (j=0;j<4;j++){
        if ( num[i] + num[i+j] == target[0] )
        {
            cout<<"result ["<<num[i]<<","<<num[i+j]<<"]"<<endl;

        }
    }
    }
    return 0;
}