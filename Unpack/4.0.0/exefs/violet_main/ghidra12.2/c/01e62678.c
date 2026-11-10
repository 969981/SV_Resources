/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e62678; name: FUN_01e62678
 */


bool FUN_01e62678(long param_1,long param_2)

{
  if (((*(long *)(param_1 + 0x68) == 0 || *(long *)(param_1 + 0x68) != param_2) &&
      ((*(long *)(param_1 + 0x70) == 0 || (*(long *)(param_1 + 0x70) != param_2)))) &&
     ((*(long *)(param_1 + 0x78) == 0 || (*(long *)(param_1 + 0x78) != param_2)))) {
    return *(long *)(param_1 + 0x80) != 0 && *(long *)(param_1 + 0x80) == param_2;
  }
  return true;
}


