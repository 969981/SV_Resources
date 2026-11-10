/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02739548; name: FUN_02739548
 */


void FUN_02739548(long param_1,long param_2,byte param_3)

{
  *(byte *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x1b9) = param_3 & 1;
  return;
}


