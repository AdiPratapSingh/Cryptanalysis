#!/usr/bin/expect -f
spawn ssh students@172.27.26.188 
expect ": "
send "cs641a\r"
expect ": "
send "Cryptbits\r"
expect ": "
send "#amkers12\r"
expect ": "
send "4\r"
expect "> "
send "read\r"
set fd "inpair.txt"
set fp [open "$fd" r]
set data [read $fp]
foreach line $data {
    expect "> "
    send "$line\r"
    expect "> "
    send "c\r"
}
