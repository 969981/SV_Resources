/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e3de1c; name: FUN_00e3de1c
 */


undefined8 FUN_00e3de1c(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  plVar5 = param_4 + 3;
  *plVar5 = param_3;
  param_4[4] = param_3;
  *(undefined1 *)(param_4 + 5) = 0;
  if ((param_5 & 0x80) != 0) {
    param_5 = param_5 & 0xffa;
  }
  FUN_00e3e07c(param_4,iVar1 + 1,plVar5);
  param_4[6] = param_2;
  param_4[7] = param_2;
  *(undefined1 *)(param_4 + 8) = 0;
  param_4[9] = *plVar5;
  param_4[10] = param_4[4];
  *(char *)(param_4 + 0xb) = (char)param_4[5];
  if ((param_5 >> 0xb & 1) == 0) {
    param_4[0xd] = param_2;
  }
  *(undefined1 *)(param_4 + 0xc) = 1;
  if ((*(ushort *)(param_1 + 0x18) & 0x1f0) == 0) {
    uVar2 = FUN_00e3e45c(param_1,param_2,param_3,param_4,param_5,(param_5 & 0x800) == 0);
  }
  else if (*(int *)(param_1 + 0x1c) == 0) {
    uVar2 = FUN_028bd50c(param_1,param_2,param_3,param_4,param_5,(param_5 & 0x800) == 0);
  }
  else {
    uVar2 = FUN_00e40250(param_1,param_2,param_3,param_4,param_5,(param_5 & 0x800) == 0);
  }
  if ((uVar2 & 1) == 0) {
    if (((param_2 != param_3) && ((param_5 >> 6 & 1) == 0)) &&
       (param_2 = param_2 + 1, param_2 != param_3)) {
      param_5 = param_5 | 0x80;
      do {
        FUN_00e3e07c(param_4,(param_4[1] - *param_4 >> 3) * -0x5555555555555555,plVar5);
        if ((*(ushort *)(param_1 + 0x18) & 0x1f0) == 0) {
          uVar2 = FUN_00e3e45c(param_1,param_2,param_3,param_4,param_5,0);
        }
        else if (*(int *)(param_1 + 0x1c) == 0) {
          uVar2 = FUN_028bd50c(param_1,param_2,param_3,param_4,param_5,0);
        }
        else {
          uVar2 = FUN_00e40250(param_1,param_2,param_3,param_4,param_5,0);
        }
        if ((uVar2 & 1) != 0) goto LAB_00e3df2c;
        FUN_00e3e07c(param_4,(param_4[1] - *param_4 >> 3) * -0x5555555555555555,plVar5);
        param_2 = param_2 + 1;
      } while (param_3 != param_2);
    }
    uVar3 = 0;
    param_4[1] = *param_4;
  }
  else {
LAB_00e3df2c:
    if ((long *)param_4[1] != (long *)*param_4) {
      plVar5 = (long *)*param_4;
    }
    lVar4 = *plVar5;
    param_4[7] = lVar4;
    *(bool *)(param_4 + 8) = param_4[6] != lVar4;
    lVar4 = plVar5[1];
    param_4[9] = lVar4;
    *(bool *)(param_4 + 0xb) = lVar4 != param_4[10];
    uVar3 = 1;
  }
  return uVar3;
}


