/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02456740; name: FUN_02456740
 */


void FUN_02456740(long *param_1)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  short sVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *local_38;
  
  lVar12 = param_1[3];
  if ((lVar12 != 0) && (sVar15 = *(short *)(lVar12 + 0x1a), sVar15 != 0)) {
    puVar16 = *(undefined8 **)(lVar12 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar8 != 0)) {
      uVar11 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar11;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar16 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        if (puVar16 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_024567b4;
        puVar16 = (undefined8 *)*puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x02456828:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar14) {
    *plVar2 = lVar10;
    *(undefined8 *)(lVar12 + 0x60) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02456830;
  goto LAB_0245681c;
LAB_024567b4:
  sVar5 = *psVar1;
  if (sVar5 == sVar15) {
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar15 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_024567d8;
    bVar14 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_024567d8:
    bVar14 = false;
  }
  if (!bVar14) {
    sVar15 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_024567b4;
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    return;
  }
  plVar17 = (long *)(lVar12 + -0x28);
  plVar2 = (long *)(lVar12 + 0x58);
  do {
    lVar10 = *plVar2;
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar14) {
      *plVar2 = lVar10;
      *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(lVar12 + 0x60);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar10) {
    lVar10 = nn::os::GetCurrentThread();
LAB_0245681c:
    if (*plVar2 == 0 && *(long *)(lVar12 + 0x60) == 0) goto code_r0x02456828;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
    do {
      if (*plVar2 != 0 || *(long *)(lVar12 + 0x60) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
          while (*plVar2 == 0 && *(long *)(lVar12 + 0x60) == 0) {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar14) {
              *plVar2 = lVar10;
              *(undefined8 *)(lVar12 + 0x60) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02456830;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = lVar10;
        *(undefined8 *)(lVar12 + 0x60) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02456830:
    bVar14 = false;
    goto LAB_02456834;
  }
  bVar14 = true;
LAB_02456834:
  FUN_00c65924(plVar17);
  lVar10 = *param_1;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar15 = *(short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar15) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_024569c0;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_024569c0:
        bVar7 = false;
      }
      if (bVar7) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar13 = (long *)(lVar10 + -0x28);
          local_38 = param_1 + 2;
          FUN_00cf6594(plVar13,&local_38);
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar15 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
          }
          else if (sVar15 == 0) goto LAB_02456908;
        }
        break;
      }
      sVar15 = sVar5;
    } while (sVar5 != 0);
  }
  FUN_00f0893c(plVar17);
  if (!bVar14) {
    do {
      lVar10 = *plVar2;
      lVar9 = *(long *)(lVar12 + 0x60);
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = lVar10;
        *(long *)(lVar12 + 0x60) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar12 + 0x60);
      if (lVar3 != lVar10 || lVar4 != lVar9) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_024568d8;
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = 0;
        *(long *)(lVar12 + 0x5c) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar14 = true;
LAB_024568d8:
    if (!bVar14) {
      do {
        lVar10 = *plVar2;
        lVar9 = *(long *)(lVar12 + 0x60);
        if (lVar10 != lVar3 || lVar9 != lVar4) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x02456a60;
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar14) {
          *plVar2 = 0;
          *(long *)(lVar12 + 0x5c) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar14 = true;
joined_r0x02456a60:
      if (!bVar14) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar12 + 0x60);
          if (lVar3 != lVar10 || lVar4 != lVar9) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar10 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x02456a60;
          }
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar14) {
            *plVar2 = 0;
            *(long *)(lVar12 + 0x5c) = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar14 = true;
        lVar10 = lVar3;
        lVar9 = lVar4;
        goto joined_r0x02456a60;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x68));
  }
  lVar12 = *(long *)(lVar12 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
    return;
  }
  if (sVar15 != 0) {
    return;
  }
LAB_02456908:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


