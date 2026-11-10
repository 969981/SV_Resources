/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0200b04c; name: FUN_0200b04c
 */


bool FUN_0200b04c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    return true;
  }
  if (*(char *)(*(long *)(param_1 + 0x78) + 0x4ac) == '\0') {
    return *(int *)(*(long *)(param_1 + 0x78) + 0x4a8) == 2;
  }
  return false;
}


