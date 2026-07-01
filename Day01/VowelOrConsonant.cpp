// Vowel Or Consonant check in a sentence

#include<iostream>
using namespace std;

void VowelOrConsonant(string sentence) {
    string vowel = "", consonant = "";
    for(char s : sentence) {
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') {
            vowel += s;
        } else {
            consonant += s;
        }
    }
    cout << "In this sring vowel is: " << vowel << endl;
    cout << "In this sring consonant is: " << consonant;
}

int main() {
    string sentence;

    cout << "Enter the sentence: ";
    getline(cin, sentence);

    VowelOrConsonant(sentence);

    return 0;
}