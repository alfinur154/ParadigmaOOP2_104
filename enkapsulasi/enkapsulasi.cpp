#include <iostream>
using namespace std;

class remotelampu {
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};

int mainn() {
    remotelampu lampuRumah;

    lampuRumah.setSaklarNo(0, "lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "lampu kamar Tidur");
    lampuRumah.setSaklarNo(3, "lampu Dapur");

    cout << lampuRumah.getSaklarNo(0) << endl;
    cout << lampuRumah.getSaklarNo(1);
    cout << lampuRumah.getSaklarNo(2);
    cout << lampuRumah.getSaklarNo(3) << endl;

    return0;
}
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
