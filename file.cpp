#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
int main() { 	
int number;
int guess_the_number; 
int no_of_tries = 0; 	srand(time(0)); //seed random number generator 	
number = rand() % 100 + 1; // random number between 1 and 100 	
cout << "Guess My Number Game\n\n"; 	
do 	
{ 		
     cout << "Enter a guess between 1 and 100 : "; 		
     cin >> guess_the_number; 		
     no_of_tries++; 		
if (no_of_guess > number) 		
	{
       cout << "The Number Is Too High !!!\n\n"; 	
   }	
 else if (no_of_guess < number) 			
   {
       cout << "The Number Is Too Low !!!\n\n"; 		
    }
else 			
    {
       cout << "\nCorrect! You got it in " <<no_of_tries << " guesses!\n"; 
	 } while (no_of_guess != number); 

	return 0;
 }