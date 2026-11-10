/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c40c8; name: FUN_006c40c8
 */


long FUN_006c40c8(long *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x20))();
  *(byte *)(param_1 + 0x18) = bVar1 & 1;
  return param_1[0x13];
}


