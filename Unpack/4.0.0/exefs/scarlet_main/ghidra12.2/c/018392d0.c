/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018392d0; name: FUN_018392d0
 */


void FUN_018392d0(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar11 = *(long *)*param_2;
  plVar9 = (long *)(lVar11 + 0x110);
  lVar10 = *plVar9;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar10) {
    bVar12 = true;
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    bVar12 = false;
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
        bVar12 = false;
        do {
          if (*plVar9 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
              while (*plVar9 == 0) {
                cVar4 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar12) {
                  *plVar9 = lVar8;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                bVar12 = false;
                if (cVar4 == '\0') goto LAB_0183930c;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_0183930c:
  plVar9 = (long *)FUN_01839520(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
  if ((*(long **)(lVar11 + 0x130) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_01839520(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168));
    if (*(long **)(lVar11 + 0x168) == plVar9) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar8 = *plVar9 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(lVar11 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
  }
  if (lVar8 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_00c43ef0(&local_58,lVar8 + 0x98);
    *param_1 = 0;
    param_1[1] = 0;
    if (local_58[2] == lVar8 + 0x28) {
      FUN_012968b4(param_1,&local_58);
    }
    puVar6 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


