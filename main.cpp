#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1
video: Chapter 2 - Part 3
 Declarations Tasks
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 
 int - integer
 char - character
 float - decimal number 
 double - 8 byte float
 bool - true/false
 void - returns nothing
 

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    //ints
    int day = 1;
    int week = 7;
    int month = 30;

    //chars
    char alpha = 'A';
    char beta = 'B';
    char omega = 'Z';

    //float
    float literToGallon = 0.264f; // when are the appended f's necessary? 
    float gallonToLiter = 3.789f;
    float meterToFeet = 3.281f;

    //double
    double christmas = 12.25;
    double julyFourth = 7.04;
    double third = -0.333333;

    //bool 
    bool isCoding = 1;
    bool isHungry = 0;
    bool musicPlaying = 1;

    
    ignoreUnused(number,day,week,month,alpha,beta,omega,literToGallon,gallonToLiter,meterToFeet,christmas,julyFourth,third,isCoding,isHungry,musicPlaying); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool lightSwitch(int lightID, bool isLightOn = 0)
{
    ignoreUnused(lightID, isLightOn);

    return {};
}
/*
 2)
 */
double calculateTip(double subTotal, double tipPercent = 0.18)
{
    ignoreUnused(subTotal,tipPercent);

    return {};
}
/*
 3)
 */
int subtractInt(int minuend, int subtrahend)
{
    ignoreUnused(minuend,subtrahend);

    return {};
}

/*
 4)
 */
char resetCharacter(char c = 'a') 
{
    ignoreUnused(c);

    return {};
}
/*
 5)
 */
float calculateGPA(char englishGrade, char mathGrade, char scienceGrade, char historyGrade, char electiveGrade, float scale = 4.0)
{
    ignoreUnused(englishGrade,mathGrade, scienceGrade, historyGrade, electiveGrade, scale);

    return {};
}
/*
 6)
 */
void chainGang(int ballOn = 25, int down = 1, int firstDownMarker = 35)
{
    ignoreUnused(ballOn, down, firstDownMarker);
}
/*
 7)
 */
int setTimer(int seconds)
{
    ignoreUnused(seconds);
    
    return {};
} 
/*
 8)
 */
void playFretNote(char instrumentString, int instrumentID = 1, int fret = 0)
{
    ignoreUnused(instrumentID, instrumentString, fret);
}
/*
 9)
 */
bool isDogHungry(bool receivedTreat, int hoursSinceLastMeal = 6, bool isBarking = 0)
{
    ignoreUnused(hoursSinceLastMeal, receivedTreat, isBarking);
    
    return {};
}
/*
 10)
 */
double calculateInterestRate(double loanAmount, double monthlyLoanPayment, int monthLoanTerm = 36)
{
    ignoreUnused(loanAmount, monthlyLoanPayment, monthLoanTerm);

    return {};
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    lightSwitch(3,1);
    //2)
    calculateTip(47.83, 0.25);
    //3)
    subtractInt(53, 24);
    //4)
    resetCharacter();
    //5)
    calculateGPA('b','a','a','c','a');
    //6)
    chainGang(35, 2, 49);
    //7)
    setTimer(90);
    //8)
    playFretNote('a', 2, 7);
    //9)
    isDogHungry(1, 3, 1);
    //10)
    calculateInterestRate(15000, 350, 48);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
