/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117713c; name: FUN_0117713c
 */


void FUN_0117713c(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  if (*param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar10 = *(long *)(*param_1 + 0x10);
    lVar11 = 0;
    if (lVar10 != 0) {
      lVar11 = lVar10 + -0x28;
    }
  }
  plVar8 = (long *)(lVar11 + 0x110);
  lVar12 = *plVar8;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar12) {
    lVar10 = nn::os::GetCurrentThread();
    bVar13 = false;
LAB_01177404:
    if (*plVar8 == 0) goto code_r0x0117740c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
    bVar13 = false;
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar13) {
              *plVar8 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            bVar13 = false;
            if (cVar4 == '\0') goto LAB_01177188;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_01177188;
  }
  bVar13 = true;
LAB_01177188:
  plVar7 = (long *)FUN_01177470(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
  if ((*(long **)(lVar11 + 0x130) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_01177470(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168));
    if (*(long **)(lVar11 + 0x168) == plVar7) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (*plVar7 != 0) {
        lVar10 = *plVar7 + -0x20;
      }
    }
  }
  else {
    lVar10 = *plVar7 + -0x20;
  }
  if (!bVar13) {
    *(undefined8 *)(lVar11 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
  }
  if (lVar10 == 0) {
    lVar12 = *plVar8;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar12) {
      lVar10 = nn::os::GetCurrentThread();
LAB_011771e4:
      if (*plVar8 == 0) goto code_r0x011771ec;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
            while (*plVar8 == 0) {
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar13) {
                *plVar8 = lVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_011771f4;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar13) {
          *plVar8 = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_011771f4:
      bVar13 = false;
      goto LAB_011771f8;
    }
    bVar13 = true;
LAB_011771f8:
    plVar8 = (long *)FUN_01177590(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
    if ((*(long **)(lVar11 + 0x130) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_01177590(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168))
      ;
      if (*(long **)(lVar11 + 0x168) == plVar8) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if (*plVar8 != 0) {
          lVar10 = *plVar8 + -0x20;
        }
      }
    }
    else {
      lVar10 = *plVar8 + -0x20;
    }
    if (!bVar13) {
      *(undefined8 *)(lVar11 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
    }
    if (lVar10 == 0) {
      return;
    }
    uVar9 = 2;
  }
  else {
    uVar9 = 1;
  }
  FUN_011776a4(local_58,param_1,0,uVar9);
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *local_58[0];
        FUN_00c44438(lVar11 + 0x8040,&local_48);
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
  return;
code_r0x0117740c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar5) {
    *plVar8 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01177188;
  goto LAB_01177404;
code_r0x011771ec:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar13) {
    *plVar8 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_011771f4;
  goto LAB_011771e4;
}


