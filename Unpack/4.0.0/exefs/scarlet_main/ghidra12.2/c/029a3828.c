/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a3828; name: FUN_029a3828
 */


void FUN_029a3828(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long *param_5)

{
  MutexType *pMVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  short sVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  undefined4 uVar26;
  int iVar30;
  undefined1 auVar27 [12];
  int iVar29;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined1 auVar41 [12];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uStack_1bc;
  undefined8 *local_190;
  code *local_188;
  code *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [104];
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined4 local_f4;
  code *local_f0;
  float local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  
  uVar38 = param_3._8_8_;
  fVar36 = param_3._4_4_;
  fVar35 = param_3._0_4_;
  uVar34 = param_2._8_8_;
  fVar32 = param_2._4_4_;
  fVar31 = param_2._0_4_;
  if (*(char *)((long)param_5 + 0x323) != '\0') {
    (**(code **)(*param_5 + 0x180))(param_5);
  }
  nn::os::LockMutex((MutexType *)(param_5 + 0x29));
  lVar19 = param_5[0x44];
  lVar21 = param_5[0x45];
  if (lVar19 != lVar21) {
    uStack_e0 = 0;
    fStack_dc = 0.0;
    local_d8 = (long *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = 0.0;
    uStack_e4 = 0;
    FUN_0131fc3c(param_5,lVar19,&local_f0,*(undefined4 *)(lVar19 + 0x20));
    pcVar9 = (code *)CONCAT44(uStack_e4,local_e8);
    if (pcVar9 != (code *)0x0) {
      uStack_e0 = 0;
      fStack_dc = 0.0;
      local_d8 = (long *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = 0.0;
      uStack_e4 = 0;
      (*pcVar9)(&local_d0);
    }
    while (lVar10 = lVar19 + 0x28, lVar10 != lVar21) {
      uStack_e0 = 0;
      fStack_dc = 0.0;
      local_d8 = (long *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = 0.0;
      uStack_e4 = 0;
      FUN_0131fc3c(param_5,lVar10,&local_f0,*(undefined4 *)(lVar19 + 0x48));
      pcVar9 = (code *)CONCAT44(uStack_e4,local_e8);
      lVar19 = lVar10;
      if (pcVar9 != (code *)0x0) {
        uStack_e0 = 0;
        fStack_dc = 0.0;
        local_d8 = (long *)0x0;
        local_f0 = (code *)0x0;
        local_e8 = 0.0;
        uStack_e4 = 0;
        (*pcVar9)(&local_d0);
      }
    }
    lVar19 = param_5[0x44];
    lVar21 = param_5[0x45];
    if (lVar21 != lVar19) {
      if (*(long **)(lVar21 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar21 + -0x10) + 0x20))();
      }
      if (lVar21 + -0x28 != lVar19) {
        do {
          if (*(long **)(lVar21 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar21 + -0x38) + 0x20))();
          }
          lVar21 = lVar21 + -0x28;
        } while (lVar19 + 0x28 != lVar21);
      }
    }
  }
  param_5[0x45] = lVar19;
  nn::os::UnlockMutex((MutexType *)(param_5 + 0x29));
  if ((char)param_5[0xe9] == '\0') {
    pMVar1 = (MutexType *)(param_5 + 0x85);
    nn::os::LockMutex(pMVar1);
    if (((param_5[0xe8] == 0) || (**(char **)(param_5[0xe8] + 0x38) == '\0')) ||
       (uVar15 = FUN_011ba878(param_5), (uVar15 & 1) == 0)) {
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    *(undefined1 *)(param_5 + 0xe9) = 1;
    lVar19 = param_5[0x83];
    if ((lVar19 != 0) && (*(short *)(lVar19 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar19 + 0x1a);
      sVar17 = *(short *)(lVar19 + 0x1a);
LAB_029a3b14:
      sVar6 = *psVar2;
      if (sVar6 == sVar17) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_029a3b38;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_029a3b38:
        bVar8 = false;
      }
      if (!bVar8) goto code_r0x029a3b40;
      if (*(long *)(lVar19 + 0x10) != 0) {
        plVar18 = (long *)(*(long *)(lVar19 + 0x10) + -0x28);
        puVar12 = (undefined8 *)FUN_01df7f84(plVar18);
        plVar20 = (long *)*puVar12;
        if (plVar20 != (long *)0x0) {
          plVar3 = plVar20 + 5;
          do {
            lVar19 = *plVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *(int *)plVar3 = (int)lVar19 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((int)lVar19 == -1) goto LAB_029a3c08;
          for (plVar14 = (long *)param_5[0x8f]; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14)
          {
            FUN_0135d26c(&local_f0,plVar14 + 3);
            uVar11 = FUN_00c8ea20(plVar20,&local_f0);
            *(undefined2 *)(plVar14 + 5) = uVar11;
            if (local_d8 != (long *)0x0) {
              (**(code **)(*local_d8 + 0x20))();
            }
          }
          do {
            lVar19 = *plVar3;
            iVar25 = (int)lVar19 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *(int *)plVar3 = iVar25;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar25 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
          else if ((int)lVar19 == 0) goto LAB_029a3c30;
        }
        (**(code **)(*plVar18 + 0x60))(plVar18);
      }
    }
LAB_029a38f8:
    nn::os::UnlockMutex(pMVar1);
  }
  lVar19 = param_5[0x83];
  if ((lVar19 != 0) && (*(short *)(lVar19 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar19 + 0x1a);
    sVar17 = *(short *)(lVar19 + 0x1a);
    do {
      sVar6 = *psVar2;
      if (sVar6 == sVar17) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_029a39f8;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_029a39f8:
        bVar8 = false;
      }
      if (bVar8) {
        if (*(long *)(lVar19 + 0x10) == 0) {
          return;
        }
        plVar18 = (long *)(*(long *)(lVar19 + 0x10) + -0x28);
        puVar12 = (undefined8 *)FUN_01df7f84(plVar18);
        plVar20 = (long *)*puVar12;
        if (plVar20 != (long *)0x0) {
          plVar3 = plVar20 + 5;
          do {
            lVar19 = *plVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *(int *)plVar3 = (int)lVar19 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((int)lVar19 == -1) {
LAB_029a3c08:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          nn::os::LockMutex((MutexType *)(param_5 + 0xa1));
          puVar12 = (undefined8 *)param_5[0x9a];
          puVar22 = (undefined8 *)param_5[0x9b];
          if (puVar12 != puVar22) {
            do {
              lVar19 = puVar12[4];
              if (*(char *)(lVar19 + 0x12) == '\0') {
                sVar17 = *(short *)(lVar19 + 0x10);
                uVar13 = FUN_00cf8198(*(undefined8 *)(lVar19 + 8));
                fVar37 = (float)uVar38;
                fVar33 = (float)uVar34;
                if (-1 < sVar17) {
                  FUN_00d2cffc(plVar20,(int)sVar17);
                  auVar28._0_4_ = fVar35 * fVar35 + fVar36 * fVar36;
                  auVar28._4_4_ = fVar37 * fVar37 + 0.0;
                  auVar28._8_4_ = fVar35 * fVar35 + fVar36 * fVar36;
                  auVar28._12_4_ = fVar37 * fVar37 + 0.0;
                  auVar28 = NEON_ext(auVar28,auVar28,4,1);
                  auVar39._0_4_ = fVar31 * fVar31 + fVar32 * fVar32;
                  auVar39._4_4_ = fVar33 * fVar33 + 0.0;
                  auVar39._8_4_ = fVar31 * fVar31 + fVar32 * fVar32;
                  auVar39._12_4_ = fVar33 * fVar33 + 0.0;
                  auVar39 = NEON_ext(auVar39,auVar39,4,1);
                  auVar23._0_4_ = auVar28._0_4_ + auVar28._4_4_;
                  auVar23._4_4_ = auVar28._8_4_ + auVar28._12_4_;
                  auVar23._8_4_ = auVar28._0_4_ + auVar28._4_4_;
                  auVar23._12_4_ = auVar28._8_4_ + auVar28._12_4_;
                  auVar28 = NEON_frsqrte(auVar23,4);
                  auVar24._0_4_ = auVar39._0_4_ + auVar39._4_4_;
                  auVar24._4_4_ = auVar39._8_4_ + auVar39._12_4_;
                  auVar24._8_4_ = auVar39._0_4_ + auVar39._4_4_;
                  auVar24._12_4_ = auVar39._8_4_ + auVar39._12_4_;
                  auVar45._0_4_ = auVar23._0_4_ * auVar28._0_4_;
                  auVar45._4_4_ = auVar23._4_4_ * auVar28._4_4_;
                  auVar45._8_4_ = auVar23._8_4_ * auVar28._8_4_;
                  auVar45._12_4_ = auVar23._12_4_ * auVar28._12_4_;
                  auVar39 = NEON_frsqrts(auVar28,auVar45,4);
                  auVar42._0_4_ = auVar28._0_4_ * auVar39._0_4_;
                  auVar42._4_4_ = auVar28._4_4_ * auVar39._4_4_;
                  auVar42._8_4_ = auVar28._8_4_ * auVar39._8_4_;
                  auVar42._12_4_ = auVar28._12_4_ * auVar39._12_4_;
                  auVar46._0_4_ = auVar23._0_4_ * auVar42._0_4_;
                  auVar46._4_4_ = auVar23._4_4_ * auVar42._4_4_;
                  auVar46._8_4_ = auVar23._8_4_ * auVar42._8_4_;
                  auVar46._12_4_ = auVar23._12_4_ * auVar42._12_4_;
                  iVar25 = -(uint)(auVar23._0_4_ == 0.0);
                  iVar29 = -(uint)(auVar23._4_4_ == 0.0);
                  iVar30 = -(uint)(auVar23._8_4_ == 0.0);
                  auVar28 = NEON_frsqrts(auVar42,auVar46,4);
                  auVar39 = NEON_frsqrte(auVar24,4);
                  fVar35 = fVar35 * auVar42._0_4_ * auVar28._0_4_;
                  fVar36 = fVar36 * auVar42._4_4_ * auVar28._4_4_;
                  fVar37 = fVar37 * auVar42._8_4_ * auVar28._8_4_;
                  auVar43._0_4_ = auVar24._0_4_ * auVar39._0_4_;
                  auVar43._4_4_ = auVar24._4_4_ * auVar39._4_4_;
                  auVar43._8_4_ = auVar24._8_4_ * auVar39._8_4_;
                  auVar43._12_4_ = auVar24._12_4_ * auVar39._12_4_;
                  auVar28 = NEON_frsqrts(auVar39,auVar43,4);
                  auVar44._0_4_ = auVar39._0_4_ * auVar28._0_4_;
                  auVar44._4_4_ = auVar39._4_4_ * auVar28._4_4_;
                  auVar44._8_4_ = auVar39._8_4_ * auVar28._8_4_;
                  auVar44._12_4_ = auVar39._12_4_ * auVar28._12_4_;
                  auVar47._0_4_ = auVar24._0_4_ * auVar44._0_4_;
                  auVar47._4_4_ = auVar24._4_4_ * auVar44._4_4_;
                  auVar47._8_4_ = auVar24._8_4_ * auVar44._8_4_;
                  auVar47._12_4_ = auVar24._12_4_ * auVar44._12_4_;
                  auVar28 = NEON_frsqrts(auVar44,auVar47,4);
                  fVar31 = fVar31 * auVar44._0_4_ * auVar28._0_4_;
                  fVar32 = fVar32 * auVar44._4_4_ * auVar28._4_4_;
                  fVar33 = fVar33 * auVar44._8_4_ * auVar28._8_4_;
                  uVar40 = CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                    CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                             ~(byte)((uint)iVar25 >> 0x10),
                                             CONCAT11((byte)((uint)fVar35 >> 8) &
                                                      ~(byte)((uint)iVar25 >> 8),
                                                      SUB41(fVar35,0) & ~(byte)iVar25)));
                  auVar41._0_8_ =
                       CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                                CONCAT16((byte)((uint)fVar36 >> 0x10) &
                                         ~(byte)((uint)iVar29 >> 0x10),
                                         CONCAT15((byte)((uint)fVar36 >> 8) &
                                                  ~(byte)((uint)iVar29 >> 8),
                                                  CONCAT14(SUB41(fVar36,0) & ~(byte)iVar29,uVar40)))
                               );
                  auVar41[8] = SUB41(fVar37,0) & ~(byte)iVar30;
                  auVar41[9] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar30 >> 8);
                  auVar41[10] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
                  auVar41[0xb] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
                  iVar25 = -(uint)(auVar24._0_4_ == 0.0);
                  iVar29 = -(uint)(auVar24._4_4_ == 0.0);
                  iVar30 = -(uint)(auVar24._8_4_ == 0.0);
                  uVar26 = CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                    CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                             ~(byte)((uint)iVar25 >> 0x10),
                                             CONCAT11((byte)((uint)fVar31 >> 8) &
                                                      ~(byte)((uint)iVar25 >> 8),
                                                      SUB41(fVar31,0) & ~(byte)iVar25)));
                  auVar27._0_8_ =
                       CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                                CONCAT16((byte)((uint)fVar32 >> 0x10) &
                                         ~(byte)((uint)iVar29 >> 0x10),
                                         CONCAT15((byte)((uint)fVar32 >> 8) &
                                                  ~(byte)((uint)iVar29 >> 8),
                                                  CONCAT14(SUB41(fVar32,0) & ~(byte)iVar29,uVar26)))
                               );
                  auVar27[8] = SUB41(fVar33,0) & ~(byte)iVar30;
                  auVar27[9] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar30 >> 8);
                  auVar27[10] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
                  auVar27[0xb] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
                  uStack_1bc = (undefined4)((ulong)auVar41._0_8_ >> 0x20);
                  if (((*PTR_DAT_047d8280 & 1) == 0) &&
                     (iVar25 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar25 != 0)) {
                    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d8280);
                  }
                  lVar19 = *(long *)PTR_DAT_047d8288;
                  local_f0 = (code *)CONCAT44(uStack_1bc,uVar40);
                  *(long *)PTR_DAT_047d8290 = lVar19;
                  local_d8 = param_4._0_8_;
                  fVar35 = -auVar27._8_4_;
                  fVar36 = 0.0;
                  uVar38 = 0;
                  fVar31 = -auVar41._8_4_;
                  fVar32 = 0.0;
                  uVar34 = 0;
                  uStack_e0 = (undefined4)((ulong)auVar27._0_8_ >> 0x20);
                  local_d0 = CONCAT44(local_d0._4_4_,-param_4._8_4_);
                  plVar14 = *(long **)(*(long *)(lVar19 + 0x200) + 0x60);
                  local_e8 = fVar31;
                  uStack_e4 = uVar26;
                  fStack_dc = fVar35;
                  (**(code **)(*plVar14 + 0x70))(plVar14,uVar13,&local_f0);
                }
              }
              uVar15 = FUN_01320390(puVar12);
              local_f4 = *(undefined4 *)(puVar12 + 5);
              if (((uVar15 & 1) == 0) || (param_5[0x61] == 0)) {
LAB_029a3dcc:
                (**(code **)(*param_5 + 0x18))(&local_190,param_5);
                local_108 = (undefined8 *)0x0;
                uStack_100 = 0;
                if ((long *)local_190[2] == param_5 + 5) {
                  FUN_010f50e4(&local_108,&local_190);
                }
                puVar5 = local_190;
                if (local_190 != (undefined8 *)0x0) {
                  psVar2 = (short *)(local_190 + 3);
                  do {
                    sVar17 = *psVar2;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar8) {
                      *psVar2 = sVar17 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (sVar17 == 1) {
                    piVar4 = (int *)((long)local_190 + 0x1c);
                    do {
                      iVar25 = *piVar4;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                      if (bVar8) {
                        *piVar4 = -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar25 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
                        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar19 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar19;
                      local_f0 = (code *)*puVar5;
                      FUN_00c44438(lVar19 + 0x8040,&local_f0);
                    }
                  }
                  else if (sVar17 == 0) goto LAB_029a4320;
                }
                local_f0 = (code *)0x0;
                local_e8 = 0.0;
                uStack_e4 = 0;
                uStack_e0 = 0;
                fStack_dc = 0.0;
                local_d8 = (long *)0x0;
                local_d0 = 0;
                uStack_c8 = 0;
                FUN_00f3c15c(&local_d0,&local_108);
                puVar5 = local_108;
                local_f0 = FUN_029a4ef4;
                local_e8 = 2.2674103e-37;
                uStack_e4 = 0;
                uStack_e0 = 0x29a50ec;
                fStack_dc = 0.0;
                local_d8 = (long *)&LAB_00f3c148;
                if (local_108 != (undefined8 *)0x0) {
                  psVar2 = (short *)(local_108 + 3);
                  do {
                    sVar17 = *psVar2;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar8) {
                      *psVar2 = sVar17 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (sVar17 == 1) {
                    piVar4 = (int *)((long)local_108 + 0x1c);
                    do {
                      iVar25 = *piVar4;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                      if (bVar8) {
                        *piVar4 = -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar25 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
                        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar19 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar19;
                      local_190 = (undefined8 *)*puVar5;
                      FUN_00c44438(lVar19 + 0x8040,&local_190);
                    }
                  }
                  else if (sVar17 == 0) {
LAB_029a4320:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()",
                               "ReleaseWeakReference",
                               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                               ,0x33,"Reference counter underflows.");
                  }
                }
                if (((*PTR_DAT_047d8280 & 1) == 0) &&
                   (iVar25 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar25 != 0)) {
                  FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d8280);
                }
                lVar19 = *(long *)PTR_DAT_047d8288;
                *(long *)PTR_DAT_047d8290 = lVar19;
                uVar13 = FUN_00cf8198(*(undefined8 *)(puVar12[4] + 8));
                iVar25 = FUN_0177ffac(lVar19,puVar12,uVar13,0);
                if (iVar25 == 0) {
                  local_108 = (undefined8 *)((ulong)local_108 & 0xffffffff00000000);
                  if (((uVar15 & 1) != 0) && (param_5[0x61] != 0)) {
                    FUN_013ee87c();
                  }
                }
                else {
                  FUN_0104f218(*(undefined8 *)(lVar19 + 0x220),puVar12,iVar25,uVar13,0,&local_f0,0);
                  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,iVar25);
                  if ((uVar15 & 1) != 0) {
                    nn::os::LockMutex((MutexType *)(param_5 + 0x25));
                    memset(&local_190,0,0x80);
                    puVar5 = (undefined8 *)param_5[0x3e];
                    if (puVar5 < (undefined8 *)param_5[0x3f]) {
                      lVar19 = param_5[0x40];
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar29 = __cxa_guard_acquire(&DAT_04865a38), iVar29 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      lVar21 = nn::os::GetTlsValue(DAT_04865a30);
                      uVar26 = local_f4;
                      if (lVar21 != 0) {
                        if (0xf < *(ulong *)(lVar21 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                          abort();
                        }
                        *(long *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = lVar19;
                        *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
                      }
                      *puVar5 = *puVar12;
                      puVar5[1] = puVar12[1];
                      puVar5[2] = puVar12[2];
                      plVar14 = (long *)puVar12[3];
                      puVar5[3] = plVar14;
                      if (plVar14 != (long *)0x0) {
                        (**(code **)(*plVar14 + 0x18))();
                      }
                      puVar5[6] = 0;
                      *(int *)(puVar5 + 4) = iVar25;
                      *(undefined4 *)((long)puVar5 + 0x24) = uVar26;
                      puVar5[7] = 0;
                      puVar5[8] = 0;
                      puVar5[9] = 0;
                      if (local_180 != (code *)0x0) {
                        (*local_180)(auStack_170,puVar5 + 10);
                        puVar5[9] = local_178;
                        puVar5[6] = local_190;
                        puVar5[7] = local_188;
                        puVar5[8] = local_180;
                      }
                      if (lVar21 != 0) {
                        *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
                      }
                      param_5[0x3e] = (long)(puVar5 + 0x16);
                    }
                    else {
                      FUN_013f134c(param_5 + 0x3d,puVar12,&local_108,&local_f4,&local_190);
                    }
                    pcVar9 = local_188;
                    if (local_188 != (code *)0x0) {
                      local_180 = (code *)0x0;
                      local_178 = 0;
                      local_190 = (undefined8 *)0x0;
                      local_188 = (code *)0x0;
                      (*pcVar9)(auStack_170);
                    }
                    nn::os::UnlockMutex((MutexType *)(param_5 + 0x25));
                  }
                }
                pcVar9 = (code *)CONCAT44(uStack_e4,local_e8);
                if (pcVar9 != (code *)0x0) {
                  uStack_e0 = 0;
                  fStack_dc = 0.0;
                  local_d8 = (long *)0x0;
                  local_f0 = (code *)0x0;
                  local_e8 = 0.0;
                  uStack_e4 = 0;
                  (*pcVar9)(&local_d0);
                }
              }
              else {
                local_f4 = FUN_029a2de4(*(undefined1 (*) [16])(param_5 + 0x66));
                uVar16 = FUN_00f1dff8(param_5[0x61],local_f4,puVar12);
                if ((uVar16 & 1) != 0) goto LAB_029a3dcc;
              }
              puVar12 = puVar12 + 6;
            } while (puVar12 != puVar22);
            puVar12 = (undefined8 *)param_5[0x9a];
            puVar22 = (undefined8 *)param_5[0x9b];
            if (puVar22 != puVar12) {
              if ((long *)puVar22[-3] != (long *)0x0) {
                (**(code **)(*(long *)puVar22[-3] + 0x20))();
              }
              if (puVar22 + -6 != puVar12) {
                do {
                  if ((long *)puVar22[-9] != (long *)0x0) {
                    (**(code **)(*(long *)puVar22[-9] + 0x20))();
                  }
                  puVar22 = puVar22 + -6;
                } while (puVar12 + 6 != puVar22);
              }
            }
          }
          param_5[0x9b] = (long)puVar12;
          nn::os::UnlockMutex((MutexType *)(param_5 + 0xa1));
          do {
            lVar19 = *plVar3;
            iVar25 = (int)lVar19 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *(int *)plVar3 = iVar25;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar25 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
          else if ((int)lVar19 == 0) {
LAB_029a3c30:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        (**(code **)(*plVar18 + 0x60))(plVar18);
        return;
      }
      sVar17 = sVar6;
    } while (sVar6 != 0);
  }
  return;
code_r0x029a3b40:
  sVar17 = sVar6;
  if (sVar6 == 0) goto LAB_029a38f8;
  goto LAB_029a3b14;
}


