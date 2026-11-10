/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0311f640; name: FUN_0311f640
 */


void FUN_0311f640(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uStack_58;
  
  lVar15 = tpidr_el0;
  lVar6 = *(long *)(lVar15 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar6;
  }
  plVar18 = *(long **)(lVar6 + 0x3e0);
  if (plVar18 != (long *)0x0) {
    lVar15 = *plVar18;
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))
                ("hkaiNavigatorUpdateTasks::makeContext",0x25,*(undefined8 *)(lVar15 + 0x28));
    }
    puVar5 = (undefined8 *)plVar18[2];
    uVar7 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar18[3]) && (plVar18[2] = uVar7, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TthkaiNavigatorUpdateTasks::makeContext";
      uVar4 = nn::os::GetSystemTick();
      puVar5[1] = uVar4;
    }
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar5 = (undefined8 *)plVar18[2];
      uVar7 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar18[3]) && (plVar18[2] = uVar7, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
  }
  puVar3 = PTR_DAT_047d1a08;
  uStack_58 = 0x98;
  puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&uStack_58,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(puVar5,"Context");
  }
  memset(puVar5 + 10,0,0x48);
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  *puVar5 = &PTR_LAB_0464f578;
  plVar16 = puVar5 + 4;
  *plVar16 = 0;
  puVar5[5] = 0x8000000000000000;
  puVar5[6] = 0;
  puVar5[0x11] = 0;
  puVar5[7] = 0x8000000000000000;
  puVar5[8] = puVar5 + 10;
  puVar5[9] = 0x8000000100000000;
  puVar5[0xe] = 0x8000000100000000;
  puVar5[0xc] = 0;
  puVar5[0xd] = puVar5 + 0xf;
  *param_1 = puVar5;
  puVar5[3] = param_2;
  uVar1 = *(uint *)(*(long *)(param_2 + 0x438) + 0x28);
  lVar15 = *(long *)(*(long *)(param_2 + 0x438) + 0x20);
  if ((int)uVar1 < 1) {
    lVar6 = 0;
    uVar8 = 0;
  }
  else {
    FUN_03120854(plVar16,PTR_PTR_047d1a50,uVar1);
    uVar8 = *(uint *)(puVar5 + 5);
    lVar6 = puVar5[4];
  }
  uVar2 = uVar8;
  if ((int)uVar1 <= (int)uVar8) {
    uVar2 = uVar1;
  }
  if ((lVar6 != lVar15) && (0 < (int)uVar2)) {
    uVar14 = (ulong)uVar2;
    uVar7 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      puVar17 = (undefined8 *)(lVar6 + 0x10);
      puVar13 = (undefined8 *)(lVar15 + 0x10);
      do {
        puVar17[-2] = puVar13[-2];
        puVar17[-1] = puVar13[-1];
        *puVar17 = *puVar13;
        puVar9 = puVar13 + 1;
        uVar12 = uVar12 + 4;
        puVar13 = puVar13 + 4;
        puVar17[1] = *puVar9;
        puVar17 = puVar17 + 4;
      } while ((uVar14 & 0xfffffffc) != uVar12);
    }
    if ((uVar2 & 3) != 0) {
      puVar17 = (undefined8 *)(lVar6 + uVar12 * 8);
      puVar13 = (undefined8 *)(lVar15 + uVar12 * 8);
      do {
        uVar7 = uVar7 - 1;
        *puVar17 = *puVar13;
        puVar17 = puVar17 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar7 != 0);
    }
    lVar6 = *plVar16;
  }
  puVar17 = puVar5;
  if ((int)uVar8 < (int)uVar1) {
    puVar17 = (undefined8 *)(lVar15 + (long)(int)uVar2 * 8);
    puVar13 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8);
    uVar8 = uVar1 - uVar2 & 3;
    if (2 < uVar1 + ~uVar2) {
      iVar11 = -(uVar1 - uVar2 & 0xfffffffc);
      puVar9 = puVar17;
      puVar10 = puVar13;
      do {
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        puVar10[2] = puVar9[2];
        puVar17 = puVar9 + 4;
        puVar13 = puVar10 + 4;
        iVar11 = iVar11 + 4;
        puVar10[3] = puVar9[3];
        puVar9 = puVar17;
        puVar10 = puVar13;
      } while (iVar11 != 0);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar17 = (undefined8 *)*param_1;
  }
  *(uint *)(puVar5 + 5) = uVar1;
  lVar15 = *(long *)(*(long *)(param_2 + 0x478) + 0x20);
  uVar1 = *(uint *)(*(long *)(param_2 + 0x478) + 0x28);
  if ((int)(*(uint *)((long)puVar17 + 0x3c) & 0x7fffffff) < (int)uVar1) {
    FUN_03120964(puVar17 + 6,PTR_PTR_047d1a50,(long)(int)uVar1);
  }
  uVar2 = *(uint *)(puVar17 + 7);
  lVar6 = puVar17[6];
  uVar8 = uVar2;
  if ((int)uVar1 <= (int)uVar2) {
    uVar8 = uVar1;
  }
  if (lVar6 != lVar15 && 0 < (int)uVar8) {
    uVar14 = (ulong)uVar8;
    uVar7 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      puVar5 = (undefined8 *)(lVar6 + 0x10);
      puVar13 = (undefined8 *)(lVar15 + 0x10);
      do {
        puVar5[-2] = puVar13[-2];
        puVar5[-1] = puVar13[-1];
        *puVar5 = *puVar13;
        puVar9 = puVar13 + 1;
        uVar12 = uVar12 + 4;
        puVar13 = puVar13 + 4;
        puVar5[1] = *puVar9;
        puVar5 = puVar5 + 4;
      } while ((uVar14 & 0xfffffffc) != uVar12);
    }
    if ((uVar8 & 3) != 0) {
      puVar5 = (undefined8 *)(lVar6 + uVar12 * 8);
      puVar13 = (undefined8 *)(lVar15 + uVar12 * 8);
      do {
        uVar7 = uVar7 - 1;
        *puVar5 = *puVar13;
        puVar5 = puVar5 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar7 != 0);
    }
    lVar6 = puVar17[6];
  }
  puVar5 = puVar17;
  if ((int)uVar2 < (int)uVar1) {
    puVar5 = (undefined8 *)(lVar15 + (long)(int)uVar8 * 8);
    puVar13 = (undefined8 *)(lVar6 + (long)(int)uVar8 * 8);
    uVar2 = uVar1 - uVar8 & 3;
    if (2 < uVar1 + ~uVar8) {
      iVar11 = -(uVar1 - uVar8 & 0xfffffffc);
      puVar9 = puVar5;
      puVar10 = puVar13;
      do {
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        puVar10[2] = puVar9[2];
        puVar5 = puVar9 + 4;
        puVar13 = puVar10 + 4;
        iVar11 = iVar11 + 4;
        puVar10[3] = puVar9[3];
        puVar9 = puVar5;
        puVar10 = puVar13;
      } while (iVar11 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar13 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar5 = (undefined8 *)*param_1;
  }
  *(uint *)(puVar17 + 7) = uVar1;
  *(undefined4 *)(puVar5 + 0x12) = param_5;
  iVar11 = *(int *)(puVar5 + 5);
  if ((int)(*(uint *)((long)puVar5 + 0x4c) & 0x7fffffff) < iVar11) {
    FUN_030b0564(puVar5 + 8,PTR_PTR_047d1a50,(long)iVar11);
  }
  if (*(int *)(puVar5 + 9) != iVar11) {
    *(int *)(puVar5 + 9) = iVar11;
  }
  iVar11 = *(int *)(puVar5 + 7);
  if ((int)(*(uint *)((long)puVar5 + 0x74) & 0x7fffffff) < iVar11) {
    FUN_03103324(puVar5 + 0xd,PTR_PTR_047d1a50,(long)iVar11);
  }
  if (*(int *)(puVar5 + 0xe) != iVar11) {
    *(int *)(puVar5 + 0xe) = iVar11;
  }
  if (plVar18 != (long *)0x0) {
    lVar15 = *plVar18;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar5 = (undefined8 *)plVar18[2];
      uVar7 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar18[3]) && (plVar18[2] = uVar7, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
    puVar5 = (undefined8 *)plVar18[2];
    uVar7 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar18[3]) && (plVar18[2] = uVar7, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c2d363;
      uVar4 = nn::os::GetSystemTick();
      puVar5[1] = uVar4;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
    }
  }
  return;
}


