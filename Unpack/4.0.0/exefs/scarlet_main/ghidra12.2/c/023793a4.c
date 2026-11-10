/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023793a4; name: FUN_023793a4
 */


void FUN_023793a4(long *param_1,undefined4 param_2)

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
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  ulong local_68 [2];
  long *local_58;
  char local_50;
  undefined4 local_44;
  long local_28;
  
  if ((((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) || (lVar11 = *param_1, lVar11 == 0))
     || (*(short *)(lVar11 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar14 = *(short *)(lVar11 + 0x1a);
LAB_02379408:
  sVar5 = *psVar1;
  if (sVar5 == sVar14) {
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar14 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_02379430;
    bVar12 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02379430:
    bVar12 = false;
  }
  if (!bVar12) {
    sVar14 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_02379408;
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  plVar10 = (long *)(lVar11 + 0x58);
  plVar15 = (long *)(lVar11 + -0x28);
  local_50 = '\0';
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
  local_58 = plVar10;
  local_44 = param_2;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar9) {
    local_68[0] = CONCAT71(local_68[0]._1_7_,1);
    local_70 = plVar10;
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
          goto LAB_023794d4;
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
LAB_023794d4:
      lVar8 = lVar4;
      lVar13 = *(long *)(lVar11 + 0x60);
    } while (!bVar12);
    if (local_50 != '\0') {
      do {
        lVar9 = *local_58;
        lVar8 = local_58[1];
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(local_58,0x10);
        if (bVar12) {
          *local_58 = lVar9;
          local_58[1] = lVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar13 = *local_58;
        lVar4 = local_58[1];
        if (lVar13 != lVar9 || lVar4 != lVar8) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_02379528;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(local_58,0x10);
        if (bVar12) {
          *local_58 = lVar9;
          *(long *)((long)local_58 + 4) = lVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
LAB_02379528:
      if (!bVar12) {
        do {
          lVar9 = *local_58;
          lVar8 = local_58[1];
          if (lVar9 != lVar13 || lVar8 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x023797bc;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(local_58,0x10);
          if (bVar12) {
            *local_58 = lVar13;
            *(long *)((long)local_58 + 4) = lVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar12 = true;
joined_r0x023797bc:
        if (!bVar12) {
          do {
            lVar13 = *local_58;
            lVar4 = local_58[1];
            if (lVar13 != lVar9 || lVar4 != lVar8) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar9 = lVar13;
              lVar8 = lVar4;
              goto joined_r0x023797bc;
            }
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(local_58,0x10);
            if (bVar12) {
              *local_58 = lVar9;
              *(long *)((long)local_58 + 4) = lVar8 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar12 = true;
          lVar9 = lVar13;
          lVar8 = lVar4;
          goto joined_r0x023797bc;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_58 + 2));
    }
    local_58 = local_70;
    local_70 = (long *)0x0;
    local_50 = (char)local_68[0];
    local_68[0] = local_68[0] & 0xffffffffffffff00;
    FUN_00f08b20(&local_70);
  }
  plVar10 = *(long **)(lVar11 + 0x188);
  if (plVar10 == (long *)0x0) {
    local_80 = (long *)0x0;
    uStack_78 = 0;
  }
  else {
    (**(code **)(*plVar10 + 0x18))(&local_70);
    local_80 = (long *)0x0;
    uStack_78 = 0;
    if ((long *)local_70[2] == plVar10 + 5) {
      FUN_00cbc6dc(&local_80,&local_70);
    }
    plVar10 = local_70;
    if (local_70 != (long *)0x0) {
      plVar2 = local_70 + 3;
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
        piVar3 = (int *)((long)local_70 + 0x1c);
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
      else if (sVar14 == 0) goto LAB_02379674;
    }
  }
  local_70 = (long *)CONCAT71(local_70._1_7_,2);
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_00ca1ea4(local_68,&local_80);
  FUN_02379880(plVar15,param_1 + 2,&local_70,&local_44);
  FUN_00cecfd8(&local_70);
  plVar10 = local_80;
  if (local_80 != (long *)0x0) {
    plVar2 = local_80 + 3;
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
      piVar3 = (int *)((long)local_80 + 0x1c);
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
LAB_02379674:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00f08b20(&local_58);
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


