/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02174494; name: FUN_02174494
 */


long FUN_02174494(long param_1,int *param_2)

{
  return *(long *)(param_1 + 0x58) +
         (*(long *)(*(long *)(param_1 + 0x98) + (long)param_2[2] * 8) + (long)*param_2 +
         (long)(param_2[1] << (ulong)(param_2[2] & 0x1f))) * 8;
}


