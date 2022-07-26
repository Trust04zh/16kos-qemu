/*
 * RISC-V cpu parameters for qemu.
 *
 * Copyright (c) 2017-2018 SiFive, Inc.
 * SPDX-License-Identifier: GPL-2.0+
 */

#ifndef RISCV_CPU_PARAM_H
#define RISCV_CPU_PARAM_H 1

#if defined(TARGET_RISCV64)
# define TARGET_LONG_BITS 64
# define TARGET_PHYS_ADDR_SPACE_BITS 56 /* 44-bit PPN */
# define TARGET_VIRT_ADDR_SPACE_BITS 48 /* sv48 */
#elif defined(TARGET_RISCV32)
# define TARGET_LONG_BITS 32
# define TARGET_PHYS_ADDR_SPACE_BITS 34 /* 22-bit PPN */
# define TARGET_VIRT_ADDR_SPACE_BITS 32 /* sv32 */
#endif
/* whethter 16k os is enabled, 16k os is not compatible with 4k os*/
#define OS_16K
#ifdef OS_16K
#define TARGET_PAGE_BITS 14 /* 16 KiB Pages */
#else
#define TARGET_PAGE_BITS 12 /* 4 KiB Pages */
#endif
#define NB_MMU_MODES 4

#endif
