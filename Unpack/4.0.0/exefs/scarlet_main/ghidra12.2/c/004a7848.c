/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a7848; name: FUN_004a7848
 */


void FUN_004a7848(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  
  uVar6 = *param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  puVar7 = *(undefined **)(param_2 + 0x60);
  if (puVar7 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0x60),puVar5);
    iVar10 = *(int *)((long)param_1 + 0x2c);
  }
  else {
    FUN_001fcec0(puVar7,uVar6);
    iVar10 = *(int *)((long)param_1 + 0x2c);
  }
  if (0 < iVar10) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      lVar4 = param_1[6];
      piVar9 = *(int **)(param_2 + 0x28);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x24);
LAB_004a7930:
        FUN_00532334(param_2 + 0x18,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x28);
        iVar10 = *piVar9;
LAB_004a7944:
        *piVar9 = iVar10 + 1;
        uVar6 = FUN_004e6918(*(undefined8 *)(param_2 + 0x18));
        iVar10 = *(int *)(param_2 + 0x20);
        *(int *)(param_2 + 0x20) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)iVar10 * 8 + 8) = uVar6;
      }
      else {
        iVar3 = *(int *)(param_2 + 0x20);
        iVar10 = *piVar9;
        if (iVar10 <= iVar3) {
          if (iVar10 == *(int *)(param_2 + 0x24)) goto LAB_004a7930;
          goto LAB_004a7944;
        }
        *(int *)(param_2 + 0x20) = iVar3 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar3 * 2 + 2);
      }
      FUN_004a873c(lVar4 + lVar11,uVar6);
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x28;
    } while (lVar12 < *(int *)((long)param_1 + 0x2c));
  }
  if (0 < *(int *)(param_1 + 7)) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      piVar9 = *(int **)(param_2 + 0x40);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x3c);
LAB_004a7a0c:
        FUN_00532334(param_2 + 0x30,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x40);
        iVar10 = *piVar9;
LAB_004a7a20:
        *piVar9 = iVar10 + 1;
        lVar4 = FUN_004e6820(*(undefined8 *)(param_2 + 0x30));
        iVar10 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar10 + 1;
        *(long *)(*(long *)(param_2 + 0x40) + (long)iVar10 * 8 + 8) = lVar4;
      }
      else {
        iVar3 = *(int *)(param_2 + 0x38);
        iVar10 = *piVar9;
        if (iVar10 <= iVar3) {
          if (iVar10 == *(int *)(param_2 + 0x3c)) goto LAB_004a7a0c;
          goto LAB_004a7a20;
        }
        *(int *)(param_2 + 0x38) = iVar3 + 1;
        lVar4 = *(long *)(piVar9 + (long)iVar3 * 2 + 2);
      }
      lVar8 = param_1[8];
      uVar1 = *(uint *)(lVar4 + 0x10);
      uVar2 = *(undefined4 *)(lVar8 + lVar11);
      *(uint *)(lVar4 + 0x10) = uVar1 | 1;
      *(undefined4 *)(lVar4 + 0x18) = uVar2;
      uVar2 = ((undefined4 *)(lVar8 + lVar11))[1];
      *(uint *)(lVar4 + 0x10) = uVar1 | 3;
      *(undefined4 *)(lVar4 + 0x1c) = uVar2;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 8;
    } while (lVar12 < *(int *)(param_1 + 7));
  }
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar12 = 0;
    do {
      FUN_004a881c(param_2,*(undefined8 *)(param_1[9] + lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)((long)param_1 + 0x3c));
  }
  lVar11 = param_1[4];
  lVar12 = FUN_004df294();
  if (lVar11 == lVar12) {
    return;
  }
  lVar12 = *(long *)(param_2 + 0x68);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (lVar12 == 0) {
    puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar12 = FUN_004e7010(puVar5);
    *(long *)(param_2 + 0x68) = lVar12;
  }
  FUN_004dfa8c(lVar12,param_1[4]);
  return;
}


