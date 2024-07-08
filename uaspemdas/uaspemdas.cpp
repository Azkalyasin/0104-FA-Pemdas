#include <iostream> 
using namespace std;
float hasil;
class MataKuliah
{
private:

    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;



public:
    float hasil;
    MataKuliah()
    {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasAkhir = 0.0;

    }
    virtual void namaMataKuliah()
    {

    }
    virtual void inputnilai()
    {
        cout << "Masukkan nilai presensi: ";
        cin >> presensi;
        cout << "Masukkan nilai activiti: ";
        cin >> activity;
        cout << "Masukkan nilai exercise: ";
        cin >> exercise;
        cout << "Masukkan nilai tugas akhir: ";
        cin >> tugasAkhir;
   
    }
    virtual void hitutungnilaiAkhir()
    {

        cout << "nilai akhir: " << presensi + activity + exercise + tugasAkhir << endl;
        cin >> hasil;

    }
    virtual void cekKelulusan()
    {
        if (hasil > 80)
        {
            cout << "selamat anda di nyatakan lulus";
        }
        else
        {
            cout << "anda dinyatakan tidak lulus";
        }
    }


    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }

    void setactivity(float nilai)
    {
        this->activity = nilai;
    }
    float getacctivity()
    {
        return activity;
    }

    void setexercise(float nilai)
    {
        this->exercise = nilai;
    }
    float getexercise()
    {
        return exercise;
    }

    void settugasakhir(float nilai)
    {
        this->tugasAkhir = nilai;
    }
    float gettugasakhir()
    {
        return tugasAkhir;
    }


};


class Pemrograman : public MataKuliah
{
public:
    void inputnilai();
    void hitutungnilaiAkhir();
    void cekKelulusan();

};

class Jaringan : public MataKuliah
{
public:
    void inputnilai();
    void hitutungnilaiAkhir();
    void cekKelulusan();

};

int main()
{
    char pilih;
    MataKuliah* mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;



    do
    {
        cout << "\npilih mata kulliah:\n";
        cout << "1. pemprograman\n";
        cout << "2. jaringan\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            pemrograman.inputnilai();
            pemrograman.hitutungnilaiAkhir();
            pemrograman.cekKelulusan();
            break;
        case 2:
            // q.deleteQueue();
            break;
        case 3:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice, please try again\n";
        }
    } while (pilih != 4);

    return 0;
}