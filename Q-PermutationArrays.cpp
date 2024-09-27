#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip> // For setting output precision

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the test case number
    
    while (t--) {
        string blankLine;
        getline(cin, blankLine); // Read the blank line
        
        // Reading the index array
        string indexLine;
        getline(cin, indexLine);
        istringstream indexStream(indexLine);
        
        vector<int> p; // Index array
        int index;
        while (indexStream >> index) {
            p.push_back(index); // Read all indices
        }

        // Reading the floating-point numbers
        string numberLine;
        getline(cin, numberLine);
        istringstream numberStream(numberLine);
        
        vector<double> values(p.size());
        for (int i = 0; i < p.size(); ++i) {
            numberStream >> values[i]; // Read the floating point numbers
        }
        
        // Create a result vector to store the permuted numbers
        vector<double> result(p.size());
        
        // Place the numbers in the result array based on the index array
        for (int i = 0; i < p.size(); ++i) {
            result[p[i] - 1] = values[i]; // `p[i] - 1` because `p` is 1-based indexing
        }
        
        // Output the result
        for (double num : result) {
            cout << fixed << setprecision(1) << num << endl; // Print each number with 1 decimal point precision
        }
        
        // Print a blank line between consecutive cases, except after the last case
        if (t > 0) {
            cout << endl;
        }
    }
    
    return 0;
}
