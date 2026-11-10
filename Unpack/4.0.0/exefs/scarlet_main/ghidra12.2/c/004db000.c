/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004db000; name: FUN_004db000
 */


void FUN_004db000(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd9d8 + 0x10);
                    /* try { // try from 004db02c to 004db033 has its CatchHandler @ 004db0bc */
  FUN_005212a0(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_047cda10 != 0) {
                    /* try { // try from 004db090 to 004db09b has its CatchHandler @ 004db0a0 */
    FUN_0052b230(PTR_DAT_047cda10);
  }
  puVar1 = PTR_DAT_047cba80;
  param_1[0x13] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar1;
  param_1[0xb] = (long)puVar1;
  param_1[0xc] = (long)puVar1;
  param_1[0xd] = (long)puVar1;
  param_1[0xe] = (long)puVar1;
  param_1[0xf] = (long)puVar1;
  param_1[0x10] = (long)puVar1;
  param_1[0x11] = (long)puVar1;
  param_1[0x12] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((long)param_1 + 0xa4) = 1;
  return;
}


