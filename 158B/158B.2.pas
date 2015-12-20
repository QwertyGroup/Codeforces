{CoodeForces Problem 158 B}
{Такси}
type Tarr = array[1..100000] of byte;
var n:integer;
    S:Tarr;
    sum:longint;
    i:integer;
{----Main----}
begin
    readln(n);
    for i:=1 to n do
        read(S[i]);
    sum:=0;
    for i:=1 to n do
        inc(sum,S[i]);
    if sum mod 4 <> 0 then
            write((sum div 4)+1)
    else
            write(sum div 4);
end.