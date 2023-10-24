#include <iostream>

#include<fstream> 

#include<string>


using namespace std;

int main()
{

    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << "i: " << i << "\tj: " << j << endl; 
    //    }
    //    cout << '\n';
    //}
    ifstream dictionaryFile{ "C:/Users/Work/Downloads/words.txt" };

    int wordCount = 0; 
    while (!dictionaryFile.eof())
    {
        string currentWord; 
        getline(dictionaryFile, currentWord);
        cout << currentWord << endl; 

        wordCount++; 
    }

    cout << "Total number of words: " << wordCount << endl; 
    //for (int i = 1; i < 5; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        cout << i * j << " ";
    //    }
    //    cout << '\n';
    //}
    
    ////"C:\Users\Work\Downloads\titanic.csv"
    //ifstream inputFile{ "C:/Users/Work/Downloads/titanic.csv" }; 
    //
    ////read in first 50 rows of titanic dataset: 
    //string row; 
    //for (int i = 0; i <= 50; i++)
    //{
    //    getline(inputFile, row);

    //    cout << row << endl; 
    //}

    //int grade;

    //for (int i = 1; i <= 5; i++)
    //{
    //    cout << "Enter student number " << i << "'s grade: ";
    //    cin >> grade;
    //}

    //const double PI = 3.14;
    //for (double i = 0; i <= 10 * PI; i = i + PI)
    //{
    //    cout << i << endl;
    //}
    //cout << "i" << "\t\t" << "2^i" << endl; //column description
    //cout << "--------------------------" << endl; //row separator
    //for (int i = 0; i <= 10; i++)
    //{
    //    cout << i << "\t\t" << pow(2, i) << endl;
    //}
    //int i = 10'000'000'000; 

    //cout << i << endl; 
    //for (int i = 0; i < 10'000'000'000; i++)
    //{
    //    //do something
    //    cout << "Hello?" << endl; 

    //    if (i )
    //}
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



   // srand(time(0)); 
   // int loopCount = 0; 

   // int correctNumber = rand() % 100; //generates random integer between 

   ////cout << "Random number generated was: " << correctNumber << endl;

   // int guessedNumber = -999; //guestNumber

   // //LOSS condition
   // int guessCount = 0; 
   // 
   // cout << "Guess the number (between 0 and 100)!" << endl;
   // while (guessedNumber != correctNumber && guessCount < 10)
   // {

   //     if (guessedNumber > correctNumber)
   //     {
   //         cout << "Your guess was too HIGH - guess again" << endl; 
   //         cin >> guessedNumber;
   //         guessCount++; 
   //     }

   //     else if (guessedNumber < correctNumber)
   //     {
   //         cout << "Your guess was too LOW - guess again" << endl;
   //         cin >> guessedNumber;
   //         guessCount++;
   //     }
   //     
   //     else
   //     {
   //         cout << "YOU WON!" << endl; 
   //     }
   // } //end while 

   // if (guessCount == 10)
   // {
   //     cout << "Too many guesses - you lost!" << endl; 
   // }
   // else
   // {
   //     cout << "You guessed the number!" << endl;
   // }


    
    return 0;
}