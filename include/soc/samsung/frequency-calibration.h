/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_EXYNOS_CALIBRATION_H
#define _LINUX_EXYNOS_CALIBRATION_H
/* An interface for calibrating the frequencies of the EXYNOS9830.
 *
 * Chanz22 <inutilidades639@gmail.com>
 * Leod3c11 <@leod3c11>
 */


// --- CL2 ---
#define CPUCL2_FREQ_OLD     3016000
#define CPUCL2_FREQ_NEW     3116000
#define CPUCL2_MINFREQ      962000
#define CPUCL2_PLL_OLD      3016000000
#define CPUCL2_PLL_NEW      3116000000
#define CPUCL2_VOLT_OLD     3016
#define CPUCL2_VOLT_NEW     3116
#define CPUCL2_M_VALUE_NEW  359
#define CPUCL2_K_VALUE_NEW  45373

// --- CL1 ---
#define CPUCL1_FREQ_OLD     2600000
#define CPUCL1_FREQ_NEW     2730000
#define CPUCL1_MINFREQ      962000
#define CPUCL1_PLL_OLD      2600000000
#define CPUCL1_PLL_NEW      2730000000
#define CPUCL1_VOLT_OLD     2600
#define CPUCL1_VOLT_NEW     2730
#define CPUCL1_M_VALUE_NEW  315
#define CPUCL1_K_VALUE_NEW  0

// --- CL0 ---
#define CPUCL0_FREQ_OLD     2106000
#define CPUCL0_FREQ_NEW     2210000
#define CPUCL0_MINFREQ      949000
#define CPUCL0_PLL_OLD      2106000000
#define CPUCL0_PLL_NEW      2210000000
#define CPUCL0_VOLT_OLD     2106
#define CPUCL0_VOLT_NEW     2210
#define CPUCL0_M_VALUE_NEW  255
#define CPUCL0_K_VALUE_NEW  0

// --- G3D ---
#define G3D_FREQ_OLD        897000
#define G3D_FREQ_NEW        933000
#define G3D_MIN_FREQ        156000
#define G3D_PLL_OLD         897000000
#define G3D_PLL_NEW         933000000
#define G3D_VOLT_OLD        897
#define G3D_VOLT_NEW        933
#define G3D_MIN_VOLT_FREQ   156
#define G3D_P_VALUE_NEW     4
#define G3D_M_VALUE_NEW     141
#define G3D_K_VALUE_NEW     0

#define GLOBAL_MAX_MHZ      3116
#define GPU_MAX_MHZ         933

#endif
