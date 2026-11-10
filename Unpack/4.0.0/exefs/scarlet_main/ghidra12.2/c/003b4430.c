/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b4430; name: FUN_003b4430
 */


long FUN_003b4430(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (((param_1 == 0) ||
      (((lVar4 = *(long *)(param_1 + 0x120), lVar4 == 0 &&
        ((*(long *)(param_1 + 0x660) == 0 ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x660) + 8), lVar4 == 0)))) ||
       (iVar1 = FUN_003d6af0(param_1), iVar1 == 0)))) || (iVar1 = FUN_0047e430(lVar4), iVar1 < 1)) {
LAB_003b44f0:
    lVar5 = 0;
  }
  else {
    iVar1 = 0;
    lVar5 = 0;
    do {
      uVar3 = FUN_0047e450(lVar4,iVar1);
      iVar2 = FUN_003d6cf0(param_1,uVar3,0x10001,0);
      if (iVar2 == 0) {
        if ((lVar5 == 0) && (lVar5 = FUN_0047dcc0(), lVar5 == 0)) {
          return 0;
        }
        iVar2 = FUN_0047e2f0(lVar5,uVar3);
        if (iVar2 == 0) {
          FUN_0047db00(lVar5);
          goto LAB_003b44f0;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(lVar4);
    } while (iVar1 < iVar2);
  }
  return lVar5;
}


