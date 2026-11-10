/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fab98; name: FUN_004fab98
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004fab98(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  long local_78;
  undefined8 local_70;
  uint *puStack_68;
  
  local_78 = *param_2;
  local_70 = 0;
  puStack_68 = (uint *)0x0;
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    puVar13 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)FUN_0053234c(&local_78,uVar2);
    iVar17 = (int)local_70;
    iVar16 = *puStack_68;
    uVar3 = iVar16 - (int)local_70;
    uVar15 = (ulong)uVar3;
    if ((0 < (int)uVar2) && (0 < (int)uVar3)) {
      uVar1 = (ulong)uVar2;
      if (uVar15 - 1 <= (ulong)uVar2 - 1) {
        uVar1 = uVar15;
      }
      lVar12 = -uVar1;
      puVar8 = puVar6;
      puVar18 = puVar13;
      do {
        puVar18 = puVar18 + 1;
        FUN_004fae68(*puVar18,*puVar8);
        bVar5 = lVar12 != -1;
        lVar12 = lVar12 + 1;
        puVar8 = puVar8 + 1;
      } while (bVar5);
    }
    lVar12 = local_78;
    if ((int)uVar3 < (int)uVar2) {
      iVar16 = (iVar17 + uVar2) - iVar16;
      uVar15 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
      puVar13 = (undefined8 *)(uVar15 + (long)puVar13);
      puVar6 = (undefined8 *)((long)puVar6 + uVar15);
      do {
        puVar13 = puVar13 + 1;
        uVar10 = *puVar13;
        uVar7 = FUN_00502610(uVar10,lVar12);
        FUN_004fae68(uVar10,uVar7);
        iVar16 = iVar16 + -1;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      } while (iVar16 != 0);
    }
    iVar16 = (int)local_70 + uVar2;
    local_70 = CONCAT44(local_70._4_4_,iVar16);
    if ((int)*puStack_68 < iVar16) {
      *puStack_68 = iVar16;
    }
    uVar15 = (ulong)*(uint *)(param_1 + 1);
    if (0 < (int)*(uint *)(param_1 + 1)) {
      puVar13 = (undefined8 *)param_1[2];
      do {
        puVar13 = puVar13 + 1;
        (**(code **)(*(long *)*puVar13 + 0x28))();
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  puVar14 = (uint *)(param_2 + 1);
  uVar2 = *puVar14;
  if (uVar2 != 0) {
    puVar13 = (undefined8 *)param_2[2];
    puVar6 = (undefined8 *)FUN_0053234c(param_1,uVar2);
    iVar16 = *(int *)(param_1 + 1);
    iVar17 = *(int *)param_1[2];
    uVar3 = iVar17 - iVar16;
    uVar15 = (ulong)uVar3;
    if ((0 < (int)uVar2) && (0 < (int)uVar3)) {
      uVar1 = (ulong)uVar2;
      if (uVar15 - 1 <= (ulong)uVar2 - 1) {
        uVar1 = uVar15;
      }
      lVar12 = -uVar1;
      puVar8 = puVar6;
      puVar18 = puVar13;
      do {
        puVar18 = puVar18 + 1;
        FUN_004fae68(*puVar18,*puVar8);
        bVar5 = lVar12 != -1;
        lVar12 = lVar12 + 1;
        puVar8 = puVar8 + 1;
      } while (bVar5);
    }
    if ((int)uVar3 < (int)uVar2) {
      uVar7 = *param_1;
      iVar17 = (iVar16 + uVar2) - iVar17;
      uVar15 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
      puVar13 = (undefined8 *)(uVar15 + (long)puVar13);
      puVar6 = (undefined8 *)((long)puVar6 + uVar15);
      do {
        puVar13 = puVar13 + 1;
        uVar9 = *puVar13;
        uVar10 = FUN_00502610(uVar9,uVar7);
        FUN_004fae68(uVar9,uVar10);
        iVar17 = iVar17 + -1;
        *puVar6 = uVar10;
        puVar6 = puVar6 + 1;
      } while (iVar17 != 0);
    }
    iVar16 = *(int *)(param_1 + 1) + uVar2;
    *(int *)(param_1 + 1) = iVar16;
    if (*(int *)param_1[2] < iVar16) {
      *(int *)param_1[2] = iVar16;
    }
  }
  uVar7 = *(undefined8 *)puVar14;
  puVar11 = (uint *)param_2[2];
  param_2[2] = (long)puStack_68;
  *(undefined8 *)puVar14 = local_70;
  puVar4 = PTR_LAB_047cba48;
  if (puVar11 != (uint *)0x0 && local_78 == 0) {
    uVar15 = (ulong)*puVar11;
    local_70 = uVar7;
    puStack_68 = puVar11;
    if (0 < (int)*puVar11) {
      do {
        puVar11 = puVar11 + 2;
        puVar13 = *(undefined8 **)puVar11;
        if (puVar13 != (undefined8 *)0x0) {
          (**(code **)*puVar13)(puVar13);
          FUN_0049e790(puVar4,puVar13);
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    FUN_0049e700(puStack_68);
  }
  return;
}


