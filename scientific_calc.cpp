#include <iostream>
#include <cstdlib> //for using exit function in program
#include <cmath>   //for power (), and sqrt()
using namespace std;
void addition();
void subtraction();
void multiplication();
void division();
void power();
void factorial();
void squareroot();
void logarithm();
void square();

// execution start
int main()
{
    cout << "\t\tWelcome to the World of scientific calculator........!!\n"
         << endl;
    cout << "**************press 0 to quit the program ************\n"
         << endl;

    cout << "Enter 1 for Addition \n";
    cout << "Enter 2 for Subtraction \n";
    cout << "Enter 3 for Multiplication \n";
    cout << "Enter 4 for division \n";
    cout << "Enter 5 for power \n";
    cout << "Enter 6 for factorial \n";
    cout << "Enter 7 for squareroot \n";
    cout << "Enter 8 for logarithm \n";
    cout << "Enter 9 for square \n";
    int choice;

    while (1)
    {
        cout << "Enter your choice ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            exit(0); // for program termination
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            power();
            break;
        case 6:
            factorial();
            break;
        case 7:
            squareroot();
            break;
        case 8:
            logarithm();
            break;
        case 9:
            square();
            break;
        default:
            cout << "******Wrong Choice !! Eneter Valid no. between 0 to 9*******\n\n";
            break;
        }
    }

    return 0;
}

/****************addition() function ************************/
void addition()
{
    cout << "Enter no. you want to add\n";
    float x, y;
    cin >> x >> y;
    cout << "The addition of " << x << "and" << y << "is" << x + y << endl;
}

/****************subtraction() function ************************/
void subtraction()
{
    cout << "Enter no. you want to subtract\n";
    float x, y;
    cin >> x >> y;
    cout << "The subtraction of " << x << "and" << y << "is" << x - y << endl;
}

/****************multiplication() function ************************/
void multiplication()
{
    cout << "Enter no. you want to multiply\n";
    float x, y;
    cin >> x >> y;
    cout << "The multiplication of " << x << "and" << y << "is" << x * y << endl;
}

/****************division() function ************************/
void division()
{
    cout << "Enter no. you want to divide\n";
    float x, y;     //float for getting proper result after division
    cin >> x >> y;
    cout << "The division of " << x << "and" << y << "is" << (float)x / (float)y << endl;
}

/****************power() function ************************/
void power()
{
    cout << "Enter no. base and exponent\n";
    double x, y;    //power() function take in double in argument
    cin >> x >> y;
    cout << "The solution for base " << x << "and exponent" << y << "is" << pow(x, y) << endl;
}

/****************factorial() function ********************/
void factorial()
{
    // n!= n*(n-1)*(n-2)*(n-3).....
    // 0! =1;
    cout << "Enter no. you want to factorial\n";
    int x;
    cin >> x;

    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << x << "is" << fact << endl;
}

/****************squareroot() function ************************/
void squareroot()
{
    cout << "Enter no. you want to squareroot\n";
    double x;
    cin >> x;
    cout << "The squareroot of " << x << "is" << sqrt(x) << endl;
}

/****************logarithm() function ************************/
void logarithm()
{
    cout << "Enter no. you want to find logarithm\n";
    double x;
    cin >> x ;
    cout << "The logarithm of " << x  << "is" << log(x) << endl;
}

/****************square() function ************************/
void square()
{
    //n^2=n*n
    cout << "Enter no. you want to find square of: \n";
    double x;  //power() function takes double type of argument
    cin >> x;
    cout << "The square of " << x <<"is" << pow(x,2)<< endl;
}

