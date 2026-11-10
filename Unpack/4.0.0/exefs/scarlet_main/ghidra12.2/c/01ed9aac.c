/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed9aac; name: FUN_01ed9aac
 */


void FUN_01ed9aac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    if (*(char *)(lVar1 + -0x2d8) != '\0') {
      *(char *)(lVar1 + -0x2d8) = '\0';
    }
    FUN_01ed9328(lVar1 + -0x310);
    lVar1 = lVar1 + -0x318;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


