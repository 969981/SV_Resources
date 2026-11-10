/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143cdb0; name: FUN_0143cdb0
 */


void FUN_0143cdb0(long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x120) != 0) {
    *(byte *)(*(long *)(param_1 + 0x120) + 0x210) = param_2 & 1;
  }
  return;
}


