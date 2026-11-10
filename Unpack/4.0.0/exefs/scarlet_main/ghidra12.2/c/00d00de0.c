/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d00de0; name: FUN_00d00de0
 */


void FUN_00d00de0(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  short sVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  long lVar16;
  short sVar17;
  code *pcVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  code *pcVar21;
  ulong uVar22;
  ulong uVar23;
  code *pcVar24;
  long lStack_120;
  long *local_118;
  long local_110;
  MutexType *local_108;
  code *local_100 [4];
  long *plStack_e0;
  undefined4 local_d8;
  long local_78;
  undefined4 local_70;
  
  if ((*(char *)((long)param_2 + 4) != '\0') && ((int)param_2[1] == 0)) {
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 4;
  local_108 = (MutexType *)(param_1 + 0x24);
  nn::os::LockMutex(local_108);
  lVar16 = param_2[1];
  param_1[0x2e] = *param_2;
  *(int *)(param_1 + 0x2f) = (int)lVar16;
  bVar14 = false;
  if (*(char *)((long)param_1 + 0x174) != '\0') {
    bVar14 = (int)param_1[0x2f] == 0;
  }
  *(bool *)(param_1 + 0x3d) = bVar14;
  if ((*(byte *)(param_1 + 0x3d) & 1) != 0) {
    FUN_00d0185c(param_1,1);
  }
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x28));
  plVar1 = param_1 + 0x38;
  lVar16 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar8 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar16;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00d00ea8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x39));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x39));
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar16;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00d00ea8;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar16;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00d00ea8:
  lVar16 = param_1[0x31];
  lVar6 = param_1[0x32];
  lVar9 = lVar6 - lVar16;
  lVar10 = -((lVar6 - lVar16) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined8 *)((long)local_100 + lVar10 + -0x20);
  if (lVar9 != 0) {
    *puVar19 = 0;
    *(undefined8 *)((long)local_100 + lVar10 + -0x18) = 0;
    FUN_00d91d68(puVar19,lVar16);
    puVar20 = (undefined8 *)((long)local_100 + lVar10 + -0x10);
    *puVar20 = 0;
    *(undefined8 *)((long)local_100 + lVar10 + -8) = 0;
    FUN_00c96b7c(puVar20,lVar16 + 0x10);
    lVar16 = lVar16 + 0x20;
    if (lVar16 != lVar6) {
      puVar20 = (undefined8 *)((long)local_100 + lVar10);
      do {
        *puVar20 = 0;
        puVar20[1] = 0;
        FUN_00d91d68(puVar20,lVar16);
        puVar20[2] = 0;
        puVar20[3] = 0;
        FUN_00c96b7c(puVar20 + 2,lVar16 + 0x10);
        lVar16 = lVar16 + 0x20;
        puVar20 = puVar20 + 4;
      } while (lVar16 != lVar6);
    }
  }
  FUN_00d013e4(param_1 + 0x31);
  pcVar24 = (code *)param_1[0x32];
  pcVar18 = (code *)param_1[0x31];
  lVar16 = (long)pcVar24 - (long)pcVar18;
  if ((ulong)(lVar16 >> 5) < (ulong)(param_1[0x33] - (long)pcVar18 >> 5)) {
    plVar1 = param_1 + 0x34;
    local_100[3] = (code *)0x0;
    plStack_e0 = plVar1;
    if (lVar16 == 0) {
      local_100[0] = (code *)0x0;
    }
    else {
      local_100[0] = (code *)(**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar16,8);
      if (local_100[0] == (code *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
      pcVar18 = (code *)param_1[0x31];
      pcVar24 = (code *)param_1[0x32];
    }
    pcVar4 = local_100[0] + (lVar16 >> 5) * 0x20;
    if (pcVar24 == pcVar18) {
      pcVar21 = pcVar4;
      local_100[2] = pcVar24;
    }
    else {
      pcVar21 = pcVar4 + -0x20;
      local_100[1] = pcVar4;
      local_100[2] = pcVar4;
      local_100[3] = pcVar4;
      FUN_00d01ff4(plVar1,pcVar21,pcVar24 + -0x20);
      if (pcVar24 + -0x20 != pcVar18) {
        do {
          pcVar21 = pcVar21 + -0x20;
          FUN_00d01ff4(plVar1,pcVar21,pcVar24 + -0x40);
          pcVar24 = pcVar24 + -0x20;
        } while (pcVar18 + 0x20 != pcVar24);
      }
      pcVar24 = (code *)param_1[0x31];
      local_100[2] = (code *)param_1[0x32];
    }
    param_1[0x31] = (long)pcVar21;
    param_1[0x32] = (long)pcVar4;
    local_100[3] = (code *)param_1[0x33];
    param_1[0x33] = (long)pcVar4;
    local_100[0] = pcVar24;
    local_100[1] = pcVar24;
    FUN_00d015c0(local_100);
  }
  *(undefined1 *)((long)param_1 + 0x1ea) = 1;
  param_1[0x38] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x39));
  if (lVar9 != 0) {
    uVar23 = lVar9 >> 5;
    uVar22 = 0;
    uVar5 = uVar23;
    if (uVar23 < 2) {
      uVar5 = 1;
    }
    do {
      lVar16 = puVar19[uVar22 * 4];
      if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
        psVar3 = (short *)(lVar16 + 0x1a);
        sVar17 = *(short *)(lVar16 + 0x1a);
        do {
          sVar7 = *psVar3;
          if (sVar7 == sVar17) {
            cVar8 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar14) {
              *psVar3 = sVar17 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 != '\0') goto LAB_00d01298;
            bVar14 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00d01298:
            bVar14 = false;
          }
          if (bVar14) {
            local_110 = *(long *)(lVar16 + 0x10);
            if (local_110 != 0) {
              plStack_e0 = (long *)*param_2;
              local_d8 = (undefined4)param_2[1];
              local_100[3] = (code *)&LAB_02c755e0;
              local_100[0] = (code *)&LAB_02c755b8;
              local_100[1] = FUN_02c755c8;
              local_118 = (long *)(local_110 + -0x28);
              local_100[2] = (code *)&LAB_02c755cc;
              local_78 = *param_2;
              local_70 = (undefined4)param_2[1];
              FUN_028a1cb8(local_118,&local_78);
              pcVar18 = local_100[1];
              if (local_100[1] != (code *)0x0) {
                local_100[2] = (code *)0x0;
                local_100[3] = (code *)0x0;
                local_100[0] = (code *)0x0;
                local_100[1] = (code *)0x0;
                (*pcVar18)(&plStack_e0);
              }
              lVar16 = *(long *)(local_110 + 8);
              psVar3 = (short *)(lVar16 + 0x1a);
              do {
                sVar17 = *psVar3;
                cVar8 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar14) {
                  *psVar3 = sVar17 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (sVar17 == 1) {
                *(undefined8 *)(lVar16 + 0x10) = 0;
                (**(code **)(*local_118 + 0x50))();
              }
              else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            break;
          }
          sVar17 = sVar7;
        } while (sVar7 != 0);
      }
      puVar13 = PTR_DAT_047d3918;
      puVar12 = PTR_DAT_047d3910;
      puVar11 = PTR_DAT_047d3908;
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar5);
    do {
      puVar20 = (undefined8 *)puVar19[2];
      if (puVar20 != (undefined8 *)0x0) {
        psVar3 = (short *)(puVar20 + 3);
        do {
          sVar17 = *psVar3;
          cVar8 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar14) {
            *psVar3 = sVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar17 == 1) {
          piVar2 = (int *)((long)puVar20 + 0x1c);
          do {
            iVar15 = *piVar2;
            cVar8 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar15 != -1) {
            if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar12,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar11);
            }
            lVar16 = *(long *)puVar12;
            *(long *)puVar13 = lVar16;
            local_100[0] = (code *)*puVar20;
            FUN_00c44438(lVar16 + 0x8040,local_100);
          }
        }
        else if (sVar17 == 0) goto LAB_00d010c8;
      }
      puVar20 = (undefined8 *)*puVar19;
      if (puVar20 != (undefined8 *)0x0) {
        psVar3 = (short *)(puVar20 + 3);
        do {
          sVar17 = *psVar3;
          cVar8 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar14) {
            *psVar3 = sVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar17 == 1) {
          piVar2 = (int *)((long)puVar20 + 0x1c);
          do {
            iVar15 = *piVar2;
            cVar8 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar15 != -1) {
            if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar12,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar11);
            }
            lVar16 = *(long *)puVar12;
            *(long *)puVar13 = lVar16;
            local_100[0] = (code *)*puVar20;
            FUN_00c44438(lVar16 + 0x8040,local_100);
          }
        }
        else if (sVar17 == 0) {
LAB_00d010c8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      puVar19 = puVar19 + 4;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  *(undefined4 *)(param_1 + 0x2c) = 5;
  nn::os::UnlockMutex(local_108);
  return;
}


