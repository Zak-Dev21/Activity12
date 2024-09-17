
#include <iostream>

using namespace std;


int main()
{
    int positive_num;

    cout << "Enter a postive number: " << endl;
    cin >> positive_num;

    for (int i = positive_num - 1; i > 1; i--) {
        positive_num *= i;
        cout << positive_num;
    }

    cout << positive_num;

}
