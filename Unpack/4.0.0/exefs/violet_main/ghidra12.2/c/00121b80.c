/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00121b80; name: FUN_00121b80
 */


int FUN_00121b80(long param_1,int param_2)

{
  if (param_2 + 0xf4627U < 0xf4628) {
    param_2 = (int)((ulong)(*(long *)(param_1 + 0x10) - **(long **)(param_1 + 0x20)) >> 4) + param_2
    ;
  }
  return param_2;
}


