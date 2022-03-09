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

set fd "rand_input.txt"
set fp [open "$fd" r]
set data [read $fp]
set outputFilename "output.txt"
set outFileId [open $outputFilename "w"]
foreach line $data {
 puts "$line\r"
 puts -nonewline $outFileId "A first line\n"
}
close $outFileId
