public class CheckPoint7_13 {
    public static void main(String[] args) {
        
        int[] source = {3, 4, 5};
        int[] target = new int[3];
        
        System.arraycopy(source, 0, target, 0, source.length);
        
        for (int i: target) {
            System.out.println(i);
        }
        
        System.out.print("\nAnd the source contains : \n");
        
        for (int i: source) {
            System.out.println(i);
        }
            
    }
}
