/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184b86c; name: FUN_0184b86c
 */


void FUN_0184b86c(undefined4 param_1,long param_2,long param_3)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  short sVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined1 uStack_e8;
  undefined2 uStack_e7;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_34;
  
  uVar15 = *(ulong *)(param_2 + 0x50);
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar3 = *(uint *)(param_3 + 0x1c0);
    uVar13 = (ulong)uVar3;
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = (ulong)((int)uVar15 - 1U & uVar3);
    }
    else {
      uVar17 = uVar13;
      if (uVar15 <= uVar13) {
        uVar17 = 0;
        if (uVar15 != 0) {
          uVar17 = uVar13 / uVar15;
        }
        uVar17 = uVar13 - uVar17 * uVar15;
      }
    }
    plVar19 = *(long **)(*(long *)(param_2 + 0x48) + uVar17 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar19[1] == uVar13) {
            if (*(uint *)(plVar19 + 2) == uVar3) goto LAB_0184b914;
          }
          else if ((plVar19[1] & uVar15 - 1) != uVar17) {
            return;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == uVar13) {
            if (*(uint *)(plVar19 + 2) == uVar3) goto LAB_0184b914;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar7 = 0;
              if (uVar15 != 0) {
                uVar7 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar7 * uVar15;
            }
            if (uVar16 != uVar17) {
              return;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  return;
LAB_0184be68:
  if (*(long *)puVar8 == 0) goto code_r0x0184be70;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar8 + 8));
  do {
    if (*(long *)puVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar8 + 8));
        while (*(long *)puVar8 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar6) {
            *(undefined8 *)puVar8 = uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0184be78;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar6) {
      *(undefined8 *)puVar8 = uVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0184be78:
  FUN_02110974(*(undefined8 *)(lVar21 + 0x70),*(undefined8 *)(lVar21 + 0x80),
               *(undefined8 *)(lVar14 + 0x98),&local_f8,plVar19 + 3,&local_34,&local_88,&local_d0);
  *(undefined8 *)puVar8 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar8 + 8));
LAB_0184be14:
  lVar20 = *(long *)(lVar14 + 8);
  psVar2 = (short *)(lVar20 + 0x1a);
  do {
    sVar18 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar20 + 0x10) = 0;
    (**(code **)(*(long *)(lVar14 + -0x28) + 0x50))((long *)(lVar14 + -0x28));
  }
  else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_0184ba54;
code_r0x0184be70:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
  if (bVar6) {
    *(undefined8 *)puVar8 = uVar11;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0184be78;
  goto LAB_0184be68;
LAB_0184b914:
  local_80 = 0xdeda0913e9ef23dd;
  pcStack_78 = "CAM_POS";
  local_70 = 7;
  local_68 = (long *)0x0;
  local_34 = param_1;
  if (*(code **)(param_3 + 0x10) == (code *)0x0) {
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
  }
  else {
    (**(code **)(param_3 + 0x10))(&local_60,param_3 + 0x30,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_00d0a71c(&local_98,&local_60);
  uVar11 = FUN_01180e7c(param_3,&local_98);
  puVar9 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_98 + 3);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar1 = (int *)((long)local_98 + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_f8 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_f8);
      }
    }
    else if (sVar18 == 0) goto LAB_0184bb24;
  }
  local_c8 = 0x37a5913ff3d5f98;
  pcStack_c0 = "CAM_TRG";
  local_b8 = 7;
  local_b0 = (long *)0x0;
  local_88 = uVar11;
  if (*(code **)(param_3 + 0x10) == (code *)0x0) {
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
  }
  else {
    (**(code **)(param_3 + 0x10))(&local_a8,param_3 + 0x30,&local_c8);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  FUN_00d0a71c(&local_e0,&local_a8);
  uVar11 = FUN_01180e7c(param_3,&local_e0);
  puVar9 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_e0 + 3);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar1 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_f8 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_f8);
      }
    }
    else if (sVar18 == 0) goto LAB_0184bb24;
  }
  uStack_e7 = 0;
  uStack_e8 = 0x37;
  local_e9 = 0x30;
  local_ea = 0x42;
  local_ec = 0x3633;
  local_f0 = 0x35414342;
  local_f8 = 0x3446423841324453;
  lVar14 = plVar19[5];
  local_d0 = uVar11;
  if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar14 + 0x1a);
    sVar18 = *(short *)(lVar14 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar18) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0184bd4c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0184bd4c:
        bVar6 = false;
      }
      if (bVar6) {
        lVar14 = *(long *)(lVar14 + 0x10);
        if (lVar14 != 0) {
          if (((*PTR_DAT_047d6c20 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d6c20);
          }
          lVar20 = *(long *)PTR_DAT_047d6c28;
          *(long *)PTR_DAT_047d6c30 = lVar20;
          if (*(undefined8 **)(lVar14 + 0x28) == (undefined8 *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = **(undefined8 **)(lVar14 + 0x28);
          }
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar12 = nn::os::GetTlsValue(DAT_04865a30);
          if ((lVar12 != 0) && (*(int *)(lVar12 + 0x90) != -1)) {
            *(undefined8 *)(lVar20 + (long)*(int *)(lVar12 + 0x90) * 8 + 0x6a0) = uVar11;
          }
          puVar8 = PTR_DAT_047d38f8;
          lVar21 = *(long *)(lVar14 + 0xd8);
          lVar12 = *(long *)PTR_DAT_047d38f8;
          lVar20 = nn::os::GetCurrentThread();
          if (lVar20 == lVar12) {
            FUN_02110974(*(undefined8 *)(lVar21 + 0x70),*(undefined8 *)(lVar21 + 0x80),
                         *(undefined8 *)(lVar14 + 0x98),&local_f8,plVar19 + 3,&local_34,&local_88,
                         &local_d0);
            goto LAB_0184be14;
          }
          uVar11 = nn::os::GetCurrentThread();
          goto LAB_0184be68;
        }
        break;
      }
      sVar18 = sVar4;
    } while (sVar4 != 0);
  }
LAB_0184ba54:
  puVar9 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a8 + 3);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar1 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_f8 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_f8);
      }
    }
    else if (sVar18 == 0) goto LAB_0184bb24;
  }
  puVar9 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    return;
  }
  psVar2 = (short *)(local_60 + 3);
  do {
    sVar18 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar18 == 1) {
    piVar1 = (int *)((long)local_60 + 0x1c);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar14 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar14;
    local_f8 = *puVar9;
    FUN_00c44438(lVar14 + 0x8040,&local_f8);
    return;
  }
  if (sVar18 != 0) {
    return;
  }
LAB_0184bb24:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


