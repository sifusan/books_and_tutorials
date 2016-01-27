import java.sql.*;

public class Error {
    public static void main(String[] args) {
        Connection conn = null;
        String url = "jdbc:mysql://localhost/cookbook";
        String userName = "badusr";
        String password = "badpass";

        try {
            Class.forName("com.mysql.jdbc.Driver").newInstance();
            conn = DriverManager.getConnection(url, userName, password);
            System.out.println("Connected");
            tryQuery(conn);
        }
        catch (Exception e) {
            System.out.println("Cannot connect to server");
            System.err.println(e);
            if (e instanceof SQLException) {
                printException((SQLException) e);
            }
        }
        finally {
            if (conn != null) {
                try {
                    conn.close();
                    System.out.println("Disconnected");
                }
                catch (SQLException e) {
                    printException(e);
                }
            }
        }
    }

    public static void tryQuery(Connection conn) {
        try {
            Statement s = conn.createStatement();
            s.execute("USE cookbook");
            s.close();

            SQLWarning w = conn.getWarnings();
            while (w != null) {
                System.err.println("SQLWarning: " + w.getMessage());
                System.err.println("SQLState: " + w.getSQLState());
                System.err.println("Vendor code: " + w.getErrorCode());
                w = w.getNextWarning();
            }
        }
        catch (SQLException e) {
            printException(e);
        }
    }

    public static void printException(SQLException e) {
        System.err.println("SQLException: " + e.getMessage());
        System.err.println("SQLState:" + e.getSQLState());
        System.err.println("Vendor Code: " + e.getErrorCode());
    }
}
