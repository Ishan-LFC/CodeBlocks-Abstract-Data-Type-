#include "Movie.h" 
#include <iostream> 
#include <string> 
using namespace std; 
// Default Constructor 
Movie::Movie() 
{ 
name = "Unknown"; 
ratingFPB = "Unknown"; 
for (int i =0; i <5; i++) 
ratings[i] = 0; 
} 
// Constructor with arguments for the name and MPAA rating 
Movie::Movie(string theName, string theRating) 
{ 
name = theName; 
ratingFPB = theRating; 
for (int i =0; i <5; i++) 
ratings[i] = 0; 
} 
void Movie::setName(string newName) 
{ 
name = newName; 
} 
string Movie::getName()
{ 
 return name; 
} 
void Movie::setRating(string newRating) 
{ 
 ratingFPB = newRating; 
} 
string Movie::getRating() 
{ 
 return ratingFPB; 
} 
 
void Movie::addRating(int num) 
{ 
 if ((num < 1) || (num > 5)) 
  return; 
 
 ratings[num-1]++; 
} 
 
double Movie::getAverage() 
{ 
 int total = 0; 
 for (int i =0; i < 5; i++) 
  total += (i+1)*ratings[i]; 
 
 return total / 5.0;
}
