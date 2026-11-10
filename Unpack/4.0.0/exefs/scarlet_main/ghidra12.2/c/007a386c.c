/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a386c; name: FUN_007a386c
 */


void FUN_007a386c(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *param_1 = (long)(PTR_DAT_047d0ac0 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x14) = 0x12;
  param_1[3] = 8;
  return;
}


