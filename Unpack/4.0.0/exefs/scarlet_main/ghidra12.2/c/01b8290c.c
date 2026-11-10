/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8290c; name: FUN_01b8290c
 */


void FUN_01b8290c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    FUN_01fb1038(0);
    return;
  }
  lVar2 = *(long *)(*param_1 + 0x10);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x28;
  }
  FUN_01fb1038(lVar1);
  return;
}


