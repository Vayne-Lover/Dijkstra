//
//  main.cpp
//  Dijkstra
//
//  Created by 姜况童 on 16/5/19.
//  Copyright © 2016年 姜况童. All rights reserved.
//
#include "Dijkstra.hpp"
int main() {
    int distance[5];
    int preVertex[5];
    
    for (int i = 0; i < 5; ++i)
    {
        Dijkstra(5, i, map, distance, preVertex);
        for (int j = 0; j < 5; ++j)
        {
            int index = j;
            stack<int> trace;
            while (preVertex[index] != -1) {
                trace.push(preVertex[index]);
                index = preVertex[index];
            }
            
            cout << "路径：";
            while (!trace.empty()) {
                cout << trace.top() << " -- ";
                trace.pop();
            }
            cout << j;
            cout << " 距离是：" << distance[j] << endl;
            
            
        }
    }
    return 0;
}
