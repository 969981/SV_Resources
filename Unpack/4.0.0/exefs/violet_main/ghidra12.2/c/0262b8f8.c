/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0262b8f8; name: FUN_0262b8f8
 */


void FUN_0262b8f8(undefined4 param_1,undefined4 param_2,long param_3)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  short sVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *local_48;
  
  lVar14 = *(long *)(param_3 + 0x18);
  if ((lVar14 != 0) && (sVar15 = *(short *)(lVar14 + 0x1a), sVar15 != 0)) {
    puVar16 = *(undefined8 **)(lVar14 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar7 != 0)) {
      uVar10 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar10;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar16 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        if (puVar16 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_0262b970;
        puVar16 = (undefined8 *)*puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x0262b9e4:
  cVar6 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar13) {
    *plVar2 = lVar9;
    *(undefined8 *)(lVar14 + 0x60) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0262b9ec;
  goto LAB_0262b9d8;
LAB_0262b970:
  sVar5 = *psVar1;
  if (sVar5 == sVar15) {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar15 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_0262b994;
    bVar13 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0262b994:
    bVar13 = false;
  }
  if (!bVar13) {
    sVar15 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_0262b970;
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    return;
  }
  plVar17 = (long *)(lVar14 + -0x28);
  plVar2 = (long *)(lVar14 + 0x58);
  do {
    lVar9 = *plVar2;
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *plVar2 = lVar9;
      *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(lVar14 + 0x60);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar9) {
    lVar9 = nn::os::GetCurrentThread();
LAB_0262b9d8:
    if (*plVar2 == 0 && *(long *)(lVar14 + 0x60) == 0) goto code_r0x0262b9e4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x68));
    do {
      if (*plVar2 != 0 || *(long *)(lVar14 + 0x60) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x68));
          while (*plVar2 == 0 && *(long *)(lVar14 + 0x60) == 0) {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar13) {
              *plVar2 = lVar9;
              *(undefined8 *)(lVar14 + 0x60) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0262b9ec;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar9;
        *(undefined8 *)(lVar14 + 0x60) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0262b9ec:
    bVar13 = false;
    goto LAB_0262b9f0;
  }
  bVar13 = true;
LAB_0262b9f0:
  FUN_00c65924(plVar17);
  FUN_01cdace0(&local_48,plVar17);
  FUN_0262bda8(param_1,param_2,param_3,local_48,*(undefined8 *)(param_3 + 0x28),
               *(undefined8 *)(param_3 + 0x28));
  if (*(char *)(lVar14 + 0x128) != '\0') {
    plVar11 = *(long **)(lVar14 + 0x120);
    do {
      lVar9 = *plVar11;
      lVar8 = plVar11[1];
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar9;
        plVar11[1] = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar11;
      lVar4 = plVar11[1];
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0262bab4;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar9;
        *(long *)((long)plVar11 + 4) = lVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
LAB_0262bab4:
    if (!bVar12) {
      do {
        lVar9 = *plVar11;
        lVar8 = plVar11[1];
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0262bc34;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar12) {
          *plVar11 = lVar3;
          *(long *)((long)plVar11 + 4) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
joined_r0x0262bc34:
      if (!bVar12) {
        do {
          lVar3 = *plVar11;
          lVar4 = plVar11[1];
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x0262bc34;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar12) {
            *plVar11 = lVar9;
            *(long *)((long)plVar11 + 4) = lVar8 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar12 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x0262bc34;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 2));
  }
  *(undefined1 *)(lVar14 + 0x128) = 0;
  *(undefined8 *)(lVar14 + 0x120) = 0;
  if (*(char *)(lVar14 + 0x138) != '\0') {
    plVar11 = *(long **)(lVar14 + 0x130);
    do {
      lVar9 = *plVar11;
      lVar8 = plVar11[1];
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar9;
        plVar11[1] = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar11;
      lVar4 = plVar11[1];
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0262bb10;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = 0;
        *(long *)((long)plVar11 + 4) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
LAB_0262bb10:
    if (!bVar12) {
      do {
        lVar9 = *plVar11;
        lVar8 = plVar11[1];
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0262bd24;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar12) {
          *plVar11 = 0;
          *(long *)((long)plVar11 + 4) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
joined_r0x0262bd24:
      if (!bVar12) {
        do {
          lVar3 = *plVar11;
          lVar4 = plVar11[1];
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x0262bd24;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar12) {
            *plVar11 = 0;
            *(long *)((long)plVar11 + 4) = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar12 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x0262bd24;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 2));
  }
  *(undefined8 *)(lVar14 + 0x130) = 0;
  *(undefined1 *)(lVar14 + 0x138) = 0;
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_0262bb9c;
  }
  if (!bVar13) {
    do {
      lVar9 = *plVar2;
      lVar8 = *(long *)(lVar14 + 0x60);
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar9;
        *(long *)(lVar14 + 0x60) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar14 + 0x60);
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_0262bb6c;
      }
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = 0;
        *(long *)(lVar14 + 0x5c) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar13 = true;
LAB_0262bb6c:
    if (!bVar13) {
      do {
        lVar9 = *plVar2;
        lVar8 = *(long *)(lVar14 + 0x60);
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x0262bd68;
        }
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *plVar2 = 0;
          *(long *)(lVar14 + 0x5c) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar13 = true;
joined_r0x0262bd68:
      if (!bVar13) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar14 + 0x60);
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x0262bd68;
          }
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar13) {
            *plVar2 = 0;
            *(long *)(lVar14 + 0x5c) = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar13 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x0262bd68;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x68));
  }
  lVar14 = *(long *)(lVar14 + 8);
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
    return;
  }
  if (sVar15 != 0) {
    return;
  }
LAB_0262bb9c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


