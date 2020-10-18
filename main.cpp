/**
 * main.cpp
 * Exercise1_A
 * @author Russell Taylor
 * @date 6/9/20
 * CSC 240 C++ Data Structures (Summer 2020)
 *
 * Assignment: Chinese Calendar
 * "Warm up with input from/to console: year (integer number). You
 * can assume that input is meaningful: one non-negative integer.
 * Ask the user to enter a year many times.
 *
 * The Chinese calendar runs on a cycle of 12 years and each year
 * corresponds to one of 12 animals: Rat, Ox, Tiger, Rabbit, Dragon,
 * Snake, Horse, Sheep, Monkey, Rooster, Dog, or Pig. The order of
 * the sequence of animals never changes. The year of 2020 is the
 * year of the Rat. What animal will mark the year 2100? What animal
 * marked the year 2018? Do calculations on paper first. It will
 * help you to write the program. Hint: for this exercise you need
 * to use an array, a loop, and the operators %, <<, and >>."
 *
 * Input: User enters a year as an integer
 * Output: Returns the equivalent Chinese year
 * Given the year 2100, the output should be "2100 is the year of the Monkey"
 * Given the year 2018, the output should be "2018 is the year of the Dog"
 */

#include <iostream>
using namespace std;

int main() {
    char answer = 'y';
    int year;

    while (answer == 'y') {
        cout << "Enter a year: ";
        cin >> year;

        string yearName[] = { "Monkey", "Rooster", "Dog", "Pig", "Rat",
            "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep" };

        cout << year << " is the year of the " << yearName[year % 12] << endl;

        cout << endl << "Again? y/n: ";
        cin >> answer;
        cout << endl;
    }

    return 0;
}
