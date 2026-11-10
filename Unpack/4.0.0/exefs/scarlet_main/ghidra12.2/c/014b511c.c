/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014b511c; name: FUN_014b511c
 */


undefined8 FUN_014b511c(long *param_1)

{
  short *psVar1;
  MutexType *pMVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined4 uVar15;
  short sVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  bool bVar24;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  long *plStack_c8;
  long *local_c0;
  long *local_b8;
  long *plStack_b0;
  
  switch((int)param_1[0x15]) {
  case 0:
    lVar20 = param_1[0xf];
    if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar20 + 0x1a);
      sVar16 = *(short *)(lVar20 + 0x1a);
LAB_014b5f9c:
      sVar4 = *psVar1;
      if (sVar4 == sVar16) {
        cVar5 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar24) {
          *psVar1 = sVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_014b5fc0;
        bVar24 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014b5fc0:
        bVar24 = false;
      }
      if (!bVar24) goto code_r0x014b5fc8;
      lVar20 = *(long *)(lVar20 + 0x10);
      if (lVar20 != 0) {
        plVar18 = (long *)(lVar20 + -0x28);
        uVar12 = FUN_029eef40(plVar18);
        if ((uVar12 & 1) == 0) {
          iVar9 = 2;
        }
        else {
          uVar12 = FUN_0125cc64(plVar18,param_1 + 2);
          if ((uVar12 & 1) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = 1;
            *(undefined4 *)(param_1 + 0x15) = 5;
          }
        }
        lVar20 = *(long *)(lVar20 + 8);
        psVar1 = (short *)(lVar20 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar5 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar24) {
            *psVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar20 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))(plVar18);
        }
        else if (sVar16 == 0) goto LAB_014b6468;
        if (iVar9 == 2) {
          return 0;
        }
        if (iVar9 == 1) {
          return 1;
        }
      }
    }
