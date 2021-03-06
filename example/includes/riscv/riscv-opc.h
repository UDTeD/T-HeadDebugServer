/*
 * Copyright (C) 2021 T-HEAD Semiconductor Co.,Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// ****************************************************************************
// File name: riscv-opc.h
// function description: defination for RISCV Operactions .
//
// ****************************************************************************


/* Automatically generated by parse-opcodes.  */
#ifndef RISCV_CSR_ENCODEING_H
#define RISCV_CSR_ENCODEING_H

#define CSR_USTATUS 0x0
#define CSR_FFLAGS 0x1
#define CSR_FRM 0x2
#define CSR_FCSR 0x3
#define CSR_UIE 0x4
#define CSR_UTVEC 0x5
#define CSR_USCRATCH 0x40
#define CSR_UEPC 0x41
#define CSR_UCAUSE 0x42
#define CSR_UTVAL 0x43
#define CSR_UIP 0x44
#define CSR_CYCLE 0xc00
#define CSR_TIME 0xc01
#define CSR_INSTRET 0xc02
#define CSR_HPMCOUNTER3 0xc03
#define CSR_HPMCOUNTER4 0xc04
#define CSR_HPMCOUNTER5 0xc05
#define CSR_HPMCOUNTER6 0xc06
#define CSR_HPMCOUNTER7 0xc07
#define CSR_HPMCOUNTER8 0xc08
#define CSR_HPMCOUNTER9 0xc09
#define CSR_HPMCOUNTER10 0xc0a
#define CSR_HPMCOUNTER11 0xc0b
#define CSR_HPMCOUNTER12 0xc0c
#define CSR_HPMCOUNTER13 0xc0d
#define CSR_HPMCOUNTER14 0xc0e
#define CSR_HPMCOUNTER15 0xc0f
#define CSR_HPMCOUNTER16 0xc10
#define CSR_HPMCOUNTER17 0xc11
#define CSR_HPMCOUNTER18 0xc12
#define CSR_HPMCOUNTER19 0xc13
#define CSR_HPMCOUNTER20 0xc14
#define CSR_HPMCOUNTER21 0xc15
#define CSR_HPMCOUNTER22 0xc16
#define CSR_HPMCOUNTER23 0xc17
#define CSR_HPMCOUNTER24 0xc18
#define CSR_HPMCOUNTER25 0xc19
#define CSR_HPMCOUNTER26 0xc1a
#define CSR_HPMCOUNTER27 0xc1b
#define CSR_HPMCOUNTER28 0xc1c
#define CSR_HPMCOUNTER29 0xc1d
#define CSR_HPMCOUNTER30 0xc1e
#define CSR_HPMCOUNTER31 0xc1f
#define CSR_CYCLEH 0xc80
#define CSR_TIMEH 0xc81
#define CSR_INSTRETH 0xc82
#define CSR_HPMCOUNTER3H 0xc83
#define CSR_HPMCOUNTER4H 0xc84
#define CSR_HPMCOUNTER5H 0xc85
#define CSR_HPMCOUNTER6H 0xc86
#define CSR_HPMCOUNTER7H 0xc87
#define CSR_HPMCOUNTER8H 0xc88
#define CSR_HPMCOUNTER9H 0xc89
#define CSR_HPMCOUNTER10H 0xc8a
#define CSR_HPMCOUNTER11H 0xc8b
#define CSR_HPMCOUNTER12H 0xc8c
#define CSR_HPMCOUNTER13H 0xc8d
#define CSR_HPMCOUNTER14H 0xc8e
#define CSR_HPMCOUNTER15H 0xc8f
#define CSR_HPMCOUNTER16H 0xc90
#define CSR_HPMCOUNTER17H 0xc91
#define CSR_HPMCOUNTER18H 0xc92
#define CSR_HPMCOUNTER19H 0xc93
#define CSR_HPMCOUNTER20H 0xc94
#define CSR_HPMCOUNTER21H 0xc95
#define CSR_HPMCOUNTER22H 0xc96
#define CSR_HPMCOUNTER23H 0xc97
#define CSR_HPMCOUNTER24H 0xc98
#define CSR_HPMCOUNTER25H 0xc99
#define CSR_HPMCOUNTER26H 0xc9a
#define CSR_HPMCOUNTER27H 0xc9b
#define CSR_HPMCOUNTER28H 0xc9c
#define CSR_HPMCOUNTER29H 0xc9d
#define CSR_HPMCOUNTER30H 0xc9e
#define CSR_HPMCOUNTER31H 0xc9f
#define CSR_SSTATUS 0x100
#define CSR_SEDELEG 0x102
#define CSR_SIDELEG 0x103
#define CSR_SIE 0x104
#define CSR_STVEC 0x105
#define CSR_SCOUNTEREN 0x106
#define CSR_SSCRATCH 0x140
#define CSR_SEPC 0x141
#define CSR_SCAUSE 0x142
#define CSR_STVAL 0x143
#define CSR_SIP 0x144
#define CSR_SATP 0x180
#define CSR_MVENDORID 0xf11
#define CSR_MARCHID 0xf12
#define CSR_MIMPID 0xf13
#define CSR_MHARTID 0xf14
#define CSR_MSTATUS 0x300
#define CSR_MISA 0x301
#define CSR_MEDELEG 0x302
#define CSR_MIDELEG 0x303
#define CSR_MIE 0x304
#define CSR_MTVEC 0x305
#define CSR_MCOUNTEREN 0x306
#define CSR_MTVT 0x307
#define CSR_MSCRATCH 0x340
#define CSR_MEPC 0x341
#define CSR_MCAUSE 0x342
#define CSR_MTVAL 0x343
#define CSR_MIP 0x344
#define CSR_MNXTI 0x345
#define CSR_MINTSTATUS 0x346
#define CSR_MSCRATCHCSW 0x348
#define CSR_MSCRATCHCSWL 0x349
#define CSR_MCLICBASE 0x350
#define CSR_PMPCFG0 0x3a0
#define CSR_PMPCFG1 0x3a1
#define CSR_PMPCFG2 0x3a2
#define CSR_PMPCFG3 0x3a3
#define CSR_PMPADDR0 0x3b0
#define CSR_PMPADDR1 0x3b1
#define CSR_PMPADDR2 0x3b2
#define CSR_PMPADDR3 0x3b3
#define CSR_PMPADDR4 0x3b4
#define CSR_PMPADDR5 0x3b5
#define CSR_PMPADDR6 0x3b6
#define CSR_PMPADDR7 0x3b7
#define CSR_PMPADDR8 0x3b8
#define CSR_PMPADDR9 0x3b9
#define CSR_PMPADDR10 0x3ba
#define CSR_PMPADDR11 0x3bb
#define CSR_PMPADDR12 0x3bc
#define CSR_PMPADDR13 0x3bd
#define CSR_PMPADDR14 0x3be
#define CSR_PMPADDR15 0x3bf
#define CSR_SXSTATUS 0x5c0
#define CSR_SHCR 0x5c1
#define CSR_SCER2 0x5c2
#define CSR_SCER 0x5c3
#define CSR_SCOUNTERINTEN 0x5c4
#define CSR_SCOUNTEROF 0x5c5
#define CSR_SHINT 0x5c6
#define CSR_SHINT2 0x5c7
#define CSR_SCOUNTINHIBIT 0x5c8
#define CSR_SCYCLE 0x5e0
#define CSR_SHPMCOUNTER1 0x5e1
#define CSR_SHPMCOUNTER2 0x5e2
#define CSR_SHPMCOUNTER3 0x5e3
#define CSR_SHPMCOUNTER4 0x5e4
#define CSR_SHPMCOUNTER5 0x5e5
#define CSR_SHPMCOUNTER6 0x5e6
#define CSR_SHPMCOUNTER7 0x5e7
#define CSR_SHPMCOUNTER8 0x5e8
#define CSR_SHPMCOUNTER9 0x5e9
#define CSR_SHPMCOUNTER10 0x5ea
#define CSR_SHPMCOUNTER11 0x5eb
#define CSR_SHPMCOUNTER12 0x5ec
#define CSR_SHPMCOUNTER13 0x5ed
#define CSR_SHPMCOUNTER14 0x5ee
#define CSR_SHPMCOUNTER15 0x5ef
#define CSR_SHPMCOUNTER16 0x5f0
#define CSR_SHPMCOUNTER17 0x5f1
#define CSR_SHPMCOUNTER18 0x5f2
#define CSR_SHPMCOUNTER19 0x5f3
#define CSR_SHPMCOUNTER20 0x5f4
#define CSR_SHPMCOUNTER21 0x5f5
#define CSR_SHPMCOUNTER22 0x5f6
#define CSR_SHPMCOUNTER23 0x5f7
#define CSR_SHPMCOUNTER24 0x5f8
#define CSR_SHPMCOUNTER25 0x5f9
#define CSR_SHPMCOUNTER26 0x5fa
#define CSR_SHPMCOUNTER27 0x5fb
#define CSR_SHPMCOUNTER28 0x5fc
#define CSR_SHPMCOUNTER29 0x5fd
#define CSR_SHPMCOUNTER30 0x5fe
#define CSR_SHPMCOUNTER31 0x5ff
#define CSR_MSECCFG 0x747
#define CSR_TSELECT 0x7a0
#define CSR_TDATA1 0x7a1
#define CSR_TDATA2 0x7a2
#define CSR_TDATA3 0x7a3
#define CSR_DCSR 0x7b0
#define CSR_DPC 0x7b1
#define CSR_DSCRATCH 0x7b2
#define CSR_MXSTATUS 0x7c0
#define CSR_MHCR 0x7c1
#define CSR_MCOR 0x7c2
#define CSR_MCCR2 0x7c3
#define CSR_MCER2 0x7c4
#define CSR_MHINT 0x7c5
#define CSR_MRMR 0x7c6
#define CSR_MRVBR 0x7c7
#define CSR_MCER 0x7c8
#define CSR_MCOUNTERWEN 0x7c9
#define CSR_MCOUNTERINTEN 0x7ca
#define CSR_MCOUNTEROF 0x7cb
#define CSR_MHINT2 0x7cc
#define CSR_MHINT3 0x7cd
#define CSR_MHINT4 0x7ce
#define CSR_MRADDR 0x7e0
#define CSR_MEXSTATUS 0x7e1
#define CSR_MNMICAUSE 0x7e2
#define CSR_MNMIPC 0x7e3
#define CSR_USP 0x7d1
#define CSR_MCINS 0x7d2
#define CSR_MCINDEX 0x7d3
#define CSR_MCDATA0 0x7d4
#define CSR_MCDATA1 0x7d5
#define CSR_MEICR 0x7d6
#define CSR_MEICR2 0x7d7
#define CSR_MCPER 0x7D9
#define CSR_MZONEID 0x7f5
#define CSR_FXCR 0x800
#define CSR_SMIR 0x9c0
#define CSR_SMEL 0x9c1
#define CSR_SMEH 0x9c2
#define CSR_SMCIR 0x9c3
#define CSR_MCYCLE 0xb00
#define CSR_MINSTRET 0xb02
#define CSR_MHPMCOUNTER3 0xb03
#define CSR_MHPMCOUNTER4 0xb04
#define CSR_MHPMCOUNTER5 0xb05
#define CSR_MHPMCOUNTER6 0xb06
#define CSR_MHPMCOUNTER7 0xb07
#define CSR_MHPMCOUNTER8 0xb08
#define CSR_MHPMCOUNTER9 0xb09
#define CSR_MHPMCOUNTER10 0xb0a
#define CSR_MHPMCOUNTER11 0xb0b
#define CSR_MHPMCOUNTER12 0xb0c
#define CSR_MHPMCOUNTER13 0xb0d
#define CSR_MHPMCOUNTER14 0xb0e
#define CSR_MHPMCOUNTER15 0xb0f
#define CSR_MHPMCOUNTER16 0xb10
#define CSR_MHPMCOUNTER17 0xb11
#define CSR_MHPMCOUNTER18 0xb12
#define CSR_MHPMCOUNTER19 0xb13
#define CSR_MHPMCOUNTER20 0xb14
#define CSR_MHPMCOUNTER21 0xb15
#define CSR_MHPMCOUNTER22 0xb16
#define CSR_MHPMCOUNTER23 0xb17
#define CSR_MHPMCOUNTER24 0xb18
#define CSR_MHPMCOUNTER25 0xb19
#define CSR_MHPMCOUNTER26 0xb1a
#define CSR_MHPMCOUNTER27 0xb1b
#define CSR_MHPMCOUNTER28 0xb1c
#define CSR_MHPMCOUNTER29 0xb1d
#define CSR_MHPMCOUNTER30 0xb1e
#define CSR_MHPMCOUNTER31 0xb1f
#define CSR_MCYCLEH 0xb80
#define CSR_MINSTRETH 0xb82
#define CSR_MHPMCOUNTER3H 0xb83
#define CSR_MHPMCOUNTER4H 0xb84
#define CSR_MHPMCOUNTER5H 0xb85
#define CSR_MHPMCOUNTER6H 0xb86
#define CSR_MHPMCOUNTER7H 0xb87
#define CSR_MHPMCOUNTER8H 0xb88
#define CSR_MHPMCOUNTER9H 0xb89
#define CSR_MHPMCOUNTER10H 0xb8a
#define CSR_MHPMCOUNTER11H 0xb8b
#define CSR_MHPMCOUNTER12H 0xb8c
#define CSR_MHPMCOUNTER13H 0xb8d
#define CSR_MHPMCOUNTER14H 0xb8e
#define CSR_MHPMCOUNTER15H 0xb8f
#define CSR_MHPMCOUNTER16H 0xb90
#define CSR_MHPMCOUNTER17H 0xb91
#define CSR_MHPMCOUNTER18H 0xb92
#define CSR_MHPMCOUNTER19H 0xb93
#define CSR_MHPMCOUNTER20H 0xb94
#define CSR_MHPMCOUNTER21H 0xb95
#define CSR_MHPMCOUNTER22H 0xb96
#define CSR_MHPMCOUNTER23H 0xb97
#define CSR_MHPMCOUNTER24H 0xb98
#define CSR_MHPMCOUNTER25H 0xb99
#define CSR_MHPMCOUNTER26H 0xb9a
#define CSR_MHPMCOUNTER27H 0xb9b
#define CSR_MHPMCOUNTER28H 0xb9c
#define CSR_MHPMCOUNTER29H 0xb9d
#define CSR_MHPMCOUNTER30H 0xb9e
#define CSR_MHPMCOUNTER31H 0xb9f
#define CSR_MHPMEVENT3 0x323
#define CSR_MHPMEVENT4 0x324
#define CSR_MHPMEVENT5 0x325
#define CSR_MHPMEVENT6 0x326
#define CSR_MHPMEVENT7 0x327
#define CSR_MHPMEVENT8 0x328
#define CSR_MHPMEVENT9 0x329
#define CSR_MHPMEVENT10 0x32a
#define CSR_MHPMEVENT11 0x32b
#define CSR_MHPMEVENT12 0x32c
#define CSR_MHPMEVENT13 0x32d
#define CSR_MHPMEVENT14 0x32e
#define CSR_MHPMEVENT15 0x32f
#define CSR_MHPMEVENT16 0x330
#define CSR_MHPMEVENT17 0x331
#define CSR_MHPMEVENT18 0x332
#define CSR_MHPMEVENT19 0x333
#define CSR_MHPMEVENT20 0x334
#define CSR_MHPMEVENT21 0x335
#define CSR_MHPMEVENT22 0x336
#define CSR_MHPMEVENT23 0x337
#define CSR_MHPMEVENT24 0x338
#define CSR_MHPMEVENT25 0x339
#define CSR_MHPMEVENT26 0x33a
#define CSR_MHPMEVENT27 0x33b
#define CSR_MHPMEVENT28 0x33c
#define CSR_MHPMEVENT29 0x33d
#define CSR_MHPMEVENT30 0x33e
#define CSR_MHPMEVENT31 0x33f
#define CSR_TSELECT 0x7a0
#define CSR_TDATA1 0x7a1
#define CSR_TDATA2 0x7a2
#define CSR_TDATA3 0x7a3
#define CSR_TINFO 0x7a4
#define CSR_TCONTROL 0x7a5
#define CSR_MCONTEXT 0x7a8
#define CSR_SCONTEXT 0x7aa
#define CSR_DCSR 0x7b0
#define CSR_DPC 0x7b1
#define CSR_DSCRATCH 0x7b2

