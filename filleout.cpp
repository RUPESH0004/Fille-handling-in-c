#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Get user input
    cout << "Enter some text: ";
    string userInput;
    getline(std::cin, userInput);

    // Open a file for writing
    ofstream outputFile("output.txt");

    // Check if the file is opened successfully
    if (outputFile.is_open())
    {
        // Write user input to the file
        outputFile << "User Input: " << userInput << endl;

        // Close the file
        outputFile.close();
        std::cout << "Data written to output.txt successfully." << endl;
        
    }
    else
    {
        cerr << "Error opening the file." << endl;
    }

    return 0;
}
