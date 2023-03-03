#include <iostream>

using namespace std;

void SayHello(string name);


int main()

{
    string firstName, secondName, fathersName, mothersName, mothersFamily, birthPlace;
    int birthYear = 0, birthMonth = 0, birthDay = 0;
    float fatherAge = 0.0, motherAge = 0.0, age = 2022 - birthYear;
    cout << "Please enter your First name and Second name respectively" << endl;
    cin >> firstName >> secondName;
    cout << "Please enter your Father's name and Father's age respectively" << endl;
    cin >> fathersName >> fatherAge;
    cout << "Please enter your Mother's name, Mother's Family name and Mother's age respectively" << endl;
    cin >> mothersName >> mothersFamily >> motherAge;
    cout << "Please enter your Birth place, Birth year, month and day respectively" << endl;
    cin >> birthPlace >> birthYear >> birthMonth >> birthDay;
    cout << "Citizen " << firstName << "" << secondName << "was born in " << birthPlace << "" << age << " years ago";
    cout << "His mother, mrs " << mothersName << " (of) " << mothersFamily << " was " << birthYear - (2022 - motherAge);
    cout << " years old then and his father " << birthYear - (2022 - fatherAge) << " years old." <<  endl;

    cout << secondName << firstName << " till 12.10.2015 lived approximately " << birthYear*365 + birthMonth*30 + birthDay << "days." << endl;
    cout << "His father is " << fatherAge/age << " times older than him and mother " << motherAge/age << " times." << endl;
    cout << "Its is and old family, because together they have " << age + fatherAge + motherAge << " years." << endl;


    int luckyNums[] = {67,68,68,90};
    cout << luckyNums[2] << endl;

    int dotfactory[] = {0, 2, 2};
    cout << dotfactory [2];

    cout << "Hello World!" << endl;

    string perks = "jamie";
    cout << perks << endl;

    SayHello("tad");

    if (6 >= 5 || 6 <= 7);
    {
        cout << "Done!"<<  endl;
    }

    bool isRight = true;

    if (isRight)
    {
        cout << "You are a right";
    }
    else
    {
        cout << "You are not right";
    }

    int x=2;
    cout << ++x;

    return 0;
}

void SayHello(string name){
    cout << "hello" << name << endl;
}
