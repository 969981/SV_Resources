/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033a31c; name: FUN_0033a31c
 */


long FUN_0033a31c(long *param_1)

{
  return (long)param_1 +
         ((ulong)(*(int *)(*(long *)(*param_1 + 0x10) + 0x58) + 0xf) & 0xfffffff0) + 0x50;
}


