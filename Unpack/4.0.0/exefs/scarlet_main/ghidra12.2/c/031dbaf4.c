/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031dbaf4; name: FUN_031dbaf4
 */


long FUN_031dbaf4(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  int local_44;
  
  lVar4 = *param_1;
  local_44 = param_3;
  lVar2 = FUN_031df398((long *)(lVar4 + 0xa0),&local_44);
  if ((lVar2 != 0) && (lVar4 = *(long *)(lVar4 + 0xa0), lVar4 != 0)) {
    lVar4 = lVar4 + (long)*(int *)(lVar2 + 4) * 0x18;
    iVar1 = *(int *)(lVar4 + 0x10);
    if (iVar1 != 0) {
      plVar6 = *(long **)(lVar4 + 8);
      lVar2 = (long)iVar1 << 3;
      do {
        iVar1 = FUN_031e29c0(*plVar6,param_2);
        if (iVar1 == 0) {
          return *plVar6;
        }
        plVar6 = plVar6 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  lVar2 = (**(code **)(**(long **)PTR_DAT_047ddc48 + 0x30))(*(long **)PTR_DAT_047ddc48,param_2);
  if (lVar2 != 0) {
    iVar1 = FUN_031e9ec4(*param_1 + 0x58,lVar2);
    if (iVar1 == param_3) {
      lVar4 = *param_1;
      plVar6 = (long *)(lVar4 + 0xa0);
      iVar1 = FUN_031df40c(plVar6,&local_44);
      if (*(int *)(lVar4 + 0xa8) == iVar1) {
        iVar3 = iVar1;
        if ((int)(*(uint *)(lVar4 + 0xac) & 0x7fffffff) <= iVar1) {
          FUN_031df508(plVar6,(long)(iVar1 + 1));
          iVar3 = *(int *)(lVar4 + 0xa8);
        }
        piVar5 = (int *)(*(long *)(lVar4 + 0xa0) + (long)iVar3 * 0x18);
        *piVar5 = param_3;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = -0x80000000;
        *(int *)(lVar4 + 0xa8) = iVar1 + 1;
      }
      lVar7 = *plVar6 + (long)iVar1 * 0x18;
      piVar5 = (int *)(lVar7 + 0x10);
      iVar1 = *piVar5;
      lVar4 = (long)iVar1;
      if ((int)(*(uint *)(lVar7 + 0x14) & 0x7fffffff) <= iVar1) {
        FUN_031bc928((long *)(lVar7 + 8),PTR_PTR_047d1a50,lVar4 + 1);
        iVar1 = *piVar5;
      }
      *(long *)(*(long *)(lVar7 + 8) + (long)iVar1 * 8) = lVar2;
      *piVar5 = (int)(lVar4 + 1);
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}


