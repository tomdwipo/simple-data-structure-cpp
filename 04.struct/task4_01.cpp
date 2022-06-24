#include<iostream>
using namespace std;

struct Student {
    int student_id;
    string student_name;
    float midterm_score;
    float finalExam_score;
};

float averageScore(Student student);

int main(){
    int n;
    cout << "masukkan jumlah mahasiswa: "; cin >> n;
    if (n > 50){
        cout << "jumlah mahasiswa tidak boleh lebih dari 50" << endl;
        return 0;
    }
    Student student[n];
    for (int i = 0; i < n; i++){
        cout << "masukkan ID Mahasiswa: ";  cin >> student[i].student_id;
        cout << "masukkan Nama Mahasiswa: ";  cin >> student[i].student_name;
        cout << "masukkan Nilai Ujian Tengah Semester: "; cin >> student[i].midterm_score;
        cout << "masuk Nilai Ujian Akhir Semester: "; cin >> student[i].finalExam_score;
    }

     for (int i = 0; i < n; i++){
        cout << "ID Mahasiswa: " << student[i].student_id << endl;
        cout << "Nama Mahasiswa: " <<  student[i].student_name << endl;
        cout << "Rata-rata: " << averageScore(student[i]) << endl;
    }
    return 0;
}

float averageScore(Student student){
    float totalScore = student.midterm_score + student.finalExam_score;
    float aveargeScore = totalScore / 2;
    return aveargeScore;
}
