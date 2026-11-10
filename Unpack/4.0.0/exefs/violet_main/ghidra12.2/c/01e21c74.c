/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e21c74; name: FUN_01e21c74
 */


void FUN_01e21c74(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3a2) = param_2 & 1;
  if (*(long *)(param_1 + 0x168) != 0) {
    *(byte *)(*(long *)(param_1 + 0x168) + 0x30) = param_2 & 1;
  }
  return;
}


