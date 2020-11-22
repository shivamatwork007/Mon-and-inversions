#include <iostream>
#include <vector>
using namespace std;
static int g_count = 0;

void loop(int i, int j, const int& arrSize, const vector<vector<int>>& V) {
	int l_compare = V[i][j];
	int j_initial = j;
	
	for (; i < arrSize; i++) {
		
		for (; j < arrSize; j++) {
			if (l_compare > V[i][j]) {
				g_count++;
			}
		}
		j = j_initial;
	}
}
void MatrixInversionChecker() {
	int arrSize, value, i, j;
	vector<vector<int>> V;

	cin >> arrSize;
	V.resize(arrSize, vector<int>(arrSize, 0));

	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			cin >> value;
			V[i][j] = value;
		}
	}
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			loop(i, j, arrSize, V);
		}
	}
	cout << g_count << endl;
	g_count = 0;
}
int main() {
	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; ++i) {
		MatrixInversionChecker();
	}

}
