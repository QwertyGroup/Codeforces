{CoodeForces Problem 131 A}
{cAPS lOCK}
var S:string;
{----Caps----}
procedure pCaps(var S:string);
    var i:integer;
    begin
        for i:=1 to length(S) do
            if (ord(S[i]) >= 65) and (ord(S[i]) <= 90) then
                S[i]:=char(ord(S[i])+32)
            else
                if (ord(S[i]) >= 97) and (ord(S[i]) <= 122) then
                    S[i]:=char(ord(S[i])-32);
    end;
{----Main----}
var bul:boolean;
    i:integer;
begin
    readln(S);

    bul:=true;
    
    for i:=2 to length(S) do
        if (ord(S[i]) >= 97) and (ord(S[i]) <= 122) then
            begin
                bul:=false;
                break;
            end;

    if bul then pCaps(S);

    writeln(S);
    //readln;
end.