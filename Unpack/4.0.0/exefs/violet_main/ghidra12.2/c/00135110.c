/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00135110; name: FUN_00135110
 */


void FUN_00135110(long *param_1,int *param_2,int *param_3)

{
  undefined2 uVar1;
  int iVar2;
  long local_40;
  byte local_38;
  
  if (*param_3 == 7) {
    local_40 = *(long *)(param_3 + 2);
    local_38 = *(byte *)(local_40 + 8) | 0x40;
    iVar2 = FUN_00137f00(param_1,&local_40,&local_40);
    param_3[2] = iVar2;
    *param_3 = 4;
    iVar2 = *param_2;
    if (iVar2 == 10) {
LAB_00135190:
      if (((param_3[4] != param_3[5]) || (0xff < param_3[2])) ||
         (*(char *)(*(long *)(*param_1 + 0x38) + (long)param_3[2] * 0x10 + 8) != 'D'))
      goto LAB_001351c0;
LAB_001351d8:
      *(char *)((long)param_2 + 10) = (char)param_2[2];
      *(short *)(param_2 + 2) = (short)param_3[2];
      iVar2 = 0xd;
      goto LAB_00135290;
    }
  }
  else {
    iVar2 = *param_2;
    if (iVar2 == 10) {
      if (*param_3 == 4) goto LAB_00135190;
LAB_001351c0:
      FUN_001345b0(param_1,param_2);
      iVar2 = *param_2;
      if (iVar2 == 10) goto LAB_001351d8;
    }
  }
  if (iVar2 == 9) {
    *(char *)((long)param_2 + 10) = (char)param_2[2];
    iVar2 = *param_3;
    if (iVar2 == 6) goto LAB_00135264;
LAB_0013520c:
    if ((iVar2 == 4) && (param_3[4] == param_3[5])) {
      iVar2 = param_3[2];
      if ((iVar2 < 0x100) && (*(char *)(*(long *)(*param_1 + 0x38) + (long)iVar2 * 0x10 + 8) == 'D')
         ) {
        *(short *)(param_2 + 2) = (short)iVar2;
        iVar2 = 0xf;
        goto LAB_00135290;
      }
    }
  }
  else {
    *(char *)((long)param_2 + 10) = (char)param_2[2];
    iVar2 = *param_3;
    if (iVar2 != 6) goto LAB_0013520c;
LAB_00135264:
    if ((param_3[4] == param_3[5]) && (*(ulong *)(param_3 + 2) < 0x100)) {
      *(short *)(param_2 + 2) = (short)*(ulong *)(param_3 + 2);
      iVar2 = 0xe;
      goto LAB_00135290;
    }
  }
  uVar1 = FUN_001345b0(param_1,param_3);
  iVar2 = 0xc;
  *(undefined2 *)(param_2 + 2) = uVar1;
LAB_00135290:
  *param_2 = iVar2;
  return;
}