LAB_014b5190:
    FUN_014b6650(param_1 + 0x16,(long)(32.0 / *(float *)(param_1 + 0x22)));
    plVar18 = (long *)param_1[0x1c];
    if (plVar18 != (long *)0x0) {
      FUN_00f619d4(plVar18 + 3,(long)(512.0 / *(float *)(plVar18 + 0xf)));
      for (plVar18 = (long *)*plVar18; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
        FUN_00f619d4(plVar18 + 3,(long)(512.0 / *(float *)(plVar18 + 0xf)));
      }
    }
    lVar20 = param_1[0x23];
    if ((ulong)(param_1[0x25] - lVar20 >> 5) < 0x200) {
      lVar17 = param_1[0x24];
      lVar10 = (**(code **)(*(long *)param_1[0x26] + 0x10))((long *)param_1[0x26],0x4000,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)param_1[0x26] + 0xe8))();
      }
      lVar20 = lVar10 + (lVar17 - lVar20 >> 5) * 0x20;
      plVar18 = (long *)param_1[0x23];
      plVar14 = (long *)param_1[0x24];
      if (plVar14 == plVar18) {
        lVar17 = lVar20;
        plVar14 = plVar18;
      }
      else {
        lVar19 = lVar20;
        do {
          lVar17 = param_1[0x26];
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar11 != 0) {
            if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_014b5fdc;
            *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar17;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          }
          lVar17 = plVar14[-4];
          plVar14[-4] = 0;
          *(long *)(lVar19 + -0x20) = lVar17;
          lVar3 = plVar14[-3];
          lVar17 = plVar14[-1];
          *(long *)(lVar19 + -0x10) = plVar14[-2];
          *(long *)(lVar19 + -8) = lVar17;
          lVar17 = lVar19 + -0x20;
          plVar14 = plVar14 + -4;
          *(long *)(lVar19 + -0x18) = lVar3;
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          lVar19 = lVar17;
        } while (plVar18 != plVar14);
        plVar18 = (long *)param_1[0x23];
        plVar14 = (long *)param_1[0x24];
      }
      lVar19 = param_1[0x25];
      param_1[0x23] = lVar17;
      param_1[0x24] = lVar20;
      param_1[0x25] = lVar10 + 0x4000;
      if (plVar14 != plVar18) {
        do {
          plVar22 = plVar14 + -4;
          lVar20 = *plVar22;
          *plVar22 = 0;
          if (lVar20 != 0) {
            FUN_014bac20(plVar14 + -3);
          }
          plVar14 = plVar22;
        } while (plVar18 != plVar22);
      }
      if (plVar18 != (long *)0x0) {
        plVar14 = (long *)param_1[0x26];
        uVar12 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar12 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar18,lVar19 - (long)plVar18,8);
        }
        else {
          FUN_00c48fe8(plVar14,plVar18,lVar19 - (long)plVar18,8);
        }
      }
    }
    lVar20 = param_1[0x2a];
    if ((ulong)(param_1[0x2c] - lVar20 >> 5) < 0x200) {
      lVar17 = param_1[0x2b];
      lVar10 = (**(code **)(*(long *)param_1[0x2d] + 0x10))((long *)param_1[0x2d],0x4000,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)param_1[0x2d] + 0xe8))();
      }
      lVar20 = lVar10 + (lVar17 - lVar20 >> 5) * 0x20;
      plVar18 = (long *)param_1[0x2a];
      plVar14 = (long *)param_1[0x2b];
      if (plVar14 == plVar18) {
        lVar17 = lVar20;
        plVar14 = plVar18;
      }
      else {
        lVar19 = lVar20;
        do {
          lVar17 = param_1[0x2d];
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar11 != 0) {
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_014b5fdc:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar17;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          }
          lVar17 = plVar14[-4];
          plVar14[-4] = 0;
          *(long *)(lVar19 + -0x20) = lVar17;
          lVar3 = plVar14[-3];
          lVar17 = plVar14[-1];
          *(long *)(lVar19 + -0x10) = plVar14[-2];
          *(long *)(lVar19 + -8) = lVar17;
          lVar17 = lVar19 + -0x20;
          plVar14 = plVar14 + -4;
          *(long *)(lVar19 + -0x18) = lVar3;
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          lVar19 = lVar17;
        } while (plVar18 != plVar14);
        plVar18 = (long *)param_1[0x2a];
        plVar14 = (long *)param_1[0x2b];
      }
      lVar19 = param_1[0x2c];
      param_1[0x2a] = lVar17;
      param_1[0x2b] = lVar20;
      param_1[0x2c] = lVar10 + 0x4000;
      if (plVar14 != plVar18) {
        do {
          plVar22 = plVar14 + -4;
          lVar20 = *plVar22;
          *plVar22 = 0;
          if (lVar20 != 0) {
            FUN_014bafe4(plVar14 + -3);
          }
          plVar14 = plVar22;
        } while (plVar18 != plVar22);
      }
      if (plVar18 != (long *)0x0) {
        plVar14 = (long *)param_1[0x2d];
        uVar12 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar12 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar18,lVar19 - (long)plVar18,8);
        }
        else {
          FUN_00c48fe8(plVar14,plVar18,lVar19 - (long)plVar18,8);
        }
      }
    }
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
  case 1:
    if ((char)param_1[0xd] != '\0') {
      if (*param_1 == 0) {
        return 0;
      }
      if (*(short *)(*param_1 + 0x1a) == 0) {
        return 0;
      }
      lVar20 = *param_1;
      *(undefined4 *)(param_1 + 0x15) = 4;
      if ((lVar20 == 0) || (sVar16 = *(short *)(lVar20 + 0x1a), sVar16 == 0)) {
LAB_014b548c:
        plVar18 = (long *)0x0;
        bVar24 = true;
      }
      else {
        puVar23 = *(undefined8 **)(lVar20 + 8);
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar9 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
            *(undefined8 *)PTR_DAT_047d39c8 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)PTR_DAT_047d39b8 = PTR_DAT_047d39c8;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        if (puVar23 == (undefined8 *)0x0) goto LAB_014b548c;
        psVar1 = (short *)(lVar20 + 0x1a);
        bVar24 = true;
        do {
          if (puVar23 == (undefined8 *)PTR_DAT_047d39b8) {
            bVar24 = true;
            goto LAB_014b6230;
          }
          puVar23 = (undefined8 *)*puVar23;
          plVar18 = (long *)0x0;
        } while (puVar23 != (undefined8 *)0x0);
      }
