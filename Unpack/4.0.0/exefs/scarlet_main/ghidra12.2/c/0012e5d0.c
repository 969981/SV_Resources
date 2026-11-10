/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012e5d0; name: FUN_0012e5d0
 */


void FUN_0012e5d0(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  if (param_3 < 0xc9) {
    iVar2 = *(int *)((long)param_1 + 0xc);
    if (200 - iVar2 < (int)param_3) {
      lVar3 = *param_1;
      plVar4 = *(long **)(lVar3 + 0x10);
      lVar1 = FUN_0013be00(lVar3,param_1 + 2,(long)iVar2);
      *plVar4 = lVar1;
      *(byte *)(plVar4 + 1) = *(byte *)(lVar1 + 8) | 0x40;
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 0x10;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      FUN_00140b30(lVar3);
      iVar2 = 0;
      param_1[1] = 1;
    }
    memcpy((void *)((long)param_1 + (long)iVar2 + 0x10),param_2,param_3);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + (int)param_3;
  }
  else {
    lVar3 = *param_1;
    plVar4 = *(long **)(lVar3 + 0x10);
    lVar1 = FUN_0013be00(lVar3,param_1 + 2,(long)*(int *)((long)param_1 + 0xc));
    *plVar4 = lVar1;
    *(byte *)(plVar4 + 1) = *(byte *)(lVar1 + 8) | 0x40;
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 0x10;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    FUN_00140b30(lVar3);
    lVar3 = *param_1;
    param_1[1] = 1;
    plVar4 = *(long **)(lVar3 + 0x10);
    lVar1 = FUN_0013be00(lVar3,param_2,param_3);
    *plVar4 = lVar1;
    *(byte *)(plVar4 + 1) = *(byte *)(lVar1 + 8) | 0x40;
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 0x10;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    FUN_00140b30(lVar3);
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return;
}


