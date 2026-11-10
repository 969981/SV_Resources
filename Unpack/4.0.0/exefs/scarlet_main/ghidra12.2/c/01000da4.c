/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01000da4; name: FUN_01000da4
 */


void FUN_01000da4(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  bool bVar19;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  FUN_01001588();
  *param_1 = &PTR_LAB_0459d2f8;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[4] = &PTR_LAB_0459d370;
  param_1[5] = &DAT_0459d3c0;
  puVar6 = PTR_DAT_047d3908;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  uVar15 = param_1[7];
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  uVar13 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar13;
  FUN_00c44204(&local_98,uVar13,uVar15);
  puVar11 = local_78;
  local_78 = (undefined8 *)0x0;
  if (local_98 == (undefined8 *)0x0) {
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar11 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar19) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar11 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar19) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar7;
          *(long *)puVar8 = lVar14;
          local_88 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar14 + 0x8040,&local_88);
        }
      }
      else if (sVar3 == 0) goto LAB_010010b0;
    }
    uVar15 = 0;
  }
  else {
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar11 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar19) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar11 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar19) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar7;
          *(long *)puVar8 = lVar14;
          local_88 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar14 + 0x8040,&local_88);
        }
      }
      else if (sVar3 == 0) goto LAB_010010b0;
    }
    local_78 = local_98;
    local_98 = (undefined8 *)0x0;
  }
  puVar11 = local_98;
  local_70 = uVar15;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar19) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar19) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar7;
        *(long *)puVar8 = lVar14;
        local_88 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar14 + 0x8040,&local_88);
      }
    }
    else if (sVar3 == 0) goto LAB_010010b0;
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if ((undefined8 *)local_78[2] == param_1 + 5) {
    FUN_010037dc(&local_88,&local_78);
  }
  puVar11 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar19) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar19) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar7;
        *(long *)puVar8 = lVar14;
        local_98 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar14 + 0x8040,&local_98);
      }
    }
    else if (sVar3 == 0) goto LAB_010010b0;
  }
  if (local_88 == (undefined8 *)0x0) {
    param_1[8] = 0;
    uVar15 = 0;
  }
  else {
    param_1[8] = *local_88;
    uVar15 = *local_88;
  }
  param_1[9] = uVar15;
  puVar8 = PTR_DAT_047d88d0;
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  puVar10 = PTR_DAT_047d88e0;
  puVar9 = PTR_DAT_047d88d8;
  lVar17 = *(long *)PTR_DAT_047d88d8;
  *(long *)PTR_DAT_047d88e0 = lVar17;
  plVar18 = (long *)(lVar17 + 0x28);
  lVar16 = *plVar18;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 != lVar16) {
    lVar14 = nn::os::GetCurrentThread();
LAB_01000ee4:
    if (*plVar18 == 0) goto code_r0x01000eec;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x30));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x30));
          while (*plVar18 == 0) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar19) {
              *plVar18 = lVar14;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01000ef4;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar19) {
        *plVar18 = lVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01000ef4:
    bVar19 = false;
    goto LAB_01000efc;
  }
  plVar18 = (long *)0x0;
  bVar19 = true;
LAB_01000efc:
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  uVar15 = *(undefined8 *)puVar9;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  *(undefined8 *)puVar10 = uVar15;
  FUN_010031bc(&local_78,&local_88);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_010034cc(&local_98,&local_88);
  FUN_01003b00(uVar15,param_1 + 0xc,&local_78,&local_98,0);
  puVar11 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar7;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = *puVar11;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) goto LAB_010010b0;
  }
  puVar11 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar7;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_98 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar14 + 0x8040,&local_98);
      }
    }
    else if (sVar3 == 0) goto LAB_010010b0;
  }
  if (!bVar19) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  puVar11 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar19) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar19) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar7;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_78 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar14 + 0x8040,&local_78);
      }
    }
    else if (sVar3 == 0) {
LAB_010010b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_01001c1c(param_1);
  return;
code_r0x01000eec:
  cVar5 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar19) {
    *plVar18 = lVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01000ef4;
  goto LAB_01000ee4;
}


