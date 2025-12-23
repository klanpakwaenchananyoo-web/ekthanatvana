#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    float value;
    
    ifstream source("score.txt"); 

    while (source >> value) 
    {
        sum += value;
        sum_of_square += pow(value, 2);
        count++;
    }

   cout << "Number of data = " << count << "\n";
        
       
        cout << setprecision(3); 

        float mean = sum / count;
        cout << "Mean = " << mean << "\n";
        
        float standard_deviation = sqrt((sum_of_square / count) - pow(mean, 2));
        cout << "Standard deviation = " << standard_deviation << endl;
        source.close();
    return 0;
}