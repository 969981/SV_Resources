/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020acfd8; name: FUN_020acfd8
 */


bool FUN_020acfd8(long param_1)

{
  if (*(long *)(param_1 + 0x78) == 0) {
    return false;
  }
  return *(short *)(*(long *)(param_1 + 0x78) + 0x1a) != 0;
}


