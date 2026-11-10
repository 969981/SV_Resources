/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0168003c; name: FUN_0168003c
 */


undefined8 FUN_0168003c(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xa8);
  if (bVar1 < *(byte *)(param_1 + 0xa6)) {
    *(byte *)(param_1 + 0xa8) = bVar1 + 1;
    return *(undefined8 *)(param_1 + (ulong)bVar1 * 8);
  }
  return 0;
}


