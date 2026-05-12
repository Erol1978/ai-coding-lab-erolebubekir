cat > GradeBook.h <<'EOF'
#pragma once
#include <string>
#include <vector>

class GradeBook {
public:
    GradeBook();
    void addGrade(const std::string& assignment, double score);
    double getAverage() const;
    double getHighest() const;
    int numGrades() const;

private:
    std::vector<std::string> assignments;
    std::vector<double> scores;
};
EOF

git add GradeBook.h
git commit -m "Add private members to GradeBook header"
