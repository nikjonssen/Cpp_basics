#include <iostream>
#include <fstream>
using namespace std;  // can be omitted(*)

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Hello files!";

  // Close the file
  MyFile.close();
}
