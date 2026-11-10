/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd48c4; name: FUN_02fd48c4
 */


void FUN_02fd48c4(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  int *piVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  undefined4 *local_10d0;
  undefined2 local_10c8;
  undefined2 local_10c6;
  undefined4 local_10c4;
  undefined8 local_10c0;
  undefined8 local_10b8 [511];
  uint local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  uint *local_80;
  uint local_78;
  uint local_74;
  
  puVar18 = *(undefined8 **)(param_2 + 0x4e0);
  plVar6 = (long *)*puVar18;
  puVar21 = (undefined8 *)(param_1 + 0x80);
  *puVar21 = plVar6;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  uVar24 = *(int *)(puVar18 + 0xb) - 1;
  if (*(int *)(puVar18 + 0xb) < 1) {
    lVar14 = puVar18[1];
    (**(code **)(*plVar6 + 0x20))(plVar6,lVar14,6);
    *(undefined4 *)(puVar18 + 0xb) = 5;
    puVar18 = (undefined8 *)(lVar14 + 0x28);
  }
  else {
    *(uint *)(puVar18 + 0xb) = uVar24;
    puVar18 = (undefined8 *)(puVar18[1] + (ulong)uVar24 * 8);
  }
  puVar18 = (undefined8 *)*puVar18;
  puVar18[2] = 0;
  puVar18[3] = 0;
  *puVar18 = 0;
  puVar18[1] = 0;
  *(undefined4 *)((long)puVar18 + 4) = *(undefined4 *)(param_1 + 0x98);
  iVar8 = *(int *)(param_1 + 0x98);
  lVar19 = (long)iVar8;
  lVar14 = lVar19 + 1;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar8) {
    FUN_031c25b4(param_1 + 0x90,PTR_PTR_047d1a50,lVar14);
    iVar8 = *(int *)(param_1 + 0x98);
  }
  *(undefined8 **)(*(long *)(param_1 + 0x90) + (long)iVar8 * 8) = puVar18;
  *(int *)(param_1 + 0x98) = (int)lVar14;
  *(char **)(param_1 + 0x170) = "hknpPrepareNarrowPhasePairsTask::m_workItemStream";
  local_88 = *(undefined8 **)(param_2 + 0x4e0);
  local_80 = *(uint **)(*(long *)(param_1 + 0x90) + lVar19 * 8);
  local_78 = *local_80 >> 0x10;
  local_74 = *local_80 & 0xffff;
  *(uint *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - (*local_80 & 0xffff);
  lVar14 = tpidr_el0;
  lVar19 = *(long *)(lVar14 + 0x1000b8);
  local_90 = puVar21;
  if (lVar19 == 0) {
    lVar19 = FUN_00e5d3b4();
    *(long *)(lVar14 + 0x1000b8) = lVar19;
  }
  plVar6 = *(long **)(lVar19 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar19 = *plVar6;
    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
      (**(code **)(lVar19 + 0x18))("NarrowPhase",0xb,*(undefined8 *)(lVar19 + 0x28));
    }
    puVar18 = (undefined8 *)plVar6[2];
    uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "TtNarrowPhase";
      uVar7 = nn::os::GetSystemTick();
      puVar18[1] = uVar7;
    }
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar18 = (undefined8 *)plVar6[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    lVar19 = *plVar6;
    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
      (**(code **)(lVar19 + 0x18))("PairsTask",9,*(undefined8 *)(lVar19 + 0x28));
    }
    puVar18 = (undefined8 *)plVar6[2];
    uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "TtPairsTask";
      uVar7 = nn::os::GetSystemTick();
      puVar18[1] = uVar7;
    }
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar18 = (undefined8 *)plVar6[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    lVar19 = *plVar6;
    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
      (**(code **)(lVar19 + 0x18))("Prepare",7,*(undefined8 *)(lVar19 + 0x28));
      if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
        (**(code **)(lVar19 + 0x18))("Activation",10,*(undefined8 *)(lVar19 + 0x28));
      }
    }
    puVar18 = (undefined8 *)plVar6[2];
    uVar9 = (long)puVar18 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "LtPrepare";
      puVar18[2] = "StActivation";
      uVar7 = nn::os::GetSystemTick();
      puVar18[1] = uVar7;
    }
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar18 = (undefined8 *)plVar6[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
  }
  lVar19 = *(long *)(param_2 + 8);
  lVar23 = *(long *)(lVar19 + 0x698);
  lVar22 = *(long *)(lVar19 + 0x500);
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 8);
  iVar8 = *(int *)(lVar22 + 0x948) + iVar1 + *(int *)(lVar22 + 0x548);
  local_a0 = plVar6;
  local_98 = plVar6;
  if (0 < iVar8) {
    FUN_02f5fa8c(&local_b0,PTR_PTR_047d1a50,iVar8);
  }
  local_b8 = *(undefined8 *)(param_1 + 0x48);
  local_c0 = 0;
  if (lVar23 != 0) {
    if (plVar6 != (long *)0x0) {
      lVar25 = *plVar6;
      if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
        puVar18 = (undefined8 *)plVar6[2];
        uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c4e575;
          puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
        }
      }
      puVar18 = (undefined8 *)plVar6[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = "StActivateBodies";
        uVar7 = nn::os::GetSystemTick();
        puVar18[1] = uVar7;
      }
      if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
        (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
      }
      if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
        (**(code **)(lVar25 + 0x18))("ActivateBodies",0xe,*(undefined8 *)(lVar25 + 0x28));
      }
    }
    puVar10 = *(undefined4 **)
               (*(long *)(param_2 + 0x540) + (long)*(int *)(param_2 + 0x548) * 8 + -8);
    uVar2 = *puVar10;
    uVar3 = *puVar10;
    *(undefined4 **)(param_2 + 0x740) = puVar10;
    *(short *)(param_2 + 0x748) = (short)((uint)uVar2 >> 0x10);
    *(short *)(param_2 + 0x74a) = (short)uVar3;
    *(int *)(param_2 + 0x74c) = -*(int *)(param_2 + 0x538);
    FUN_02f58200(lVar23,param_2,lVar22 + 0x540,*(undefined8 *)(param_1 + 0x38),&local_90,&local_10c0
                 ,**(undefined8 **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x70));
    iVar8 = *(int *)(*(long *)(param_1 + 0x38) + 8);
    if (iVar1 < iVar8) {
      iVar8 = ((local_a8._4_4_ & 0x7fffffff) - iVar1) + iVar8;
      if ((int)(local_a8._4_4_ & 0x7fffffff) < iVar8) {
        FUN_02f5fa8c(&local_b0,PTR_PTR_047d1a50,(long)iVar8);
      }
    }
    iVar8 = *(int *)(param_2 + 0x74c) + *(int *)(param_2 + 0x538);
    if (iVar8 != 0) {
      puVar16 = *(uint **)(param_2 + 0x740);
      if ((puVar16 !=
           *(uint **)(*(long *)(param_2 + 0x540) + (long)*(int *)(param_2 + 0x548) * 8 + -8)) &&
         ((uint)*(ushort *)(param_2 + 0x74a) == (*puVar16 & 0xffff))) {
        puVar16 = *(uint **)(puVar16 + 2);
        *(undefined4 *)(param_2 + 0x748) = 0;
      }
      uVar24 = *puVar16;
      *(uint **)(param_2 + 0x740) = puVar16;
      *(short *)(param_2 + 0x74a) = (short)uVar24 - *(short *)(param_2 + 0x74a);
    }
    *(int *)(param_2 + 0x74c) = iVar8;
    uVar7 = *(undefined8 *)(param_2 + 0x740);
    uVar17 = *(undefined8 *)(param_2 + 0x750);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x748);
    *(undefined8 *)(param_1 + 0x60) = uVar17;
    *(undefined8 *)(param_1 + 0x50) = uVar7;
    puVar10 = *(undefined4 **)
               (*(long *)(param_2 + 0x540) + (long)*(int *)(param_2 + 0x548) * 8 + -8);
    uVar2 = *puVar10;
    uVar3 = *puVar10;
    *(undefined4 **)(param_2 + 0x740) = puVar10;
    *(short *)(param_2 + 0x748) = (short)((uint)uVar2 >> 0x10);
    *(short *)(param_2 + 0x74a) = (short)uVar3;
    *(int *)(param_2 + 0x74c) = -*(int *)(param_2 + 0x538);
    if (((*(int *)(*(long *)(lVar19 + 0x488) + 0x28) != 0) &&
        (*(int *)(*(long *)(param_1 + 0x70) + 8) != 0)) &&
       (*(int *)(*(long *)(lVar19 + 0x488) + 0x58) != 0)) {
      if (plVar6 != (long *)0x0) {
        lVar23 = *plVar6;
        if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
          puVar18 = (undefined8 *)plVar6[2];
          uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
          if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
          }
        }
        puVar18 = (undefined8 *)plVar6[2];
        uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = "StPrepareActivatedConstraintGroups";
          uVar7 = nn::os::GetSystemTick();
          puVar18[1] = uVar7;
        }
        if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
          (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
        }
        if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
          (**(code **)(lVar23 + 0x18))
                    ("PrepareActivatedConstraintGroups",0x20,*(undefined8 *)(lVar23 + 0x28));
        }
      }
      FUN_02fb1734(*(undefined8 *)(param_1 + 0x40),lVar19,
                   *(undefined8 *)(*(long *)(lVar19 + 0x488) + 8),*(undefined8 *)(param_1 + 0x70));
    }
    if ((*(int *)(*(long *)(lVar19 + 0x488) + 0x28) != 0) &&
       (lVar23 = *(long *)(param_1 + 0x70), *(int *)(lVar23 + 8) != 0)) {
      if (plVar6 != (long *)0x0) {
        lVar23 = *plVar6;
        if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
          puVar18 = (undefined8 *)plVar6[2];
          uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
          if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
          }
        }
        puVar18 = (undefined8 *)plVar6[2];
        uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = "StPrepareActivatedConstraints";
          uVar7 = nn::os::GetSystemTick();
          puVar18[1] = uVar7;
        }
        if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
          (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
        }
        if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
          (**(code **)(lVar23 + 0x18))
                    ("PrepareActivatedConstraints",0x1b,*(undefined8 *)(lVar23 + 0x28));
        }
        lVar23 = *(long *)(param_1 + 0x70);
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar19 + 0x488) + 8);
      FUN_02fb1910(*(undefined8 *)(param_1 + 0x40),lVar19,uVar7,lVar23);
      lVar23 = *(long *)(param_1 + 0x40);
      FUN_02fb1d60(*(undefined8 *)(param_1 + 0x70),lVar19,lVar23,*(int *)(lVar23 + 0x10),
                   *(int *)(lVar23 + 0x10) + *(int *)(lVar23 + 0x14) + -1,uVar7);
    }
  }
  if (plVar6 == (long *)0x0) {
    if (*(int *)(lVar22 + 0x948) != 0) {
      FUN_02f61a20(lVar22,param_2,*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    lVar23 = *plVar6;
    if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar18 = (undefined8 *)plVar6[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar18 = (undefined8 *)plVar6[2];
    uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "StCreateNewCollisionCaches";
      uVar7 = nn::os::GetSystemTick();
      puVar18[1] = uVar7;
    }
    if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
      (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
    }
    if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
      (**(code **)(lVar23 + 0x18))("CreateNewCollisionCaches",0x18,*(undefined8 *)(lVar23 + 0x28));
    }
    if (*(int *)(lVar22 + 0x948) != 0) {
      lVar23 = *plVar6;
      if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
        (**(code **)(lVar23 + 0x18))("AppendForcedBodyPairs",0x15,*(undefined8 *)(lVar23 + 0x28));
      }
      puVar18 = (undefined8 *)plVar6[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = "TtAppendForcedBodyPairs";
        uVar7 = nn::os::GetSystemTick();
        puVar18[1] = uVar7;
      }
      if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
        puVar18 = (undefined8 *)plVar6[2];
        uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c4e575;
          puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
        }
      }
      FUN_02f61a20(lVar22,param_2,*(undefined8 *)(param_1 + 0x38));
      lVar23 = *plVar6;
      if (((*(byte *)(lVar23 + 0x38) & 1) == 0) || (plVar6[6] == 0)) {
LAB_02fd51bc:
        puVar21 = (undefined8 *)plVar6[2];
        puVar11 = (undefined8 *)plVar6[3];
      }
      else {
        puVar18 = (undefined8 *)plVar6[2];
        puVar11 = (undefined8 *)plVar6[3];
        puVar21 = (undefined8 *)((long)puVar18 + 0x17U & 0xfffffffffffffff8);
        if (puVar11 < puVar21) goto LAB_02fd51bc;
        plVar6[2] = (long)puVar21;
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = &DAT_03c4e575;
          puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
          goto LAB_02fd51bc;
        }
      }
      puVar18 = (undefined8 *)((long)puVar21 + 0x17U & 0xfffffffffffffff8);
      if ((puVar18 <= puVar11) && (plVar6[2] = (long)puVar18, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c2d363;
        uVar7 = nn::os::GetSystemTick();
        puVar21[1] = uVar7;
      }
      if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
        (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
      }
    }
  }
  puVar18 = *(undefined8 **)(param_1 + 0x38);
  iVar8 = *(int *)(puVar18 + 1);
  if (0 < iVar8) {
    if (*(int *)(puVar18 + 1) == 0) {
      local_10d0 = (undefined4 *)0x0;
      local_10c6 = 0;
    }
    else {
      local_10d0 = *(undefined4 **)puVar18[2];
      local_10c6 = (undefined2)*local_10d0;
    }
    local_10c8 = 0;
    local_10c4 = *(undefined4 *)(puVar18 + 1);
    FUN_02f618f0(lVar22,lVar19,*(undefined8 *)(param_2 + 0x4e0),&local_10d0,&local_b0);
    lVar19 = *(long *)(lVar14 + 0x1000b8);
    if (lVar19 == 0) {
      lVar19 = FUN_00e5d3b4();
      *(long *)(lVar14 + 0x1000b8) = lVar19;
    }
    lVar22 = *(long *)(lVar19 + 0x3e0);
    if (lVar22 != 0) {
      puVar18 = *(undefined8 **)(lVar22 + 0x10);
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= *(ulong *)(lVar22 + 0x18)) &&
         (*(ulong *)(lVar22 + 0x10) = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = "MiNumNewBodyPairs";
        *(float *)(puVar18 + 1) = (float)iVar8;
        lVar19 = *(long *)(lVar14 + 0x1000b8);
      }
    }
    if (lVar19 == 0) {
      lVar19 = FUN_00e5d3b4();
      *(long *)(lVar14 + 0x1000b8) = lVar19;
    }
    lVar14 = *(long *)(lVar19 + 0x3e0);
    if (lVar14 != 0) {
      puVar18 = *(undefined8 **)(lVar14 + 0x10);
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= *(ulong *)(lVar14 + 0x18)) &&
         (*(ulong *)(lVar14 + 0x10) = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = "MiNumNewCollisionCaches";
        *(float *)(puVar18 + 1) = (float)(int)local_a8;
      }
    }
    if (0 < (int)local_a8) {
      lVar19 = 0;
      lVar14 = 0;
      do {
        uVar5 = local_74;
        uVar24 = local_78;
        puVar16 = local_80;
        uVar7 = *(undefined8 *)(local_b0 + lVar19);
        uVar4 = *(undefined2 *)((undefined8 *)(local_b0 + lVar19) + 1);
        iVar8 = *(int *)(local_90 + 1) + local_74;
        if ((int)local_78 < 0xf91) {
          puVar18 = (undefined8 *)((long)local_80 + (long)(int)local_78 + 0x20);
        }
        else {
          puVar18 = (undefined8 *)FUN_031c36f4(&local_90);
        }
        *puVar18 = uVar7;
        *(undefined2 *)(puVar18 + 1) = uVar4;
        *(undefined1 *)((long)puVar18 + 0xb) = 0;
        *(undefined4 *)((long)puVar18 + 0xc) = 0;
        local_78 = local_78 + 0x10;
        local_74 = local_74 + 1;
        if ((*(int *)(local_90 + 1) + local_74 != iVar8) && (local_80 != puVar16)) {
          if ((uVar5 & 0xffff) == (*puVar16 & 0xffff)) {
            puVar16 = *(uint **)(puVar16 + 2);
            uVar24 = 0;
          }
          if (puVar16 == local_80) {
            puVar16 = local_80;
          }
        }
        if (local_c0 == 0x100) {
          FUN_02f63610(local_b8,&local_10c0,0x100);
          local_c0 = 0;
        }
        uVar9 = (ulong)local_c0;
        local_10b8[uVar9 * 2 + -1] = puVar16;
        local_c0 = local_c0 + 1;
        *(short *)(local_10b8 + uVar9 * 2) = (short)uVar24;
        lVar14 = lVar14 + 1;
        lVar19 = lVar19 + 0x10;
      } while (lVar14 < (int)local_a8);
    }
    puVar18 = *(undefined8 **)(param_1 + 0x38);
  }
  lVar14 = *(long *)(param_2 + 0x4e0);
  uVar24 = *(uint *)(puVar18 + 3);
  if (*(char *)((long)puVar18 + 0xc) != '\0') {
    plVar12 = (long *)puVar18[2];
    if ((int)uVar24 < 1) {
      plVar15 = plVar12;
    }
    else {
      plVar15 = plVar12;
      if (uVar24 != 1) {
        iVar8 = -(uVar24 & 0xfffffffe);
        do {
          plVar13 = plVar12;
          if (*plVar15 != 0) {
            plVar13 = plVar12 + 1;
            *plVar12 = *plVar15;
          }
          plVar12 = plVar13;
          if (plVar15[1] != 0) {
            plVar12 = plVar13 + 1;
            *plVar13 = plVar15[1];
          }
          plVar15 = plVar15 + 2;
          iVar8 = iVar8 + 2;
        } while (iVar8 != 0);
      }
      plVar13 = plVar12;
      if (((uVar24 & 1) != 0) && (*plVar15 != 0)) {
        plVar13 = plVar12 + 1;
        *plVar12 = *plVar15;
      }
      plVar12 = plVar13;
      plVar15 = (long *)puVar18[2];
    }
    uVar24 = (uint)((ulong)((long)plVar12 - (long)plVar15) >> 3);
    *(undefined1 *)((long)puVar18 + 0xc) = 0;
  }
  if (uVar24 != 0) {
    if (lVar14 == 0) {
      (**(code **)(*(long *)*puVar18 + 0x28))((long *)*puVar18,puVar18[2]);
    }
    else {
      FUN_031c2998(lVar14,puVar18[2]);
    }
  }
  *(undefined4 *)(puVar18 + 3) = 0;
  *(undefined4 *)(puVar18 + 1) = 0;
  lVar14 = *(long *)(param_1 + 0x48);
  iVar8 = *(int *)(*(long *)(*(long *)(param_2 + 8) + 0x4b0) + 0x20);
  if ((int)(*(uint *)(lVar14 + 0x2ac4) & 0x7fffffff) < iVar8) {
    FUN_02fd6094(lVar14 + 0x2ab8,PTR_PTR_047d1a50,(long)iVar8);
  }
  uVar24 = *(uint *)(lVar14 + 0x2ac0);
  if ((int)uVar24 < iVar8) {
    *(int *)(lVar14 + 0x2ac0) = iVar8;
    memset((void *)(*(long *)(lVar14 + 0x2ab8) + (long)(int)uVar24 * 4),0,
           (ulong)(iVar8 + ~uVar24) * 4 + 4);
  }
  else if (iVar8 < (int)uVar24) {
    *(int *)(lVar14 + 0x2ac0) = iVar8;
  }
  puVar18 = local_88;
  if (local_74 == 0) {
    piVar20 = (int *)(local_90 + 3);
    iVar8 = *piVar20;
    if (iVar8 < 2) goto LAB_02fd55f4;
    iVar1 = *(int *)(local_88 + 0xb);
    lVar19 = *(long *)(local_90[2] + (long)(iVar8 + -2) * 8);
    lVar14 = local_88[1];
    *(undefined8 *)(lVar14 + (long)iVar1 * 8) =
         *(undefined8 *)(local_90[2] + (long)(iVar8 + -1) * 8);
    *(int *)(local_88 + 0xb) = iVar1 + 1;
    if (*(int *)((long)local_88 + 0x5c) <= iVar1 + 1) {
      (**(code **)(*(long *)*local_88 + 0x28))((long *)*local_88,lVar14 + (long)(iVar1 + -5) * 8,6);
      *(int *)(puVar18 + 0xb) = iVar1 + -5;
    }
    *(undefined8 *)(lVar19 + 8) = 0;
    uVar24 = 0xffffffff;
  }
  else {
LAB_02fd55f4:
    piVar20 = (int *)(local_90 + 1);
    local_80[2] = 0;
    local_80[3] = 0;
    *local_80 = *local_80 & 0xffff0000 | local_74 & 0xffff;
    *local_80 = *local_80 & 0xffff | local_78 << 0x10;
    uVar24 = local_74;
  }
  *piVar20 = *piVar20 + uVar24;
  local_90 = (undefined8 *)0x0;
  local_80 = (uint *)0x0;
  if (plVar6 != (long *)0x0) {
    lVar14 = *plVar6;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar18 = (undefined8 *)plVar6[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar18 = (undefined8 *)plVar6[2];
    uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar6[3]) && (plVar6[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = &DAT_03c3697b;
      uVar7 = nn::os::GetSystemTick();
      puVar18[1] = uVar7;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
      if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
        (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
      }
    }
  }
  if (local_c0 != 0) {
    FUN_02f63610(local_b8,&local_10c0);
    local_c0 = 0;
  }
  lVar14 = local_a8;
  uVar9 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_b0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b0,uVar9 << 4);
  }
  if (local_a0 != (long *)0x0) {
    lVar14 = *local_a0;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (local_a0[6] != 0)) {
      puVar18 = (undefined8 *)local_a0[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)local_a0[3]) && (local_a0[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(local_a0[6] + 8);
      }
    }
    puVar18 = (undefined8 *)local_a0[2];
    uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)local_a0[3]) && (local_a0[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = &DAT_03c2d363;
      uVar7 = nn::os::GetSystemTick();
      puVar18[1] = uVar7;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
    }
  }
  if (local_98 != (long *)0x0) {
    lVar14 = *local_98;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (local_98[6] != 0)) {
      puVar18 = (undefined8 *)local_98[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)local_98[3]) && (local_98[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(local_98[6] + 8);
      }
    }
    puVar18 = (undefined8 *)local_98[2];
    uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)local_98[3]) && (local_98[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = &DAT_03c2d363;
      uVar7 = nn::os::GetSystemTick();
      puVar18[1] = uVar7;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
    }
  }
  puVar18 = local_88;
  if (local_90 == (undefined8 *)0x0) {
    return;
  }
  if (local_74 == 0) {
    piVar20 = (int *)(local_90 + 3);
    iVar8 = *piVar20;
    if (1 < iVar8) {
      iVar1 = *(int *)(local_88 + 0xb);
      lVar19 = *(long *)(local_90[2] + (long)(iVar8 + -2) * 8);
      lVar14 = local_88[1];
      *(undefined8 *)(lVar14 + (long)iVar1 * 8) =
           *(undefined8 *)(local_90[2] + (long)(iVar8 + -1) * 8);
      *(int *)(local_88 + 0xb) = iVar1 + 1;
      if (*(int *)((long)local_88 + 0x5c) <= iVar1 + 1) {
        (**(code **)(*(long *)*local_88 + 0x28))
                  ((long *)*local_88,lVar14 + (long)(iVar1 + -5) * 8,6);
        *(int *)(puVar18 + 0xb) = iVar1 + -5;
      }
      *(undefined8 *)(lVar19 + 8) = 0;
      local_74 = 0xffffffff;
      goto LAB_02fd58d8;
    }
  }
  piVar20 = (int *)(local_90 + 1);
  local_80[2] = 0;
  local_80[3] = 0;
  *local_80 = *local_80 & 0xffff0000 | local_74 & 0xffff;
  *local_80 = *local_80 & 0xffff | local_78 << 0x10;
LAB_02fd58d8:
  *piVar20 = *piVar20 + local_74;
  return;
}


