
//leet code first solving problem

#include <iostream>
#include<vector>
using namespace std;

int main() {
    int target,n;
    cout<<"Enther your target :";
    cin>>target;
    cout<<"Number of element :";
    cin>>n;
    vector <int> vec(n);

    for ( int i = 0 ; i<n ; i++)
        {
            cout<<"Enter your element number " << i << " :";
            cin>>vec[i];
        }
    

        
    for (int i = 0 ; i < vec.size();i++)
        {
            for (int j = 1+i ; j < vec.size() ; j ++)
                {
                    if ( target == vec[i]+vec[j])
                    {
                        cout<<"["<<i<<","<<j<<"]";
                    }
                }
        }

    return 0;
}