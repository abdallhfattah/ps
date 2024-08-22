#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream outfile("test_case.txt");

    if (!outfile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    int n = 100000;
    int m = 50000;
    int k = 25000;
    vector<int> a(n), b(m);
    
    // Example 1: Distinct Elements
    iota(a.begin(), a.end(), 1);  // Fill `a` with 1, 2, ..., n
    iota(b.begin(), b.end(), 1);  // Fill `b` with 1, 2, ..., m
    
    // Write to file
    outfile << n << " " << m << " " << k << "\n";
    for (int i = 0; i < n; i++) {
        outfile << a[i] << " ";
    }
    outfile << "\n";
    for (int i = 0; i < m; i++) {
        outfile << b[i] << " ";
    }
    outfile << "\n";

    outfile.close();
    cout << "Test case written to test_case.txt" << endl;

    return 0;
}
