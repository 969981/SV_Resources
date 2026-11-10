/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0832c; name: FUN_01e0832c
 */


undefined1  [16] FUN_01e0832c(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  short sVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  undefined1 auVar13 [16];
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  lVar12 = *param_1;
  plVar7 = (long *)(lVar12 + 0x110);
  lVar10 = *plVar7;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar10) {
    lVar6 = nn::os::GetCurrentThread();
LAB_01e08364:
    if (*plVar7 == 0) goto code_r0x01e0836c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
          while (*plVar7 == 0) {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar11) {
              *plVar7 = lVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01e08374;
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
LAB_01e08374:
    bVar11 = false;
    goto LAB_01e08378;
  }
  bVar11 = true;
LAB_01e08378:
  plVar7 = (long *)FUN_01174c30(*(undefined8 *)(lVar12 + 0x128),*(undefined8 *)(lVar12 + 0x130));
  if ((*(long **)(lVar12 + 0x130) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_01174c30(*(undefined8 *)(lVar12 + 0x160),*(undefined8 *)(lVar12 + 0x168));
    if (*(long **)(lVar12 + 0x168) == plVar7) {
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
    *(undefined8 *)(lVar12 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
  }
  uVar14 = 0;
  uVar15 = 0;
  if ((lVar6 != 0) && (FUN_00e92dbc(local_50,lVar6), local_50[0] != (undefined8 *)0x0)) {
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      sVar9 = *(short *)((long)local_50[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e08494;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e08494:
          bVar11 = false;
        }
        if (bVar11) {
          plVar7 = (long *)0x0;
          if (local_50[0][2] != 0) {
            plVar7 = (long *)(local_50[0][2] + -0x28);
          }
          goto LAB_01e084a8;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar7 = (long *)0x0;
LAB_01e084a8:
    psVar1 = (short *)(local_50[0] + 3);
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
      piVar2 = (int *)((long)local_50[0] + 0x1c);
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
        local_38 = *local_50[0];
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
      uVar8 = FUN_01e08308(plVar7);
      lVar6 = plVar7[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      uVar14 = 0;
      if ((uVar8 & 0xff) != 0) {
        uVar14 = uVar8 >> 0x20;
      }
      do {
        uVar15 = 0;
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
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  auVar13._8_8_ = uVar15;
  auVar13._0_8_ = uVar14;
  return auVar13;
code_r0x01e0836c:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar11) {
    *plVar7 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e08374;
  goto LAB_01e08364;
}


