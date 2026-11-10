/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fb210; name: FUN_031fb210
 */


void FUN_031fb210(undefined1 *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  iVar3 = (int)param_2[1];
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar3) {
    FUN_031fe1d0(param_1 + 8,(long)iVar3);
  }
  if (*(int *)(param_1 + 0x10) != iVar3) {
    *(int *)(param_1 + 0x10) = iVar3;
  }
  if ((int)param_2[1] != 0) {
    lVar5 = (long)(int)param_2[1] * 0x38;
    iVar3 = 0;
    plVar6 = (long *)*param_2;
    do {
      iVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
      iVar3 = (iVar2 + 0xfU & 0xfffffff0) + iVar3;
      lVar5 = lVar5 + -0x38;
      plVar6 = plVar6 + 7;
    } while (lVar5 != 0);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar3) {
        FUN_030b4a20(param_1 + 0x18,PTR_PTR_047d1a50,(long)iVar3);
      }
      uVar1 = *(uint *)(param_1 + 0x20);
      if ((int)uVar1 < iVar3) {
        *(int *)(param_1 + 0x20) = iVar3;
        memset((void *)(*(long *)(param_1 + 0x18) + (long)(int)uVar1),0,(ulong)(iVar3 + ~uVar1) + 1)
        ;
      }
      else if (iVar3 < (int)uVar1) {
        *(int *)(param_1 + 0x20) = iVar3;
      }
      lVar5 = *(long *)(param_1 + 0x18);
    }
    if (0 < (int)param_2[1]) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        plVar6 = (long *)(*param_2 + lVar7);
        lVar4 = *(long *)(param_1 + 8);
        iVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar4 + lVar7,lVar5,lVar5 + iVar3);
        lVar5 = lVar5 + ((long)iVar3 + 0xfU & 0xfffffffffffffff0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x38;
      } while (lVar8 < (int)param_2[1]);
    }
  }
  *param_1 = 1;
  return;
}


