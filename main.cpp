// code by Amr Abdelmoez mary
// code is simple to test and learn car fuling and station problem 
// case of distance between station > car fuuel  distance not included but easly can be added 
#include  <iostream>
 
using namespace std;


int main(){
	int station[5] ={200, 175, 175, 200, 200}; // distance between station and the next one .
	int end = 950;
	int fuel = 400;
	int distance =0 ;
	int i =0;
	int stops = 0;
	while ( distance < end ){
		distance =distance + station[i] ;
		fuel= fuel-station[i];
		if (fuel>=station[i+1]){
		
		    i++;
			continue ;
	    }
		else {
			++stops;
			fuel =400;
		}
	}
	cout <<stops;
	
}
