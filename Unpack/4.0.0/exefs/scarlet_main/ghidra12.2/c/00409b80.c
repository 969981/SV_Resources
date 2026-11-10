/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00409b80; name: FUN_00409b80
 */


undefined8 FUN_00409b80(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar1 = param_3;
    param_3 = param_2;
  }
  lVar2 = FUN_003eb9a0(param_1,(int)param_3[1]);
  if (lVar2 == 0) {
    return 0;
  }
  if ((int)plVar1[1] < 1) {
    uVar3 = 0;
    iVar4 = (int)param_3[1];
    if (iVar4 < 1) goto LAB_00409c34;
  }
  else {
    lVar2 = *param_3;
    uVar3 = 0;
    lVar5 = *plVar1;
    lVar6 = *param_1;
    do {
      lVar7 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(uint *)(lVar6 + lVar7) = *(uint *)(lVar5 + lVar7) ^ *(uint *)(lVar2 + lVar7);
    } while ((long)uVar3 < (long)(int)plVar1[1]);
    iVar4 = (int)param_3[1];
    if (iVar4 <= (int)uVar3) goto LAB_00409c34;
  }
  lVar2 = *param_3;
  uVar3 = uVar3 & 0xffffffff;
  lVar5 = *param_1;
  do {
    lVar6 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(undefined4 *)(lVar5 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
    iVar4 = (int)param_3[1];
  } while ((int)uVar3 < iVar4);
LAB_00409c34:
  *(int *)(param_1 + 1) = iVar4;
  FUN_003ebc30(param_1);
  return 1;
}


