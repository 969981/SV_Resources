/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f7d94; name: FUN_001f7d94
 */


ulong FUN_001f7d94(byte *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    lVar1 = lVar1 + (ulong)*(uint *)(PTR_DAT_047cba08 + (ulong)*param_1 * 8);
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return lVar1 + 7U >> 3;
}


