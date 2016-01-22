{CoodeForces Problem 148 A}
{Средство от бессонницы}
var k, l, m, n, d, i:longint;
    counter:longint;
{----Main----}
begin
    readln(k);
    readln(l);
    readln(m);
    readln(n);
    readln(d);
    counter:=0;
    for i:=1 to d do
        if (i mod k = 0) or (i mod l = 0) or (i mod m = 0) or (i mod n = 0) then
            inc(counter);
    writeln(counter);
    //readln;
end.