LAB_014b5494:
      if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd4c0);
      }
      *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
      lVar20 = FUN_014b65d8();
      if (((*PTR_DAT_047d8c58 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c58);
      }
      uVar13 = *(undefined8 *)PTR_DAT_047d8c60;
      *(undefined8 *)PTR_DAT_047d8c68 = uVar13;
      FUN_00cbf5d4(&local_100,uVar13,*(undefined8 *)(lVar20 + 8));
      plVar14 = (long *)FUN_00f3afb4(&local_e0,*(undefined8 *)(lVar20 + 8),&local_100);
      if (plVar14 == (long *)0x0) {
        local_f8 = (long *)0x0;
      }
      else {
        plVar22 = plVar14 + 5;
        do {
          lVar10 = *plVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *(int *)plVar22 = (int)lVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar10 == -1) goto LAB_014b6408;
        do {
          lVar10 = *plVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *(int *)plVar22 = (int)lVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        local_f8 = plVar14;
        if ((int)lVar10 == -1) goto LAB_014b6408;
      }
      plVar22 = local_f8;
      local_f0 = param_1;
      local_e8 = plVar18;
      nn::os::LockMutex((MutexType *)(lVar20 + 0x3d0));
      local_d0 = (code *)0x0;
      plStack_c8 = (long *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      local_c0 = plVar22;
      if (plVar22 == (long *)0x0) {
        plStack_b0 = plVar18;
        local_b8 = param_1;
      }
      else {
        plVar22 = plVar22 + 5;
        do {
          lVar10 = *plVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *(int *)plVar22 = (int)lVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar10 == -1) {
LAB_014b6408:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        plStack_b0 = local_e8;
        local_b8 = local_f0;
      }
      if (plStack_b0 != (long *)0x0) {
        (**(code **)(*plStack_b0 + 0x10))();
      }
      local_e0 = FUN_016fb478;
      local_d8 = FUN_02e69dec;
      local_d0 = FUN_02e69e80;
      plStack_c8 = (long *)&LAB_02e69f04;
      FUN_00dd17e4(lVar20 + 0x360,&local_e0);
      pcVar8 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (code *)0x0;
        plStack_c8 = (long *)0x0;
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar8)(&local_c0);
      }
      *(undefined8 *)(lVar20 + 0x3f8) = *(undefined8 *)(lVar20 + 0x3a8);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x3f0));
      nn::os::UnlockMutex((MutexType *)(lVar20 + 0x3d0));
      plVar22 = *(long **)(lVar20 + 0x400);
      plVar21 = *(long **)(lVar20 + 0x408);
      if (plVar22 != plVar21) {
        lVar20 = *plVar22;
        pMVar2 = (MutexType *)(lVar20 + 0x3f0);
        nn::os::LockMutex(pMVar2);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
        nn::os::UnlockMutex(pMVar2);
        if (plVar22 + 1 != plVar21) {
          lVar20 = plVar22[1];
          pMVar2 = (MutexType *)(lVar20 + 0x3f0);
          nn::os::LockMutex(pMVar2);
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
          nn::os::UnlockMutex(pMVar2);
          for (plVar22 = plVar22 + 2; plVar22 != plVar21; plVar22 = plVar22 + 1) {
            lVar20 = *plVar22;
            pMVar2 = (MutexType *)(lVar20 + 0x3f0);
            nn::os::LockMutex(pMVar2);
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
            nn::os::UnlockMutex(pMVar2);
          }
        }
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x18))();
      }
      if (local_f8 != (long *)0x0) {
        plVar22 = local_f8 + 5;
        do {
          lVar20 = *plVar22;
          iVar9 = (int)lVar20 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *(int *)plVar22 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_f8 + 0x10))();
        }
        else if ((int)lVar20 == 0) goto LAB_014b6440;
      }
      if (plVar14 != (long *)0x0) {
        plVar22 = plVar14 + 5;
        do {
          lVar20 = *plVar22;
          iVar9 = (int)lVar20 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *(int *)plVar22 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
        else if ((int)lVar20 == 0) {
LAB_014b6440:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_100 == (long *)0x0) goto LAB_014b5698;
      lVar20 = local_100[6];
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_014b568c;
    }
    uVar13 = FUN_01599798(param_1[0xe]);
    FUN_016fb66c(param_1,uVar13);
    uVar15 = 2;
    break;
  case 2:
    if ((char)param_1[0xd] != '\0') {
      if (*param_1 == 0) {
        return 0;
      }
      if (*(short *)(*param_1 + 0x1a) == 0) {
        return 0;
      }
      lVar20 = *param_1;
      *(undefined4 *)(param_1 + 0x15) = 4;
      if ((lVar20 != 0) && (sVar16 = *(short *)(lVar20 + 0x1a), sVar16 != 0)) {
        puVar23 = *(undefined8 **)(lVar20 + 8);
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar9 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
            *(undefined8 *)PTR_DAT_047d39c8 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)PTR_DAT_047d39b8 = PTR_DAT_047d39c8;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        if (puVar23 != (undefined8 *)0x0) {
          psVar1 = (short *)(lVar20 + 0x1a);
          bVar24 = true;
          do {
            if (puVar23 == (undefined8 *)PTR_DAT_047d39b8) {
              bVar24 = true;
              goto LAB_014b6344;
            }
            puVar23 = (undefined8 *)*puVar23;
            plVar18 = (long *)0x0;
          } while (puVar23 != (undefined8 *)0x0);
          goto LAB_014b577c;
        }
      }
LAB_014b5774:
      plVar18 = (long *)0x0;
      bVar24 = true;
      goto LAB_014b577c;
    }
    uVar13 = FUN_01599798(param_1[0xe]);
    FUN_01599178(param_1,uVar13);
    FUN_01599300(param_1);
    uVar15 = 3;
    break;
  case 3:
    if ((char)param_1[0xd] != '\0') {
      if (*param_1 == 0) {
        return 0;
      }
      if (*(short *)(*param_1 + 0x1a) == 0) {
        return 0;
      }
      lVar20 = *param_1;
      *(undefined4 *)(param_1 + 0x15) = 4;
      if ((lVar20 != 0) && (sVar16 = *(short *)(lVar20 + 0x1a), sVar16 != 0)) {
        puVar23 = *(undefined8 **)(lVar20 + 8);
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar7 = PTR_DAT_047d39c8, iVar9 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
            *(undefined8 *)puVar7 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)PTR_DAT_047d39b8 = puVar7;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        if (puVar23 != (undefined8 *)0x0) {
          psVar1 = (short *)(lVar20 + 0x1a);
          bVar24 = true;
          do {
            if (puVar23 == (undefined8 *)PTR_DAT_047d39b8) {
              bVar24 = true;
              goto LAB_014b6384;
            }
            puVar23 = (undefined8 *)*puVar23;
            plVar18 = (long *)0x0;
          } while (puVar23 != (undefined8 *)0x0);
          goto LAB_014b59b0;
        }
      }
