/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e934c; name: FUN_021e934c
 */


void FUN_021e934c(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  if (param_2 != 0) {
    param_2 = param_2 - (ulong)*(byte *)(param_2 + -1);
    *param_3 = *(long *)(param_2 + -0x10) - (ulong)*(byte *)(param_2 + -3);
    *param_4 = 1L << ((ulong)*(byte *)(param_2 + -2) & 0x3f);
  }
  return;
}


