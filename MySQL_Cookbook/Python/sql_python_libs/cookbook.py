import mysql.connector

conn_params = {
    "database": "cookbook",
    "host": "localhost",
    "user": "root",
    "password": "root"
}

def connect():
    return mysql.connector.connect(**conn_params)
