// CS2_Module1_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void practiceArrays();
void populateNumbers(int* numbers, int count);

int main() {
    practiceArrays();
    return 0;
}

void practiceArrays() {
    int count;
    cout << "Enter num of nums: ";
    cin >> count;

    int* numbers = new int[count];

    populateNumbers(numbers, count);
    
    cout << "Numbers entered:" << endl;
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << endl;
    }

    int sum = 0;
    int max = numbers[0];
    int min = numbers[0];
    double average;

    for (int i = 0; i < count; i++) {
        sum += numbers[i];
        if (max < numbers[i])
            max = numbers[i];
        if (min > numbers[i])
            min = numbers[i];
    }

    average = static_cast<double>(sum) / count;
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    delete[] numbers;
}

void populateNumbers(int* numbers, int count) {
    for (int i = 0; i < count; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> numbers[i];
    }
}


void practicePointers() {
   
    string months[12] = {
        "January", "Febrauary", "March", "April", "May", "June", "July", "AUgust", "September", "October", "November", "December"
    };
   
    cout << "\nIterating forwards through months using pointers:" << endl;
    for (string* ptr = months; ptr < months + 12; ptr++) {
        cout << *ptr << endl;
    }

    // Iterate through months array using pointers (backwards)
    cout << "\nIterating backwards through months using pointers:" << endl;
    for (string* ptr = months + 11; ptr >= months; ptr--) {
        cout << *ptr << endl;
    }
}


void practiceStructs() {

}


