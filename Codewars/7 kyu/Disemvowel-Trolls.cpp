// https://www.codewars.com/kata/52fba66badcd10859f00097e/train/cpp

// take a new string, 'result'
// iterate through the string given in argument
// if you find any vowel, upper or lowercase, simply continue
// else append to the result string

#include <iostream>

using namespace std;

string disemvowel(const string &str)
{
    string result = "";
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
        {
            continue;
        }
        result += str[i];
    }
    return result;
}