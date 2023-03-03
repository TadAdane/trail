/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int Exercise1(char* arr, int x){


     // Loop for reading each character and updating them to be a capital letter ( in range of 65 - 90)
    
        int k = (int)arr[x] - 32;
        // cout << arr[0];
        // cout << k<< " ";

        if (k >= 65 && k <= 90){ // Condition for when a character other than small letters is inputed.
            cout << (char)k;
        }
        else if (k == 32){
            cout << (char)k;
        }
        else {
            cout << arr[x];
        }
            if (x == 0){
            return 0;
        } else {
            return Exercise1(arr, x - 1);
        }
    
 //   return 0;
}


int main()
{
    cout << "PLease enter string" << endl;

    string input_word;
    //cin.ignore();
    getline (cin, input_word); // can't use cin >> because it reads spaces as termintors

    int i = input_word.length(); // get string character length

    char input_word_char[i]; // declare new character for to change string to character; must be +1 because

    strcpy(input_word_char, input_word.c_str()); // Copying the string to the character arrray
    
    reverse(input_word_char, input_word_char + i); // Reverse Array cause recursion works backward
    
    Exercise1(input_word_char, i);
    //cout<<"Hello World";

    return 0;
}




/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int swap_array(int* arr, int x){
    
    for (int j = 0; j < x; j++){
        if (arr[j] > arr[j + 1]){
            swap(arr[j], arr[j + 1]);
        }
    }
    
    if (x == 0){
        return 0;
    }else {
        return swap_array(arr, x - 1);
    }
}

void Exercise2(){
    int array_sort[] = {1, 5, 8, 2, 3, 7, 7, 9, 13};
    int i = sizeof(array_sort)/sizeof(array_sort[0]);

    swap_array(array_sort, i);
    
    cout << "The array is: ";
     for (int j = 1; j < i + 1; j++){
        cout << array_sort[j] << " ";
    }
}


// void print_array(int* arr, int x){
//     for (int j = 0; j < x; j++){
//         cout << arr[j] << " ";
//     }
//     cout <<"\n";
// }

int main()
{
    // int array_sort[] = {1, 5, 8, 2, 3};
    // int i = sizeof(array_sort)/sizeof(array_sort[0]);

    // swap_array(array_sort, i);
    
    // cout << "The array is: ";
    //  for (int j = 0; j < i; j++){
    //     cout << array_sort[j] << " ";
    // }
    //cout <<"\n";
    //print_array(array_sort, i);
    Exercise2();
    return 0;
}





/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int letter_occurance (char* arr, int x){
    
     // Loop for reading each character and updating them to be a capital letter ( in range of 65 - 90)
    int count = 0;

     
   // int k = (int)arr[x];
    //cout <<k<< (int)arr[x];
    //cout << arr[x];
    
    for (int j = 0; j <= x; j++){
       //cout << arr[j];
    // if ((int)arr[x] == 32){
    //     continue;
    // }
    if(arr[x] == arr[j]){ // Condition for when a character other than small letters is inputed.
        count++;
        }
        //cout <<"\n" << count;
    }
    
    //if (arr[x] != '0'){
    cout << arr[x] << ":"<< count << endl;
    
    //count = 0;]
    
    //}
    
    if (x == 0){
         return 0;
    }else {
         return letter_occurance(arr, x - 1);
     }
    
}


void Exercise3(){
    cout << "Please enter a string\n";
    string input_word;
    //cin.ignore();
    getline (cin, input_word); // can't use cin >> because it reads spaces as termintors

    int i = input_word.length(); // get string character length

    char input_word_char[i]; // declare new character for to change string to character; must be +1 because
    int sort_array[i];

    // cout << "Please enter value to get number of occurance\n";

    // char occurance;
    // cin >> occurance;
    

    strcpy(input_word_char, input_word.c_str()); //Copying the string to the character arrray

    reverse(input_word_char, input_word_char + i);
    letter_occurance(input_word_char, i - 1);

    //cout << "The letter " << occurance << " occurs "<< count <<" times"<< endl;
}

int main()
{
//    cout<<"Hello World";
Exercise3();
    return 0;
}

// Doesn't avoid repeated letters
















/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

float question1(float* arr, int x){
    
    // float sum = 0.0;
    // float mean = 0.0;
    // sum = sum + (1.0/(float)arr[x]);
    
    //1/float(x)+(calcul(x - 1))
   // float c = 1.0/arr[x];
    
    if (x < 0){
        //mean = 3.0/sum;
        return 0;
    } else {
        return 1.0/arr[x] + question1(arr, x - 1);
        //return question1(arr, x - 1);
    }
    
}

int main()
{
    int harmonic_size = 2;
    float harmonic_array[harmonic_size];
    
   // float sum = 0.0, mean = 0.0;
    for (int j = 0; j <= harmonic_size; j++){
        cin >> harmonic_array[j];
    }
    //cout << question1(harmonic_array, harmonic_size)<<"\n";
    // float mean = 0.0;
    cout << (harmonic_size + 1)/question1(harmonic_array, harmonic_size);
    // mean = harmonic_size/sum;
    // cout << mean;
    
    return 0;
}






















/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void Question4 (char* arr, int x){
    int i = 0;
    int j = 25;
    do{ 
        int e = (int)arr[i];
        int c = (e - 97)*2;
        int d = (122 - e)*2;
        for (j; j > 0; j--){
            
            if (e <= 109){
                if (e == 32){
                cout << " ";
                }else{
                int a = e + (j - c);
                cout << (char)a;
                }
                i++;
                //j -= 2;
                //--j;
                break;
               
            }else if (e >= 109){
                int a = e - (j - d);
                cout << (char)a;
                i++;
                // j -= 2;
                break;
            }
        }
    }while(i < x);

}

int main()
{
    // string cypher_string = "abcdefghi zxcvb";
    // //for (int j = 0; j < 26; j++){
    //     for (int i = 0; i < cypher_string.length(); i++){
    //         if (cypher_string[i] != ' '){
    //             char a = char(int(cypher_string[i] + 25 - 97)%26 + 97);
    //             cout << a;
    //         }else{
    //             cout << ' ';
    //         }
    //     }
        //cout << endl;
    //}
    string cypher_string;
    getline (cin, cypher_string); // must always be immediately after the declared string... has some complications!
    
    int n = cypher_string.length();
    
    char cypher_input[n + 1];
    
    
    
    strcpy(cypher_input, cypher_string.c_str());
    //int i;
    // for (i = 0; i < sizeof(cypher_input); i++) {
    //     cypher_input[i] = cypher_string[i];
    //     cout << cypher_input[i];
    // }
    
    // for (int i = 0; i < n; i++){
    //     cout << cypher_input[i] << " ";
    // }
    //cout << cypher_input[2];
    
    Question4(cypher_input, n);
     return 0;
}


