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

// This design pattern is a structural pattern more specifically the facade pattern.
// The facade pattern hides the system's complex design and allows the user to access
// eveything the system does with a very simple interface.
// The pattern does something similar to that of inheritance except instead of the classes
// being connected they are called by another class that is used like middle
// man to connect the user to the functions of the other classes.

class controller
    {

    public:
        controller();
        ~controller();
        void controllerOn();
        void controllerOff();

    protected:

    };

class systemStart
    {


    public:
        systemStart();
        ~systemStart();
        void consoleOn();
        void consoleOff();

    protected:

    };



class procastinate
    {

    controller start;
    systemStart ignoreAssignment;


    public:
        procastinate();
        void startPlaying();
        void stopPlaying();

    protected:

    };


int main()
    {

    procastinate wasteTime;

    wasteTime.startPlaying();
    wasteTime.stopPlaying();

    }// int main()

controller::controller()
    {

    }// controller::controller()

void controller::controllerOn()
    {

    cout << "The contoller is on." << endl;

    }// void controller::controllerOn()

void controller::controllerOff()
    {

    cout << "The controller is off." << endl;

    }// void controller::controllerOff()

controller::~controller()
    {



    }// controller:: ~controller()

systemStart::systemStart()
    {



    }// systemStart::systemStart()

void systemStart::consoleOn()
    {

    cout << "The system is on." << endl;

    }// void systemStart::consoleOn()

void systemStart::consoleOff()
    {

    cout << "The system is off." << endl;

    }// void systemStart::consoleOff()

systemStart::~systemStart()
    {



    }// systemStart::~systemStart()

procastinate::procastinate()
    {



    }// procastinate::procastinate()

void procastinate::startPlaying()
    {

    start.controllerOn();

    ignoreAssignment.consoleOn();

    }// void procastinate::startPlaying()

void procastinate::stopPlaying()
    {

    start.controllerOff();

    ignoreAssignment.consoleOff();

    }// void procastinate::stopPlaying()
