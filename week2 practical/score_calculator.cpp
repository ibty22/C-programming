#include<iostream>
#include<string>
#include<iomanip>
int main() {
    std::string studentName;
    std::string course;
    int score1, score2, score3;
    int totalScore;
    double average;
    double percentage;
    const int MAX_SCORE=100;
std::cout <<"============="<<std::endl;
std::cout <<"============="<<std::endl;
std::cout <<"STUDENT SCORE CALCULATOR"<<std::endl; 
std::cout << "Enter student name: ";
std::cin >> studentName;
std::cout << "Enter course (BBIT/BCS): ";
std::cin >> course;
std::cout<<"Enter score for subject 1: ";
std::cin >> score1;
std::cout<<"Enter score for subject 2: ";
std::cin >> score2;
std::cout<<"Enter score for subject 3: ";
std::cin >> score3;
totalScore = score1 + score2 + score3;
average =totalScore / 3.0;
percentage = (totalScore / (MAX_SCORE * 3.0)) * 100;
std::cout << "DEBUG - Total Score: " << totalScore << std::endl; 
std::cout << std::endl;
std::cout <<"=============" << std::endl;
std::cout <<"REPORT CARD" << std::endl;
std::cout <<"=============" << std::endl;
std::cout <<"STUDENT: " << studentName << std::endl;
std::cout <<"COURSE: " << course << std::endl;
std::cout <<"=============" << std::endl;
std::cout <<"Student:" <<studentName <<std::endl;
std::cout <<"Course:" <<course <<std::endl;
std::cout <<std::endl;
std::cout <<"Test 1:" <<score1 << "/" << MAX_SCORE << std::endl;
std::cout <<"Test 2:" <<score2 << "/" << MAX_SCORE << std::endl;
std::cout <<"Test 3:" <<score3 << "/" << MAX_SCORE << std::endl;
std::cout << std::endl;
std::cout <<std::endl;
std::cout <<"Total:" <<totalScore <<"/300" << std::endl;
std::cout <<"Average:" << std::fixed << std::setprecision(2) << average << std::endl;
std::cout <<"Percentage:" << std::fixed << std::setprecision(2) << percentage << "%" << std::endl;
std::cout << std::endl;
if(percentage >= 50) {
    std::cout <<"Result: PASS" << std::endl;
} else {
    std::cout <<"Result: FAIL" << std::endl;
std::cout << std::endl;
return 0;

}