select * from employees;

delete from employees where employee_id = 100;

select * from employees;

rollback;

select * from employees;

delete from employees where employee_id = 100;

select * from employees;

commit;

rollback;

select * from employees;

create table demo
(
id int not null unique,
name varchar(25) not null
);

insert into demo values(101,'Rupam');
insert into demo values(102,'Shyam');
insert into demo values(103,'Smit');
insert into demo values(104,'Mahesh');
insert into demo values(105,'Suresh');

select * from demo;

commit;

savepoint s1;
delete from demo where id = 101;
savepoint s2;
delete from demo where id = 103;
savepoint s3;
delete from demo where id = 104;
savepoint s4;
delete from demo where id = 105;

select * from demo;

rollback to s2;