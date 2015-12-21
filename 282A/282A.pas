{CoodeForces Problem 282 A}
{Bit++}
var n, i, x:integer;
    S:string;
{----Counter----}
procedure pCount(const S:string);
    begin
        if pos('+',S) <> 0 then
            inc(x);
        if pos('-',S) <> 0 then
            dec(x);
    end;
{----Main----}
begin
    readln(n);
    x:=0;
    for i:=1 to n do
        begin
            readln(S);
            pCount(S);
        end;
    writeln(x);
end.