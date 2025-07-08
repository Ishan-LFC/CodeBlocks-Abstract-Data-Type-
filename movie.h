Movie.h 
#ifndef MOVIE_H 
#define MOVIE_H 
#include <iostream> 
#include <string> 
using namespace std; 
class Movie 
{ 
public: 
Movie(); 
Movie(string theName, string theRating); 
string getName(); 
void setName(string newName); 
void setRating(string newRating); 
string getRating(); 
void addRating(int num); 
double getAverage(); 
private: 
string name; 
string ratingFPB; 
int ratings[5]; 
}; 
#endif // MOVIE_H 
