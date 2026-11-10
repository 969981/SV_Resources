/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe3d00; name: FUN_00fe3d00
 */


void FUN_00fe3d00(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  *param_1 = 0;
  FUN_00fe3ff4(local_58,*(undefined8 *)(param_2 + 0xb0));
  if (local_58[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_58[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58[0] + 0x1a);
      sVar10 = *(short *)((long)local_58[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00fe3d80;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00fe3d80:
          bVar13 = false;
        }
        if (bVar13) {
          lVar9 = local_58[0][2];
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xe8);
            lVar11 = *plVar8;
            lVar7 = nn::os::GetCurrentThread();
            if (lVar7 == lVar11) {
              bVar13 = true;
              goto LAB_00fe3db4;
            }
            lVar7 = nn::os::GetCurrentThread();
            bVar13 = false;
            goto LAB_00fe3f6c;
          }
          break;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
LAB_00fe3e24:
    if (local_58[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58[0] + 3);
      do {
        sVar10 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_58[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_48 = *local_58[0];
          FUN_00c44438(lVar9 + 0x8040,&local_48);
        }
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_00fe3f6c:
  if (*plVar8 == 0) goto code_r0x00fe3f74;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
  bVar13 = false;
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
        while (*plVar8 == 0) {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar13) {
            *plVar8 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar13 = false;
          if (cVar5 == '\0') goto LAB_00fe3db4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00fe3db4:
  plVar8 = (long *)FUN_013e0df0(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
  if ((*(long **)(lVar9 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_013e0df0(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
    if (*(long **)(lVar9 + 0x140) == plVar8) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)0x0;
      if (*plVar8 != 0) {
        plVar12 = (long *)(*plVar8 + -0x20);
      }
    }
  }
  else {
    plVar12 = (long *)(*plVar8 + -0x20);
  }
  if (!bVar13) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x58))(plVar12);
  }
  *param_1 = plVar12;
  lVar7 = *(long *)(lVar9 + 8);
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar10 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
  }
  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00fe3e24;
code_r0x00fe3f74:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar4) {
    *plVar8 = lVar7;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00fe3db4;
  goto LAB_00fe3f6c;
}


