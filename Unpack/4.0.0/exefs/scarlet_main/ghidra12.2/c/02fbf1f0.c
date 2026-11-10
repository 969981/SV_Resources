/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fbf1f0; name: FUN_02fbf1f0
 */


void FUN_02fbf1f0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long local_68;
  
  lVar23 = tpidr_el0;
  lVar13 = *(long *)(lVar23 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar13;
  }
  plVar24 = *(long **)(lVar13 + 0x3e0);
  if (plVar24 != (long *)0x0) {
    lVar23 = *plVar24;
    if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
      (**(code **)(lVar23 + 0x18))("CreateSolverTask",0x10,*(undefined8 *)(lVar23 + 0x28));
      if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
        (**(code **)(lVar23 + 0x18))("SetupSolverIdTable",0x12,*(undefined8 *)(lVar23 + 0x28));
      }
    }
    puVar4 = (undefined8 *)plVar24[2];
    uVar14 = (long)puVar4 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "LtCreateSolverTask";
      puVar4[2] = "StSetupSolverIdTable";
      uVar11 = nn::os::GetSystemTick();
      puVar4[1] = uVar11;
    }
    if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar4 = (undefined8 *)plVar24[2];
      uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
  }
  lVar23 = *(long *)(param_3 + 8);
  uVar5 = *(uint *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar23 + 0x4a8);
  uVar6 = *(uint *)(*(long *)(**(long **)(lVar23 + 0x140) + 0x4b0) + 0x1c);
  if (0 < (int)uVar6) {
    lVar13 = 0;
    uVar14 = 0;
    puVar17 = (uint *)(lVar23 + 0x188);
    do {
      uVar7 = *puVar17;
      if ((int)uVar7 < 2) {
        *(ulong *)(*(long *)(param_1 + 0x20) + lVar13) = uVar14;
      }
      else {
        *(ulong *)(*(long *)(param_1 + 0x20) + lVar13) = uVar14 | (ulong)uVar7 << 0x20;
        uVar14 = (ulong)(uVar7 + (int)uVar14);
      }
      lVar13 = lVar13 + 8;
      puVar17 = puVar17 + 6;
    } while ((ulong)uVar6 * 8 != lVar13);
    uVar6 = *(uint *)(*(long *)(**(long **)(lVar23 + 0x140) + 0x4b0) + 0x1c);
    if (0 < (int)uVar6) {
      if (uVar6 == 1) {
        uVar14 = 0;
        iVar12 = 0;
      }
      else {
        uVar14 = 0;
        iVar12 = 0;
        piVar18 = (int *)(lVar23 + 0x1a0);
        do {
          uVar14 = uVar14 + 2;
          iVar12 = *piVar18 + piVar18[-6] + iVar12;
          piVar18 = piVar18 + 0xc;
        } while (((ulong)uVar6 & 0xfffffffe) != uVar14);
      }
      if ((uVar6 & 1) != 0) {
        iVar12 = *(int *)(lVar23 + uVar14 * 0x18 + 0x188) + iVar12;
      }
      if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar12) {
        FUN_02f1dd70(param_1 + 0x58,PTR_PTR_047d1a50,(long)iVar12);
      }
      uVar14 = 0;
      do {
        uVar7 = *(uint *)(lVar23 + uVar14 * 0x18 + 0x188);
        if (1 < (int)uVar7) {
          uVar22 = (ulong)uVar7 - 1;
          puVar3 = (undefined4 *)(*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x60) * 4);
          plVar2 = (long *)(lVar23 + uVar14 * 0x18 + 0x180);
          uVar20 = uVar22 & 3;
          *(uint *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + uVar7;
          *puVar3 = 0;
          if ((ulong)uVar7 - 2 < 3) {
            lVar13 = 1;
          }
          else {
            uVar10 = 0;
            do {
              uVar21 = uVar10;
              puVar3[uVar21 + 1] = *(undefined4 *)(*plVar2 + uVar21 * 4 + 4);
              puVar3[uVar21 + 2] = *(undefined4 *)(*plVar2 + uVar21 * 4 + 8);
              puVar3[uVar21 + 3] = *(undefined4 *)(*plVar2 + uVar21 * 4 + 0xc);
              puVar3[uVar21 + 4] = *(undefined4 *)(*plVar2 + uVar21 * 4 + 0x10);
              uVar10 = uVar21 + 4;
            } while ((uVar22 & 0xfffffffffffffffc) != uVar21 + 4);
            lVar13 = uVar21 + 5;
          }
          if (uVar20 != 0) {
            lVar13 = lVar13 << 2;
            do {
              uVar20 = uVar20 - 1;
              *(undefined4 *)((long)puVar3 + lVar13) = *(undefined4 *)(*plVar2 + lVar13);
              lVar13 = lVar13 + 4;
            } while (uVar20 != 0);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar6);
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar13 = *plVar24;
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar4 = (undefined8 *)plVar24[2];
      uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar24[2];
    uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "StSetupSolverVelocities";
      uVar11 = nn::os::GetSystemTick();
      puVar4[1] = uVar11;
    }
    if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
      (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
    }
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))("SetupSolverVelocities",0x15,*(undefined8 *)(lVar13 + 0x28));
    }
  }
  puVar9 = PTR_DAT_047d1a08;
  iVar12 = *(int *)(param_1 + 0x60);
  iVar8 = iVar12 * 0x20;
  if (*(int *)(lVar23 + 0x624) < iVar12 * 0x20) {
    if (*(long *)(lVar23 + 0x628) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(long *)(lVar23 + 0x628),0);
      *(undefined4 *)(lVar23 + 0x624) = 0;
      *(undefined8 *)(lVar23 + 0x628) = 0;
    }
    local_68 = (long)(iVar8 + 0x30);
    uVar11 = (**(code **)puVar9)(0,&local_68,0);
    *(undefined8 *)(lVar23 + 0x628) = uVar11;
    *(int *)(lVar23 + 0x624) = iVar8;
  }
  *(int *)(lVar23 + 0x620) = iVar8;
  if (*(int *)(lVar23 + 0x634) < iVar8) {
    if (*(long *)(lVar23 + 0x638) != 0) {
      (**(code **)(puVar9 + 8))(0,*(long *)(lVar23 + 0x638),0);
      *(undefined4 *)(lVar23 + 0x634) = 0;
      *(undefined8 *)(lVar23 + 0x638) = 0;
    }
    local_68 = (long)(iVar8 + 0x30);
    uVar11 = (**(code **)puVar9)(0,&local_68,0);
    *(undefined8 *)(lVar23 + 0x638) = uVar11;
    *(int *)(lVar23 + 0x634) = iVar8;
  }
  *(int *)(lVar23 + 0x630) = iVar8;
  *(int *)(lVar23 + 0x640) = iVar12;
  if (*(long *)(lVar23 + 0x698) != 0) {
    if (plVar24 != (long *)0x0) {
      lVar13 = *plVar24;
      if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
        puVar4 = (undefined8 *)plVar24[2];
        uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = &DAT_03c4e575;
          puVar4[1] = *(undefined8 *)(plVar24[6] + 8);
        }
      }
      puVar4 = (undefined8 *)plVar24[2];
      uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = "StPrepareDeactivationInfo";
        uVar11 = nn::os::GetSystemTick();
        puVar4[1] = uVar11;
      }
      if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
        (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
      }
      if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
        (**(code **)(lVar13 + 0x18))("PrepareDeactivationInfo",0x17,*(undefined8 *)(lVar13 + 0x28));
      }
    }
    iVar12 = *(int *)(lVar23 + 0x640);
    local_68 = 0x140;
    lVar13 = (**(code **)puVar9)(0,&local_68,0);
    if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
      (**(code **)(puVar9 + 0x10))(lVar13,"hknpDeactivationStepInfo");
    }
    FUN_02f5e3bc(lVar13,iVar12,(ulong)uVar5);
    if (0 < (int)uVar5) {
      lVar15 = 0;
      lVar16 = 0;
      lVar25 = (ulong)uVar5 * 8;
      do {
        lVar1 = lVar16 >> 0x1b;
        lVar19 = *(long *)(*param_2 + lVar15);
        lVar15 = lVar15 + 8;
        lVar16 = lVar16 + 0x100000000;
        *(long *)(lVar19 + 0x4b8) = *(long *)(lVar13 + 0x20) + lVar1;
        *(long *)(lVar19 + 0x4c8) = lVar13;
      } while (lVar25 != lVar15);
      lVar13 = 0;
      do {
        FUN_02eb1718(*(undefined8 *)(*(long *)(*param_2 + lVar13) + 0x4b8),0,
                     iVar12 + 7U & 0xfffffffc,0);
        lVar13 = lVar13 + 8;
      } while (lVar25 != lVar13);
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar13 = *plVar24;
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar4 = (undefined8 *)plVar24[2];
      uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar24[2];
    uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "StPopulateSolverStepInfo";
      uVar11 = nn::os::GetSystemTick();
      puVar4[1] = uVar11;
    }
    if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
      (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
    }
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))("PopulateSolverStepInfo",0x16,*(undefined8 *)(lVar13 + 0x28));
    }
  }
  lVar13 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(lVar23 + 0x38);
  *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)(lVar23 + 0x150);
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(lVar13 + 0x58) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar13 + 0x60) = uVar11;
  *(ulong *)(lVar13 + 0x68) = *(long *)(lVar23 + 0x628) + 0x3fU & 0xffffffffffffffc0;
  uVar11 = 0;
  if (*(long *)(lVar23 + 0x698) != 0) {
    uVar11 = *(undefined8 *)(*(long *)(lVar23 + 0x698) + 0x388);
  }
  *(undefined8 *)(lVar13 + 0x98) = uVar11;
  *(ulong *)(lVar13 + 0x90) = *(long *)(lVar23 + 0x638) + 0x3fU & 0xffffffffffffffc0;
  *(undefined8 *)(lVar13 + 0x70) = *(undefined8 *)(param_1 + 0x58);
  if (plVar24 != (long *)0x0) {
    lVar23 = *plVar24;
    if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar4 = (undefined8 *)plVar24[2];
      uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar24[2];
    uVar14 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar24[3]) && (plVar24[2] = uVar14, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c3697b;
      uVar11 = nn::os::GetSystemTick();
      puVar4[1] = uVar11;
    }
    if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
      (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
      if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
        (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
      }
    }
  }
  return;
}


