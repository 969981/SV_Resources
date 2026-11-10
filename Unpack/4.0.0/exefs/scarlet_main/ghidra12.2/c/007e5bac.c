/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e5bac; name: FUN_007e5bac
 */


void FUN_007e5bac(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  param_1 = param_1 + (long)((int)uVar1 >> 5) * 4;
  *(uint *)(param_1 + 0x5f0) = *(uint *)(param_1 + 0x5f0) | 1 << (ulong)(param_2 & 0x1f);
  return;
}


