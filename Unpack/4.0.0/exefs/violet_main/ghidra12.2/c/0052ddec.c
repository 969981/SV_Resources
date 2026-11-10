/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052ddec; name: FUN_0052ddec
 */


long FUN_0052ddec(long *param_1,long param_2,ulong param_3,byte *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar6 = param_3 & 0xffffffff;
  if ((*param_4 & 1) == 0) {
    param_4[0] = 0;
    param_4[1] = 0;
  }
  else {
    **(undefined1 **)(param_4 + 0x10) = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
  }
  lVar3 = param_1[1];
  iVar5 = (int)param_3;
  if ((long)iVar5 <= (lVar3 - param_2) + (long)*(int *)((long)param_1 + 0x1c)) {
    if ((*param_4 & 1) == 0) {
      uVar4 = (ulong)(*param_4 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_4 + 8);
    }
    if (49999999 < iVar5) {
      iVar5 = 50000000;
    }
    FUN_002cdbb0(param_4,uVar4 + (long)iVar5);
    lVar3 = param_1[1];
  }
  iVar5 = ((int)lVar3 - (int)param_2) + 0x10;
  while( true ) {
    lVar3 = (long)iVar5;
    FUN_0021d540(param_4,param_2,lVar3);
    if (*(int *)((long)param_1 + 0x1c) == 0x10) {
      return 0;
    }
    uVar4 = (param_2 + lVar3) - param_1[1];
    iVar5 = (int)uVar4;
    if (*(int *)((long)param_1 + 0x1c) < iVar5) {
      return 0;
    }
    lVar2 = FUN_0052da24(param_1,uVar4 & 0xffffffff,0xffffffff);
    if (lVar2 == 0) break;
    uVar6 = (int)uVar6 - lVar3;
    while( true ) {
      lVar3 = param_1[1];
      param_2 = lVar2 + (int)uVar4;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar3);
      uVar4 = param_2 - lVar3;
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      iVar5 = (int)uVar4;
      if (iVar5 < 0) break;
      lVar2 = FUN_0052da24(param_1,uVar4 & 0xffffffff,0xffffffff);
      if (lVar2 == 0) goto LAB_0052df3c;
    }
    iVar5 = ((int)lVar3 - (int)param_2) + 0x10;
    *param_1 = lVar3 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    if ((int)uVar6 <= iVar5) {
      FUN_0021d540(param_4,param_2,uVar6);
      return param_2 + uVar6;
    }
  }
LAB_0052df3c:
  if (iVar5 == 0) {
    *param_1 = param_1[1];
    *(undefined4 *)(param_1 + 10) = 1;
    return 0;
  }
  return 0;
}


