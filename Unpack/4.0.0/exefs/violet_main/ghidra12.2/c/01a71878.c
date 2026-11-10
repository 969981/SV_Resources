/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a71878; name: FUN_01a71878
 */


long FUN_01a71878(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x10;
  }
  return param_1 + 0x100;
}


