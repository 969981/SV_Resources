/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03232938; name: FUN_03232938
 */


void FUN_03232938(undefined8 *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  iVar2 = param_2 + 1;
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) <= param_2) {
    FUN_03233534(param_1 + 8,(long)iVar2);
  }
  if ((*(int *)(param_1 + 9) <= param_2) || (iVar2 < *(int *)(param_1 + 9))) {
    *(int *)(param_1 + 9) = iVar2;
  }
  if ((int)(*(uint *)((long)param_1 + 0x49c) & 0x7fffffff) <= param_2) {
    FUN_032336b8(param_1 + 0x92,(long)iVar2);
  }
  if ((*(int *)(param_1 + 0x93) <= param_2) || (iVar2 < *(int *)(param_1 + 0x93))) {
    *(int *)(param_1 + 0x93) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 9);
  uVar4 = iVar2 - 1;
  uVar12 = param_3;
  if (uVar4 != 1) {
    uVar12 = param_4;
  }
  if ((int)uVar12 < 0) {
    *param_1 = 0x100000000;
    param_1[1] = 0x100000001;
    puVar7 = (ulong *)param_1[0x92];
    if (1 < iVar2) {
      lVar10 = (ulong)uVar4 + 1;
      lVar11 = (ulong)uVar4 << 6;
      do {
        *(undefined8 *)((long)puVar7 + lVar11) = 0;
        *(undefined4 *)(param_1[8] + lVar11) = 0;
        puVar7 = (ulong *)param_1[0x92];
        lVar10 = lVar10 + -1;
        lVar11 = lVar11 + -0x40;
      } while (1 < lVar10);
    }
    uVar9 = 0;
    uVar8 = (ulong)param_3 << 0x20;
  }
  else {
    iVar6 = 0;
    if (uVar4 != 0) {
      iVar6 = (int)param_3 / (int)uVar4;
    }
    *param_1 = 1;
    iVar3 = iVar6;
    if (iVar6 < 2) {
      iVar3 = 1;
    }
    *(uint *)(param_1 + 1) = uVar12;
    *(int *)((long)param_1 + 0xc) = iVar3;
    if (iVar2 < 2) {
      uVar8 = 0;
    }
    else {
      lVar10 = (ulong)uVar4 << 6;
      uVar8 = (ulong)uVar4;
      uVar12 = 0;
      do {
        uVar5 = uVar8 - 1;
        iVar2 = param_3 - uVar12;
        if (uVar5 != 0) {
          iVar2 = iVar6;
        }
        uVar4 = iVar2 + uVar12;
        *(ulong *)(param_1[0x92] + lVar10) = CONCAT44(uVar4,uVar12);
        *(int *)(param_1[8] + lVar10) = (int)uVar8;
        lVar10 = lVar10 + -0x40;
        bVar1 = 0 < (long)uVar8;
        uVar8 = uVar5;
        iVar6 = iVar2;
        uVar12 = uVar4;
      } while (uVar5 != 0 && bVar1);
      uVar8 = (ulong)uVar4;
    }
    puVar7 = (ulong *)param_1[0x92];
    uVar8 = uVar8 | (ulong)param_3 << 0x20;
    uVar9 = 1;
  }
  *puVar7 = uVar8;
  *(undefined4 *)param_1[8] = uVar9;
  return;
}


