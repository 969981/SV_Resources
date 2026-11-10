/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf5330; name: FUN_00bf5330
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00bf5330(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  uint local_70;
  
  lVar18 = *param_2;
  uVar1 = *(uint *)(param_1 + 1);
  uVar17 = (ulong)uVar1;
  if (uVar1 == 0) {
    local_70 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    if ((int)uVar1 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar10 = (undefined8 *)param_1[2];
    local_70 = uVar1;
    if ((int)uVar1 < 5) {
      local_70 = 4;
    }
    if (lVar18 == 0) {
      puVar6 = operator_new__((ulong)local_70 * 8 + 8);
      lVar15 = 0;
    }
    else {
      puVar6 = (uint *)FUN_00c0e238(lVar18,0);
      lVar15 = lVar18;
    }
    *puVar6 = 0;
    puVar11 = puVar6;
    do {
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 2;
      uVar12 = *puVar10;
      uVar7 = FUN_00bf7364(uVar12,lVar15);
      FUN_00bf55f0(uVar12,uVar7);
      uVar17 = uVar17 - 1;
      *(undefined8 *)puVar11 = uVar7;
    } while (uVar17 != 0);
    if ((int)*puVar6 < (int)uVar1) {
      *puVar6 = uVar1;
    }
    uVar17 = (ulong)*(uint *)(param_1 + 1);
    if (0 < (int)*(uint *)(param_1 + 1)) {
      puVar10 = (undefined8 *)param_1[2];
      do {
        puVar10 = puVar10 + 1;
        (**(code **)(*(long *)*puVar10 + 0x38))();
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0) {
    puVar10 = (undefined8 *)param_2[2];
    puVar8 = (undefined8 *)FUN_00c11f04(param_1,uVar2);
    iVar9 = *(int *)param_1[2];
    iVar3 = *(int *)(param_1 + 1);
    uVar4 = iVar9 - iVar3;
    if ((0 < (int)uVar2) && (0 < (int)uVar4)) {
      uVar17 = (ulong)uVar2;
      if ((ulong)uVar4 - 1 <= (ulong)uVar2 - 1) {
        uVar17 = (ulong)uVar4;
      }
      lVar15 = -uVar17;
      puVar13 = puVar8;
      puVar16 = puVar10;
      do {
        puVar16 = puVar16 + 1;
        FUN_00bf55f0(*puVar16,*puVar13);
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        puVar13 = puVar13 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar2) {
      iVar9 = (iVar3 + uVar2) - iVar9;
      uVar7 = *param_1;
      puVar10 = puVar10 + (int)uVar4;
      puVar8 = puVar8 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar14 = *puVar10;
        uVar12 = FUN_00bf7364(uVar14,uVar7);
        FUN_00bf55f0(uVar14,uVar12);
        iVar9 = iVar9 + -1;
        *puVar8 = uVar12;
        puVar8 = puVar8 + 1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(param_1 + 1) + uVar2;
    *(int *)(param_1 + 1) = iVar9;
    if (*(int *)param_1[2] < iVar9) {
      *(int *)param_1[2] = iVar9;
    }
    uVar17 = (ulong)*(uint *)(param_2 + 1);
    if (0 < (int)*(uint *)(param_2 + 1)) {
      puVar10 = (undefined8 *)param_2[2];
      do {
        puVar10 = puVar10 + 1;
        (**(code **)(*(long *)*puVar10 + 0x38))();
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  puVar11 = (uint *)param_2[2];
  param_2[2] = (long)puVar6;
  *(uint *)(param_2 + 1) = uVar1;
  *(uint *)((long)param_2 + 0xc) = local_70;
  if ((lVar18 != 0) || (puVar11 == (uint *)0x0)) {
    return;
  }
  uVar17 = (ulong)*puVar11;
  if (0 < (int)*puVar11) {
    puVar6 = puVar11;
    do {
      puVar6 = puVar6 + 2;
      if (*(long **)puVar6 != (long *)0x0) {
        (**(code **)(**(long **)puVar6 + 8))();
      }
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  operator_delete__(puVar11);
  return;
}


