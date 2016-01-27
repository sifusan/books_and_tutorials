import mysql.connector

conn_params = {
    "database": "cookbook",
    "host": "localhost",
    "user": "baduser",
    "password": "baspassword"
}

try:
    conn = mysql.connector.connect(**conn_params)
    print "Connected"
except mysql.connector.Error as e:
    print "Cannot connect to server"
    print "Error code: %s" % e.errno
    print "Error message: %s" % e.msg
    print "Error SQLSTATE: %s" % e.sqlstate
