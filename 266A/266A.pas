{CoodeForces Problem 266 A}
{Камни на столе}
var n:integer;
    S:string;
    count:integer;
{----Main----} {RGB}
begin
    readln(n);
    readln(S);

    count:=0;
    while pos('RR',S) <> 0 do
        begin
            delete(S,pos('RR',S),1);
            inc(count);
        end;

    while pos('GG',S) <> 0 do
        begin
            delete(S,pos('GG',S),1);
            inc(count);
        end;

    while pos('BB',S) <> 0 do
        begin
            delete(S,pos('BB',S),1);
            inc(count);
        end;

    writeln(count);
    //readln;
end.