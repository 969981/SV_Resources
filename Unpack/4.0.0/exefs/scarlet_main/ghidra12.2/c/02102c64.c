/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02102c64; name: FUN_02102c64
 */


undefined8 FUN_02102c64(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*param_2 == 1) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x3d8))();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if (*param_2 != 0) {
    return 0;
  }
  uVar1 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),*param_3);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x838))(*(long **)(param_1 + 0x1b0),uVar1);
  uVar2 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),param_3[1]);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x838))(*(long **)(param_1 + 0x1b0),uVar2);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_02102cf0:
    uVar3 = FUN_014aeb48(param_1);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar3 & 1) == 0)) {
LAB_02102d0c:
      uVar4 = 1;
      goto LAB_02102d5c;
    }
  }
  else {
    uVar3 = FUN_014aeb48(param_1);
    if ((((uVar3 & 1) == 0) || (uVar3 = FUN_014aeb20(param_1,1), (uVar3 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_02102cf0;
      goto LAB_02102d0c;
    }
  }
  uVar4 = 0;
LAB_02102d5c:
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x3d0))(*(long **)(param_1 + 0x1b0),uVar1,uVar2,uVar4)
  ;
  *param_2 = *param_2 + 1;
  return 0;
}


