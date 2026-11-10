/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


