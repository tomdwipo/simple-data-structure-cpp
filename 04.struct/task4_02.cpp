#include<iostream>
using namespace std;

struct Student {
    int student_id;
    string student_name;
    float midterm_score;
    float finalExam_score;
};

Student highScore(Student student[], int n, int score[]);

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
    int midtermscore[n];
    int finalExamscore[n];
    for (int i = 0; i < n; i++){
       midtermscore[i] = student[i].midterm_score;
       finalExamscore[i] = student[i].finalExam_score;
    }
   
    Student highScoreMidterm = highScore(student, n, midtermscore);
    Student highScoreFinalExam = highScore(student, n, finalExamscore);

    cout << "Peraih nilai tertinggi Ujian Tengah Semester: ";
    cout << highScoreMidterm.student_name << "( " << highScoreMidterm.student_id << " )" << endl;

    cout << "Peraih nilai tertinggi Ujian Akhir Semester: ";
    cout << highScoreFinalExam.student_name << "( " << highScoreFinalExam.student_id << " )" << endl;
    return 0;
}

Student highScore(Student student[], int n, int score[]){
    int max = score[0];
    int smallId = student[0].student_id;
    int max_index = 0;
    for (int i = 0; i < n; i++){
        if (student[i].student_id < smallId && score[i] == max){
            max = score[i];
            smallId = student[i].student_id;
            max_index = i;
        }
        if (score[i] > max){
            max = score[i];
            smallId = student[i].student_id;
            max_index = i;
        }
    }
    return student[max_index];
}
