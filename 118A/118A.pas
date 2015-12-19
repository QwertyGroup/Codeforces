{CoodeForces Problem 118 A}
{Упражнение на строки}
var S:string;
{----Action1----}
procedure pAction1(var S:string); {"A", "O", "Y", "E", "U", "I",}
    var i:integer;
    begin
        i:=0;
        while i <= length(S) do
            begin
                if (S[i] = 'a') or (S[i] = 'o') or (S[i] = 'y') or (S[i] = 'e') or (S[i] = 'u') or (S[i] = 'i') or (S[i] = 'A') or (S[i] = 'O') or (S[i] = 'Y') or (S[i] = 'E') or (S[i] = 'U') or (S[i] = 'I') then
                    begin
                        Delete(S,i,1);
                        i:=0;
                    end;
                inc(i);
            end;
    end;
{----Action2----}
procedure pAction2(var S:string); {65 - 90} {97 - 122}
    var i:integer;
    begin
        for i:=1 to length(S) do
            if (ord(S[i]) >= 65) and (ord(S[i]) <= 90) then
                S[i]:=char(ord(S[i])+32);
    end;
{----Action3----}
procedure pAction3(var S:string);
    var i:integer;
    begin
        i:=1;
        while i <= length(S) do
            begin
                insert('.',S,i);
                inc(i,2);
            end;
    end;
{----Main----}
begin
    readln(S);
    pAction1(S);
    pAction2(S);
    pAction3(S);
    write(S);
    readln;
end.