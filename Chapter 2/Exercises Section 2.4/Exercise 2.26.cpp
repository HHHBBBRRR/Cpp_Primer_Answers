(a)const int buf;     /*error: buf is uninitialized const*/
(b)int cnt = 0;       /*OK*/
(c)const int sz = cnt;/*OK*/
(d)++cnt;             /*OK*/
   ++sz;              /*error: attempt to write to const object*/
