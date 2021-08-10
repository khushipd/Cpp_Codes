#include <iostream>
#include <cmath>

using namespace std;

float calculateSD(float data[],int count);

int main()
{
    
    int i;
    
    int count;
    float data[500];
    cout << "Enter number of elements:\n";
    cin >> count;

    cout << "Enter "<< count <<" elements: ";
    for(i = 0; i < count; ++i)
        cin >> data[i];

    cout << endl << "Standard Deviation = " << calculateSD(data,count);

    return 0;
}

float calculateSD(float data[],int count)
{
    float sum = 0.0, mean, variance = 0.0;

    int i;

    for(i = 0; i < count; ++i)
    {
        sum += data[i];
    }

    mean = sum/count;

    for(i = 0; i < count; ++i)
        variance += pow(data[i] - mean, 2);

    return sqrt(variance/count);
}
