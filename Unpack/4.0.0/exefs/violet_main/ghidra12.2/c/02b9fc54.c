/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9fc54; name: FUN_02b9fc54
 */


ulong FUN_02b9fc54(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x210);
  return (ulong)(*(long *)(lVar1 + 0x140) - *(long *)(lVar1 + 0x138)) >> 5;
}


