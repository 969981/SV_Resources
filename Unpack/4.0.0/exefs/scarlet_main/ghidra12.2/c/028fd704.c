/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fd704; name: FUN_028fd704
 */


void FUN_028fd704(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x80;
    FUN_028fd75c(lVar1 + -0x40);
    FUN_00db239c(lVar1 + -0x80);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


