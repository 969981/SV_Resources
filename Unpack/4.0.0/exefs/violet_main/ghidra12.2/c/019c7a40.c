/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c7a40; name: FUN_019c7a40
 */


bool FUN_019c7a40(long *param_1)

{
  if (*param_1 == 0) {
    return false;
  }
  return *(short *)(*param_1 + 0x1a) != 0;
}


