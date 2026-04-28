#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main (){
    mahasiswa mhs{1}; //objek mhs
    mhs.showNim();

    mahasiswa &refMhs = mhs; //pointer reference refMhs
    refMhs.nim = 2; //Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer Deference pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->showNim();
    return 0;
}













