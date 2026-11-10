/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045ca10; name: FUN_0045ca10
 */


long FUN_0045ca10(undefined8 param_1,long param_2,uint param_3,int param_4,code *param_5,
                 uint param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if (param_3 == 0) {
LAB_0045cab4:
    lVar6 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      bVar4 = false;
      lVar6 = 0;
      uVar8 = 0;
    }
    else {
      iVar3 = 0;
      do {
        iVar2 = param_3 + iVar3;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        uVar8 = iVar2 >> 1;
        lVar6 = param_2 + (long)(int)uVar8 * (long)param_4;
        iVar2 = (*param_5)(param_1,lVar6);
        uVar5 = uVar8;
        if (-1 < iVar2) {
          if (iVar2 == 0) {
            bVar4 = false;
            goto joined_r0x0045ca94;
          }
          iVar3 = uVar8 + 1;
          uVar5 = param_3;
        }
        param_3 = uVar5;
      } while (iVar3 < (int)param_3);
      if ((param_6 & 1) == 0) goto LAB_0045cab4;
      bVar4 = true;
    }
joined_r0x0045ca94:
    if (((param_6 >> 1 & 1) != 0) && (!bVar4)) {
      uVar5 = uVar8 & (int)uVar8 >> 0x1f;
      lVar6 = param_2 + ((long)(int)uVar8 + -1) * (long)param_4;
      lVar7 = (long)(int)uVar8;
      do {
        lVar1 = lVar7 + -1;
        if (lVar7 < 1) goto LAB_0045cb00;
        iVar3 = (*param_5)(param_1,lVar6);
        lVar6 = lVar6 - param_4;
        lVar7 = lVar1;
      } while (iVar3 == 0);
      uVar5 = (int)lVar1 + 1;
LAB_0045cb00:
      lVar6 = param_2 + (long)(int)uVar5 * (long)param_4;
    }
  }
  return lVar6;
}


