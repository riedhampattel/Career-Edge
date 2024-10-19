create schema career_edge;

create table employees
(
employee_id int not null unique,
first_name varchar(15) not null,
last_name varchar(15) not null,
hire_date date not null,
salary int not null,
commission_pct float,
manager_id int
);

describe employees;

select employee_id,first_name,salary from employees;

select * from employees;

-- rename table
alter table employees rename to employee_data;
alter table employee_data rename to employees;

select * from employees;

select * from employee_data;

-- delete column
alter table employees drop column hire_date;

select * from employees;

-- add new column
alter table employees add column hire_date date not null;

select * from employees;

-- add column at specific position
alter table employees add column hire_date date not null after last_name;

select * from employees;

-- rename column
alter table employees rename column hire_date to hd;
alter table employees rename column hd to hire_date;

select * from employees;

describe employees;

-- modify any column
alter table employees modify hire_date varchar(15);
alter table employees modify hire_date varchar(15) not null;

describe employees;

drop table employees;

drop schema career_edge;