/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02102b60; name: FUN_02102b60
 */


undefined8 FUN_02102b60(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*param_2 == 1) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x2e8))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if (*param_2 != 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x838))(*(long **)(param_1 + 0x1b0),*param_3);
  plVar4 = *(long **)(param_1 + 0x1b0);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_02102bb4:
    uVar2 = FUN_014aeb48(param_1);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar2 & 1) == 0)) {
LAB_02102bd0:
      uVar3 = 1;
      goto LAB_02102c20;
    }
  }
  else {
    uVar2 = FUN_014aeb48(param_1);
    if ((((uVar2 & 1) == 0) || (uVar2 = FUN_014aeb20(param_1,1), (uVar2 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_02102bb4;
      goto LAB_02102bd0;
    }
  }
  uVar3 = 0;
LAB_02102c20:
  (**(code **)(*plVar4 + 0x2e0))(plVar4,uVar1,0x3f,uVar3);
  *param_2 = *param_2 + 1;
  return 0;
}


