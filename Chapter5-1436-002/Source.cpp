#include <iostream>

using namespace std;

int main()
{
    int studentCount = 0; 

    double sum = 0; 

    while (studentCount < 5)
    {
        cout << "Enter student number " << studentCount << "'s grade: " << endl;

        int studentGrade; 

        cin >> studentGrade; 
        //cout << studentCount << endl; 
        //cout << "\nYou entered: " << studentGrade << " for student number " 
        //    << studentCount << endl;

        studentCount = studentCount + 1; 
        
        sum = sum + studentGrade; 
        //break;

    } //end while loop 

    cout << "Sum of ALL grades: " << sum << endl; 
    double average = sum / studentCount; 

    cout << "AVERAGE is : " << average << endl; 


    return 0;
}