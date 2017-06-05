#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,i,cnt=0;
    cout << "Enter number : ";
    cin >> x;

    for(i=2;i<=sqrt(x);i++){
        if(x%i == 0){
            ++cnt;
        }
    }

    if(cnt == 0){
        cout << "Given Number " << x << " is Prime Number \n";
    }
    else
        cout << "Given Number " << x << " is not Prime Number \n";
    return 0;
}
