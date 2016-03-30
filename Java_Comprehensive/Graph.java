public interface Graph<V> {
    public int getSize();
    
    public java.util.List<V> getVertices();
    
    public V getVertex(V v);
    
    public java.util.List<Integer> getNeighbours(int index);
    
    public int getDegree(int v);
    
    public void printEdges();
    
    public void clear();
    
    public void addVertex();
    
    public void addEdge();
    
    public void AbstractGraph<V>.Tree dfs(int v);
    
    public AbstractGraph<V>.Tree bfs(int v);
    
}
