/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c0408; name: FUN_031c0408
 */


int FUN_031c0408(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


