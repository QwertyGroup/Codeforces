{CoodeForces Problem 96 A}
{Футбол}
{>= 7 - YES} {< 7 - NO}
var S:string;
{----Main----}
begin
    readln(S);
    if (pos('1111111',S) <> 0) or (pos('0000000',S) <> 0) then
        writeln('YES')
    else
        writeln('NO');
end.