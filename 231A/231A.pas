{CoodeForces Problem 231 A}
{Команда}

var n:integer;
    a, b, c:byte;
    counter:integer;
    i:integer;
{----Confidence----}
procedure pConfidence;
    var i:integer;
    begin
        i:=0;
        if a=1 then inc(i);
        if b=1 then inc(i);
        if c=1 then inc(i);
        if i >= 2 then inc(counter);
    end;
{----Main----}
begin
    readln(n);
    a:=0;
    b:=0;
    c:=0;
    counter:=0;
    for i:=1 to n do
        begin
            readln(a, b, c);
            pConfidence;
        end;
    write(counter);
    readln;
end.