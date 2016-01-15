{CoodeForces Problem 133 A}
{HQ9+}
var S:string;
{----Check----} {H Q 9}
function fCheck(S:string):boolean;
    var c:boolean;
    begin
        c:=false;
        if pos('H',S) <> 0 then
            c:=true;
        if pos('Q',S) <> 0 then
            c:=true;
        if pos('9',S) <> 0 then
            c:=true;
        fCheck:=c;
    end;
{----Main----}
begin
    readln(S);
    if fCheck(S) then write('YES') else write('NO');
    //readln;
end.