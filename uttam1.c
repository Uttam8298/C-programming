#include<stdio.h>
#include<conio.h>
class Graph:
    def _init_(self):
        self.nodes = []
        self.connections = {}
        pass

    def create_connections(self, i: int, j: int):
        i = str(i)
        j = str(j)

        if i not in self.connections:
            self.connections[i] = []
        if j not in self.connections:
            self.connections[j] = []

        self.connections[i].append(j)
        self.connections[j].append(i)

    def get_connections(self, node_id: int):
        return self.connections[node_id]

    def bfs(self, start_node, search_value=None):
        visited = [False] * (len(self.nodes))

        queue = []
        queue.append(start_node)
        visited[start_node] = True

        while queue:
            start_node = queue.pop(0)
            print("Out:", self.nodes[start_node])
            if self.nodes[start_node] is not None and self.nodes[start_node] is search_value:
                print("Found value to search:", search_value)
                return

            for i in self.connections[str(start_node)]:
                i = int(i)
                if visited[i] is False:
                    queue.append(i)
                    print("Added in queue:", self.nodes[i])
                    visited[i] = True


g = Graph()
g.nodes.extend([0, 4, 7, 2, 9, 10])
g.create_connections(1, 3)
g.create_connections(0, 1)
g.create_connections(4, 2)
g.create_connections(2, 0)
g.create_connections(2, 3)
g.create_connections(3, 4)
g.create_connections(4, 5)

print("Connections (labelled by node indices) :", g.connections)

print("\nBreadth-First Search, starting from node with value 4:")
g.bfs(1, 7)