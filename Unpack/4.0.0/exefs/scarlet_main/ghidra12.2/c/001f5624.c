/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f5624; name: FUN_001f5624
 */


void FUN_001f5624(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar2;
  *param_1 = lVar1;
  param_1[3] = *(long *)(*param_2 + 0x10);
  param_1[5] = *(long *)(*param_2 + 0x18);
  param_1[4] = *(long *)(param_2[1] + 0x10);
  param_1[6] = *(long *)(param_2[1] + 0x18);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)((long)param_2 + 0x14);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_001f82e8(*param_1);
  FUN_001f82e8(param_1[1]);
  return;
}


