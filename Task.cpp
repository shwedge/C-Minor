//
// Created by Sajjad Hossain on 1/3/2025.
//

#include "Task.h"
#include <iostream>
#include <format>

Task::Task(const string &t, const string &d) : title(t), description(d), complete(false) {
    id = nextId++;
}

bool Task::isComplete() {
    return complete;
}

int Task::getId() const {
    return id;
}

const string &Task::getTitle() const {
    return title;
}

const string &Task::getDescription() const {
    return description;
}

void Task::markComplete() {
    complete = true;
}

void Task::display() const {
    cout << format("[{}]  {} - {} {}\n", id, title, description, complete? "(Complete)" : "(Pending)");
}

Task::Task(int nextId) : nextId(nextId) {
    nextId = 1;
}
