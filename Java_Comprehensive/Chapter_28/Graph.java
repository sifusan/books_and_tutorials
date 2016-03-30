public interface Graph<V> {
    public int getSize();
    
    public java.util.List<V> getVertices();
    
    public V getVertex(V v);
    
    public java.util.List<Integer> getNeighbours(int index);
    
    public int getDegree(int v);
    
    public void printEdges();
    
    public void clear();
    
    public void addVertex(V vertex);
    
    public void addEdge(int u, int v);
    
    public AbstractGraph<V>.Tree dfs(int v);
    
    public AbstractGraph<V>.Tree bfs(int v);
    
}