/* RVV */
#define CSR_VSTART 0x008
#define CSR_VXSAT 0x009
#define CSR_VXRM 0x00a
#define CSR_VCSR 0x00f
#define CSR_VL 0xc20
#define CSR_VTYPE 0xc21
#define CSR_VLENB 0xc22

/* These registers are present in priv spec 1.9.1, dropped in 1.10.  */
#define CSR_HSTATUS 0x200
#define CSR_HEDELEG 0x202
#define CSR_HIDELEG 0x203
#define CSR_HIE 0x204
#define CSR_HTVEC 0x205
#define CSR_HSCRATCH 0x240
#define CSR_HEPC 0x241
#define CSR_HCAUSE 0x242
#define CSR_HBADADDR 0x243
#define CSR_HIP 0x244
/* CSR_MISA is 0xf10 in 1.9, but 0x301 in 1.9.1.  */
#define CSR_MBASE 0x380
#define CSR_MBOUND 0x381
#define CSR_MIBASE 0x382
#define CSR_MIBOUND 0x383
#define CSR_MDBASE 0x384
#define CSR_MDBOUND 0x385
#define CSR_MCOUNTINHIBIT 0x320
#define CSR_MSCOUNTEREN 0x321
#define CSR_MHCOUNTEREN 0x322
#define CSR_MEBR 0xbe0
#define CSR_NT_MSTATUS 0xbe1
#define CSR_NT_MIE 0xbe2
#define CSR_NT_MTVEC 0xbe3
#define CSR_NT_MTVT 0xbe4
#define CSR_NT_MEPC 0xbe5
#define CSR_NT_MCAUSE 0xbe6
#define CSR_NT_MIP 0xbe7
#define CSR_NT_MINTSTATE 0xbe8
#define CSR_NT_MXSTATUS 0xbe9
#define CSR_NT_MEBR 0xbea
#define CSR_NT_MSP 0xbeb
#define CSR_T_USP 0xbec
#define CSR_T_MDCR 0xbed
#define CSR_T_MPCR 0xbee
#define CSR_PMPTEECFG 0xbef
#define CSR_CPUID 0xfc0
#define CSR_MCPUID 0xfc0
#define CSR_MHALTCAUSE 0xfe0
#define CSR_MDBGINFO 0xfe1
#define CSR_MPCFIFO 0xfe2
#define CSR_MDBGINFO2 0xfe3
//#define CSR_MPIPEINFO 0xXXX
#define CAUSE_MISALIGNED_FETCH 0x0
#define CAUSE_FAULT_FETCH 0x1
#define CAUSE_ILLEGAL_INSTRUCTION 0x2
#define CAUSE_BREAKPOINT 0x3
#define CAUSE_MISALIGNED_LOAD 0x4
#define CAUSE_FAULT_LOAD 0x5
#define CAUSE_MISALIGNED_STORE 0x6
#define CAUSE_FAULT_STORE 0x7
#define CAUSE_USER_ECALL 0x8
#define CAUSE_SUPERVISOR_ECALL 0x9
#define CAUSE_HYPERVISOR_ECALL 0xa
#define CAUSE_MACHINE_ECALL 0xb
#endif

