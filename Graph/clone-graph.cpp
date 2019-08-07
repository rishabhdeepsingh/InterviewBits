UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *src) {
   map<UndirectedGraphNode*,UndirectedGraphNode*> my_map;
   queue<UndirectedGraphNode*> Q;
   Q.push(src);
   my_map[src] = new UndirectedGraphNode(src->label);
   while(!Q.empty()){
       UndirectedGraphNode* fr = Q.front();
       Q.pop();
       for(UndirectedGraphNode* x: fr->neighbors){
           if(!my_map.count(x)){
               my_map[x] = new UndirectedGraphNode(x->label);
               Q.push(x);
           }
           my_map[fr]->neighbors.push_back(my_map[x]);
       }
   }
   return my_map[src];
}
