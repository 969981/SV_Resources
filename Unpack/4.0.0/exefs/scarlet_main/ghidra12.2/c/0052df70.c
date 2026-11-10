/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052df70; name: FUN_0052df70
 */


long FUN_0052df70(long *param_1,long param_2,ulong param_3,byte *param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = param_1[1];
  uVar6 = param_3 & 0xffffffff;
  iVar3 = (int)param_3;
  if ((long)iVar3 <= (lVar4 - param_2) + (long)*(int *)((long)param_1 + 0x1c)) {
    if ((*param_4 & 1) == 0) {
      uVar5 = (ulong)(*param_4 >> 1);
    }
    else {
      uVar5 = *(ulong *)(param_4 + 8);
    }
    if (49999999 < iVar3) {
      iVar3 = 50000000;
    }
    FUN_002cdbb0(param_4,uVar5 + (long)iVar3);
    lVar4 = param_1[1];
  }
  iVar3 = ((int)lVar4 - (int)param_2) + 0x10;
  while( true ) {
    lVar4 = (long)iVar3;
    FUN_0021d540(param_4,param_2,lVar4);
    if (*(int *)((long)param_1 + 0x1c) == 0x10) {
      return 0;
    }
    uVar5 = (param_2 + lVar4) - param_1[1];
    iVar3 = (int)uVar5;
    if (*(int *)((long)param_1 + 0x1c) < iVar3) {
      return 0;
    }
    lVar2 = FUN_0052da24(param_1,uVar5 & 0xffffffff,0xffffffff);
    if (lVar2 == 0) break;
    uVar6 = (int)uVar6 - lVar4;
    while( true ) {
      lVar4 = param_1[1];
      param_2 = lVar2 + (int)uVar5;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar4);
      uVar5 = param_2 - lVar4;
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      iVar3 = (int)uVar5;
      if (iVar3 < 0) break;
      lVar2 = FUN_0052da24(param_1,uVar5 & 0xffffffff,0xffffffff);
      if (lVar2 == 0) goto LAB_0052e0a4;
    }
    iVar3 = ((int)lVar4 - (int)param_2) + 0x10;
    *param_1 = lVar4 + (int)(uVar1 & (int)uVar1 >> 0x1f);
    if ((int)uVar6 <= iVar3) {
      FUN_0021d540(param_4,param_2,uVar6);
      return param_2 + uVar6;
    }
  }
LAB_0052e0a4:
  if (iVar3 == 0) {
    *param_1 = param_1[1];
    *(undefined4 *)(param_1 + 10) = 1;
    return 0;
  }
  return 0;
}


