
-- dbnull unique
CREATE DATABASE IF NOT EXISTS hbtn_0d_usa;
--DB need tobe used
USE hbtn_0d_usa;
-- my table also created
CREATE TABLE IF NOT EXISTS states (id INT UNIQUE NOT NULL AUTO_INCREMENT, name VARCHAR(256) NOT NULL, PRIMARY KEY(id));

