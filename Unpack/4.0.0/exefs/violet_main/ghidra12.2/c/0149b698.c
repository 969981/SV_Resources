/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0149b698; name: FUN_0149b698
 */


long FUN_0149b698(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  return lVar1 + (ulong)*(byte *)(lVar1 + 0x938) * 0xc4 + 8;
}


