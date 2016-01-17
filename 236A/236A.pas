{CoodeForces Problem 236 A}
{Девушка или Юноша}
var S:string;
    i:integer;
    A:string;
{----Main----}
begin
    readln(S);
    A:=''; 
    for i:=1 to length(S) do
        if pos(S[i],A) = 0 then
            A:=A+S[i];
    if length(A) mod 2 = 0 then writeln('CHAT WITH HER!')
    else writeln('IGNORE HIM!');
    //readln;
end.