/**
 * Cashion Penha
 * Lab 5
 * Method of Least Squares of Linear Regression
 * 04/10/2017
 */

/**< Preprocessor directives */
#include <iostream>
#include <math.h>

/**< This includes commonly used tools such as cout, cin. It prevents repetition of "std" before each case*/
using namespace std;

/**< Main function of type int with nothing being passed to it*/
int main(void)
{
    /**< Declaring variables */
    double x[100]={0},y[100]={0},Ex=0,Ey=0,Ex2=0;
    double averagex=0,averagey=0,m=0,c=0,Exy=0;
    char s1, s2, s3;
    int i=0;
    int n=0;

    /**< Requesting user for information & storing it */
    cout << "\nPlease enter the number of data points you wish to use in the calculations: ";
    cin >> n;

    cout << "\n";

    /**< Requesting user to specify the data points, for each values*/
    for (i=0; i<n; i++)
    {
        cout << "Please enter an integer to specify the data point " << i+1 << " (x, y):";
        cin >> s1 >> x[i] >> s2 >> y[i] >> s3;
    }

    /**< For loop to calculate the product sum of each */
    for (i=0; i<n; i++)
    {
        Ex=Ex+x[i];
        Ey=Ey+y[i];
        Exy=Exy+x[i]*y[i];
        Ex2=Ex2+pow(x[i],2);
    }

    /**< Calculating the average of each x and y values */
    averagex=Ex/n;
    averagey=Ey/n;

    /**< Applying themethod of least squares formula */
    m=((n*Exy)-(Ex*Ey))/((n*Ex2)-pow(Ex,2));
    c=averagey-(m*(averagex));

    /**< Displaying values to the user */
    cout << "\nThe sum of the x values is: " << Ex << endl;

    cout << "The sum of the y values is: " << Ey << endl;

    cout << "\nThe sum of product xy is: " << Exy << endl;

    cout << "The sum of x^2 values is: " << Ex2 << endl;

    cout << "\nThe average of the x values is: " << averagex << endl;

    cout << "The average of the y values is: " << averagey << endl;

    cout << "\nThe slope m is: " << m << endl;

    cout << "The intercept c is: " << c << endl;

    return 0;
}
