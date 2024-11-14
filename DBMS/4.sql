create role student;

create user rahul identified by 'abc@123' default role student;

grant select on employees to rahul;

grant delete on employees to rahul;

revoke select,delete on employees from rahul;

drop role student;

drop user rahul;