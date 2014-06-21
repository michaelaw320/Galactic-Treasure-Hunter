
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define MAX 500
#define MAXDIST 25
#define UNLINKEDRATIO 15

int main() {
	int array[MAX][MAX];
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			srand((int)time(NULL) + (i*i - j) * 200 + i * 100 + j * 30);
			array[i][j] = rand()%MAXDIST;
			if (array[i][j] > UNLINKEDRATIO || array[i][j] == 0) {
				array[i][j] = -99;
			}
		}
	}
	for(int i=0;i<MAX;i++){
		for(int j=i;j<MAX;j++){
			array[j][i] = array[i][j];
		}
	}
	for(int i=0;i<MAX;i++){
		array[i][i] = 0;
	}
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			if (j==MAX-1) {
				cout << array[i][j];
			} else {
				cout << array[i][j] << ","; 
			}
		}
		cout << endl;
	}
	return 0;
}
