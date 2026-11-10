/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025fdc8c; name: FUN_025fdc8c
 */


void FUN_025fdc8c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  short sVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  bool bVar17;
  long *plVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  lVar13 = *(long *)(param_1 + 0x18);
  if ((lVar13 != 0) && (sVar14 = *(short *)(lVar13 + 0x1a), sVar14 != 0)) {
    puVar16 = *(undefined8 **)(lVar13 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar8 != 0)) {
      uVar15 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar15;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar16 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        if (puVar16 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_025fdd18;
        puVar16 = (undefined8 *)*puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x025fdd8c:
  cVar7 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar17) {
    *plVar2 = lVar10;
    *(undefined8 *)(lVar13 + 0x60) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_025fdd94;
  goto LAB_025fdd80;
LAB_025fdd18:
  sVar6 = *psVar1;
  if (sVar6 == sVar14) {
    cVar7 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar14 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_025fdd3c;
    bVar17 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_025fdd3c:
    bVar17 = false;
  }
  if (!bVar17) {
    sVar14 = sVar6;
    if (sVar6 == 0) {
      return;
    }
    goto LAB_025fdd18;
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  plVar18 = (long *)(lVar13 + -0x28);
  plVar2 = (long *)(lVar13 + 0x58);
  do {
    lVar10 = *plVar2;
    cVar7 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar17) {
      *plVar2 = lVar10;
      *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)(lVar13 + 0x60);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar10) {
    lVar10 = nn::os::GetCurrentThread();
LAB_025fdd80:
    if (*plVar2 == 0 && *(long *)(lVar13 + 0x60) == 0) goto code_r0x025fdd8c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x68));
    do {
      if (*plVar2 != 0 || *(long *)(lVar13 + 0x60) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x68));
          while (*plVar2 == 0 && *(long *)(lVar13 + 0x60) == 0) {
            cVar7 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar17) {
              *plVar2 = lVar10;
              *(undefined8 *)(lVar13 + 0x60) = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_025fdd94;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = lVar10;
        *(undefined8 *)(lVar13 + 0x60) = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_025fdd94:
    bVar17 = false;
    goto LAB_025fdd98;
  }
  bVar17 = true;
LAB_025fdd98:
  FUN_00c65924(plVar18);
  local_80 = *param_2;
  uStack_78 = param_2[1];
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  local_70 = param_2[2];
  plVar11 = (long *)param_2[3];
  plStack_68 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  local_a0 = *param_3;
  uStack_98 = param_3[1];
  local_90 = param_3[2];
  plVar5 = (long *)param_3[3];
  plStack_88 = plVar5;
  if (plVar5 == (long *)0x0) {
    FUN_025fe1b0(param_1,uVar15,uVar15,&local_80,&local_a0);
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_025fe1b0(param_1,uVar15,uVar15,&local_80,&local_a0);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (*(char *)(lVar13 + 0x128) != '\0') {
    plVar11 = *(long **)(lVar13 + 0x120);
    do {
      lVar10 = *plVar11;
      lVar9 = plVar11[1];
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar10;
        plVar11[1] = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar3 = *plVar11;
      lVar4 = plVar11[1];
      if (lVar3 != lVar10 || lVar4 != lVar9) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_025fded4;
      }
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar10;
        *(long *)((long)plVar11 + 4) = lVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar12 = true;
LAB_025fded4:
    if (!bVar12) {
      do {
        lVar10 = *plVar11;
        lVar9 = plVar11[1];
        if (lVar10 != lVar3 || lVar9 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x025fe050;
        }
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar12) {
          *plVar11 = lVar3;
          *(long *)((long)plVar11 + 4) = lVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar12 = true;
joined_r0x025fe050:
      if (!bVar12) {
        do {
          lVar3 = *plVar11;
          lVar4 = plVar11[1];
          if (lVar3 != lVar10 || lVar4 != lVar9) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar10 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x025fe050;
          }
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar12) {
            *plVar11 = lVar10;
            *(long *)((long)plVar11 + 4) = lVar9 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar12 = true;
        lVar10 = lVar3;
        lVar9 = lVar4;
        goto joined_r0x025fe050;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 2));
  }
  *(undefined1 *)(lVar13 + 0x128) = 0;
  *(undefined8 *)(lVar13 + 0x120) = 0;
  if (*(char *)(lVar13 + 0x138) != '\0') {
    plVar11 = *(long **)(lVar13 + 0x130);
    do {
      lVar10 = *plVar11;
      lVar9 = plVar11[1];
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar10;
        plVar11[1] = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar3 = *plVar11;
      lVar4 = plVar11[1];
      if (lVar3 != lVar10 || lVar4 != lVar9) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_025fdf30;
      }
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = 0;
        *(long *)((long)plVar11 + 4) = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar12 = true;
LAB_025fdf30:
    if (!bVar12) {
      do {
        lVar10 = *plVar11;
        lVar9 = plVar11[1];
        if (lVar10 != lVar3 || lVar9 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x025fe12c;
        }
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar12) {
          *plVar11 = 0;
          *(long *)((long)plVar11 + 4) = lVar4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar12 = true;
joined_r0x025fe12c:
      if (!bVar12) {
        do {
          lVar3 = *plVar11;
          lVar4 = plVar11[1];
          if (lVar3 != lVar10 || lVar4 != lVar9) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar10 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x025fe12c;
          }
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar12) {
            *plVar11 = 0;
            *(long *)((long)plVar11 + 4) = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar12 = true;
        lVar10 = lVar3;
        lVar9 = lVar4;
        goto joined_r0x025fe12c;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 2));
  }
  *(undefined8 *)(lVar13 + 0x130) = 0;
  *(undefined1 *)(lVar13 + 0x138) = 0;
  if (!bVar17) {
    do {
      lVar10 = *plVar2;
      lVar9 = *(long *)(lVar13 + 0x60);
      cVar7 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = lVar10;
        *(long *)(lVar13 + 0x60) = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar13 + 0x60);
      if (lVar3 != lVar10 || lVar4 != lVar9) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto LAB_025fdf84;
      }
      cVar7 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = 0;
        *(long *)(lVar13 + 0x5c) = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar17 = true;
LAB_025fdf84:
    if (!bVar17) {
      do {
        lVar10 = *plVar2;
        lVar9 = *(long *)(lVar13 + 0x60);
        if (lVar10 != lVar3 || lVar9 != lVar4) {
          bVar17 = false;
          ClearExclusiveLocal();
          goto joined_r0x025fe170;
        }
        cVar7 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar17) {
          *plVar2 = 0;
          *(long *)(lVar13 + 0x5c) = lVar4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar17 = true;
joined_r0x025fe170:
      if (!bVar17) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar13 + 0x60);
          if (lVar3 != lVar10 || lVar4 != lVar9) {
            bVar17 = false;
            ClearExclusiveLocal();
            lVar10 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x025fe170;
          }
          cVar7 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar17) {
            *plVar2 = 0;
            *(long *)(lVar13 + 0x5c) = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar17 = true;
        lVar10 = lVar3;
        lVar9 = lVar4;
        goto joined_r0x025fe170;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x68));
  }
  lVar13 = *(long *)(lVar13 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar7 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar14 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x025fe01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar18 + 0x50))(plVar18);
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


