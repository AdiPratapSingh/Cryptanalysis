
# print("Cryptbits")
# print("#amkers12")
# print("4")
# print("read")
# print("password")

# file = open("output.txt", "r+")
# for x in file:
#     print (x)
#     print ("c")
# print ("back")
# print ("exit")

import paramiko

router_ip = "172.27.26.188"
router_username = "students"
router_password = "cs641a"

ssh = paramiko.SSHClient()

# Load SSH host keys.
ssh.load_system_host_keys()
# Add SSH host key automatically if needed.
ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())
# Connect to router using username/password authentication.
ssh.connect(router_ip, 
            username=router_username, 
            password=router_password,
            look_for_keys=False )

# Run command.
ssh_stdin, ssh_stdout, ssh_stderr = ssh.exec_command("cryptbits")

output = ssh_stdout.readlines()
# Close connection.
ssh.close()

# Analyze show ip route output
for line in output:
    if "0.0.0.0/0" in line:
        print("Found default route:")
        print(line)