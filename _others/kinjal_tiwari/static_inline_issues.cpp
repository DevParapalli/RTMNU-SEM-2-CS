#include <iostream>
using namespace std;
// TODO: Check this 
// removing the inline doesn't actually make any difference. the C counter is still incremented. (Maybe the compiler choice is the issue ?)

// # cl.exe doesn't cause issues with this exact code (we get 31 each time we run the code with 5 and 6). g++ on the otherhand refuses to inline this. (we get 31 incremented by 1)

inline int product(int a, int b)
{
    static int c = 0; // This executes only once
    c = c + 1;        // Next the function is run, the value of c will be retained.....inline funct. ke saath static variable nahi banate hai(c).
    return a * b + c;
}
int main()
{
    int a, b;
    cout << "Enter two nos.";
    cin >> a;
    cin >> b;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    cout << "The product of two nos is" << product(a, b) << endl;
    /* During recurrsiom and static variable dont use inline function.*/

    return 0;
}