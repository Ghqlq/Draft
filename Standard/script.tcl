############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
############################################################
open_project SpMV_CSR
set_top spmv
add_files ../../Downloads/CSR_baseline.cpp
add_files ../../Downloads/CSR_baseline.h
add_files -tb ../../Downloads/CSR_tb.cpp
open_solution "Standard" -flow_target vivado
set_part {xczu3eg-sfvc784-1-e}
create_clock -period 10 -name default
source "./SpMV_CSR/Standard/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