LAB_014b59a8:
      plVar18 = (long *)0x0;
      bVar24 = true;
      goto LAB_014b59b0;
    }
    local_e0 = (code *)(PTR_DAT_047e32c8 + 0x10);
    local_d8 = (code *)0x0;
    lVar20 = param_1[0x11];
    plStack_c8 = param_1 + 0x31;
    local_d0 = (code *)0x0;
    FUN_017aeacc(lVar20,&local_d8);
    plVar18 = *(long **)(lVar20 + 0x10);
    if (plVar18 == (long *)0x0) {
      FUN_013e253c();
    }
    else {
      (**(code **)(*plVar18 + 0x38))(&local_f8,plVar18,&local_e0);
    }
    param_1[0x39] = (long)local_d0 - (long)local_d8;
    uVar15 = 5;
    break;
  case 4:
    goto switchD_014b5160_caseD_4;
  default:
    return 1;
  }
  *(undefined4 *)(param_1 + 0x15) = uVar15;
switchD_014b5160_caseD_4:
  return 0;
  while (plVar18 = (long *)0x0, sVar16 = sVar4, sVar4 != 0) {
LAB_014b6384:
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_014b63a8;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014b63a8:
      bVar6 = false;
    }
    if (bVar6) {
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_014b59a8;
      plVar18 = (long *)(*(long *)(lVar20 + 0x10) + -8);
      (**(code **)(*plVar18 + 0x10))(plVar18);
      bVar24 = false;
      break;
    }
  }