#ifdef DECLARE_CSR
#define DEFINE_CSR DECLARE_CSR
DEFINE_CSR(ustatus, CSR_USTATUS)
DEFINE_CSR(uie, CSR_UIE)
DEFINE_CSR(utvec, CSR_UTVEC)
DEFINE_CSR(uscratch, CSR_USCRATCH)
DEFINE_CSR(uepc, CSR_UEPC)
DEFINE_CSR(ucause, CSR_UCAUSE)
DEFINE_CSR(utval, CSR_UTVAL)
DEFINE_CSR(uip, CSR_UIP)
DEFINE_CSR(fflags, CSR_FFLAGS)
DEFINE_CSR(frm, CSR_FRM)
DEFINE_CSR(fcsr, CSR_FCSR)
DEFINE_CSR(cycle, CSR_CYCLE)
DEFINE_CSR(time, CSR_TIME)
DEFINE_CSR(instret, CSR_INSTRET)
DEFINE_CSR(hpmcounter3, CSR_HPMCOUNTER3)
DEFINE_CSR(hpmcounter4, CSR_HPMCOUNTER4)
DEFINE_CSR(hpmcounter5, CSR_HPMCOUNTER5)
DEFINE_CSR(hpmcounter6, CSR_HPMCOUNTER6)
DEFINE_CSR(hpmcounter7, CSR_HPMCOUNTER7)
DEFINE_CSR(hpmcounter8, CSR_HPMCOUNTER8)
DEFINE_CSR(hpmcounter9, CSR_HPMCOUNTER9)
DEFINE_CSR(hpmcounter10, CSR_HPMCOUNTER10)
DEFINE_CSR(hpmcounter11, CSR_HPMCOUNTER11)
DEFINE_CSR(hpmcounter12, CSR_HPMCOUNTER12)
DEFINE_CSR(hpmcounter13, CSR_HPMCOUNTER13)
DEFINE_CSR(hpmcounter14, CSR_HPMCOUNTER14)
DEFINE_CSR(hpmcounter15, CSR_HPMCOUNTER15)
DEFINE_CSR(hpmcounter16, CSR_HPMCOUNTER16)
DEFINE_CSR(hpmcounter17, CSR_HPMCOUNTER17)
DEFINE_CSR(hpmcounter18, CSR_HPMCOUNTER18)
DEFINE_CSR(hpmcounter19, CSR_HPMCOUNTER19)
DEFINE_CSR(hpmcounter20, CSR_HPMCOUNTER20)
DEFINE_CSR(hpmcounter21, CSR_HPMCOUNTER21)
DEFINE_CSR(hpmcounter22, CSR_HPMCOUNTER22)
DEFINE_CSR(hpmcounter23, CSR_HPMCOUNTER23)
DEFINE_CSR(hpmcounter24, CSR_HPMCOUNTER24)
DEFINE_CSR(hpmcounter25, CSR_HPMCOUNTER25)
DEFINE_CSR(hpmcounter26, CSR_HPMCOUNTER26)
DEFINE_CSR(hpmcounter27, CSR_HPMCOUNTER27)
DEFINE_CSR(hpmcounter28, CSR_HPMCOUNTER28)
DEFINE_CSR(hpmcounter29, CSR_HPMCOUNTER29)
DEFINE_CSR(hpmcounter30, CSR_HPMCOUNTER30)
DEFINE_CSR(hpmcounter31, CSR_HPMCOUNTER31)
DEFINE_CSR(cycleh, CSR_CYCLEH)
DEFINE_CSR(timeh, CSR_TIMEH)
DEFINE_CSR(instreth, CSR_INSTRETH)
DEFINE_CSR(hpmcounter3h, CSR_HPMCOUNTER3H)
DEFINE_CSR(hpmcounter4h, CSR_HPMCOUNTER4H)
DEFINE_CSR(hpmcounter5h, CSR_HPMCOUNTER5H)
DEFINE_CSR(hpmcounter6h, CSR_HPMCOUNTER6H)
DEFINE_CSR(hpmcounter7h, CSR_HPMCOUNTER7H)
DEFINE_CSR(hpmcounter8h, CSR_HPMCOUNTER8H)
DEFINE_CSR(hpmcounter9h, CSR_HPMCOUNTER9H)
DEFINE_CSR(hpmcounter10h, CSR_HPMCOUNTER10H)
DEFINE_CSR(hpmcounter11h, CSR_HPMCOUNTER11H)
DEFINE_CSR(hpmcounter12h, CSR_HPMCOUNTER12H)
DEFINE_CSR(hpmcounter13h, CSR_HPMCOUNTER13H)
DEFINE_CSR(hpmcounter14h, CSR_HPMCOUNTER14H)
DEFINE_CSR(hpmcounter15h, CSR_HPMCOUNTER15H)
DEFINE_CSR(hpmcounter16h, CSR_HPMCOUNTER16H)
DEFINE_CSR(hpmcounter17h, CSR_HPMCOUNTER17H)
DEFINE_CSR(hpmcounter18h, CSR_HPMCOUNTER18H)
DEFINE_CSR(hpmcounter19h, CSR_HPMCOUNTER19H)
DEFINE_CSR(hpmcounter20h, CSR_HPMCOUNTER20H)
DEFINE_CSR(hpmcounter21h, CSR_HPMCOUNTER21H)
DEFINE_CSR(hpmcounter22h, CSR_HPMCOUNTER22H)
DEFINE_CSR(hpmcounter23h, CSR_HPMCOUNTER23H)
DEFINE_CSR(hpmcounter24h, CSR_HPMCOUNTER24H)
DEFINE_CSR(hpmcounter25h, CSR_HPMCOUNTER25H)
DEFINE_CSR(hpmcounter26h, CSR_HPMCOUNTER26H)
DEFINE_CSR(hpmcounter27h, CSR_HPMCOUNTER27H)
DEFINE_CSR(hpmcounter28h, CSR_HPMCOUNTER28H)
DEFINE_CSR(hpmcounter29h, CSR_HPMCOUNTER29H)
DEFINE_CSR(hpmcounter30h, CSR_HPMCOUNTER30H)
DEFINE_CSR(hpmcounter31h, CSR_HPMCOUNTER31H)
DEFINE_CSR(sstatus, CSR_SSTATUS)
DEFINE_CSR(sedeleg, CSR_SEDELEG)
DEFINE_CSR(sideleg, CSR_SIDELEG)
DEFINE_CSR(sie, CSR_SIE)
DEFINE_CSR(stvec, CSR_STVEC)
DEFINE_CSR(scounteren, CSR_SCOUNTEREN)
DEFINE_CSR(sscratch, CSR_SSCRATCH)
DEFINE_CSR(sepc, CSR_SEPC)
DEFINE_CSR(scause, CSR_SCAUSE)
DEFINE_CSR(stval, CSR_STVAL)
DEFINE_CSR(sip, CSR_SIP)
DEFINE_CSR(satp, CSR_SATP)
DEFINE_CSR(mvendorid, CSR_MVENDORID)
DEFINE_CSR(marchid, CSR_MARCHID)
DEFINE_CSR(mimpid, CSR_MIMPID)
DEFINE_CSR(mhartid, CSR_MHARTID)
DEFINE_CSR(mstatus, CSR_MSTATUS)
DEFINE_CSR(misa, CSR_MISA)
DEFINE_CSR(medeleg, CSR_MEDELEG)
DEFINE_CSR(mideleg, CSR_MIDELEG)
DEFINE_CSR(mie, CSR_MIE)
DEFINE_CSR(mtvec, CSR_MTVEC)
DEFINE_CSR(mcounteren, CSR_MCOUNTEREN)
DEFINE_CSR(mscratch, CSR_MSCRATCH)
DEFINE_CSR(mepc, CSR_MEPC)
DEFINE_CSR(mcause, CSR_MCAUSE)
DEFINE_CSR(mtval, CSR_MTVAL)
DEFINE_CSR(mip, CSR_MIP)
DEFINE_CSR(mnxti, CSR_MNXTI)
DEFINE_CSR(mintstatus, CSR_MINTSTATUS)
DEFINE_CSR(mscratchcsw, CSR_MSCRATCHCSW)
DEFINE_CSR(mscratchcswl, CSR_MSCRATCHCSWL)
DEFINE_CSR(mclicbase, CSR_MCLICBASE)
DEFINE_CSR(mtvt, CSR_MTVT)
DEFINE_CSR(pmpcfg0, CSR_PMPCFG0)
DEFINE_CSR(pmpcfg1, CSR_PMPCFG1)
DEFINE_CSR(pmpcfg2, CSR_PMPCFG2)
DEFINE_CSR(pmpcfg3, CSR_PMPCFG3)
DEFINE_CSR(pmpaddr0, CSR_PMPADDR0)
DEFINE_CSR(pmpaddr1, CSR_PMPADDR1)
DEFINE_CSR(pmpaddr2, CSR_PMPADDR2)
DEFINE_CSR(pmpaddr3, CSR_PMPADDR3)
DEFINE_CSR(pmpaddr4, CSR_PMPADDR4)
DEFINE_CSR(pmpaddr5, CSR_PMPADDR5)
DEFINE_CSR(pmpaddr6, CSR_PMPADDR6)
DEFINE_CSR(pmpaddr7, CSR_PMPADDR7)
DEFINE_CSR(pmpaddr8, CSR_PMPADDR8)
DEFINE_CSR(pmpaddr9, CSR_PMPADDR9)
DEFINE_CSR(pmpaddr10, CSR_PMPADDR10)
DEFINE_CSR(pmpaddr11, CSR_PMPADDR11)
DEFINE_CSR(pmpaddr12, CSR_PMPADDR12)
DEFINE_CSR(pmpaddr13, CSR_PMPADDR13)
DEFINE_CSR(pmpaddr14, CSR_PMPADDR14)
DEFINE_CSR(pmpaddr15, CSR_PMPADDR15)
DEFINE_CSR(sxstatus, CSR_SXSTATUS)
DEFINE_CSR(shcr, CSR_SHCR)
DEFINE_CSR(scer2, CSR_SCER2)
DEFINE_CSR(scer, CSR_SCER)
DEFINE_CSR(scounterinten , CSR_SCOUNTERINTEN)
DEFINE_CSR(scounterof, CSR_SCOUNTEROF)
DEFINE_CSR(shint, CSR_SHINT)
DEFINE_CSR(shint2, CSR_SHINT2)
DEFINE_CSR(scycle, CSR_SCYCLE)
DEFINE_CSR(shpmcounter1, CSR_SHPMCOUNTER1)
DEFINE_CSR(shpmcounter2, CSR_SHPMCOUNTER2)
DEFINE_CSR(shpmcounter3, CSR_SHPMCOUNTER3)
DEFINE_CSR(shpmcounter4, CSR_SHPMCOUNTER4)
DEFINE_CSR(shpmcounter5, CSR_SHPMCOUNTER5)
DEFINE_CSR(shpmcounter6, CSR_SHPMCOUNTER6)
DEFINE_CSR(shpmcounter7, CSR_SHPMCOUNTER7)
DEFINE_CSR(shpmcounter8, CSR_SHPMCOUNTER8)
DEFINE_CSR(shpmcounter9, CSR_SHPMCOUNTER9)
DEFINE_CSR(shpmcounter10, CSR_SHPMCOUNTER10)
DEFINE_CSR(shpmcounter11, CSR_SHPMCOUNTER11)
DEFINE_CSR(shpmcounter12, CSR_SHPMCOUNTER12)
DEFINE_CSR(shpmcounter13, CSR_SHPMCOUNTER13)
DEFINE_CSR(shpmcounter14, CSR_SHPMCOUNTER14)
DEFINE_CSR(shpmcounter15, CSR_SHPMCOUNTER15)
DEFINE_CSR(shpmcounter16, CSR_SHPMCOUNTER16)
DEFINE_CSR(shpmcounter17, CSR_SHPMCOUNTER17)
DEFINE_CSR(shpmcounter18, CSR_SHPMCOUNTER18)
DEFINE_CSR(shpmcounter19, CSR_SHPMCOUNTER19)
DEFINE_CSR(shpmcounter20, CSR_SHPMCOUNTER20)
DEFINE_CSR(shpmcounter21, CSR_SHPMCOUNTER21)
DEFINE_CSR(shpmcounter22, CSR_SHPMCOUNTER22)
DEFINE_CSR(shpmcounter23, CSR_SHPMCOUNTER23)
DEFINE_CSR(shpmcounter24, CSR_SHPMCOUNTER24)
DEFINE_CSR(shpmcounter25, CSR_SHPMCOUNTER25)
DEFINE_CSR(shpmcounter26, CSR_SHPMCOUNTER26)
DEFINE_CSR(shpmcounter27, CSR_SHPMCOUNTER27)
DEFINE_CSR(shpmcounter28, CSR_SHPMCOUNTER28)
DEFINE_CSR(shpmcounter29, CSR_SHPMCOUNTER29)
DEFINE_CSR(shpmcounter30, CSR_SHPMCOUNTER30)
DEFINE_CSR(shpmcounter31, CSR_SHPMCOUNTER31)
DEFINE_CSR(mseccfg, CSR_MSECCFG)
DEFINE_CSR(tselect, CSR_TSELECT)
DEFINE_CSR(tdata1, CSR_TDATA1)
DEFINE_CSR(mcontrol, CSR_TDATA1)
DEFINE_CSR(icount, CSR_TDATA1)
DEFINE_CSR(itrigger, CSR_TDATA1)
DEFINE_CSR(etrigger, CSR_TDATA1)
DEFINE_CSR(tdata2, CSR_TDATA2)
DEFINE_CSR(tdata3, CSR_TDATA3)
DEFINE_CSR(textra32, CSR_TDATA3)
DEFINE_CSR(textra64, CSR_TDATA3)
DEFINE_CSR(tinfo, CSR_TINFO)
DEFINE_CSR(tcontrol, CSR_TCONTROL)
DEFINE_CSR(mcontext, CSR_MCONTEXT)
DEFINE_CSR(scontext, CSR_SCONTEXT)
DEFINE_CSR(dcsr, CSR_DCSR)
DEFINE_CSR(dpc, CSR_DPC)
DEFINE_CSR(dscratch, CSR_DSCRATCH)
DEFINE_CSR(mxstatus, CSR_MXSTATUS)
DEFINE_CSR(mhcr, CSR_MHCR)
DEFINE_CSR(mcor, CSR_MCOR)
DEFINE_CSR(mccr2, CSR_MCCR2)
DEFINE_CSR(mcer2, CSR_MCER2)
DEFINE_CSR(mhint, CSR_MHINT)
DEFINE_CSR(mrmr, CSR_MRMR)
DEFINE_CSR(mrvbr, CSR_MRVBR)
DEFINE_CSR(mcer, CSR_MCER)
DEFINE_CSR(mcounterwen, CSR_MCOUNTERWEN)
DEFINE_CSR(mcounterinten, CSR_MCOUNTERINTEN)
DEFINE_CSR(mcounterof, CSR_MCOUNTEROF)
DEFINE_CSR(mhint2, CSR_MHINT2)
DEFINE_CSR(mhint3, CSR_MHINT3)
DEFINE_CSR(mhint4, CSR_MHINT4)
DEFINE_CSR(mraddr, CSR_MRADDR)
DEFINE_CSR(mexstatus, CSR_MEXSTATUS)
DEFINE_CSR(mnmicause, CSR_MNMICAUSE)
DEFINE_CSR(mnmipc, CSR_MNMIPC)
DEFINE_CSR(usp, CSR_USP)
DEFINE_CSR(mcins, CSR_MCINS)
DEFINE_CSR(mcindex, CSR_MCINDEX)
DEFINE_CSR(mcdata0, CSR_MCDATA0)
DEFINE_CSR(mcdata1, CSR_MCDATA1)
DEFINE_CSR(meicr, CSR_MEICR)
DEFINE_CSR(meicr2, CSR_MEICR2)
DEFINE_CSR(mcper, CSR_MCPER)
DEFINE_CSR(mzoneid, CSR_MZONEID)
DEFINE_CSR(fxcr, CSR_FXCR)
DEFINE_CSR(smir, CSR_SMIR)
DEFINE_CSR(smel, CSR_SMEL)
DEFINE_CSR(smeh, CSR_SMEH)
DEFINE_CSR(smcir, CSR_SMCIR)
DEFINE_CSR(mcycle, CSR_MCYCLE)
DEFINE_CSR(minstret, CSR_MINSTRET)
DEFINE_CSR(mhpmcounter3, CSR_MHPMCOUNTER3)
DEFINE_CSR(mhpmcounter4, CSR_MHPMCOUNTER4)
DEFINE_CSR(mhpmcounter5, CSR_MHPMCOUNTER5)
DEFINE_CSR(mhpmcounter6, CSR_MHPMCOUNTER6)
DEFINE_CSR(mhpmcounter7, CSR_MHPMCOUNTER7)
DEFINE_CSR(mhpmcounter8, CSR_MHPMCOUNTER8)
DEFINE_CSR(mhpmcounter9, CSR_MHPMCOUNTER9)
DEFINE_CSR(mhpmcounter10, CSR_MHPMCOUNTER10)
DEFINE_CSR(mhpmcounter11, CSR_MHPMCOUNTER11)
DEFINE_CSR(mhpmcounter12, CSR_MHPMCOUNTER12)
DEFINE_CSR(mhpmcounter13, CSR_MHPMCOUNTER13)
DEFINE_CSR(mhpmcounter14, CSR_MHPMCOUNTER14)
DEFINE_CSR(mhpmcounter15, CSR_MHPMCOUNTER15)
DEFINE_CSR(mhpmcounter16, CSR_MHPMCOUNTER16)
DEFINE_CSR(mhpmcounter17, CSR_MHPMCOUNTER17)
DEFINE_CSR(mhpmcounter18, CSR_MHPMCOUNTER18)
DEFINE_CSR(mhpmcounter19, CSR_MHPMCOUNTER19)
DEFINE_CSR(mhpmcounter20, CSR_MHPMCOUNTER20)
DEFINE_CSR(mhpmcounter21, CSR_MHPMCOUNTER21)
DEFINE_CSR(mhpmcounter22, CSR_MHPMCOUNTER22)
DEFINE_CSR(mhpmcounter23, CSR_MHPMCOUNTER23)
DEFINE_CSR(mhpmcounter24, CSR_MHPMCOUNTER24)
DEFINE_CSR(mhpmcounter25, CSR_MHPMCOUNTER25)
DEFINE_CSR(mhpmcounter26, CSR_MHPMCOUNTER26)
DEFINE_CSR(mhpmcounter27, CSR_MHPMCOUNTER27)
DEFINE_CSR(mhpmcounter28, CSR_MHPMCOUNTER28)
DEFINE_CSR(mhpmcounter29, CSR_MHPMCOUNTER29)
DEFINE_CSR(mhpmcounter30, CSR_MHPMCOUNTER30)
DEFINE_CSR(mhpmcounter31, CSR_MHPMCOUNTER31)
DEFINE_CSR(mcycleh, CSR_MCYCLEH)
DEFINE_CSR(minstreth, CSR_MINSTRETH)
DEFINE_CSR(mhpmcounter3h, CSR_MHPMCOUNTER3H)
DEFINE_CSR(mhpmcounter4h, CSR_MHPMCOUNTER4H)
DEFINE_CSR(mhpmcounter5h, CSR_MHPMCOUNTER5H)
DEFINE_CSR(mhpmcounter6h, CSR_MHPMCOUNTER6H)
DEFINE_CSR(mhpmcounter7h, CSR_MHPMCOUNTER7H)
DEFINE_CSR(mhpmcounter8h, CSR_MHPMCOUNTER8H)
DEFINE_CSR(mhpmcounter9h, CSR_MHPMCOUNTER9H)
DEFINE_CSR(mhpmcounter10h, CSR_MHPMCOUNTER10H)
DEFINE_CSR(mhpmcounter11h, CSR_MHPMCOUNTER11H)
DEFINE_CSR(mhpmcounter12h, CSR_MHPMCOUNTER12H)
DEFINE_CSR(mhpmcounter13h, CSR_MHPMCOUNTER13H)
DEFINE_CSR(mhpmcounter14h, CSR_MHPMCOUNTER14H)
DEFINE_CSR(mhpmcounter15h, CSR_MHPMCOUNTER15H)
DEFINE_CSR(mhpmcounter16h, CSR_MHPMCOUNTER16H)
DEFINE_CSR(mhpmcounter17h, CSR_MHPMCOUNTER17H)
DEFINE_CSR(mhpmcounter18h, CSR_MHPMCOUNTER18H)
DEFINE_CSR(mhpmcounter19h, CSR_MHPMCOUNTER19H)
DEFINE_CSR(mhpmcounter20h, CSR_MHPMCOUNTER20H)
DEFINE_CSR(mhpmcounter21h, CSR_MHPMCOUNTER21H)
DEFINE_CSR(mhpmcounter22h, CSR_MHPMCOUNTER22H)
DEFINE_CSR(mhpmcounter23h, CSR_MHPMCOUNTER23H)
DEFINE_CSR(mhpmcounter24h, CSR_MHPMCOUNTER24H)
DEFINE_CSR(mhpmcounter25h, CSR_MHPMCOUNTER25H)
DEFINE_CSR(mhpmcounter26h, CSR_MHPMCOUNTER26H)
DEFINE_CSR(mhpmcounter27h, CSR_MHPMCOUNTER27H)
DEFINE_CSR(mhpmcounter28h, CSR_MHPMCOUNTER28H)
DEFINE_CSR(mhpmcounter29h, CSR_MHPMCOUNTER29H)
DEFINE_CSR(mhpmcounter30h, CSR_MHPMCOUNTER30H)
DEFINE_CSR(mhpmcounter31h, CSR_MHPMCOUNTER31H)
DEFINE_CSR(mhpmevent3, CSR_MHPMEVENT3)
DEFINE_CSR(mhpmevent4, CSR_MHPMEVENT4)
DEFINE_CSR(mhpmevent5, CSR_MHPMEVENT5)
DEFINE_CSR(mhpmevent6, CSR_MHPMEVENT6)
DEFINE_CSR(mhpmevent7, CSR_MHPMEVENT7)
DEFINE_CSR(mhpmevent8, CSR_MHPMEVENT8)
DEFINE_CSR(mhpmevent9, CSR_MHPMEVENT9)
DEFINE_CSR(mhpmevent10, CSR_MHPMEVENT10)
DEFINE_CSR(mhpmevent11, CSR_MHPMEVENT11)
DEFINE_CSR(mhpmevent12, CSR_MHPMEVENT12)
DEFINE_CSR(mhpmevent13, CSR_MHPMEVENT13)
DEFINE_CSR(mhpmevent14, CSR_MHPMEVENT14)
DEFINE_CSR(mhpmevent15, CSR_MHPMEVENT15)
DEFINE_CSR(mhpmevent16, CSR_MHPMEVENT16)
DEFINE_CSR(mhpmevent17, CSR_MHPMEVENT17)
DEFINE_CSR(mhpmevent18, CSR_MHPMEVENT18)
DEFINE_CSR(mhpmevent19, CSR_MHPMEVENT19)
DEFINE_CSR(mhpmevent20, CSR_MHPMEVENT20)
DEFINE_CSR(mhpmevent21, CSR_MHPMEVENT21)
DEFINE_CSR(mhpmevent22, CSR_MHPMEVENT22)
DEFINE_CSR(mhpmevent23, CSR_MHPMEVENT23)
DEFINE_CSR(mhpmevent24, CSR_MHPMEVENT24)
DEFINE_CSR(mhpmevent25, CSR_MHPMEVENT25)
DEFINE_CSR(mhpmevent26, CSR_MHPMEVENT26)
DEFINE_CSR(mhpmevent27, CSR_MHPMEVENT27)
DEFINE_CSR(mhpmevent28, CSR_MHPMEVENT28)
DEFINE_CSR(mhpmevent29, CSR_MHPMEVENT29)
DEFINE_CSR(mhpmevent30, CSR_MHPMEVENT30)
DEFINE_CSR(mhpmevent31, CSR_MHPMEVENT31)
/* RVV */
DEFINE_CSR(vstart, CSR_VSTART)
DEFINE_CSR(vcsr, CSR_VCSR)
DEFINE_CSR(vxsat, CSR_VXSAT)
DEFINE_CSR(vxrm, CSR_VXRM)
DEFINE_CSR(vl, CSR_VL)
DEFINE_CSR(vtype, CSR_VTYPE)
DEFINE_CSR(vlenb, CSR_VLENB)

