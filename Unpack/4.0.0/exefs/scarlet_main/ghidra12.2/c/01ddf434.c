/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddf434; name: FUN_01ddf434
 */


void FUN_01ddf434(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = FUN_01195854();
  iVar1 = FUN_019aeb9c(uVar2,0);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      FUN_01ddfacc(param_1,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  FUN_01ddf99c(param_1);
  return;
}


