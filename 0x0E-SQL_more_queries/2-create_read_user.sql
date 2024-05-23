
-- creat and grant 
CREATE DATABASE IF NOT EXISTS hbtn_0d_2;
--  a user being created
CREATE USER IF NOT EXISTS user_0d_2@localhost IDENTIFIED BY 'user_0d_2_pwd';
-- grants a selected  user previleger
GRANT SELECT ON hbtn_0d_2.* TO user_0d_2@localhost;

