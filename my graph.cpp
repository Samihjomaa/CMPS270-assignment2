#include <iostream>
#include <stdexcept>
#include <map>
#include <vector>

using namespace std;

class Graph {
protected:
    map<int, vector<int> > graphh;
public:
    Graph(const vector<int> &start, const vector<int> & end);
    int numOutgoing(const int nodeID) const;
    const vector<int> &adjacent(const int nodeID) const;
};


Graph::Graph(const vector<int> &start, const vector<int> &end){
    if(start.size() != end.size()) {
        throw invalid_argument("Start/end point lists differ in length");
    }

    for(unsigned i = 0; i < start.size(); i++){
        int starting = start[i], ending = end[i];
        graphh[starting].push_back(ending);
        graphh[ending];
    }
}

int Graph::numOutgoing(const int nodeID) const {
    return adjacent(nodeID).size();
}

const vector<int> &Graph::adjacent(const int nodeID) const {
    auto i = graphh.find(nodeID);

    if(i == graphh.end())
        throw invalid_argument("Invalid ID!");

    return i->second;
}



int main() {


    return 0;
}
