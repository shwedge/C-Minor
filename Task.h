//
// Created by Sajjad Hossain on 1/3/2025.
//

#ifndef TODOLIST2025_TASK_H
#define TODOLIST2025_TASK_H

#include <string>

using namespace std;
class Task {
public:
    Task(const string& t, const string& d);
    bool isComplete();

    int getId() const;
    const string &getTitle() const;
    const string &getDescription() const;

    void markComplete();
    void display() const;
private:
    int nextId;
    explicit Task(int nextId);
    int id;
    string title;
    string description;
    bool complete;
};


#endif //TODOLIST2025_TASK_H
