/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02101944; name: FUN_02101944
 */


undefined8 FUN_02101944(long param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    DAT_04840bd8 = 0;
    *param_2 = *param_2 + 1;
  }
  else {
    if (iVar1 == 2) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x6d0))
                        (*(long **)(param_1 + 0x1b0),param_3[2]);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    if (iVar1 != 1) {
      return 0;
    }
  }
  uVar2 = FUN_0191cf38(param_1,&DAT_04840bd8,*param_3,param_3[1],param_3 + 3);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_021019d0:
    uVar2 = FUN_014aeb48(param_1);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar2 & 1) == 0))
    goto LAB_02101a38;
  }
  else {
    uVar2 = FUN_014aeb48(param_1);
    if ((((uVar2 & 1) == 0) || (uVar2 = FUN_014aeb20(param_1,1), (uVar2 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) != '\0') goto LAB_02101a38;
      goto LAB_021019d0;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x6c8))(*(long **)(param_1 + 0x1b0),param_3[2]);
LAB_02101a38:
  *param_2 = *param_2 + 1;
  return 0;
}


