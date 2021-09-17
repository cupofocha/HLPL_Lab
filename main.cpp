#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

bool add_on = false;    //detect whether users input "add"
bool del_on = false;    //detect whether users input "del"
bool exit_on = false;   //detect whether users input "exit"
vector<string> task;    //vector stored unfinished tasks
vector<string> fitask;  //vector stored finished tasks
int tasks_undone = 0;   
int tasks_done = 0;

static void fin(){}

static void save(){}

static void read(){}

static void help(){}

//static string get_date(){}

static void add(){
    if (add_on = true)
    {
        string temp_task;
        cout << "Add task: ";
        cin >> temp_task;
        task.push_back(temp_task);
        tasks_undone++;
        add_on = false;
        cout << endl;
    }
}

static void del(){
    if (del_on = true)
    {
        vector<string>::iterator n;
        n = task.begin();
        int temp;
        cout << "Delete task( 1" << " to " << tasks_undone
        << " )";  
        cin >> temp;
        for(int i=0; i < temp; i++)
            {
                n++;
            }
        task.erase(n-1);
        tasks_undone--;
        del_on = false;
        cout << endl;
    }
}

static void display(){
    cout << "Tasks(unfinished): \n";
    for (int i = 0; i < tasks_undone; i++)
        {
            cout << i+1 << ". " << task[i] << endl << endl;
        }
    cout << "Tasks(finished): \n";    
    for (int i = 0; i < tasks_done; i++)
        {
            cout << i+1 << ". " << fitask[i] << endl << endl;
        }
}

static void input(string temp){
    if(temp == "add")
        add();
    if(temp == "del")
        del();
    if(temp == "display")
        display();
    if(temp == "clr")
        system("clear");
}

int main(){
    cout << "Type 'help' to show the commands!\n";
    while(cin)
        {
            string temp;
            cin >> temp;
            if(temp != "exit")
                input(temp);
            else
                return 0;            
        }
}