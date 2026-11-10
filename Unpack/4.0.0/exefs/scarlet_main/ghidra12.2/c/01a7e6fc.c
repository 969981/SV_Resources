/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7e6fc; name: FUN_01a7e6fc
 */


undefined8 FUN_01a7e6fc(long param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  
  uVar1 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),*param_3);
  if (*param_2 == 1) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x2e8))();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    goto LAB_01a7e7f4;
  }
  if ((((*param_2 != 0) || ((uVar1 & 0xff) == 10)) ||
      (lVar3 = FUN_01a7e900(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),uVar1), lVar3 == 0))
     || (uVar4 = FUN_02102e50(), (uVar4 & 1) == 0)) {
    return 1;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x838))(*(long **)(param_1 + 0x1b0),uVar1);
  iVar6 = param_3[1];
  if (iVar6 - 1U < 2) {
    plVar7 = *(long **)(param_1 + 0x1b0);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_01a7e7a4:
      uVar4 = FUN_014aeb48(param_1);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar4 & 1) == 0))
      goto LAB_01a7e7c0;
LAB_01a7e838:
      uVar5 = 0;
    }
    else {
      uVar4 = FUN_014aeb48(param_1);
      if ((((uVar4 & 1) != 0) && (uVar4 = FUN_014aeb20(param_1,1), (uVar4 & 1) != 0)) ||
         (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) != '\0')) goto LAB_01a7e838;
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_01a7e7a4;
LAB_01a7e7c0:
      uVar5 = 1;
    }
    (**(code **)(*plVar7 + 0x2e0))(plVar7,uVar2,0xd,uVar5);
    iVar6 = param_3[1];
  }
  if ((iVar6 != 0) && (iVar6 != 2)) goto LAB_01a7e7f4;
  plVar7 = *(long **)(param_1 + 0x1b0);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_01a7e870:
    uVar4 = FUN_014aeb48(param_1);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar4 & 1) == 0))
    goto LAB_01a7e88c;
LAB_01a7e8bc:
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_014aeb48(param_1);
    if ((((uVar4 & 1) != 0) && (uVar4 = FUN_014aeb20(param_1,1), (uVar4 & 1) != 0)) ||
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) != '\0')) goto LAB_01a7e8bc;
    if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_01a7e870;
LAB_01a7e88c:
    uVar5 = 1;
  }
  (**(code **)(*plVar7 + 0x2e0))(plVar7,uVar2,10,uVar5);
LAB_01a7e7f4:
  *param_2 = *param_2 + 1;
  return 0;
}


