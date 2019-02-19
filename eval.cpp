//my reference https://www.youtube.com/watch?v=Iho2EdJgusQ

#include <iostream>
#include <fstream>   // we need this to do read file and write file
#include <string>

using namespace std;




int main() {
   ifstream infile;

   infile.open("C:/Users/Eddie/Desktop/path.txt");
   if (infile.fail()) {
    cerr << "error opening file" << endl;
    exit(1);
   } 

   int x,y;

   infile >> x >> y;

   cout << x << endl;
   cout << y << endl;

   infile.close();

   return 0;
}


int main() {
   ifstream infile;

   infile.open("C:/Users/Eddie/Desktop/path.txt");
   if (infile.fail()) {
    cerr << "error opening file" << endl;
    exit(1);
   } 

   string item;
   int counter = 0;

   while (!infile.eof()){
        infile >> item;
        counter++;
   }
   cout<< counter << " items found" <<endl;

   infile.close();


   return 0;
}


int main() {
    ofstream outfile;

    outfile.open("C:/Users/Eddie/Desktop/path.txt");  // if the file name doesn't exisit, it will be automatically created for us

    outfile<< "hi";

    outfile.cloe();  // very important

    return 0;
}
