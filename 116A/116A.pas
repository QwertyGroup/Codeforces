{CoodeForces Problem 116 A}
{Трамвай}
var n:integer;
    i:integer;
    max, current:integer;
    a, b:integer;
{----Max----}
procedure pMax;
    begin
        dec(current,a);
        inc(current,b);
        if current > max then
            max:=current;
    end;
{----Main----}
begin
    max:=0;
    current:=0;
    readln(n);
    for i:=1 to n do
        begin
            readln(a,b); {a - exit; b - enter}
            pMax;
        end;
    writeln(max);
end.