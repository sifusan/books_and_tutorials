import cookbook
import mysql.connector

try:
    conn = cookbook.connect()
    print "Connecting"
except mysql.connector.Error as e:
    print "Cannot connect to the server"
    print "Error code: %s" % e.errno
    print "Eroor message: %s" % e.msg
else:
    conn.close()
    print "Disconnected"
    
