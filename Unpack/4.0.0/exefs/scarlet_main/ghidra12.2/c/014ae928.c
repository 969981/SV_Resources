/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ae928; name: FUN_014ae928
 */


undefined8 FUN_014ae928(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  byte local_48 [4];
  byte local_44 [4];
  
  if (*param_2 != 0) {
    if (*param_2 != 1) {
      return 0;
    }
    goto LAB_014aea80;
  }
  uVar3 = *param_3;
  iVar4 = param_3[4];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  uVar5 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),uVar3);
  lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
  FUN_01253868(*(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x290),uVar5,local_44,local_48);
  uVar9 = (ulong)local_44[0];
  if ((uVar9 == 5) || (*(byte *)(lVar10 + uVar9 * 0x38 + 0x58) <= local_48[0])) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar10 + uVar9 * 0x38 + (ulong)local_48[0] * 8 + 0x28);
  }
  uVar6 = FUN_014aec40(uVar1,uVar8);
  if ((iVar4 == 0) && ((*(byte *)(*(long *)(param_1 + 0x30) + 0x9e) >> 2 & 1) != 0)) {
    if ((uVar2 & 0xff) == 10) {
      uVar7 = 0;
    }
    else {
      uVar9 = FUN_0173f398(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),uVar5,uVar2);
      uVar7 = 0;
      if (((uVar6 & 0xff) == 0) && ((uVar9 & 1) != 0)) {
        uVar7 = FUN_014aee38(uVar1);
        uVar7 = uVar7 ^ 1;
      }
    }
  }
  else {
    uVar7 = 1;
  }
  plVar11 = *(long **)(param_1 + 0x1b0);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_014ae9fc:
    uVar9 = FUN_014aeb48(param_1);
    if (((uVar9 & 1) == 0) ||
       (uVar9 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar9 & 1) != 0))
    goto LAB_014aea48;
LAB_014aea18:
    uVar8 = 1;
  }
  else {
    uVar9 = FUN_014aeb48(param_1);
    if ((((uVar9 & 1) == 0) || (uVar9 = FUN_014aeb20(param_1,1), (uVar9 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_014ae9fc;
      goto LAB_014aea18;
    }
LAB_014aea48:
    uVar8 = 0;
  }
  (**(code **)(*plVar11 + 0x200))(plVar11,uVar3,uVar1,uVar5,uVar2,uVar6,uVar7 & 1,uVar8);
  *param_2 = *param_2 + 1;
LAB_014aea80:
  uVar9 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x228))();
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  return 1;
}


