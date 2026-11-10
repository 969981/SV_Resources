/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169d9f0; name: FUN_0169d9f0
 */


bool FUN_0169d9f0(long param_1)

{
  if ((*(long *)(param_1 + 0x30) == 0) || ((*(byte *)(*(long *)(param_1 + 0x30) + 0x1e8) & 1) == 0))
  {
    return false;
  }
  return *(char *)(param_1 + 0xd8) != '\0';
}


