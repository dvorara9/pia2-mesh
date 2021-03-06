#include "Mesh.h"
#include <iostream>
#include <cstdlib>

int main(int iargc, char* iargv[]) {

    int nx = 20;
    int ny = 20;

    Mesh m(0.0,1.0,0.0,1.0,nx,ny);
    
    for (int i=0; i<m.node.size(); ++i) {
        std::cout << m.node[i] << "\n";
    }
    
    for (int i=0; i<m.cell.size(); ++i) {
        Polygon const& p = m.cell[i];
        std::cout << "[" << p.node_id[0];
        for (int j=1; j<p.node_id.size(); ++j) {
            std::cout << "," << p.node_id[j];
        }
        std::cout << "]\n";
    }

    return 0;
}
