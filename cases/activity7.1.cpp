#include<iostream>
#include<string>

using namespace std;

int main(){

    float numbers[10];
    float total = 0;
    float average, min, max; 
    string inputNav[] = {"1st  ", "2nd  ","3rd  ","4th  ","5th  ",
                        "6th  ", "7th  ", "8th  ", "9th  ","10th " };

    /* request inputs */
    int index = 0;
    while(index < 10)
    {
        cout << " Please enter the " + inputNav[index] + "number \t: ";
        cin >> numbers[index];
        index++;
    }

    /* calculate average */
    int t =0;
    while(t<10)
    {
        total = total + numbers[t];
        t++;
    }
    average = total/10;


    /* find smallest and largest number */
    min = numbers[0];
    max = numbers[0];
    for (int z = 0; z < 10; z++)
    {
        if(min>=numbers[z])
        {
            min = numbers[z];
        }
        if(max<=numbers[z])
        {
            max = numbers[z];
        }
    }

    /* print -> average, smallest, largest*/
    cout << "\n\n";
    cout << " Average  : \t" << average << "\n\n";
    cout << " Smallest : \t" << min << "\n";
    cout << " Largest  : \t" << max << "\n";
    
    return 0;
}