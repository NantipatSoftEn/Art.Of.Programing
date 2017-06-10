#include "cstdio"
#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {

        string input;

        cout << "Please enter a string: ";
        cin >> input;

        /* rbegin() = return reverse iterator last charecter
           rend()=returns a reverse  first charecter */

        if (input == string(input.rbegin(), input.rend())) {
                cout << input << " is a palindrome";
        }
        else
                cout << "Not !!!" <<endl;
        return 0;
}
