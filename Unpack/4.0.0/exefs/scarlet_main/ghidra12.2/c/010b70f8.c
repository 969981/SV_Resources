/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b70f8; name: FUN_010b70f8
 */


void FUN_010b70f8(long *param_1)

{
  SemaphoreType *pSVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  long lStack_68;
  undefined8 local_48;
  
  plVar16 = param_1 + 0x49;
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *plVar16 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_010b7138;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4a));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4a));
        while (*plVar16 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_010b7138;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *plVar16 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_010b7138:
  lVar14 = param_1[0x26];
  plVar16 = (long *)(lVar14 + 200);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *plVar16 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_010b7158;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xd0));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xd0));
        while (*plVar16 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_010b7158;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *plVar16 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_010b7158:
  FUN_010b77f0(lVar14);
  *(undefined2 *)(lVar14 + 0x40) = 1;
  *(undefined8 *)(lVar14 + 200) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xd0));
  puVar9 = PTR_DAT_047d8a58;
  puVar8 = PTR_DAT_047d8a50;
  puVar7 = PTR_DAT_047d8a48;
  if (*(char *)((long)param_1 + 0x1cc) != '\0') {
    if (((*PTR_DAT_047d8a48 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a48);
    }
    lVar12 = *(long *)puVar8;
    *(long *)puVar9 = lVar12;
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)param_1[0x3a]);
    FUN_010b7f48(lVar12 + 0x610,&local_70);
  }
  plVar16 = (long *)param_1[0x41];
  if (plVar16 != (long *)0x0) {
    local_70 = (undefined8 *)plVar16[2];
    lStack_68 = plVar16[3];
    while( true ) {
      FUN_01292394(DAT_0485a0e8,&lStack_68);
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) break;
      local_70 = (undefined8 *)plVar16[2];
      lStack_68 = plVar16[3];
    }
  }
  if (param_1[0x46] != 0) {
    plVar16 = (long *)param_1[0x41];
    if (plVar16 != (long *)0x0) {
      plVar17 = (long *)param_1[0x42];
      plVar15 = (long *)*plVar16;
      uVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,plVar16,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar17,plVar16,0x20,8);
      }
      while (plVar15 != (long *)0x0) {
        plVar16 = (long *)param_1[0x42];
        plVar17 = (long *)*plVar15;
        uVar13 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,0x20,8);
          plVar15 = plVar17;
        }
        else {
          FUN_00c48fe8(plVar16,plVar15,0x20,8);
          plVar15 = plVar17;
        }
      }
    }
    lVar12 = param_1[0x3c];
    param_1[0x41] = 0;
    if ((((lVar12 != 0) && (*(undefined8 *)param_1[0x3b] = 0, lVar12 != 1)) &&
        (*(undefined8 *)(param_1[0x3b] + 8) = 0, lVar12 != 2)) &&
       (*(undefined8 *)(param_1[0x3b] + 0x10) = 0, lVar12 != 3)) {
      lVar14 = 3;
      do {
        *(undefined8 *)(param_1[0x3b] + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
    }
    param_1[0x46] = 0;
  }
  lVar12 = *(long *)(param_1[0x38] + 0xf8);
  if ((lVar12 != 0) && (*(int *)(param_1[0x38] + 0x100) == *(int *)(lVar12 + 0x2c))) {
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a48);
    }
    lVar14 = *(long *)puVar8;
    *(long *)puVar9 = lVar14;
    lVar12 = *(long *)(param_1[0x38] + 0xf8);
    if (((lVar12 != 0) && (*(int *)(param_1[0x38] + 0x100) == *(int *)(lVar12 + 0x2c))) &&
       (lVar12 = FUN_00c41664(), lVar12 != 0)) {
      lVar18 = *(long *)(lVar14 + 0x30);
      plVar16 = (long *)(lVar18 + 0xbe0);
      lVar14 = nn::os::GetCurrentThread();
LAB_010b73d0:
      if (*plVar16 == 0) goto code_r0x010b73d8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0xbe8));
      do {
        if (*plVar16 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0xbe8));
            while (*plVar16 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *plVar16 = lVar14;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_010b73e0;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_010b73e0:
      FUN_01181c70(*(undefined8 *)(lVar18 + 0x58),lVar12,1);
      *(undefined8 *)(lVar18 + 0xbe0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0xbe8));
    }
    lVar12 = param_1[0x38];
    if ((*(long *)(lVar12 + 0xf8) != 0) &&
       (*(int *)(lVar12 + 0x100) == *(int *)(*(long *)(lVar12 + 0xf8) + 0x2c))) {
      *(undefined8 *)(lVar12 + 0xf8) = 0;
      *(undefined4 *)(lVar12 + 0x100) = 0xffffffff;
    }
  }
  *(undefined1 *)((long)param_1 + 0x242) = 1;
  *(undefined1 *)(param_1 + 0x39) = 0;
  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  lVar12 = *(long *)puVar8;
  *(long *)puVar9 = lVar12;
  (**(code **)(*param_1 + 0x18))(&local_70,param_1);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  if ((long *)local_70[2] == param_1 + 5) {
    FUN_010b7b78(&local_80,&local_70);
  }
  puVar10 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_70 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_70 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_48 = *puVar10;
        FUN_00c44438(lVar14 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_010b735c;
  }
  local_70 = (undefined8 *)0x0;
  if (local_80 != (undefined8 *)0x0) {
    local_70 = (undefined8 *)*local_80;
  }
  lVar12 = *(long *)(lVar12 + 0x30);
  pSVar1 = (SemaphoreType *)(lVar12 + 0xcc8);
  nn::os::AcquireSemaphore(pSVar1);
  FUN_010b79ac(lVar12 + 0xc90,&local_70,&local_70);
  nn::os::ReleaseSemaphore(pSVar1);
  puVar10 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_80 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_80 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_70 = (undefined8 *)*puVar10;
        FUN_00c44438(lVar12 + 0x8040,&local_70);
      }
    }
    else if (sVar4 == 0) {
LAB_010b735c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  param_1[0x49] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4a));
  return;
code_r0x010b73d8:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar6) {
    *plVar16 = lVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_010b73e0;
  goto LAB_010b73d0;
}


