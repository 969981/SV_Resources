/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a96a6c; name: FUN_01a96a6c
 */


void FUN_01a96a6c(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  long *plVar15;
  long unaff_x25;
  undefined1 auStack_36 [6];
  
  plVar13 = (long *)(param_2 + 0x110);
  lVar12 = *plVar13;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar12) {
    lVar8 = nn::os::GetCurrentThread();
LAB_01a96aa8:
    if (*plVar13 == 0) goto code_r0x01a96ab0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
          while (*plVar13 == 0) {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar14) {
              *plVar13 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01a96ab8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar14) {
        *plVar13 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01a96ab8:
    bVar14 = false;
    goto LAB_01a96abc;
  }
  bVar14 = true;
LAB_01a96abc:
  puVar6 = PTR_DAT_047e0378;
  puVar5 = PTR_DAT_047e0370;
  plVar13 = *(long **)(param_2 + 0x128);
  plVar15 = *(long **)(param_2 + 0x130);
  if (plVar13 != plVar15) {
    do {
      if (*plVar13 != 0) {
        plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar13 + 8))();
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar11 = FUN_02650ce4();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar6) {
            uVar10 = (**(code **)(*(long *)*plVar13 + 0xc0))();
            if ((uVar10 & 1) == 0) goto LAB_01a96b18;
            break;
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar15);
    plVar13 = plVar15;
LAB_01a96b18:
    if ((plVar13 != *(long **)(param_2 + 0x130)) && (*plVar13 != 0)) {
      plVar13 = (long *)(*plVar13 + -0x20);
      goto LAB_01a96b80;
    }
  }
  plVar15 = *(long **)(param_2 + 0x160);
  plVar13 = *(long **)(param_2 + 0x168);
  if (plVar15 != plVar13) {
    do {
      if (*plVar15 != 0) {
        plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar15 + 8))();
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar11 = FUN_02650ce4();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar6) {
            uVar10 = (**(code **)(*(long *)*plVar15 + 0xc0))();
            if ((uVar10 & 1) == 0) goto LAB_01a96b70;
            break;
          }
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar13);
    plVar15 = plVar13;
LAB_01a96b70:
    if (plVar15 != *(long **)(param_2 + 0x168)) {
      plVar13 = (long *)0x0;
      if (*plVar15 != 0) {
        plVar13 = (long *)(*plVar15 + -0x20);
      }
      goto LAB_01a96b80;
    }
  }
  plVar13 = (long *)0x0;
LAB_01a96b80:
  if (!bVar14) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
  }
  if (plVar13 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  (**(code **)(*plVar13 + 0x18))(auStack_36 + -10);
  *param_1 = 0;
  param_1[1] = 0;
  plVar15 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 5;
  }
  if (*(long **)(unaff_x25 + 0x10) == plVar15) {
    FUN_02651748(param_1,auStack_36 + -10);
  }
  if (unaff_x25 != 0) {
    psVar1 = (short *)(unaff_x25 + 0x18);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)(unaff_x25 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
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
        FUN_00c44438(lVar8 + 0x8040,auStack_36 + 0x1e);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01a96ab0:
  cVar4 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar14) {
    *plVar13 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01a96ab8;
  goto LAB_01a96aa8;
}


