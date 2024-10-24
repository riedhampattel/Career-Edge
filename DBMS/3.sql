select * from employees;

update employees set salary = 10000 where employee_id = 200;

select * from employees;

update employees set manager_id = 149 where employee_id = 200;

select * from employees;

delete from employees where employee_id = 205;

select * from employees;

select * from employees where department_id = 90;

select * from employees where commission_pct is not null;

select * from employees where commission_pct is null;

select * from employees where salary>10000;

select * from employees where salary<5000;

select * from employees where salary=10000;

select * from employees where salary>10000 and salary<20000;

select * from employees where salary<10000 or salary>20000;

select * from employees where department_id = 90 or department_id = 60 or department_id = 80;

select * from employees where department_id in (90,60,80);

select * from employees where department_id not in (90,60,80);

select * from employees;

select * from employees where (manager_id,department_id) in ((124,50),(102,60));

select * from employees where (manager_id,department_id) not in ((124,50),(102,60));