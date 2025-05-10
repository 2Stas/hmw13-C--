#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //Task 2 
    // 1 завдання не робив бо воно вже є в другому
    ofstream outFile("info.txt");
    if (outFile.is_open()) {
        string word;
        cout << "Enter words (to finish enter 'exit'):\n";
        cin >> word;
        while (word != "exit") {
            outFile << word << " ";
            cin >> word;
        }
        outFile.close();
    }
    else {
        cout << "Failed to open file\n";
    }

    ifstream inFile("info.txt");
    if (inFile.is_open()) {
        char ch;
        int count = 0;

        while (inFile >> ch) {
            count++; 
        }

        inFile.close();
        cout << "Count of symbols: " << count << endl;
    }
    else {
        cout << "Failed to open file\n";
    }


    //Task 3

    int n;
   
    cout << "How much nums do u want to enter? ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " nums:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ofstream outFile("reverse.txt");
    if (outFile.is_open()) {
        for (int i = n - 1; i >= 0; i--) {
            outFile << arr[i] << " ";
        }
        outFile.close();
        cout << "Nums was written in reverse in 'reverse.txt'\n";
    }
    else {
        cout << "Failed to open file\n";
    }

    delete[] arr;
}
