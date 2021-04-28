# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct D:\0FPGA_SOFTWARE\BRAM\bram_control\platform.tcl
# 
# OR launch xsct and run below command.
# source D:\0FPGA_SOFTWARE\BRAM\bram_control\platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {bram_control}\
-hw {C:\Users\user\Desktop\FPGA_UART\BRAM_XSA.xsa}\
-proc {microblaze_0} -os {standalone} -fsbl-target {psu_cortexa53_0} -out {D:/0FPGA_SOFTWARE/BRAM}

platform write
platform generate -domains 
platform active {bram_control}
platform generate
