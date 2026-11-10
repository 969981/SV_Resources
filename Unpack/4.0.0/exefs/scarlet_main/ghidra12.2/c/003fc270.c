/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fc270; name: FUN_003fc270
 */


undefined8 FUN_003fc270(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_3 = 0;
  lVar2 = FUN_003ed1c0();
  if (lVar2 != 0) {
    FUN_003ed410(lVar2);
    lVar3 = FUN_003ed5c0(lVar2);
    if ((lVar3 != 0) && (iVar1 = FUN_003eb9f0(lVar3,1), iVar1 != 0)) {
      iVar1 = FUN_003ebf70(param_2,lVar3);
      if (iVar1 < 1) {
        *param_3 = *param_3 | 1;
        lVar4 = FUN_003eb8f0(lVar3,*(undefined8 *)(param_1 + 8));
      }
      else {
        lVar4 = FUN_003eb8f0(lVar3,*(undefined8 *)(param_1 + 8));
      }
      if ((lVar4 != 0) && (iVar1 = FUN_003f2f20(lVar3,1), iVar1 != 0)) {
        iVar1 = FUN_003ebf70(param_2,lVar3);
        if (-1 < iVar1) {
          *param_3 = *param_3 | 2;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          iVar1 = FUN_003fd370(lVar3,param_2,*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 8),
                               lVar2);
          if (iVar1 == 0) goto LAB_003fc36c;
          iVar1 = FUN_003ec5b0(lVar3);
          if (iVar1 == 0) {
            *param_3 = *param_3 | 4;
          }
        }
        uVar5 = 1;
        goto LAB_003fc370;
      }
    }
  }
LAB_003fc36c:
  uVar5 = 0;
LAB_003fc370:
  FUN_003ed530(lVar2);
  FUN_003ed280(lVar2);
  return uVar5;
}


