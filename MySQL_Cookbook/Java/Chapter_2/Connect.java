import java.sql.*;

public class Connect {
    public static void main(String[] args) {
        Connection conn = null;
        String url = "jdbc:mysql://localhost/cookbook";
        String userName = "root";
        String password = "root";

        try {
            Class.forName("com.mysql.jdbc.Driver").newInstance();
            conn = DriverManager.getConnection(url, userName, password);
            System.out.println("Connected");
        }
        catch (Exception e) {
            System.out.println("Cannot connect to the server");
            e.printStackTrace();
            System.exit(1);
        }
        if (conn != null) {
            try {
                conn.close();
                System.out.println("Disconnected");
            }
            catch (Exception e) {

            }
        }
    }
}
