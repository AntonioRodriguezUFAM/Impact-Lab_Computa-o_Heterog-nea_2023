#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream image;
    image.open("./images/monument.ppm");
    if (image.is_open()) {
        cout << true << "\n";
    }
    else {
        cout << false << "\n";
    }

    image.close();
    return 0;

}