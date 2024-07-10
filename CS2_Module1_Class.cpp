// CS2_Module1_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void practiceArrays();
void practicePointers();
void populateNumbers(int* numbers, int count);

int main() {
    practiceArrays();
    practicePointers();
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
    cout << endl << "Sum: " << sum << endl;
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
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name; 
    cout << "Enter your age: ";
    cin >> age;
        
    cout << "Name: " << name << endl;
    cout << "Address of name variable: " << static_cast<void*>(&name) << endl;

    cout << "Age: " << age << endl;
    cout << "Address of age variable: " << static_cast<void*>(&age) << endl;

    string months[12] = { 
        "January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"
    };
    cout << "Months Foward" << endl;
    for (int i = 0; i < 12; ++i) {
        cout << *(months + i) << endl; 
    }
    cout << "Months Backwards" << endl;
    for (int i = 11; i >= 0; --i) {
        cout << *(months + i) << endl;
    }
}





