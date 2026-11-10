/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124c0a0; name: FUN_0124c0a0
 */


void FUN_0124c0a0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_0124c158();
  lVar3 = FUN_0124d844(uVar2,3);
  if (lVar3 != 0) {
    lVar4 = FUN_01255bdc(uVar2,lVar3,1);
    uVar1 = FUN_0107bb74(lVar3);
    if (param_2 == (uVar1 & 0xffff)) {
      FUN_014608b0(param_1,lVar3);
    }
    while (lVar3 = lVar4, lVar3 != 0) {
      lVar4 = FUN_01255bdc(uVar2,lVar3,1);
      uVar1 = FUN_0107bb74(lVar3);
      if (param_2 == (uVar1 & 0xffff)) {
        FUN_014608b0(param_1,lVar3);
      }
    }
  }
  return;
}


