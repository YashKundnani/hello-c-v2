#include <stdio.h>

int StraightPyramid (int h){
	
	return 0;	
}

int ReversePyramid(int h){
	
	return 0;
}

int Pattern_Diamond(int h){
	StraightPyramid(int h/2);
	ReversePyramid(int h/2-1);
	
	return 0;
}

int main(){	
	
	Pattern_Diamond(8);
	return 0;
	
}
