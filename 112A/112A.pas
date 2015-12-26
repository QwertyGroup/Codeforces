{CoodeForces Problem 112 A}
{Петя и строки}
var S1:string;
    S2:string;
    i:integer;
{----Main----}
begin
    readln(S1);
    readln(S2);
    S1:=upCase(S1);
    S2:=upCase(S2);
    if S1 = S2 then begin  writeln(0); exit; end;
    for i:=1 to length(S1) do
        begin
            if S1[i] < S2[i] then begin writeln(-1); exit; end;
            if S1[i] > S2[i] then begin writeln(+1); exit; end;
        end;
    //writeln(S1);
    //writeln(S2);
    //readln;
end.