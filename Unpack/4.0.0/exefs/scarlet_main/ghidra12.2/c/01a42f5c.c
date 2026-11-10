/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a42f5c; name: FUN_01a42f5c
 */


undefined8 FUN_01a42f5c(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x838))(*(long **)(param_1 + 0x1b0),*param_3);
  if (*param_2 != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x2e8))();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if ((*(byte *)(lVar5 + 0x9e) >> 2 & 1) == 0) {
    uVar3 = FUN_01a43090(param_3[1]);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    lVar5 = *(long *)(param_1 + 0x30);
  }
  plVar6 = *(long **)(param_1 + 0x1b0);
  uVar1 = param_3[1];
  if ((*(byte *)(*(long *)(lVar5 + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_01a42fbc:
    uVar3 = FUN_014aeb48(param_1);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar3 & 1) == 0)) {
LAB_01a42fd8:
      uVar4 = 1;
      goto LAB_01a43028;
    }
  }
  else {
    uVar3 = FUN_014aeb48(param_1);
    if ((((uVar3 & 1) == 0) || (uVar3 = FUN_014aeb20(param_1,1), (uVar3 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_01a42fbc;
      goto LAB_01a42fd8;
    }
  }
  uVar4 = 0;
LAB_01a43028:
  (**(code **)(*plVar6 + 0x2e0))(plVar6,uVar2,uVar1,uVar4);
  *param_2 = *param_2 + 1;
  return 0;
}


