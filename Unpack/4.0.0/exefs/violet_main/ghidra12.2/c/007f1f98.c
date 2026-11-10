/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f1f98; name: FUN_007f1f98
 */


void FUN_007f1f98(long param_1,uint param_2)

{
  *(long *)(param_1 + 0x80) = (long)(*(long *)PTR_DAT_047d0970 * (ulong)param_2) / 1000;
  return;
}


