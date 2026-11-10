/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0253b3f0; name: FUN_0253b3f0
 */


void FUN_0253b3f0(long param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5)

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
  bool bVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  short sVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *local_68;
  
  lVar12 = *(long *)(param_1 + 0x18);
  if ((lVar12 != 0) && (sVar15 = *(short *)(lVar12 + 0x1a), sVar15 != 0)) {
    puVar16 = *(undefined8 **)(lVar12 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar7 != 0)) {
      uVar10 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar10;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar16 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        if (puVar16 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_0253b484;
        puVar16 = (undefined8 *)*puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x0253b4f8:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar14) {
    *plVar2 = lVar9;
    *(undefined8 *)(lVar12 + 0x60) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0253b500;
  goto LAB_0253b4ec;
LAB_0253b484:
  sVar5 = *psVar1;
  if (sVar5 == sVar15) {
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar15 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_0253b4a8;
    bVar14 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0253b4a8:
    bVar14 = false;
  }
  if (!bVar14) {
    sVar15 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_0253b484;
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    return;
  }
  plVar17 = (long *)(lVar12 + -0x28);
  plVar2 = (long *)(lVar12 + 0x58);
  do {
    lVar9 = *plVar2;
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar14) {
      *plVar2 = lVar9;
      *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(lVar12 + 0x60);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar9) {
    lVar9 = nn::os::GetCurrentThread();
LAB_0253b4ec:
    if (*plVar2 == 0 && *(long *)(lVar12 + 0x60) == 0) goto code_r0x0253b4f8;
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
              *plVar2 = lVar9;
              *(undefined8 *)(lVar12 + 0x60) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0253b500;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = lVar9;
        *(undefined8 *)(lVar12 + 0x60) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0253b500:
    bVar14 = false;
    goto LAB_0253b504;
  }
  bVar14 = true;
LAB_0253b504:
  FUN_00c65924(plVar17);
  FUN_01cdace0(&local_68,plVar17);
  lVar9 = 0;
  if (param_2 != 0) {
    lVar9 = param_2 + -0x20;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  plVar13 = (long *)0x0;
  lVar9 = *(long *)(lVar9 + 0x60);
  if (lVar9 != 0) {
    if (*(short *)(lVar9 + 0x1a) == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar15 = *(short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar15) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_0253b8a0;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0253b8a0:
          bVar11 = false;
        }
        if (bVar11) {
          plVar13 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            plVar13 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          break;
        }
        plVar13 = (long *)0x0;
        sVar15 = sVar5;
      } while (sVar5 != 0);
    }
  }
  FUN_0253b95c(param_1,local_68,uVar10,plVar13,param_3 == 0,param_4,param_5);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x60))(plVar13);
  }
  if (*(char *)(lVar12 + 0x128) != '\0') {
    plVar13 = *(long **)(lVar12 + 0x120);
    do {
      lVar9 = *plVar13;
      lVar8 = plVar13[1];
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar11) {
        *plVar13 = lVar9;
        plVar13[1] = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar13;
      lVar4 = plVar13[1];
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_0253b600;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar11) {
        *plVar13 = lVar9;
        *(long *)((long)plVar13 + 4) = lVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
LAB_0253b600:
    if (!bVar11) {
      do {
        lVar9 = *plVar13;
        lVar8 = plVar13[1];
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto joined_r0x0253b780;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = lVar3;
          *(long *)((long)plVar13 + 4) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
joined_r0x0253b780:
      if (!bVar11) {
        do {
          lVar3 = *plVar13;
          lVar4 = plVar13[1];
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar11 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x0253b780;
          }
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar11) {
            *plVar13 = lVar9;
            *(long *)((long)plVar13 + 4) = lVar8 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar11 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x0253b780;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 2));
  }
  *(undefined1 *)(lVar12 + 0x128) = 0;
  *(undefined8 *)(lVar12 + 0x120) = 0;
  if (*(char *)(lVar12 + 0x138) != '\0') {
    plVar13 = *(long **)(lVar12 + 0x130);
    do {
      lVar9 = *plVar13;
      lVar8 = plVar13[1];
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar11) {
        *plVar13 = lVar9;
        plVar13[1] = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar13;
      lVar4 = plVar13[1];
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_0253b65c;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar11) {
        *plVar13 = 0;
        *(long *)((long)plVar13 + 4) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
LAB_0253b65c:
    if (!bVar11) {
      do {
        lVar9 = *plVar13;
        lVar8 = plVar13[1];
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto joined_r0x0253b914;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = 0;
          *(long *)((long)plVar13 + 4) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
joined_r0x0253b914:
      if (!bVar11) {
        do {
          lVar3 = *plVar13;
          lVar4 = plVar13[1];
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar11 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x0253b914;
          }
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar11) {
            *plVar13 = 0;
            *(long *)((long)plVar13 + 4) = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar11 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x0253b914;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 2));
  }
  *(undefined8 *)(lVar12 + 0x130) = 0;
  *(undefined1 *)(lVar12 + 0x138) = 0;
  if (local_68 != (long *)0x0) {
    lVar9 = local_68[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_0253b6e8;
  }
  if (!bVar14) {
    do {
      lVar9 = *plVar2;
      lVar8 = *(long *)(lVar12 + 0x60);
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = lVar9;
        *(long *)(lVar12 + 0x60) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar12 + 0x60);
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_0253b6b8;
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = 0;
        *(long *)(lVar12 + 0x5c) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar14 = true;
LAB_0253b6b8:
    if (!bVar14) {
      do {
        lVar9 = *plVar2;
        lVar8 = *(long *)(lVar12 + 0x60);
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x0253b8d0;
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
joined_r0x0253b8d0:
      if (!bVar14) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar12 + 0x60);
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x0253b8d0;
          }
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar14) {
            *plVar2 = 0;
            *(long *)(lVar12 + 0x5c) = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar14 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x0253b8d0;
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
LAB_0253b6e8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


