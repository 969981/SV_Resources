/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01556454; name: FUN_01556454
 */


undefined8
FUN_01556454(long param_1,int *param_2,undefined4 param_3,undefined2 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (*param_2 != 0) {
    if (*param_2 != 1) {
      return 0;
    }
    goto LAB_0155651c;
  }
  plVar3 = *(long **)(param_1 + 0x1b0);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_01556498:
    uVar1 = FUN_014aeb48(param_1);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar1 & 1) != 0))
    goto LAB_015564e4;
LAB_015564b4:
    uVar2 = 1;
  }
  else {
    uVar1 = FUN_014aeb48(param_1);
    if ((((uVar1 & 1) == 0) || (uVar1 = FUN_014aeb20(param_1,1), (uVar1 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_01556498;
      goto LAB_015564b4;
    }
LAB_015564e4:
    uVar2 = 0;
  }
  (**(code **)(*plVar3 + 0x218))(plVar3,param_3,param_4,0,uVar2,param_5,1,0);
  *param_2 = *param_2 + 1;
LAB_0155651c:
  uVar1 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x228))();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}


