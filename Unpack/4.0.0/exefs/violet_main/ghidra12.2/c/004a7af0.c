/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a7af0; name: FUN_004a7af0
 */


void FUN_004a7af0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  
  uVar4 = *param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar3 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  puVar5 = *(undefined **)(param_2 + 0x30);
  if (puVar5 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0x30),puVar3);
    iVar8 = *(int *)(param_1 + 5);
  }
  else {
    FUN_001fcec0(puVar5,uVar4);
    iVar8 = *(int *)(param_1 + 5);
  }
  if (0 < iVar8) {
    lVar9 = 0;
    lVar2 = 0;
    do {
      lVar6 = param_1[4];
      piVar7 = *(int **)(param_2 + 0x28);
      if (piVar7 == (int *)0x0) {
        iVar8 = *(int *)(param_2 + 0x24);
LAB_004a7bd8:
        FUN_00532334(param_2 + 0x18,iVar8 + 1);
        piVar7 = *(int **)(param_2 + 0x28);
        iVar8 = *piVar7;
LAB_004a7bec:
        *piVar7 = iVar8 + 1;
        uVar4 = FUN_004e6af8(*(undefined8 *)(param_2 + 0x18));
        iVar8 = *(int *)(param_2 + 0x20);
        *(int *)(param_2 + 0x20) = iVar8 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)iVar8 * 8 + 8) = uVar4;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x20);
        iVar8 = *piVar7;
        if (iVar8 <= iVar1) {
          if (iVar8 == *(int *)(param_2 + 0x24)) goto LAB_004a7bd8;
          goto LAB_004a7bec;
        }
        *(int *)(param_2 + 0x20) = iVar1 + 1;
        uVar4 = *(undefined8 *)(piVar7 + (long)iVar1 * 2 + 2);
      }
      FUN_004a8918(lVar6 + lVar9,uVar4);
      lVar2 = lVar2 + 1;
      lVar9 = lVar9 + 0x68;
    } while (lVar2 < *(int *)(param_1 + 5));
  }
  lVar9 = param_1[3];
  lVar2 = FUN_004e05c8();
  if (lVar9 == lVar2) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (lVar2 == 0) {
    puVar3 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    lVar2 = FUN_004e7290(puVar3);
    *(long *)(param_2 + 0x38) = lVar2;
  }
  FUN_004e0cf4(lVar2,param_1[3]);
  return;
}


