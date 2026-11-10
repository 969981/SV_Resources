/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02104d50; name: FUN_02104d50
 */


int FUN_02104d50(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_02104ce4();
  return iVar1 - *(int *)(param_1 + 0x58);
}


