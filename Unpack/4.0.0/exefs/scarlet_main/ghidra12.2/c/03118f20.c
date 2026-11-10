/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03118f20; name: FUN_03118f20
 */


void FUN_03118f20(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_68;
  
  lVar14 = tpidr_el0;
  lVar6 = *(long *)(lVar14 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar14 + 0x1000b8) = lVar6;
  }
  plVar17 = *(long **)(lVar6 + 0x3e0);
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))
                ("hkaiNavMeshClearanceCacheFillingTasks::makeContext",0x32,
                 *(undefined8 *)(lVar14 + 0x28));
    }
    puVar5 = (undefined8 *)plVar17[2];
    uVar7 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar17[3]) && (plVar17[2] = uVar7, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TthkaiNavMeshClearanceCacheFillingTasks::makeContext";
      uVar4 = nn::os::GetSystemTick();
      puVar5[1] = uVar4;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
      puVar5 = (undefined8 *)plVar17[2];
      uVar7 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar17[3]) && (plVar17[2] = uVar7, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar17[6] + 8);
      }
    }
  }
  puVar3 = PTR_DAT_047d1a08;
  local_68 = 0x90;
  puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(puVar5,"Context");
  }
  memset(puVar5,0,0x90);
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  *puVar5 = &PTR_LAB_0464f060;
  plVar16 = puVar5 + 6;
  *plVar16 = 0;
  puVar5[7] = 0x8000000000000000;
  plVar15 = puVar5 + 8;
  *plVar15 = (long)&DAT_03d7702c;
  *(undefined4 *)(puVar5 + 9) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0x8000000000000000;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0x8000000000000000;
  puVar5[0xf] = 0;
  *param_1 = (long)puVar5;
  puVar5[0x10] = param_2;
  *(undefined4 *)(puVar5 + 3) = param_6;
  uVar4 = *(undefined8 *)(param_2 + 0x120);
  puVar5[5] = *(undefined8 *)(param_2 + 0x128);
  puVar5[4] = uVar4;
  if ((long *)(param_4 + 0x28) != plVar16) {
    uVar2 = *(uint *)(param_4 + 0x30);
    lVar14 = *(long *)(param_4 + 0x28);
    if ((int)uVar2 < 1) {
      lVar6 = 0;
      uVar11 = 0;
    }
    else {
      FUN_03109800(plVar16,PTR_PTR_047d1a50,uVar2);
      uVar11 = *(uint *)(puVar5 + 7);
      lVar6 = puVar5[6];
    }
    uVar1 = uVar11;
    if ((int)uVar2 <= (int)uVar11) {
      uVar1 = uVar2;
    }
    if ((lVar6 != lVar14) && (0 < (int)uVar1)) {
      if (uVar1 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        puVar13 = (undefined8 *)(lVar14 + 0x10);
        puVar9 = (undefined8 *)(lVar6 + 0x10);
        do {
          uVar4 = puVar13[-1];
          uVar7 = uVar7 + 2;
          puVar9[-2] = puVar13[-2];
          puVar9[-1] = uVar4;
          uVar4 = puVar13[1];
          *puVar9 = *puVar13;
          puVar9[1] = uVar4;
          puVar13 = puVar13 + 4;
          puVar9 = puVar9 + 4;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
      }
      if ((uVar1 & 1) != 0) {
        puVar13 = (undefined8 *)(lVar14 + uVar7 * 0x10);
        puVar9 = (undefined8 *)(lVar6 + uVar7 * 0x10);
        uVar4 = puVar13[1];
        *puVar9 = *puVar13;
        puVar9[1] = uVar4;
      }
      lVar6 = *plVar16;
    }
    if ((int)uVar11 < (int)uVar2) {
      puVar13 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 0x10);
      puVar9 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 0x10);
      if (uVar2 != uVar1 + 1) {
        iVar10 = -(uVar2 - uVar1 & 0xfffffffe);
        puVar8 = puVar9;
        puVar12 = puVar13;
        do {
          uVar4 = puVar12[1];
          puVar13 = puVar12 + 4;
          *puVar8 = *puVar12;
          puVar8[1] = uVar4;
          puVar9 = puVar8 + 4;
          uVar4 = puVar12[3];
          iVar10 = iVar10 + 2;
          puVar8[2] = puVar12[2];
          puVar8[3] = uVar4;
          puVar8 = puVar9;
          puVar12 = puVar13;
        } while (iVar10 != 0);
      }
      if ((uVar2 - uVar1 & 1) != 0) {
        uVar4 = puVar13[1];
        *puVar9 = *puVar13;
        puVar9[1] = uVar4;
      }
    }
    *(uint *)(puVar5 + 7) = uVar2;
  }
  if ((long *)(param_4 + 0x38) != plVar15) {
    lVar14 = *plVar15;
    if ((lVar14 != 0) && (*(int *)(lVar14 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar14,0);
      puVar5[8] = &DAT_03d7702c;
      *(undefined4 *)(puVar5 + 9) = 0;
    }
    if (*(int *)(*(long *)(param_4 + 0x38) + 4) == -2) {
      puVar5[8] = &DAT_03d7702c;
      *(undefined4 *)(puVar5 + 9) = 0;
    }
    else {
      *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(param_4 + 0x40);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)*(int *)(param_4 + 0x40) * 8 + 8);
      puVar5[8] = __dest;
      memcpy(__dest,*(void **)(param_4 + 0x38),(long)*(int *)(param_4 + 0x40) * 8 + 8);
    }
  }
  lVar14 = *param_1;
  *(undefined8 *)(lVar14 + 0x50) = param_3;
  FUN_03066320(*(undefined8 *)(param_2 + 0x140),lVar14 + 0x58);
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
      puVar5 = (undefined8 *)plVar17[2];
      uVar7 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar17[3]) && (plVar17[2] = uVar7, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar17[6] + 8);
      }
    }
    puVar5 = (undefined8 *)plVar17[2];
    uVar7 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar17[3]) && (plVar17[2] = uVar7, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c2d363;
      uVar4 = nn::os::GetSystemTick();
      puVar5[1] = uVar4;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
    }
  }
  return;
}


