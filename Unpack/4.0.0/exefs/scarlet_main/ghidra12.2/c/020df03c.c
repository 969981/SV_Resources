/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020df03c; name: FUN_020df03c
 */


bool FUN_020df03c(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x200) + 0x60) + 0x68))();
  return iVar1 == 1;
}


