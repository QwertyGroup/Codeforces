{CoodeForces Problem 4 A}
{Арбуз}
var w:integer;
{----Main----}
begin
    readln(w);
    if w <= 2 then begin  writeln('NO'); exit; end;
    if (w-2) mod 2 = 0 then writeln('YES')
        else writeln('NO');
    //readln;
end.