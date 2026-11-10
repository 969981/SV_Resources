/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f5e0c; name: FUN_018f5e0c
 */


undefined2 FUN_018f5e0c(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x84)) {
    return *(undefined2 *)(param_1 + (ulong)param_2 * 2);
  }
  return 0;
}


