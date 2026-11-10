/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bc134; name: FUN_019bc134
 */


undefined8 FUN_019bc134(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  char local_24 [4];
  
  if (*param_2 != 0) {
    if (*param_2 != 1) {
      return 0;
    }
    goto LAB_019bc258;
  }
  uVar1 = param_3[1];
  uVar2 = FUN_019bc2b4(param_1,*param_3,uVar1,local_24);
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  *(undefined2 *)(param_1 + 0x180) = 0x100;
  if (local_24[0] == '\0') {
    uVar4 = 1;
  }
  else {
    uVar2 = *param_3;
    uVar4 = 0x11;
    *(undefined1 *)(param_1 + 0x181) = 0x11;
    *(undefined4 *)(param_1 + 0x184) = uVar2;
  }
  uVar2 = param_3[1];
  *(char *)(param_1 + 0x181) = (char)uVar4 + '\x10';
  *(undefined4 *)(param_1 + (uVar4 >> 4) * 4 + 0x184) = uVar2;
  plVar5 = *(long **)(param_1 + 0x1b0);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_019bc1d8:
    uVar4 = FUN_014aeb48(param_1);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar4 & 1) != 0))
    goto LAB_019bc224;
LAB_019bc1f4:
    uVar3 = 1;
  }
  else {
    uVar4 = FUN_014aeb48(param_1);
    if ((((uVar4 & 1) == 0) || (uVar4 = FUN_014aeb20(param_1,1), (uVar4 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_019bc1d8;
      goto LAB_019bc1f4;
    }
LAB_019bc224:
    uVar3 = 0;
  }
  (**(code **)(*plVar5 + 0x1f8))(plVar5,uVar1,param_1 + 0x17c,uVar3,1,0,0);
  *param_2 = *param_2 + 1;
LAB_019bc258:
  uVar4 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x228))();
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  return 1;
}


