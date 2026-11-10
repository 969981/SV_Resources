/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01242888; name: FUN_01242888
 */


void FUN_01242888(long param_1,byte param_2)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x1a) = param_2 & 1;
  return;
}


