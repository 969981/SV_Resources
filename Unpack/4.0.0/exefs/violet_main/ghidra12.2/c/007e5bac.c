/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


