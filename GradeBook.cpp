#include "GradeBook.h"

GradeBook::GradeBook() {
}

void GradeBook::addGrade(const std::string& assignment, double score) {
    assignments.push_back(assignment);
    scores.push_back(score);
}

double GradeBook::getAverage() const {
    if (scores.empty()) {
        return 0.0;
    }

    double total = 0.0;
    for (double score : scores) {
        total += score;
    }

    return total / scores.size();
}

double GradeBook::getHighest() const {
    if (scores.empty()) {
        return 0.0;
    }

    double highest = scores[0];
    for (double score : scores) {
        if (score > highest) {
            highest = score;
        }
    }

    return highest;
}

int GradeBook::numGrades() const {
    return scores.size();
}
