#include<iostream>
#include<string>
using namespace std;

struct student{
    string name;
    int dob;
    course* course;
};
struct course{
    string name;
    string code;
    double score;
};
struct studentNode{
    struct student student;
    struct studentNode*next;
};
studentNode init(struct studentNode* list){
    list->next = NULL;
}
void insert_head(struct studentNode*node, struct student stu){
    studentNode *li = new studentNode;

    li->student.course = stu.course;
    li->student.dob = stu.dob;
    li->student.name = stu.name;

    li->next = node;

}

void insert_tail(struct studentNode*node, struct student stu){
    studentNode *node1 = new studentNode;

    node1->student.course = stu.course;
    node1->student.dob = stu.dob;
    node1->student.name = stu.name;

    node->next = node1;
    node1->next = NULL;
}

int lengthOfList(struct studentNode*node){
    int count = 0;
    for(struct studentNode*node1 = node; node1->next = NULL; node1->next = node->next){
        ++count;
    }
    return count;
}

void displayList(struct studentNode*node){
    for(struct studentNode*node1 = node; node1->next = NULL; node1->next = node->next){
        cout << node->student.name << endl;
    }
}

void findHighestScore(struct studentNode*node){
    int ava_max = node->student.course->score;
    for(struct studentNode*node1 = node; node1->next = NULL; node1->next = node->next){
        
    }
}