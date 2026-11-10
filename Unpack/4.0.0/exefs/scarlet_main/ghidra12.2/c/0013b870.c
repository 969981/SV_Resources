/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013b870; name: FUN_0013b870
 */


bool FUN_0013b870(long param_1,long param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return true;
  }
  if (*(size_t *)(param_1 + 0x10) == *(size_t *)(param_2 + 0x10)) {
    iVar1 = memcmp((void *)(param_1 + 0x18),(void *)(param_2 + 0x18),*(size_t *)(param_1 + 0x10));
    return iVar1 == 0;
  }
  return false;
}


