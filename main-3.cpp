#include <ctime>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <deque>
#include <time.h>
#include <stdlib.h>
#include <iterator>

using namespace std;

void breakWalls(pair<int, int> curPos, pair<int, int> nextPos, vector<vector<string>> &maze);
//void breakWallsForReturning(pair<int, int> curPos, pair<int, int> nextPos, vector<vector<string>> &maze);

vector<vector<string>> createRoom(int size) {

    vector<vector<string>> maze(size * 2 - 1, vector<string>(size * 2 - 1, "X"));
    cout << "Maze with size " << size << " * " << size << " has " << size * size << " rooms" << endl;

    for (int i = 0; i < size * 2 - 1; i += 2) {
        for (int j = 0; j < size * 2 - 1; j += 2) {
            maze[i][j] = "O";
        }
    }

    maze.back()[0] = "&";
    return maze;
}

void printMaze(vector<vector<string>> maze) {

    for (int i = 0; i < maze[0].size() + 2; i++) {
        cout << "X ";
    }
    cout << endl;

    for (int i = 0; i < maze.size(); i++) {
        cout << "X ";
        for (int j = 0; j < maze.size(); j++) {
            cout << maze[i][j] << " ";
        }
        cout << "X ";
        cout << endl;
    }

    for (int i = 0; i < maze[0].size() + 2; i++) {
        cout << "X ";
    }
    cout << "\n\n";
    cout << "-----------------------------------" << endl;
    cout << endl;

}

bool checkNeighbours(pair<int, int> curPos, deque<pair<int, int>> &moves,
                     set<pair<int, int>> visited, vector<vector<string>> &maze) {

    vector<pair<int, int>> temp;

    //check right
    if (curPos.second + 2 <= maze.size() - 1 && !visited.count(make_pair(curPos.first, curPos.second + 2))) {
        temp.push_back(make_pair(curPos.first, curPos.second + 2));
        //cout << "right: " << temp[0].first << " " << temp[0].second << endl;
    }

    //check left
    if (curPos.second - 2 >= 0 && !visited.count(make_pair(curPos.first, curPos.second - 2))) {
        temp.push_back(make_pair(curPos.first, curPos.second - 2));
        //cout << "left: " << temp[3].first << " " << temp[3].second << endl;
    }

    //check top
    if (curPos.first - 2 >= 0 && !visited.count(make_pair(curPos.first - 2, curPos.second))) {
        temp.push_back(make_pair(curPos.first - 2, curPos.second));
        //cout << "top: " << temp[1].first << " " << temp[1].second << endl;
    }

    //check bottom
    if (curPos.first + 2 <= maze.size() - 1 && !visited.count(make_pair(curPos.first + 2, curPos.second))) {
        temp.push_back(make_pair(curPos.first + 2, curPos.second));
        //cout << "bottom: " << temp[3].first << " " << temp[3].second << endl;
    }

    if (temp.empty()) {
        return false;
    }

    random_shuffle(temp.begin(), temp.end());
    moves.push_back(temp.back());

    //default_random_engine e((unsigned int)time(nullptr));
    //int selection = e() % temp.size();

    //moves.push_back(temp[selection]);
    //cout << moves[0].first <<  "  " << moves[0].second << endl;
    //cout << moves[1].first <<  "  " << moves[1].second << endl;
    //cout << selection << " selection" << endl;
    return true;

}

void solveMaze(vector<vector<string>> &maze) {

    pair<int, int> curPos;
    deque<pair<int, int>> moves;
    set<pair<int, int>> visited;
    pair<int, int> nextPos;

    //maze.back()[0] = "&";
    moves.push_back(make_pair(maze.size() - 1, 0));
    //curPos = moves.back();
    int t = 1;
    maze.back()[0] = "&";
    while (!moves.empty()) {

        curPos = moves.back();
        maze.back()[0] = ".";
        if (checkNeighbours(curPos, moves, visited, maze)) {
            nextPos = moves.back();
            breakWalls(curPos, nextPos, maze);
            //maze[nextPos.first][nextPos.second] = "&";
            maze[nextPos.first][nextPos.second] = "&";
            printMaze(maze);
            maze[nextPos.first][nextPos.second] = ".";
            //maze[nextPos.first][nextPos.second] = ".";

        } else {
            nextPos = moves.back();
            //breakWallsForReturning(curPos, nextPos, maze);
            maze[nextPos.first][nextPos.second] = "&";
            moves.pop_back();
            printMaze(maze);
            maze[nextPos.first][nextPos.second] = ".";
        }
        visited.insert(curPos);
    }

    //cout <<"t = "<< t <<" f = "<< f << endl;
    //cout <<"nextPos.first = "<< nextPos.first <<" nextPos.second = "<< nextPos.second << endl;
    //printMaze(maze);
    //cout << visited.size() << " visited";

}

void breakWalls(pair<int, int> curPos, pair<int, int> nextPos, vector<vector<string>> &maze) {
    //moved right
    if (curPos.second + 2 == nextPos.second) {
        maze[curPos.first][curPos.second + 1] = ".";
        maze[curPos.first][curPos.second] = ".";

    }

    //moved left
    if (curPos.second - 2 == nextPos.second) {
        maze[curPos.first][curPos.second - 1] = ".";
        maze[curPos.first][curPos.second] = ".";
    }

    //moved top
    if (curPos.first - 2 == nextPos.first) {
        maze[curPos.first - 1][curPos.second] = ".";
        maze[curPos.first][curPos.second] = ".";
    }

    //moved bottom
    if (curPos.first + 2 == nextPos.first) {
        maze[curPos.first + 1][curPos.second] = ".";
        maze[curPos.first][curPos.second] = ".";
    }
}

/*void breakWallsForReturning(pair<int, int> curPos, pair<int, int> nextPos, vector<vector<string>> &maze) {

    cout <<"breakWallsForReturning   .first = "<< curPos.first <<" curPos.second = "<< curPos.second << endl;
    cout <<"breakWallsForReturning    .first = "<< nextPos.first <<" nextPos.second = "<< nextPos.second << endl;


    if (curPos.second + 2 == nextPos.second) {
        maze[curPos.first][curPos.second] = "&";
    }

    if (curPos.second - 2 == nextPos.second) {
        maze[curPos.first][curPos.second] = "&";
    }


    if (curPos.first - 2 == nextPos.first) {
        maze[curPos.first][curPos.second] = "&";
    }

    if (curPos.first + 2 == nextPos.first) {
        maze[curPos.first][curPos.second] = "&";
    }

}*/


int main(int argc, char *argv[]) {

    srand(unsigned(time(0)));
    int mazeSize = 0;
    if (argc < 101 && argc > 0) {
        int mazeSize = stoi(argv[2]);
        vector<vector<string>> myMaze = createRoom(mazeSize);
        printMaze(myMaze);
        solveMaze(myMaze);
    } else {
        cout << "1-100" << endl;
    }

    /*  vector<vector<string>> myMaze = createRoom(7);
      printMaze(myMaze);
      solveMaze(myMaze);*/

    return 0;
}
