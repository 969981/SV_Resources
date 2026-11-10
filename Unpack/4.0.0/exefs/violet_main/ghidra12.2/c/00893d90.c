/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00893d90; name: FUN_00893d90
 */


long FUN_00893d90(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  return *(long *)(param_1 + 0x260) +
         (long)(param_2 * 0xc + param_3 * 4 + param_4 + param_5 * 2) * 8;
}


