/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049bd10; name: FUN_0049bd10
 */


long FUN_0049bd10(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_0049bb70(auStack_30,param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_003e4ff0();
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = thunk_FUN_003df070(lVar2,auStack_30,iVar1);
    if (iVar1 != 0) {
      return lVar2;
    }
    thunk_FUN_003df2e0(lVar2);
  }
  return 0;
}


