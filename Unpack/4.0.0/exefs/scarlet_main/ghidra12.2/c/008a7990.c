/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a7990; name: FUN_008a7990
 */


void FUN_008a7990(long param_1,int param_2,void *param_3,int param_4,uint param_5)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0xa8);
  if (lVar9 == 0) {
    puVar5 = (undefined4 *)FUN_00896e78(param_4 + 0x20);
    *puVar5 = 0x31647375;
    puVar5[1] = param_4 + 0x20;
    *(undefined2 *)(puVar5 + 2) = 1;
    *(undefined8 *)(puVar5 + 3) = 0xc00000000;
    puVar5[5] = 0x30001;
    *(undefined8 *)(puVar5 + 6) = 0x800010000;
    *(undefined4 **)(param_1 + 0xa8) = puVar5;
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
    memcpy(puVar5 + 8,param_3,(long)param_4);
  }
  else {
    if ((*(byte *)(param_1 + 0x5c) & 0x44) == 0) {
      lVar9 = 0;
    }
    else if ((((*(byte *)(param_1 + 0x5c) >> 6 & 1) != 0) && (*(int *)(param_1 + 0x60) != 0)) &&
            (piVar2 = (int *)(lVar9 + 0xc +
                             (ulong)(*(int *)((ulong)*(uint *)(lVar9 + 0x10) + lVar9 + 0xc + 4) +
                                    *(uint *)(lVar9 + 0x10))), *piVar2 == 0x15)) {
      iVar3 = param_2 + -9;
      if (param_2 < 0x10) {
        iVar3 = param_2;
      }
      if (-1 < *(char *)((long)piVar2 + (long)iVar3 + 4)) {
        return;
      }
    }
    if (*(int *)(param_1 + 0x60) == 0) {
      FUN_008a7b70(param_1,param_3,param_4);
    }
    else {
      FUN_008a7ccc(param_1,param_3,param_4,param_5 & 1);
    }
    if (lVar9 != 0) {
      FUN_00896e98(lVar9);
    }
  }
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
  lVar9 = *(long *)(param_1 + 0xa8);
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x16) == '\x03')) {
    uVar8 = (ulong)*(uint *)(lVar9 + 0x10);
    lVar1 = lVar9 + 0xc;
    uVar7 = (ulong)*(ushort *)(lVar1 + uVar8 + 2);
    if (uVar7 != 0) {
      piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + uVar8 + 4) + *(uint *)(lVar9 + 0x10)));
      lVar6 = 0;
      while( true ) {
        uVar8 = (ulong)(uint)(*(int *)(lVar9 + 0x10 + uVar8 + lVar6 * 4) + (int)uVar8);
        *(uint *)(param_1 + 0x60) =
             *(uint *)(param_1 + 0x60) | 1 << (ulong)(*(uint *)(lVar1 + uVar8) & 0x1f);
        if (*piVar2 == 0x15) {
          iVar4 = *(int *)(lVar1 + uVar8);
          iVar3 = iVar4 + -9;
          if (iVar4 < 0x10) {
            iVar3 = iVar4;
          }
          *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)lVar6;
        }
        if (uVar7 - 1 == lVar6) break;
        uVar8 = (ulong)*(uint *)(lVar9 + 0x10);
        lVar6 = lVar6 + 1;
      }
    }
  }
  return;
}


