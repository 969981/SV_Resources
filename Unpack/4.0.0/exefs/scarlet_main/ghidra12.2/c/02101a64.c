/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02101a64; name: FUN_02101a64
 */


undefined8 FUN_02101a64(long param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x6d0))
                      (*(long **)(param_1 + 0x1b0),param_3[2]);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    DAT_04840bdc = 0;
    *param_2 = *param_2 + 1;
  }
  uVar2 = FUN_01556454(param_1,&DAT_04840bdc,*param_3,param_3[1],param_3 + 3);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_02101ad8:
    uVar2 = FUN_014aeb48(param_1);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar2 & 1) == 0))
    goto LAB_02101b54;
  }
  else {
    uVar2 = FUN_014aeb48(param_1);
    if ((((uVar2 & 1) == 0) || (uVar2 = FUN_014aeb20(param_1,1), (uVar2 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) != '\0') goto LAB_02101b54;
      goto LAB_02101ad8;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x6c8))(*(long **)(param_1 + 0x1b0),param_3[2]);
LAB_02101b54:
  *param_2 = *param_2 + 1;
  return 0;
}


