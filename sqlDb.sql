 -- inner join
-- syntax: select colunms names....  from table_A inner join table_B on table_a.id=table_b.id;
SELECT 
    customer.id, name, salary, mode, amount
FROM
    customer
        INNER JOIN
    payment ON customer.id = payment.cid; 

-- left outer join
-- synatx:
-- select columns names from tableA left join tableB on tablea.id=tableb.id;
SELECT 
    name, salary, mobile_no, mode, pay_dt
FROM
    customer
        LEFT JOIN
    payment ON customer.id = payment.cid;

-- right outer join
-- synatx:
-- select columns names from tableA right join tableB on tablea.id=tableb.id;
SELECT 
*
FROM
    customer
        right JOIN
    payment ON customer.id = payment.cid;
    
-- full outer join 
SELECT 
    name, salary, mobile_no, mode, pay_dt
FROM
    customer
        LEFT JOIN
    payment ON customer.id = payment.cid
union 
SELECT name, salary, mobile_no, mode, pay_dt 
FROM
    customer
        right JOIN
    payment ON customer.id = payment.cid;
    
-- self join
SELECT 
    c.id, c.name, p.mode, p.amount, c.salary
FROM
    customer c,
    payment p
WHERE
    c.id = p.cid;

-- cross join
select * from customer cross join payment;
