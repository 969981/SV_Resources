/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01582568; name: FUN_01582568
 */


undefined4 FUN_01582568(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  
  uVar2 = (**(code **)(*param_2 + 0x7c8))(param_2);
  lVar6 = FUN_01582534(param_1);
  lVar6 = *(long *)(lVar6 + 0x290);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  piVar7 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar6 + 8) + 0x50),uVar3);
  if (piVar7 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *piVar7;
    if (4 < iVar1) {
      iVar1 = 0;
    }
  }
  uVar4 = FUN_0158268c(*(undefined8 *)(param_1 + 8),iVar1);
  uVar2 = uVar2 & 0xff;
  if ((uVar4 & 0xff) < uVar2) {
    uVar4 = uVar4 & 0xff;
    uVar5 = FUN_012421f0(param_1,uVar2 + uVar4 + 1);
    if (uVar4 <= (uVar5 & 0xffff)) {
      uVar8 = (**(code **)(*param_2 + 0x228))(param_2,0);
      if ((uVar8 & 1) != 0) {
        return 4;
      }
      uVar5 = FUN_012421f0(param_1,0x100);
      iVar1 = uVar2 - uVar4;
      if (((int)(uVar5 & 0xffff) < iVar1) &&
         (uVar8 = FUN_02930050(*(undefined8 *)(param_1 + 0x38),param_2), (uVar8 & 1) == 0)) {
        return 2;
      }
      uVar3 = 3;
      if (iVar1 <= (int)(uVar5 - iVar1 & 0xffff)) {
        uVar3 = 4;
      }
      return uVar3;
    }
  }
  return 0;
}


