/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ee4f4; name: FUN_001ee4f4
 */


long FUN_001ee4f4(long param_1,uint param_2,uint param_3,uint *param_4,int param_5,
                 undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint local_70 [4];
  
  lVar1 = param_1 + 0x890;
  lVar7 = FUN_001f9090();
  if (lVar7 == 0) {
    lVar7 = FUN_001f45a0(lVar1,0xe8);
    if (lVar7 == 0) {
      return 0;
    }
    bVar5 = false;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x90);
    lVar3 = *(long *)(lVar7 + 0x98);
    plVar2 = (long *)(param_1 + 0x8d0);
    if (lVar8 != 0) {
      plVar2 = (long *)(lVar8 + 0x98);
    }
    *plVar2 = lVar3;
    plVar2 = (long *)(param_1 + 0x8d8);
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x90);
    }
    *plVar2 = lVar8;
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined8 *)(lVar7 + 0x98) = 0;
    *(long *)(param_1 + 0x910) = *(long *)(param_1 + 0x910) + -1;
    iVar6 = FUN_001f9b50();
    if (iVar6 != 0) {
      return 0;
    }
    bVar5 = true;
  }
  if (*param_4 == 0) {
    lVar8 = 0;
LAB_001ee64c:
    param_3 = param_5 == 4 | param_3;
    if (bVar5) {
      *(char *)(lVar7 + 0xe4) = (char)param_3;
      *(int *)(lVar7 + 0xdc) = param_5;
      *(uint *)(lVar7 + 0xd0) = param_4[1];
      *(undefined8 *)(lVar7 + 0xa0) = param_6;
    }
    else {
      FUN_001f9548(lVar7,param_2,param_3,param_5,param_4[1],*(undefined4 *)(param_1 + 0x970),
                   *(undefined4 *)(param_1 + 0x98c),param_6,lVar1);
      iVar6 = FUN_001f8f50(param_1,lVar7);
      if (iVar6 != 0) {
        FUN_001f9640(lVar7);
        goto LAB_001ee6b0;
      }
    }
    if (param_5 == 5) {
      if (*(long *)(param_1 + 0x8d8) == 0) {
        *(long *)(param_1 + 0x8d0) = lVar7;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x8d8) + 0x98) = lVar7;
        *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(param_1 + 0x8d8);
      }
      *(long *)(param_1 + 0x8d8) = lVar7;
      *(long *)(param_1 + 0x910) = *(long *)(param_1 + 0x910) + 1;
    }
    else if (param_5 == 4) {
      if ((param_2 == 0) || ((param_2 & 1) != (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
        FUN_001f9648(lVar7,2);
        *(long *)(param_1 + 0x8f8) = *(long *)(param_1 + 0x8f8) + 1;
      }
      else {
        FUN_001f9648(lVar7,1);
      }
    }
    else if ((param_2 == 0) || ((param_2 & 1) != (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
      *(long *)(param_1 + 0x8f0) = *(long *)(param_1 + 0x8f0) + 1;
    }
    else {
      *(long *)(param_1 + 0x8e8) = *(long *)(param_1 + 0x8e8) + 1;
    }
    lVar1 = param_1 + 0x20;
    if (*param_4 != 0) {
      lVar1 = lVar8;
    }
    if ((char)param_4[2] == '\0') {
      FUN_001f9b24(lVar1,lVar7);
      return lVar7;
    }
    iVar6 = FUN_001f9994(lVar1,lVar7);
    if (iVar6 == 0) {
      return lVar7;
    }
  }
  else {
    lVar8 = FUN_001f9090(param_1);
    if (lVar8 != 0) {
      iVar6 = FUN_001f9f00(lVar8);
      if (iVar6 == 0) goto LAB_001ee640;
      goto LAB_001ee64c;
    }
    uVar4 = *param_4;
    if (uVar4 == 0) {
LAB_001ee640:
      param_4 = local_70;
      FUN_001eda20(local_70);
      goto LAB_001ee64c;
    }
    if ((uVar4 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar6 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x938);
    }
    if ((int)uVar4 <= iVar6) goto LAB_001ee640;
    FUN_001eda20(local_70);
    lVar8 = FUN_001ee4f4(param_1,*param_4,0,local_70,5,0);
    if (lVar8 != 0) goto LAB_001ee64c;
    if (bVar5) {
      return 0;
    }
LAB_001ee6b0:
    FUN_001f45b0(lVar1,lVar7);
  }
  return 0;
}


