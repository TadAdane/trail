#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int max_iter;
    bool method;
    long double approximated_pi = 0;
    cout << "Choose method: (0 - Leibniz, 1 - Wallis): " << endl;
    cin >> method;
    cout << "Chosen " << method << " method" << endl;
    cout << "Choose number of iterations: "<< endl;
    cin >> max_iter;
    cout << "Chosen " << max_iter << " iterations" << endl;
    if(method == 0){
        for(int i=0; i < max_iter; i++){
            long double num = pow(-1, i) / ((2*i)+1);
            approximated_pi+=num;
        }

        approximated_pi*=4;
    }
    else{
        approximated_pi = 1;

        for(int i=1; i < max_iter; i++){
            long double num2 = 4*pow(i, 2) / (4*pow(i, 2) - 1);
            approximated_pi*=num2;
        }

        approximated_pi*=2;
    }
    cout << "Result: " << approximated_pi << endl;
}
