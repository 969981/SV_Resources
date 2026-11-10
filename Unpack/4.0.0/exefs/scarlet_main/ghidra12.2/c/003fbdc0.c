/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fbdc0; name: FUN_003fbdc0
 */


undefined8 FUN_003fbdc0(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  lVar2 = FUN_003ed1c0();
  if (lVar2 != 0) {
    FUN_003ed410(lVar2);
    lVar3 = FUN_003ed5c0(lVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_003ec640(*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        *param_2 = *param_2 | 1;
        iVar1 = FUN_003ec670(*(undefined8 *)(param_1 + 0x10));
        if (iVar1 == 0) goto LAB_003fbe30;
LAB_003fbe48:
        *param_2 = *param_2 | 8;
      }
      else {
        iVar1 = FUN_003ec670(*(undefined8 *)(param_1 + 0x10));
        if (iVar1 != 0) goto LAB_003fbe48;
LAB_003fbe30:
        iVar1 = FUN_003eb480(*(undefined8 *)(param_1 + 0x10));
        if ((iVar1 != 0) || (iVar1 = FUN_003ec5b0(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0))
        goto LAB_003fbe48;
      }
      lVar4 = FUN_003eb8f0(lVar3,*(undefined8 *)(param_1 + 8));
      if ((lVar4 != 0) && (iVar1 = FUN_003f2f20(lVar3,1), iVar1 != 0)) {
        iVar1 = FUN_003ebf70(*(undefined8 *)(param_1 + 0x10),lVar3);
        if (-1 < iVar1) {
          *param_2 = *param_2 | 8;
        }
        uVar5 = 1;
        goto LAB_003fbe9c;
      }
    }
  }
  uVar5 = 0;
LAB_003fbe9c:
  FUN_003ed530(lVar2);
  FUN_003ed280(lVar2);
  return uVar5;
}


