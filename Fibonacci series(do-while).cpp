#include <iostream>
using namespace std;

int main() 
{
    int N, i = 1;
    cout << "Enter N: ";
    cin >> N;

    int a = 0, b = 1;
    do 
	{
        cout << a << endl;
        int next = a + b;
        a = b;
        b = next;
        i++;
    } 
	while(i <= N);

    return 0;
}
