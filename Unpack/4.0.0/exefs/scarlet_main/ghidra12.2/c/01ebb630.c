/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebb630; name: FUN_01ebb630
 */


undefined4 FUN_01ebb630(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  long lVar10;
  bool bVar11;
  undefined4 local_4c;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar8 = *param_1;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01ebb698;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ebb698:
        bVar11 = false;
      }
      if (bVar11) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return 0;
        }
        plVar7 = (long *)(lVar8 + 0xe8);
        lVar10 = *plVar7;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 == lVar10) {
          bVar11 = true;
          goto LAB_01ebb6e4;
        }
        lVar6 = nn::os::GetCurrentThread();
        goto LAB_01ebb6d0;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
LAB_01ebb6d0:
  if (*plVar7 == 0) {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar11) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01ebb6e0;
    goto LAB_01ebb6d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar11) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01ebb6e0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar11) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01ebb6e0:
  bVar11 = false;
LAB_01ebb6e4:
  plVar7 = (long *)FUN_018348f0(*(undefined8 *)(lVar8 + 0x100),*(undefined8 *)(lVar8 + 0x108));
  if ((*(long **)(lVar8 + 0x108) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_018348f0(*(undefined8 *)(lVar8 + 0x138),*(undefined8 *)(lVar8 + 0x140));
    if (*(long **)(lVar8 + 0x140) == plVar7) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*plVar7 != 0) {
        lVar6 = *plVar7 + -0x20;
      }
    }
  }
  else {
    lVar6 = *plVar7 + -0x20;
  }
  if (!bVar11) {
    *(undefined8 *)(lVar8 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0xf0));
  }
  local_4c = 0;
  if ((lVar6 != 0) && (FUN_00e92dbc(local_48,lVar6), local_48[0] != (undefined8 *)0x0)) {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48[0] + 0x1a);
      sVar9 = *(short *)((long)local_48[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01ebb854;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01ebb854:
          bVar11 = false;
        }
        if (bVar11) {
          plVar7 = (long *)0x0;
          if (local_48[0][2] != 0) {
            plVar7 = (long *)(local_48[0][2] + -0x28);
          }
          goto LAB_01ebb868;
        }
        sVar9 = sVar3;
        if (sVar3 == 0) break;
      } while( true );
    }
    plVar7 = (long *)0x0;
LAB_01ebb868:
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar6 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar6;
        local_38 = *local_48[0];
        FUN_00c44438(lVar6 + 0x8040,&local_38);
      }
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar7 != (long *)0x0) {
      local_4c = FUN_01ebcefc(plVar7);
      lVar6 = plVar7[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar9 == 0) goto LAB_01ebb7d8;
    }
  }
  lVar6 = *(long *)(lVar8 + 8);
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))();
    return local_4c;
  }
  if (sVar9 != 0) {
    return local_4c;
  }
LAB_01ebb7d8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.",local_4c);
}


