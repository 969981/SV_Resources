/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004caf90; name: FUN_004caf90
 */


void FUN_004caf90(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_047cd9c8 + 0x10);
  param_1[1] = param_2;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = param_2;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = param_2;
  param_1[0x15] = param_2;
  if (*(int *)PTR_DAT_047cd9d0 != 0) {
                    /* try { // try from 004cb038 to 004cb043 has its CatchHandler @ 004cb048 */
    FUN_0052b230(PTR_DAT_047cd9d0);
  }
  puVar1 = PTR_DAT_047cba80;
  param_1[0x18] = (long)PTR_DAT_047cba80;
  param_1[0x16] = (long)puVar1;
  param_1[0x17] = (long)puVar1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return;
}


