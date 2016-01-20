{CoodeForces Problem 58 A}
{Чат}
var S:string;
    i:integer;
{----Main----} {hello}
begin
    readln(S);
    if (pos('h',S) <> 0) and (pos('e',S) <> 0) and (pos('l',S) <> 0) and (pos('o',S) <> 0) then
        for i:=1 to length(S) do
            begin
                if (S[pos('h',S)+1] <> 'e') then delete(S,pos('h',S)+1,1);
                if (S[pos('e',S)+1] <> 'l') then delete(S,pos('e',S)+1,1);
                if (S[pos('l',S)+1] <> 'o') then delete(S,pos('l',S)+1,1);
            end
    else writeln('NO');
    writeln(S);
    readln;
end.