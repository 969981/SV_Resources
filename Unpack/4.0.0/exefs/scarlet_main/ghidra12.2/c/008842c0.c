/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008842c0; name: FUN_008842c0
 */


float FUN_008842c0(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
  return *(float *)(param_1 + 0x10) * (float)iVar1;
}


