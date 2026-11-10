/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01497d90; name: FUN_01497d90
 */


bool FUN_01497d90(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x710) == '\0') {
    return *(short *)(param_1 + 0x8c) != 0;
  }
  return false;
}


