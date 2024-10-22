insert into employees values (100,'Steven','King','1999-07-06',24000,null,null);

select employee_id,first_name from employees;

select * from employees;

alter table employees modify hire_date varchar(15) not null;

update employees set hire_date = date_format(hire_date,'%d-%b-%y');

select * from employees;

insert into employees values (101,'Krunal','Shah','15-AUG-78',15000,null,100);