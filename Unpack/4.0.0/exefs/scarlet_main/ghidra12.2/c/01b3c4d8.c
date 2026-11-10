/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b3c4d8; name: FUN_01b3c4d8
 */


void FUN_01b3c4d8(undefined4 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_01fb1e70();
  lVar1 = FUN_01fb1f0c();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = FUN_01fb216c(lVar1,param_1);
  lVar1 = 0;
  if (lVar2 != -1) {
    lVar1 = lVar2;
  }
  FUN_01b3c408(param_1,lVar1 + param_2);
  return;
}


