LEVEL-0
Username: bandit0
password: bandit0

In Vs Terminal --->
ssh bandit0@bandit.labs.overthewire.org -p 2220
password: bandit0
cat readme
Logout: exit

LEVEL-1
userName: bandit1
Password: boJ9jbbUNNfktd78OOpsqOltutMc3MY1

cat ./-

Level-2
bandit2
Password: CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9

cat 'spaces in this filename'

Level-3
bandit3
Password: UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK

cd inhere
ls -a
cat .hidden

Level-4
bandit4
Password: pIwrPrtPN36QITSp3EQaw936yaFoFgAB

cd inhere
ls
cat ./-file07

Level-5
bandit5
Password: koReBOKuIDDepwhWk7jZC0RTdopnAYKh

find ./ -type f -readable ! -executable -size 1033c
cat ./inhere/maybehere07/.file2


Level -6
bandit6
Password: DXjZPULLxYr17uwoI01bNLQbtFemEgo7

find / -size 33c -user bandit7 -group bandit6
cat /var/lib/dpkg/info/bandit7.password

Level -7
bandit7
Password : HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs

grep "millionth" data.txt

Level -8
bandit8
Password : cvX2JJa4CFALtqS87jk27qwqGhBM9plV

sort data.txt | uniq -c

Level -9
bandit9
Password : UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR

strings data.txt | grep "=="

Level -10
bandit10
Password : truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk

base64 --decode data.txt

Level -11
bandit11
Password : IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR

cat data.txt | tr "[A-M,N-Z,a-m,n-z]" "[N-Z,A-M,n-z,a-m]"

Level -12
bandit12
Password : 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu

cd /temp
mkdir mahajan
cat /home/bandit12/data.txt | xxd -r > /mahajan/data1
file data1
mv data1 data1.gz
gzip -d data1.gz
ls
file data1
mv data1 data2.bz2
bzip2 -d data2.bz2

mv data data.tar
tar xvf data.tar
ls
file data

Finally ASCII TEXT 
cat data

Level -13
bandit13
Password : 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL

