/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f2a90; name: FUN_003f2a90
 */


void FUN_003f2a90(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  void *__s;
  
  uVar3 = param_3;
  if ((int)param_3 < 0) {
    uVar3 = param_3 + 1;
  }
  if (param_3 == 8) {
    FUN_003eef80(param_1,param_2);
    return;
  }
  if (param_3 == 4) {
    FUN_003ef4e0(param_1,param_2);
    return;
  }
  if ((int)param_3 < 0x10) {
    FUN_003f29a0(param_1,param_2,param_3,param_4);
    return;
  }
  iVar2 = (int)uVar3 >> 1;
  lVar1 = param_2 + (long)iVar2 * 4;
  iVar5 = FUN_003ec250(param_2,lVar1,iVar2);
  if (iVar5 < 1) {
    if (-1 < iVar5) {
      __s = (void *)(param_4 + (ulong)param_3 * 4);
      lVar10 = param_4 + (long)(int)param_3 * 8;
      memset(__s,0,(ulong)param_3 * 4);
      goto LAB_003f2bc8;
    }
    lVar10 = lVar1;
    lVar8 = param_2;
  }
  else {
    lVar10 = param_2;
    lVar8 = lVar1;
  }
  FUN_003ee6a0(param_4,lVar10,lVar8,iVar2);
  lVar10 = param_4 + (long)(int)param_3 * 8;
  __s = (void *)(param_4 + (ulong)param_3 * 4);
  FUN_003f2a90(__s,param_4,iVar2,lVar10);
LAB_003f2bc8:
  FUN_003f2a90(param_1,param_2,iVar2,lVar10);
  lVar8 = param_1 + (ulong)param_3 * 4;
  FUN_003f2a90(lVar8,lVar1,iVar2,lVar10);
  iVar5 = FUN_003ee580(param_4,param_1,lVar8,param_3);
  iVar6 = FUN_003ee6a0(__s,param_4,__s,param_3);
  lVar1 = param_1 + (long)iVar2 * 4;
  iVar7 = FUN_003ee580(lVar1,lVar1,__s,param_3);
  uVar3 = (iVar5 - iVar6) + iVar7;
  if (uVar3 != 0) {
    lVar1 = (long)iVar2 + (long)(int)param_3;
    lVar10 = lVar1 * 4;
    uVar4 = *(uint *)(param_1 + lVar10);
    *(uint *)(param_1 + lVar10) = uVar4 + uVar3;
    if (CARRY4(uVar4,uVar3)) {
      puVar9 = (uint *)(param_1 + lVar1 * 4);
      do {
        puVar9 = puVar9 + 1;
        uVar3 = *puVar9;
        *puVar9 = uVar3 + 1;
      } while (0xfffffffe < uVar3);
    }
  }
  return;
}


