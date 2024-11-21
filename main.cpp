// Pranav Pramod
// 11/21/2024
// Functions Lab

// Includes
#include<iostream>
using namespace std;

// Declarations
void countdown();
void customGreet(string name, int times);
int getFavoriteNumber();
float calculateAverage(int a, int b, int c);

int main()
{
    // Variables
    string name;
    int times, a, b, c;
    float average;

    // Calls
    countdown();

    cout << endl;

    // User Input
    cout << "Name: " << endl;
    cin >> name;
    cout << "Times: " << endl;
    cin >> times;
    customGreet(name, times);

    cout << endl;

    // Print Favorite Number
    int favNumber = getFavoriteNumber();
    cout << "Your favorite number is: " << favNumber << endl;

    cout << "Enter a number: "<< endl;
    cin >> a;
    cout << "Enter a number: "<< endl;
    cin >> b;
    cout << "Enter a number: "<< endl;
    cin >> c;

    // Print Average
    average = calculateAverage(a, b, c);
    cout << "Average: " << average << endl;

    return 0;
}

// Definitions
void countdown() {
    // For loop that prints a countdown.
    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }
    cout << "Lift Off!" << endl;
}

void customGreet(string name, int times) {
    // For loop that prints name this many times
    for (int i = 0; i < times; i++) {
        cout << "Hello, " << name << "!" << endl;
    }
}

int getFavoriteNumber () {
    // Returns a number
    return 7;
}

float calculateAverage(int a, int b, int c) {
    // Calculates an average
    return (a + b + c) / 3;
}