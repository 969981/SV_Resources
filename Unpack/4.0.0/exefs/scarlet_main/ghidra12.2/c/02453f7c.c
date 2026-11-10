/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02453f7c; name: FUN_02453f7c
 */


void FUN_02453f7c(long *param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  ulong local_60 [2];
  long *local_50;
  char local_48;
  long local_28;
  
  if ((((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) || (lVar11 = *param_1, lVar11 == 0))
     || (*(short *)(lVar11 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar14 = *(short *)(lVar11 + 0x1a);
LAB_02453fdc:
  sVar5 = *psVar1;
  if (sVar5 == sVar14) {
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar14 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_02454004;
    bVar12 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02454004:
    bVar12 = false;
  }
  if (!bVar12) {
    sVar14 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_02453fdc;
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  plVar10 = (long *)(lVar11 + 0x58);
  plVar15 = (long *)(lVar11 + -0x28);
  local_48 = '\0';
  do {
    lVar9 = *plVar10;
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar12) {
      *plVar10 = lVar9;
      *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(lVar11 + 0x60);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_50 = plVar10;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar9) {
    local_60[0] = CONCAT71(local_60[0]._1_7_,1);
    local_68 = plVar10;
    lVar9 = nn::os::GetCurrentThread();
    do {
      lVar8 = *plVar10;
      lVar13 = *(long *)(lVar11 + 0x60);
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar12) {
        *plVar10 = lVar8;
        *(long *)(lVar11 + 0x60) = lVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      while ((lVar8 != 0 && (lVar9 != lVar8))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
        do {
          lVar8 = *plVar10;
          lVar13 = *(long *)(lVar11 + 0x60);
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar12) {
            *plVar10 = lVar8;
            *(long *)(lVar11 + 0x60) = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      do {
        lVar4 = *plVar10;
        if (lVar4 != lVar8 || *(long *)(lVar11 + 0x60) != lVar13) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_024540a8;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar12) {
          *plVar10 = lVar8;
          *(long *)(lVar11 + 0x5c) = lVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
LAB_024540a8:
      lVar8 = lVar4;
      lVar13 = *(long *)(lVar11 + 0x60);
    } while (!bVar12);
    if (local_48 != '\0') {
      do {
        lVar9 = *local_50;
        lVar8 = local_50[1];
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(local_50,0x10);
        if (bVar12) {
          *local_50 = lVar9;
          local_50[1] = lVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar13 = *local_50;
        lVar4 = local_50[1];
        if (lVar13 != lVar9 || lVar4 != lVar8) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_024540fc;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(local_50,0x10);
        if (bVar12) {
          *local_50 = lVar9;
          *(long *)((long)local_50 + 4) = lVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
LAB_024540fc:
      if (!bVar12) {
        do {
          lVar9 = *local_50;
          lVar8 = local_50[1];
          if (lVar9 != lVar13 || lVar8 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x0245438c;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(local_50,0x10);
          if (bVar12) {
            *local_50 = lVar13;
            *(long *)((long)local_50 + 4) = lVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar12 = true;
joined_r0x0245438c:
        if (!bVar12) {
          do {
            lVar13 = *local_50;
            lVar4 = local_50[1];
            if (lVar13 != lVar9 || lVar4 != lVar8) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar9 = lVar13;
              lVar8 = lVar4;
              goto joined_r0x0245438c;
            }
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(local_50,0x10);
            if (bVar12) {
              *local_50 = lVar9;
              *(long *)((long)local_50 + 4) = lVar8 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar12 = true;
          lVar9 = lVar13;
          lVar8 = lVar4;
          goto joined_r0x0245438c;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_50 + 2));
    }
    local_50 = local_68;
    local_68 = (long *)0x0;
    local_48 = (char)local_60[0];
    local_60[0] = local_60[0] & 0xffffffffffffff00;
    FUN_00f08b20(&local_68);
  }
  plVar10 = *(long **)(lVar11 + 0x188);
  if (plVar10 == (long *)0x0) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
  }
  else {
    (**(code **)(*plVar10 + 0x18))(&local_68);
    local_78 = (long *)0x0;
    uStack_70 = 0;
    if ((long *)local_68[2] == plVar10 + 5) {
      FUN_00cbc6dc(&local_78,&local_68);
    }
    plVar10 = local_68;
    if (local_68 != (long *)0x0) {
      plVar2 = local_68 + 3;
      do {
        sVar14 = (short)*plVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar12) {
          *(short *)plVar2 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        piVar3 = (int *)((long)local_68 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar12) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *plVar10;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar14 == 0) goto LAB_02454244;
    }
  }
  local_68 = (long *)CONCAT71(local_68._1_7_,2);
  local_60[0] = 0;
  local_60[1] = 0;
  FUN_00ca1ea4(local_60,&local_78);
  FUN_02454450(plVar15,param_1 + 2,&local_68);
  FUN_00cecfd8(&local_68);
  plVar10 = local_78;
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 3;
    do {
      sVar14 = (short)*plVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *(short *)plVar2 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *plVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar14 == 0) {
LAB_02454244:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00f08b20(&local_50);
  lVar11 = *(long *)(lVar11 + 8);
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
    return;
  }
  if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


