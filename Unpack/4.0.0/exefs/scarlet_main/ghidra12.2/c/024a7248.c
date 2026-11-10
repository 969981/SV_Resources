/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a7248; name: FUN_024a7248
 */


void FUN_024a7248(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0) {
    FUN_024a737c(param_1,lVar1,auStack_28);
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) - lVar1;
  }
  return;
}


