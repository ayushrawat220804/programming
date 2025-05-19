import java.sql.*;

public class MySQLJDBCExample {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/mydb"; // database name is mydb
        String user = "root";                             // default username
        String password = "1234567890-=";                 // your provided password

        try {
            // Load MySQL JDBC Driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Connect to the database
            Connection conn = DriverManager.getConnection(url, user, password);
            System.out.println("✅ Connected to the database!");

            // Create a statement
            Statement stmt = conn.createStatement();

            // Execute a query
            String sql = "SELECT * FROM mytable";
            ResultSet rs = stmt.executeQuery(sql);

            // Process the result set
            System.out.println("+----+------------+-------------+--------+");
            System.out.println("| id | first_name | second_name | salary |");
            System.out.println("+----+------------+-------------+--------+");

            while (rs.next()) {
                int id = rs.getInt("id");
                String firstName = rs.getString("first_name");
                String secondName = rs.getString("second_name");
                int salary = rs.getInt("salary"); // will show 0 if NULL

                System.out.printf("| %-2d | %-10s | %-11s | %-6d |\n", id, firstName, secondName, salary);
            }

            System.out.println("+----+------------+-------------+--------+");

            // Close connections
            rs.close();
            stmt.close();
            conn.close();
        } catch (Exception e) {
            System.out.println("❌ Error: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
