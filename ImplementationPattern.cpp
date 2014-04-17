//Matt Rawson
// programing 240
// 4/16/2014
#include <math.h>  // Bunch of Libraries
#include <iostream>
#include <time.h>
#include <iomanip> // end of libiaries
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

// This design pattern is the implementation pattern. The implementation pattern is used
// to create a family of algorithms and make them switchable for clients and other algorithms
// to be indepent from other clients using them.
// This type of design uses inheritance to connect each class except for the one
// that calls the others.

class calculator
    {

    public:
         virtual int userinput ( int firstNum, int secondNum ) = 0;

    protected:

    };

    class addition:public calculator
    {

    public:
        int userinput( int firstNum, int secondNum )
            {

            cout << "adding" << endl;

            return firstNum + secondNum;

            }// int userinput( int firstNum, int secondNum )

    protected:

    };

class subtraction:public calculator
    {

    public:
        int userinput( int firstNum, int secondNum )
            {

            cout << "subtracting" << endl;

            return firstNum - secondNum;

            }// int userinput( int firstNum, int secondNum )


    protected:

    };

class multiplication:public calculator
    {

    public:
        int userinput( int firstNum, int secondNum )
            {

            cout << "multiplying" << endl;

            return firstNum * secondNum;

            }// int userinput( int firstNum, int secondNum )

    protected:

    };

class dividison:public calculator
    {

    public:
        int userinput( int firstNum, int secondNum )
            {

            cout << "dividing" << endl;

            return firstNum / secondNum;

            }// int userinput( int firstNum, int secondNum )

    };

class howItWorks
    {

    public:
        howItWorks( calculator& newCalculator ):computerCalculator( &newCalculator )
            {



            }// howItWorks(calculator& newCalculator):computerCalculator( &newCalculator )

        void setCalculator( calculator& newCalculator )
            {

            computerCalculator = &newCalculator;

            }// void setCalculator( calculator& newCalculator )

        int userinputcalculator( int firstNum, int secondNum )
            {

            return computerCalculator->userinput( firstNum, secondNum );

            }// int useCalculator( int firstNum, int secondNum )

    private:
        calculator* computerCalculator;

    };

int main()
{
    int firstNum = 0;
    int secondNum = 0;
    char keepGoing = 'n';
    int whatDoYouNeedToDo = 0;
    int whatNumberEquals = 0;
    addition add;
    subtraction subtract;
    multiplication multiply;
    dividison divide;
    howItWorks howItWorksPart2( add );

    while( keepGoing != 'Y' && keepGoing != 'y')
        {

        cout << "what do you need to use the calculator for?" << endl;

        cout << " 1 = adding " << endl;

        cout << " 2 = subtracting " << endl;

        cout << " 3 = multiplying " << endl;

        cout << " 4 = dividing " << endl;

        cin >> whatDoYouNeedToDo;

        switch( whatDoYouNeedToDo )
            {

            case(1):
                cout << "Enter the first num." << endl;
                cin >> firstNum;
                cout << "Enter the second num." << endl;
                cin >> secondNum;
                howItWorksPart2.setCalculator( add );
                whatNumberEquals = howItWorksPart2.userinputcalculator( firstNum, secondNum );
                break;

            case(2):
                cout << "Enter the first num." << endl;
                cin >> firstNum;
                cout << "Enter the second num." << endl;
                cin >> secondNum;
                howItWorksPart2.setCalculator( subtract );
                whatNumberEquals = howItWorksPart2.userinputcalculator( firstNum, secondNum );
                break;

            case(3):
                cout << "Enter the first num." << endl;
                cin >> firstNum;
                cout << "Enter the second num." << endl;
                cin >> secondNum;
                howItWorksPart2.setCalculator( multiply );
                whatNumberEquals = howItWorksPart2.userinputcalculator( firstNum, secondNum );
                break;

            case(4):
                cout << "Enter the first num." << endl;
                cin >> firstNum;
                cout << "Enter the second num." << endl;
                cin >> secondNum;
                howItWorksPart2.setCalculator( divide );
                whatNumberEquals = howItWorksPart2.userinputcalculator( firstNum, secondNum );
                break;

            default:
                cout << "That is not an option." << endl;
                break;

            }// switch( whatDoYouNeedToDo )

            cout << "You answer is: " << whatNumberEquals << endl;

            whatNumberEquals = 0;

            cout << "Would you like to stop? Enter a Y or y to stop." << endl;

            cin >> keepGoing;

        }// while( keepGoing != 'Y' || keepGoing != 'y')

}// int main()

