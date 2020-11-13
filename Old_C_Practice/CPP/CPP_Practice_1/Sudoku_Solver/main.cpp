#include <iostream>
#include <iomanip>
#include <chrono>
//#include <ctime>
#include <ratio>
#include <windows.h>
#include <Puzzle.h>

using namespace std;

int main() {
	/*int temp[9][9] = {
		{4,2,5,3,9,8,6,7,1},
		{0,6,0,0,5,2,0,0,0},
		{9,8,0,0,6,0,0,0,2},
		{5,3,8,0,2,0,0,1,6},
		{6,0,0,0,1,0,0,2,3},
		{2,1,0,0,3,0,5,0,4},
		{0,0,2,0,8,0,0,0,7},
		{0,0,0,2,7,0,0,4,0},
		{8,7,0,0,4,3,2,0,0}
	};*/
	
	int temp[9][9] = {
		{5,3,4,6,7,8,9,1,2},
		{6,7,2,0,9,5,3,4,8},
		{1,0,8,3,4,2,5,0,7},
		{8,5,9,7,6,1,4,2,3},
		{4,2,6,8,0,3,7,9,1},
		{7,1,3,9,2,4,8,5,6},
		{9,6,1,5,3,7,0,8,4},
		{2,8,7,4,1,9,6,3,5},
		{3,4,5,2,8,6,1,0,9},
	};
	
	Puzzle puzzle {temp};
	
	chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
	puzzle.run();
	chrono::high_resolution_clock::time_point stop = chrono::high_resolution_clock::now();
	chrono::duration<double> time_span = chrono::duration_cast<chrono::duration<double>>(stop - start);
	
	cout << "\nProgram took: " << setprecision(2) << fixed << time_span.count() << "s to execute\n";
	return 0;
}