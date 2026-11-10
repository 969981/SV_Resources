/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02601ccc; name: FUN_02601ccc
 */


void FUN_02601ccc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  short sVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *plStack_70;
  long *local_68;
  
  lVar14 = *(long *)(param_1 + 0x18);
  if ((lVar14 != 0) && (sVar16 = *(short *)(lVar14 + 0x1a), sVar16 != 0)) {
    puVar17 = *(undefined8 **)(lVar14 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar9 != 0)) {
      uVar18 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar18;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar17 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        if (puVar17 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_02601d58;
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x02601dcc:
  cVar7 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar19) {
    *plVar2 = lVar11;
    *(undefined8 *)(lVar14 + 0x60) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_02601dd4;
  goto LAB_02601dc0;
LAB_02601d58:
  sVar6 = *psVar1;
  if (sVar6 == sVar16) {
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar19) {
      *psVar1 = sVar16 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_02601d7c;
    bVar19 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02601d7c:
    bVar19 = false;
  }
  if (!bVar19) {
    sVar16 = sVar6;
    if (sVar6 == 0) {
      return;
    }
    goto LAB_02601d58;
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    return;
  }
  plVar15 = (long *)(lVar14 + -0x28);
  plVar2 = (long *)(lVar14 + 0x58);
  do {
    lVar11 = *plVar2;
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar19) {
      *plVar2 = lVar11;
      *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(lVar14 + 0x60);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar11) {
    lVar11 = nn::os::GetCurrentThread();
LAB_02601dc0:
    if (*plVar2 == 0 && *(long *)(lVar14 + 0x60) == 0) goto code_r0x02601dcc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x68));
    do {
      if (*plVar2 != 0 || *(long *)(lVar14 + 0x60) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x68));
          while (*plVar2 == 0 && *(long *)(lVar14 + 0x60) == 0) {
            cVar7 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar19) {
              *plVar2 = lVar11;
              *(undefined8 *)(lVar14 + 0x60) = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_02601dd4;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar19) {
        *plVar2 = lVar11;
        *(undefined8 *)(lVar14 + 0x60) = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_02601dd4:
    bVar19 = false;
    goto LAB_02601dd8;
  }
  bVar19 = true;
LAB_02601dd8:
  FUN_00c65924(plVar15);
  FUN_01cdace0(&local_68,plVar15);
  plVar8 = local_68;
  local_88 = *param_2;
  uStack_80 = param_2[1];
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  local_78 = param_2[2];
  plVar12 = (long *)param_2[3];
  plStack_70 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_98 = param_3[2];
  plVar5 = (long *)param_3[3];
  plStack_90 = plVar5;
  if (plVar5 == (long *)0x0) {
    FUN_02602234(param_1,plVar8,uVar18,uVar18,&local_88,&local_a8);
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_02602234(param_1,plVar8,uVar18,uVar18,&local_88,&local_a8);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (*(char *)(lVar14 + 0x128) != '\0') {
    plVar12 = *(long **)(lVar14 + 0x120);
    do {
      lVar11 = *plVar12;
      lVar10 = plVar12[1];
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = lVar11;
        plVar12[1] = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar3 = *plVar12;
      lVar4 = plVar12[1];
      if (lVar3 != lVar11 || lVar4 != lVar10) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_02601f2c;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = lVar11;
        *(long *)((long)plVar12 + 4) = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
LAB_02601f2c:
    if (!bVar13) {
      do {
        lVar11 = *plVar12;
        lVar10 = plVar12[1];
        if (lVar11 != lVar3 || lVar10 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x026020c0;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = lVar3;
          *(long *)((long)plVar12 + 4) = lVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
joined_r0x026020c0:
      if (!bVar13) {
        do {
          lVar3 = *plVar12;
          lVar4 = plVar12[1];
          if (lVar3 != lVar11 || lVar4 != lVar10) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar11 = lVar3;
            lVar10 = lVar4;
            goto joined_r0x026020c0;
          }
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar13) {
            *plVar12 = lVar11;
            *(long *)((long)plVar12 + 4) = lVar10 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar13 = true;
        lVar11 = lVar3;
        lVar10 = lVar4;
        goto joined_r0x026020c0;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 2));
  }
  *(undefined1 *)(lVar14 + 0x128) = 0;
  *(undefined8 *)(lVar14 + 0x120) = 0;
  if (*(char *)(lVar14 + 0x138) != '\0') {
    plVar12 = *(long **)(lVar14 + 0x130);
    do {
      lVar11 = *plVar12;
      lVar10 = plVar12[1];
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = lVar11;
        plVar12[1] = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar3 = *plVar12;
      lVar4 = plVar12[1];
      if (lVar3 != lVar11 || lVar4 != lVar10) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_02601f88;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = 0;
        *(long *)((long)plVar12 + 4) = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
LAB_02601f88:
    if (!bVar13) {
      do {
        lVar11 = *plVar12;
        lVar10 = plVar12[1];
        if (lVar11 != lVar3 || lVar10 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x026021b0;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = 0;
          *(long *)((long)plVar12 + 4) = lVar4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
joined_r0x026021b0:
      if (!bVar13) {
        do {
          lVar3 = *plVar12;
          lVar4 = plVar12[1];
          if (lVar3 != lVar11 || lVar4 != lVar10) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar11 = lVar3;
            lVar10 = lVar4;
            goto joined_r0x026021b0;
          }
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar13) {
            *plVar12 = 0;
            *(long *)((long)plVar12 + 4) = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar13 = true;
        lVar11 = lVar3;
        lVar10 = lVar4;
        goto joined_r0x026021b0;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 2));
  }
  *(undefined8 *)(lVar14 + 0x130) = 0;
  *(undefined1 *)(lVar14 + 0x138) = 0;
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_02602014;
  }
  if (!bVar19) {
    do {
      lVar11 = *plVar2;
      lVar10 = *(long *)(lVar14 + 0x60);
      cVar7 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar19) {
        *plVar2 = lVar11;
        *(long *)(lVar14 + 0x60) = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar14 + 0x60);
      if (lVar3 != lVar11 || lVar4 != lVar10) {
        bVar19 = false;
        ClearExclusiveLocal();
        goto LAB_02601fe4;
      }
      cVar7 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar19) {
        *plVar2 = 0;
        *(long *)(lVar14 + 0x5c) = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar19 = true;
LAB_02601fe4:
    if (!bVar19) {
      do {
        lVar11 = *plVar2;
        lVar10 = *(long *)(lVar14 + 0x60);
        if (lVar11 != lVar3 || lVar10 != lVar4) {
          bVar19 = false;
          ClearExclusiveLocal();
          goto joined_r0x026021f4;
        }
        cVar7 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar19) {
          *plVar2 = 0;
          *(long *)(lVar14 + 0x5c) = lVar4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar19 = true;
joined_r0x026021f4:
      if (!bVar19) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar14 + 0x60);
          if (lVar3 != lVar11 || lVar4 != lVar10) {
            bVar19 = false;
            ClearExclusiveLocal();
            lVar11 = lVar3;
            lVar10 = lVar4;
            goto joined_r0x026021f4;
          }
          cVar7 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar19) {
            *plVar2 = 0;
            *(long *)(lVar14 + 0x5c) = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar19 = true;
        lVar11 = lVar3;
        lVar10 = lVar4;
        goto joined_r0x026021f4;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x68));
  }
  lVar14 = *(long *)(lVar14 + 8);
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar19) {
      *psVar1 = sVar16 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
    return;
  }
  if (sVar16 != 0) {
    return;
  }
LAB_02602014:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


