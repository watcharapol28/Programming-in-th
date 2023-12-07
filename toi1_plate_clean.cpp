#include<bits/stdc++.h>
using namespace std;
//25/11/2564
struct info
{
    int room, id;
};

int index_student[10010];

int main()
{
    int num_room, num_student, choose_student;
    char condition;

    cin >> num_room >> num_student;

    bool check[num_room + 1] = {};

    queue<int> q_room;
    queue<int> q_student[num_room + 1];
    struct info student[num_student + 1];

    for(int i = 0; i < num_student; i++)
    {
        cin >> student[i].room >> student[i].id;
        index_student[student[i].id] = i;
    }

    while(true)
    {
        cin >> condition;

        if(condition == 'X'){cout << '0'; return 0;}

        if(condition == 'E')
        {
            cin >> choose_student;
            
            q_student[student[index_student[choose_student]].room].push(index_student[choose_student]);
            if(!check[student[index_student[choose_student]].room]){q_room.push(student[index_student[choose_student]].room); check[student[index_student[choose_student]].room] = true;}
        }

        else if(condition == 'D')
        {
            if(q_room.empty()){cout << "empty" << endl; continue;}

            cout << student[q_student[q_room.front()].front()].id << endl;

            q_student[q_room.front()].pop();
            if(q_student[q_room.front()].empty()){check[q_room.front()] = false; q_room.pop();}
        }
    }
}