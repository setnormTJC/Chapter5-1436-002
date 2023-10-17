#include <iostream>

using namespace std;

int main()
{

    //int dayCounter = 0; 

    //while (dayCounter < 30)
    //{
    //    //if (dayCounter %3 == 0)
    //    dayCounter = dayCounter + 3; 
    //    cout << "Exercise - " << dayCounter << " days have passed so far" << endl; 
    //    //cout << counter << endl; 
    //   
    //    //counter++;
    //}

    //cout << "...Done" << endl; 
    // 
    // 
    //int studentCount = 0; 

    //double sum = 0; 

    //while (studentCount < 5)
    //{
    //    cout << "Enter student number " << studentCount << "'s grade: " << endl;

    //    int studentGrade; 

    //    cin >> studentGrade; 
    //    //cout << studentCount << endl; 
    //    //cout << "\nYou entered: " << studentGrade << " for student number " 
    //    //    << studentCount << endl;

    //    studentCount = studentCount + 1; 
    //    
    //    sum = sum + studentGrade; 
    //    //break;

    //} //end while loop 

    //cout << "Sum of ALL grades: " << sum << endl; 
    //double average = sum / studentCount; 

    //cout << "AVERAGE is : " << average << endl; 
    //int countdown = 10; 
    //while (countdown > 0)
    //{
    //    cout << countdown << " ..." << endl; 

    //    //decrement means to decrease (usually by 1) 
    //    //increment means to INcrease (usually by 1) 

    //    countdown--;
    //}

    //cout << "Liftoff" << endl; 


    //int i = 3;
    //while (i <= 100)
    //{
    //    cout << i << endl;
    //    i = i * 2;
    //    //i = i * i; //another example with different results
    //}
    //cout << "After loop ends, value of i is : " << i;


    //while (true)
    //{
    //    //cout << "Continue running the operating system" << endl; 

    //    int* a = new int; 

    //    delete a;
    //}

    //int dayCount = 31;
    
    ////C-based brain to silicon based brain
    //while (dayCount < 30 && dayCount % 2 != 0) //Does nothing - forever
    //{
    //    cout << "Exercise.";
    //    dayCount = dayCount + 3;
    //    //sets reminder to exercise every 3 days for a month
    //}

    //char response = ' ';

    //while (response != 'q')
    //{
    //    cout << "Enter your response (q to quit)!" << endl; 
    //    cin >> response;


    //} //end while 

    //cout << "Goodbye ..." << endl; 

    //Turing-complete 

    //cout << "Enter the number you want someone to guess: " << endl; 
    //int correctNumber/* = 72*/; 
    //
    //cin >> correctNumber; 

    //system("CLS"); //CLEARS screen 

    srand(time(0)); 
    int loopCount = 0; 
    //while (loopCount < 10)
    //{
    int correctNumber = rand() % 100; //generates random integer between 

   //cout << "Random number generated was: " << correctNumber << endl;

    //    loopCount++;
    //}
    int guessedNumber = -999; //guestNumber

    //LOSS condition
    int guessCount = 0; 
    
    cout << "Guess the number (between 0 and 100)!" << endl;
    while (guessedNumber != correctNumber && guessCount < 10)
    {

        if (guessedNumber > correctNumber)
        {
            cout << "Your guess was too HIGH - guess again" << endl; 
            cin >> guessedNumber;
            guessCount++; 
        }

        else if (guessedNumber < correctNumber)
        {
            cout << "Your guess was too LOW - guess again" << endl;
            cin >> guessedNumber;
            guessCount++;
        }
        
        else
        {
            cout << "YOU WON!" << endl; 
        }
    } //end while 

    if (guessCount == 10)
    {
        cout << "Too many guesses - you lost!" << endl; 
    }
    else
    {
        cout << "You guessed the number!" << endl;
    }

    return 0;
}