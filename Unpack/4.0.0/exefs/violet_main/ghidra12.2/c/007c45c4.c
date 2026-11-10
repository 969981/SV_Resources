/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c45c4; name: FUN_007c45c4
 */


int FUN_007c45c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_50;
  long lStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  lVar3 = param_1[1];
  local_e0 = param_3;
  uStack_d8 = param_4;
  local_d0 = param_5;
  uStack_c8 = param_6;
  local_c0 = param_7;
  uStack_b8 = param_8;
  (**(code **)(*param_1 + 0x18))();
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_007c4680;
    lVar1 = param_1[1] + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_007c4680;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_007c4680;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_007c4680:
  iVar5 = (int)lVar6;
  lVar6 = (long)(int)param_1[2] - (long)iVar5;
  uStack_38 = 0xffffff80ffffffd0;
  local_50 = (undefined1 *)register0x00000008;
  lStack_48 = (long)register0x00000008 + -0xb0;
  local_40 = &local_e0;
  iVar4 = FUN_007c6f10(lVar3 + iVar5,lVar6,param_2,&local_50);
  iVar2 = (int)lVar6 + -1;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  return iVar2 + iVar5;
}


