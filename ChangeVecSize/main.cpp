#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>vector1;
    int x;
    cout << "Vector size at the beginning: " << vector1.size() << endl;
    cout << "What size would you like your vector to be? " << endl;
    cin >> x;
    vector1.resize(x);
    cout << "Vector size after: " << vector1.size() << endl;
    for(int i=0;i<=x;i++)
    {
        cout << "Enter element number " << i << " :";
        cin >> vector1[i];
    }
    for(int i=0;i<=x;i++)
    {
        cout << "Your element number " << i << " :" << vector1[i] << endl;
    }





    return 0;
}