/* These registers are present in priv spec 1.9.1, dropped in 1.10.  */
DEFINE_CSR(hstatus, CSR_HSTATUS)
DEFINE_CSR(hedeleg, CSR_HEDELEG)
DEFINE_CSR(hideleg, CSR_HIDELEG)
DEFINE_CSR(hie, CSR_HIE)
DEFINE_CSR(htvec, CSR_HTVEC)
DEFINE_CSR(hscratch, CSR_HSCRATCH)
DEFINE_CSR(hepc, CSR_HEPC)
DEFINE_CSR(hcause, CSR_HCAUSE)
DEFINE_CSR(hbadaddr, CSR_HBADADDR)
DEFINE_CSR(hip, CSR_HIP)
DEFINE_CSR(mbase, CSR_MBASE)
DEFINE_CSR(mbound, CSR_MBOUND)
DEFINE_CSR(mibase, CSR_MIBASE)
DEFINE_CSR(mibound, CSR_MIBOUND)
DEFINE_CSR(mdbase, CSR_MDBASE)
DEFINE_CSR(mdbound, CSR_MDBOUND)
DEFINE_CSR(mcountinhibit, CSR_MCOUNTINHIBIT)
DEFINE_CSR(scountinhibit, CSR_SCOUNTINHIBIT)
DEFINE_CSR(mscounteren, CSR_MSCOUNTEREN)
DEFINE_CSR(mhcounteren, CSR_MHCOUNTEREN)
DEFINE_CSR(mebr, CSR_MEBR)
DEFINE_CSR(nt_mstatus, CSR_NT_MSTATUS)
DEFINE_CSR(nt_mtvec, CSR_NT_MTVEC)
DEFINE_CSR(nt_mie, CSR_NT_MIE)
DEFINE_CSR(nt_mtvt, CSR_NT_MTVT)
DEFINE_CSR(nt_mepc, CSR_NT_MEPC)
DEFINE_CSR(nt_mcause, CSR_NT_MCAUSE)
DEFINE_CSR(nt_mip, CSR_NT_MIP)
DEFINE_CSR(nt_mintstate, CSR_NT_MINTSTATE)
DEFINE_CSR(nt_mxstatus, CSR_NT_MXSTATUS)
DEFINE_CSR(nt_mebr, CSR_NT_MEBR)
DEFINE_CSR(nt_msp, CSR_NT_MSP)
DEFINE_CSR(t_usp, CSR_T_USP)
DEFINE_CSR(t_mdcr, CSR_T_MDCR)
DEFINE_CSR(t_mpcr, CSR_T_MPCR)
DEFINE_CSR(pmpteecfg, CSR_PMPTEECFG)
DEFINE_CSR(cpuid, CSR_CPUID)
DEFINE_CSR(mcpuid, CSR_MCPUID)
DEFINE_CSR(mhaltcause, CSR_MHALTCAUSE)
DEFINE_CSR(mdbginfo, CSR_MDBGINFO)
DEFINE_CSR(mpcfifo, CSR_MPCFIFO)
DEFINE_CSR(mdbginfo2, CSR_MDBGINFO2)
//DECLARE_CSR(mpipeinfo, CSR_MPIPEINFO)
#endif
