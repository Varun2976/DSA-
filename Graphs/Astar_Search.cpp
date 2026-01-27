#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<char, vector<char>> graph;
    graph['A'] = {'B', 'C'};
    graph['B'] = {'D', 'E'};
    graph['C'] = {'F'};
    graph['D'] = {};
    graph['E'] = {};
    graph['F'] = {};

    char start = 'A';
    char goal = 'F';

    queue<char> OPEN;
    vector<char> CLOSED;
    map<char, char> parent;

    OPEN.push(start);
    parent[start] = '-';

    cout << "OPEN\t\tCLOSED\n";

    while (!OPEN.empty()) {
        queue<char> temp = OPEN;
        cout << "OPEN: ";
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }

        char current = OPEN.front();
        OPEN.pop();
        CLOSED.push_back(current);

        cout << "\tCLOSED: ";
        for (char v : CLOSED)
            cout << v << " ";
        cout << endl;

        if (current == goal)
            break;

        for (char neighbor : graph[current]) {
            bool visited = false;
            for (char v : CLOSED)
                if (v == neighbor) visited = true;

            if (!visited) {
                OPEN.push(neighbor);
                parent[neighbor] = current;
            }
        }
    }

    cout << "\nSolution Path: ";
    vector<char> path;
    char node = goal;
    while (node != '-') {
        path.push_back(node);
        node = parent[node];
    }

    for (int i = path.size() - 1; i >= 0; i--)
        cout << path[i] << " ";

    return 0;
}