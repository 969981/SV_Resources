/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02103704; name: FUN_02103704
 */


undefined8 FUN_02103704(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*param_2 == 1) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x3b8))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    goto LAB_021037d8;
  }
  if (*param_2 != 0) {
    return 1;
  }
  uVar1 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),*param_3);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_02103750:
    uVar2 = FUN_014aeb48(param_1);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar2 & 1) == 0))
    goto LAB_0210376c;
LAB_021037c0:
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_014aeb48(param_1);
    if ((((uVar2 & 1) != 0) && (uVar2 = FUN_014aeb20(param_1,1), (uVar2 & 1) != 0)) ||
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) != '\0')) goto LAB_021037c0;
    if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_02103750;
LAB_0210376c:
    uVar3 = 1;
  }
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x3b0))(*(long **)(param_1 + 0x1b0),uVar1,uVar3);
LAB_021037d8:
  *param_2 = *param_2 + 1;
  return 0;
}


