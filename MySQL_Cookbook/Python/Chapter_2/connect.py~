#!/usr/bin/python
#connect.py: connect to the MySQL server

import mysql.connector

try:
    conn = mysql.connector.connect(database = "cookbook",
                                   host = "localhost",
                                   user = "root",
                                   password = "root",
                                   port = "3307",
                                   unix_socket = "/var/run/mysqld/mysqld.sock")
    print "Connected"
except:
    print "Cannot connect to server"
else:
    conn.close()
    print "Disconnected"
				

