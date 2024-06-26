/*

Computing SSSP using the BFS algorithm in an unweighted graph.

Note : each vertex in the graph is generic.

*/

#include<iostream>
#include<map>
#include<list>
#include<unordered_set>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

template <typename T>
class graph {

	map<T, list<T>> neighbourMap; // to store the graph representation
	bool isDirected; // to indicate if the graph is directed or not

public :

	graph(bool isDirected = false) {
		this->isDirected = isDirected;
	}

	void addEdge(T u, T v) {

		// adds an edge b/w vertex u and v

		neighbourMap[u].push_back(v);

		if (!isDirected) {
			neighbourMap[v].push_back(u);
		}

	}

	void bfs(T s, T d) {

		map<T, int> distMap; // to store the mapping between vertices &
		// their shortest dist from the src vertex
		distMap[s] = 0;

		map<T, T> parentMap;
		parentMap[s] = s;

		unordered_set<T> visited; // to keep track of visited vertices
		queue<T> q; // to keep track of visited & un-explored vertices

		// mark 's' as visited
		visited.insert(s);
		q.push(s);

		while (!q.empty()) {
			T front = q.front();
			q.pop();

			// explore 'front'

			list<T> neighbourList = neighbourMap[front];
			for (T ngb : neighbourList) {
				if (visited.find(ngb) == visited.end()) {
					// ngb is not yet visited
					visited.insert(ngb);
					q.push(ngb);
					distMap[ngb] = distMap[front] + 1;
					parentMap[ngb] = front;
				}
			}
		}

		for (pair<T, int> p : distMap) {
			cout << p.first << "  " << p.second << endl;
		}

		cout << "length of the shortest path from " << s << " to " << d << " = " << distMap[d] << endl << endl;

		for (pair<T, T> p : parentMap) {
			cout << p.first << "  " << p.second << endl;
		}

		vector<T> path;

		T temp = d;

		while (parentMap[temp] != temp) {
			// cout << temp << " ";
			path.push_back(temp);
			temp = parentMap[temp];
		}

		// cout << temp << endl;
		path.push_back(temp);

		reverse(path.begin(), path.end());

		for (int i = 0; i < path.size(); i++) {
			cout << path[i] << " ";
		}

		cout << endl;

	}
};


int main() {

	graph<char> g;

	g.addEdge('A', 'B');
	g.addEdge('A', 'C');
	g.addEdge('B', 'D');
	g.addEdge('B', 'E');
	g.addEdge('C', 'E');
	g.addEdge('C', 'F');
	g.addEdge('D', 'G');
	g.addEdge('E', 'G');
	g.addEdge('E', 'H');
	g.addEdge('F', 'H');
	g.addEdge('G', 'I');
	g.addEdge('H', 'I');

	g.bfs('A', 'I');

	return 0;
}