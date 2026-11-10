/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00804f78; name: FUN_00804f78
 */


void FUN_00804f78(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1688;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0284e338(param_1 + 4);
  FUN_0284e338(param_1 + 8);
  param_1[0xc] = 0;
  memset(param_1 + 0xd,0,2);
  memset((void *)((long)param_1 + 0x6a),0,1);
  return;
}


