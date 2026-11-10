/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bab04; name: FUN_019bab04
 */


void FUN_019bab04(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x408) - *(long *)(param_1 + 0x400) >> 3;
  if (param_2 < uVar1) {
    FUN_0221b984(param_1 + 0x400,*(long *)(param_1 + 0x400) + param_2 * 8);
    return;
  }
  while (uVar1 < param_2) {
    FUN_01619258(param_1);
    uVar1 = *(long *)(param_1 + 0x408) - *(long *)(param_1 + 0x400) >> 3;
  }
  return;
}