LAB_014b59b0:
  if (((*PTR_DAT_047dd4c0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  lVar20 = FUN_014b65d8();
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar13 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar13;
  FUN_00cbf5d4(&local_100,uVar13,*(undefined8 *)(lVar20 + 8));
  plVar14 = (long *)FUN_00f3afb4(&local_e0,*(undefined8 *)(lVar20 + 8),&local_100);
  if (plVar14 == (long *)0x0) {
    local_f8 = (long *)0x0;
  }
  else {
    plVar22 = plVar14 + 5;
    do {
      lVar10 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_014b6408;
    do {
      lVar10 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_f8 = plVar14;
    if ((int)lVar10 == -1) goto LAB_014b6408;
  }
  plVar22 = local_f8;
  local_f0 = param_1;
  local_e8 = plVar18;
  nn::os::LockMutex((MutexType *)(lVar20 + 0x3d0));
  local_d0 = (code *)0x0;
  plStack_c8 = (long *)0x0;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  local_c0 = plVar22;
  if (plVar22 == (long *)0x0) {
    plStack_b0 = plVar18;
    local_b8 = param_1;
  }
  else {
    plVar22 = plVar22 + 5;
    do {
      lVar10 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_014b6408;
    plStack_b0 = local_e8;
    local_b8 = local_f0;
  }
  if (plStack_b0 != (long *)0x0) {
    (**(code **)(*plStack_b0 + 0x10))();
  }
  local_e0 = FUN_017ae88c;
  local_d8 = FUN_02e6a13c;
  local_d0 = FUN_02e6a1d0;
  plStack_c8 = (long *)&LAB_02e6a254;
  FUN_00dd17e4(lVar20 + 0x360,&local_e0);
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    plStack_c8 = (long *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&local_c0);
  }
  *(undefined8 *)(lVar20 + 0x3f8) = *(undefined8 *)(lVar20 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar20 + 0x3d0));
  plVar22 = *(long **)(lVar20 + 0x400);
  plVar21 = *(long **)(lVar20 + 0x408);
  if (plVar22 != plVar21) {
    lVar20 = *plVar22;
    pMVar2 = (MutexType *)(lVar20 + 0x3f0);
    nn::os::LockMutex(pMVar2);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
    nn::os::UnlockMutex(pMVar2);
    if (plVar22 + 1 != plVar21) {
      lVar20 = plVar22[1];
      pMVar2 = (MutexType *)(lVar20 + 0x3f0);
      nn::os::LockMutex(pMVar2);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
      nn::os::UnlockMutex(pMVar2);
      for (plVar22 = plVar22 + 2; plVar22 != plVar21; plVar22 = plVar22 + 1) {
        lVar20 = *plVar22;
        pMVar2 = (MutexType *)(lVar20 + 0x3f0);
        nn::os::LockMutex(pMVar2);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
        nn::os::UnlockMutex(pMVar2);
      }
    }
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))();
  }
  if (local_f8 != (long *)0x0) {
    plVar22 = local_f8 + 5;
    do {
      lVar20 = *plVar22;
      iVar9 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_014b6440;
  }
  if (plVar14 != (long *)0x0) {
    plVar22 = plVar14 + 5;
    do {
      lVar20 = *plVar22;
      iVar9 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar20 == 0) goto LAB_014b6440;
  }
  if (local_100 == (long *)0x0) goto LAB_014b5698;
  lVar20 = local_100[6];
  psVar1 = (short *)(lVar20 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar16 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_014b568c;
code_r0x014b5fc8:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_014b5190;
  goto LAB_014b5f9c;
  while (plVar18 = (long *)0x0, sVar16 = sVar4, sVar4 != 0) {
LAB_014b6230:
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_014b6254;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014b6254:
      bVar6 = false;
    }
    if (bVar6) {
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_014b548c;
      plVar18 = (long *)(*(long *)(lVar20 + 0x10) + -8);
      (**(code **)(*plVar18 + 0x10))(plVar18);
      bVar24 = false;
      break;
    }
  }
  goto LAB_014b5494;
  while (plVar18 = (long *)0x0, sVar16 = sVar4, sVar4 != 0) {
LAB_014b6344:
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_014b6368;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014b6368:
      bVar6 = false;
    }
    if (bVar6) {
      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_014b5774;
      plVar18 = (long *)(*(long *)(lVar20 + 0x10) + -8);
      (**(code **)(*plVar18 + 0x10))(plVar18);
      bVar24 = false;
      break;
    }
  }
LAB_014b577c:
  if (((*PTR_DAT_047dd4c0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  lVar20 = FUN_014b65d8();
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar13 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar13;
  FUN_00cbf5d4(&local_100,uVar13,*(undefined8 *)(lVar20 + 8));
  plVar14 = (long *)FUN_00f3afb4(&local_e0,*(undefined8 *)(lVar20 + 8),&local_100);
  if (plVar14 == (long *)0x0) {
    local_f8 = (long *)0x0;
  }
  else {
    plVar22 = plVar14 + 5;
    do {
      lVar10 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_014b6408;
    do {
      lVar10 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_f8 = plVar14;
    if ((int)lVar10 == -1) goto LAB_014b6408;
  }
  plVar22 = local_f8;
  local_f0 = param_1;
  local_e8 = plVar18;
  nn::os::LockMutex((MutexType *)(lVar20 + 0x3d0));
  local_d0 = (code *)0x0;
  plStack_c8 = (long *)0x0;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  local_c0 = plVar22;
  if (plVar22 == (long *)0x0) {
    plStack_b0 = plVar18;
    local_b8 = param_1;
  }
  else {
    plVar22 = plVar22 + 5;
    do {
      lVar10 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) goto LAB_014b6408;
    plStack_b0 = local_e8;
    local_b8 = local_f0;
  }
  if (plStack_b0 != (long *)0x0) {
    (**(code **)(*plStack_b0 + 0x10))();
  }
  local_e0 = FUN_01598f7c;
  local_d8 = FUN_02e6a000;
  local_d0 = FUN_02e6a094;
  plStack_c8 = (long *)&LAB_02e6a118;
  FUN_00dd17e4(lVar20 + 0x360,&local_e0);
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    plStack_c8 = (long *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&local_c0);
  }
  *(undefined8 *)(lVar20 + 0x3f8) = *(undefined8 *)(lVar20 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar20 + 0x3d0));
  plVar22 = *(long **)(lVar20 + 0x400);
  plVar21 = *(long **)(lVar20 + 0x408);
  if (plVar22 != plVar21) {
    lVar20 = *plVar22;
    pMVar2 = (MutexType *)(lVar20 + 0x3f0);
    nn::os::LockMutex(pMVar2);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
    nn::os::UnlockMutex(pMVar2);
    if (plVar22 + 1 != plVar21) {
      lVar20 = plVar22[1];
      pMVar2 = (MutexType *)(lVar20 + 0x3f0);
      nn::os::LockMutex(pMVar2);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
      nn::os::UnlockMutex(pMVar2);
      for (plVar22 = plVar22 + 2; plVar22 != plVar21; plVar22 = plVar22 + 1) {
        lVar20 = *plVar22;
        pMVar2 = (MutexType *)(lVar20 + 0x3f0);
        nn::os::LockMutex(pMVar2);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar20 + 0x410));
        nn::os::UnlockMutex(pMVar2);
      }
    }
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))();
  }
  if (local_f8 != (long *)0x0) {
    plVar22 = local_f8 + 5;
    do {
      lVar20 = *plVar22;
      iVar9 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_014b6440;
  }
  if (plVar14 != (long *)0x0) {
    plVar22 = plVar14 + 5;
    do {
      lVar20 = *plVar22;
      iVar9 = (int)lVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar20 == 0) goto LAB_014b6440;
  }
  if (local_100 == (long *)0x0) goto LAB_014b5698;
  lVar20 = local_100[6];
  psVar1 = (short *)(lVar20 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar16 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_014b568c:
  if (sVar16 == 1) {
    *(undefined8 *)(lVar20 + 0x10) = 0;
    (**(code **)(*local_100 + 0x50))();
  }
  else if (sVar16 == 0) {
LAB_014b6468:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_014b5698:
  if (bVar24) {
    return 0;
  }
  (**(code **)(*plVar18 + 0x18))(plVar18);
  return 0;
}


