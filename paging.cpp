#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

void fifoPageReplacement(vector<int> pages, int capacity) {
    unordered_set<int> memory; 
    queue<int> indexes;        
    int pageFaults = 0;

    for (int page : pages) {
        if (memory.find(page) == memory.end()) {
            if (memory.size() == capacity) {
                int oldest = indexes.front();
                indexes.pop();
                memory.erase(oldest);
            }
            memory.insert(page);
            indexes.push(page);
            pageFaults++;
        }
    }
    cout << "Total Page Faults (FIFO): " << pageFaults << endl;
}

int main() {
    vector<int> pages = {7,0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 7, 0 ,1 ,2, 3, 0, 4, 2, 3, 1, 0, 7, 5, 4, 3, 2};
    int capacity = 3;
    fifoPageReplacement(pages, capacity);
    return 0;
}
