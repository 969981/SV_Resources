/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0168126c; name: FUN_0168126c
 */


undefined8 FUN_0168126c(long param_1,uint param_2)

{
  if (param_2 < *(byte *)(param_1 + 0xa6)) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8);
  }
  return 0;
}


