/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f853c0; name: FUN_01f853c0
 */


bool FUN_01f853c0(long *param_1)

{
  if ((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) {
    return false;
  }
  return *(char *)((long)param_1 + 0x14) != '\0';
}


