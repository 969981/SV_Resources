/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e35d1c; name: FUN_01e35d1c
 */


void FUN_01e35d1c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (*param_1 != 0) {
    lVar2 = *(long *)(*param_1 + 0x10);
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x28;
  }
  FUN_011d775c(lVar1);
  FUN_0112e9a4(lVar1,0);
  return;
}


