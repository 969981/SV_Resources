/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2dc48; name: FUN_01a2dc48
 */


bool FUN_01a2dc48(long param_1)

{
  if (*(uint *)(*(long *)(param_1 + 0x38) + 0x30) < 2) {
    return *(char *)(*(long *)(param_1 + 0x38) + 0x706) == '\0';
  }
  return false;
}


