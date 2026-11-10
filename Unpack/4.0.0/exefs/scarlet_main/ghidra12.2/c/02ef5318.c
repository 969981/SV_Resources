/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ef5318; name: FUN_02ef5318
 */


void FUN_02ef5318(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  puVar16 = PTR_DAT_047d1a08;
  uVar10 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar10 <= param_2) {
    uVar10 = param_2;
  }
  if (0x7ffffffe < uVar10) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar10 = 0x7ffffffe;
  }
  local_68 = uVar10 * 0x38;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[0x28],&local_68,
                              *(undefined4 *)(PTR_PTR_047d1a50 + 0x2c));
  iVar14 = *(int *)(param_1 + 1);
  if (0 < iVar14) {
    iVar17 = 0;
    plVar12 = (long *)*param_1;
    puVar1 = PTR_DAT_047e3378 + 0x10;
    plVar13 = plVar12;
    plVar15 = plVar7;
    do {
      *plVar15 = (long)puVar1;
      plVar15[1] = 0xffffffff;
      plVar15[4] = -0x8000000000000000;
      plVar15[2] = 1;
      plVar15[3] = 0;
      uVar5 = *(uint *)(plVar13 + 4);
      if ((int)uVar5 < 1) {
        plVar15[3] = 0;
        plVar15[4] = -0x8000000000000000;
      }
      else {
        puVar18 = (undefined8 *)plVar13[3];
        puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 4);
        uVar3 = uVar5 & 3;
        plVar15[3] = (long)puVar8;
        *(uint *)(plVar15 + 4) = uVar5;
        *(uint *)((long)plVar15 + 0x24) = uVar5;
        if (2 < uVar5 - 1) {
          iVar11 = -(uVar5 & 0xfffffffc);
          puVar9 = puVar8;
          do {
            puVar9[1] = puVar18[1];
            *puVar9 = *puVar18;
            puVar9[3] = puVar18[3];
            puVar9[2] = puVar18[2];
            puVar9[5] = puVar18[5];
            puVar9[4] = puVar18[4];
            puVar9[7] = puVar18[7];
            puVar19 = puVar18 + 6;
            puVar8 = puVar9 + 8;
            puVar18 = puVar18 + 8;
            iVar11 = iVar11 + 4;
            puVar9[6] = *puVar19;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar8[1] = puVar18[1];
          *puVar8 = *puVar18;
          puVar8 = puVar8 + 2;
          puVar18 = puVar18 + 2;
        }
      }
      plVar15[5] = 0;
      plVar15[6] = -0x8000000000000000;
      uVar5 = *(uint *)(plVar13 + 6);
      if ((int)uVar5 < 1) {
        plVar15[5] = 0;
        plVar15[6] = -0x8000000000000000;
      }
      else {
        puVar18 = (undefined8 *)plVar13[5];
        puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 4);
        uVar3 = uVar5 & 3;
        plVar15[5] = (long)puVar8;
        *(uint *)(plVar15 + 6) = uVar5;
        *(uint *)((long)plVar15 + 0x34) = uVar5;
        if (2 < uVar5 - 1) {
          iVar11 = -(uVar5 & 0xfffffffc);
          puVar9 = puVar8;
          puVar19 = puVar18;
          do {
            uVar4 = puVar19[1];
            puVar8 = puVar9 + 8;
            *puVar9 = *puVar19;
            puVar9[1] = uVar4;
            puVar18 = puVar19 + 8;
            uVar4 = puVar19[3];
            iVar11 = iVar11 + 4;
            puVar9[2] = puVar19[2];
            puVar9[3] = uVar4;
            uVar4 = puVar19[5];
            puVar9[4] = puVar19[4];
            puVar9[5] = uVar4;
            uVar4 = puVar19[7];
            puVar9[6] = puVar19[6];
            puVar9[7] = uVar4;
            puVar9 = puVar8;
            puVar19 = puVar18;
          } while (iVar11 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          uVar4 = puVar18[1];
          *puVar8 = *puVar18;
          puVar8[1] = uVar4;
          puVar8 = puVar8 + 2;
          puVar18 = puVar18 + 2;
        }
      }
      puVar16 = PTR_DAT_047d1a08;
      iVar17 = iVar17 + 1;
      plVar15 = plVar15 + 7;
      plVar13 = plVar13 + 7;
    } while (iVar17 != iVar14);
    do {
      (**(code **)(*plVar12 + 8))(plVar12);
      iVar14 = iVar14 + -1;
      plVar12 = plVar12 + 7;
    } while (iVar14 != 0);
  }
  iVar14 = (int)uVar10;
  uVar2 = uVar10 * 0x38 + 0x38;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x38;
    iVar14 = iVar14 + 1;
    if (uVar2 <= local_68) {
      iVar14 = (int)((local_68 + uVar10 * -0x38) / 0x38) + iVar14;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar16 + 8))(puVar6[0x28],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = iVar14;
  *param_1 = plVar7;
  return;
}


