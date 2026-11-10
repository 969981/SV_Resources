/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181e2bc; name: FUN_0181e2bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0181e2bc(long param_1)

{
  int *piVar1;
  short *psVar2;
  byte bVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  byte bVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  char local_80 [8];
  long *local_78;
  long *local_70;
  undefined7 uStack_68;
  undefined4 local_61;
  long *local_50;
  uint local_24;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    bVar9 = FUN_01400ba8(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x70));
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    bVar3 = 0x1b;
    if ((byte)(bVar9 - 1) < 0x1a) {
      bVar3 = bVar9;
    }
    FUN_01084328(&local_90,param_1 + 0x40);
    local_24 = (uint)bVar3;
    if ((local_90 != (undefined8 *)0x0) && (*(short *)((long)local_90 + 0x1a) != 0)) {
      psVar2 = (short *)((long)local_90 + 0x1a);
      sVar13 = *(short *)((long)local_90 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_0181e510;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0181e510:
          bVar7 = false;
        }
        if (bVar7) {
          lVar12 = local_90[2];
          if (lVar12 != 0) {
            local_70 = DAT_03d301da;
            uStack_68 = (undefined7)DAT_03d301e2;
            local_61 = ram0x03d301e9;
            if (*(long *)(lVar12 + 0x110) == 0) {
              local_80[0] = '\0';
              goto LAB_0181e5a0;
            }
            plVar11 = (long *)(lVar12 + 0x120);
            lVar14 = *plVar11;
            lVar15 = nn::os::GetCurrentThread();
            if (lVar15 == lVar14) {
              FUN_01dedab0(local_80,*(undefined8 *)(lVar12 + 0x110),&local_70,&local_24);
              goto LAB_0181e5a0;
            }
            lVar15 = nn::os::GetCurrentThread();
            goto LAB_0181e568;
          }
          break;
        }
        sVar13 = sVar5;
      } while (sVar5 != 0);
    }
    local_80[0] = '\0';
LAB_0181e320:
    puVar8 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_90 + 3);
      do {
        sVar13 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar13 == 1) {
        piVar1 = (int *)((long)local_90 + 0x1c);
        do {
          iVar10 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_70 = (long *)*puVar8;
          FUN_00c44438(lVar12 + 0x8040,&local_70);
        }
      }
      else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    local_98 = local_78;
    if (local_78 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      (**(code **)(*local_78 + 0x18))(local_78);
      plVar11 = local_98;
    }
    plVar4 = (long *)PTR_PTR_047d4508;
    if (plVar11 != (long *)0x0) {
      plVar4 = plVar11 + 7;
    }
    FUN_0181e6b8(0xaa,*plVar4);
    lVar15 = *(long *)PTR_DAT_047d90d0;
    FUN_011a6b30(&local_70,&local_98);
    lVar12 = *(long *)(lVar15 + 0x2a0);
    if (0xaa < (ulong)(*(long *)(lVar15 + 0x2a8) - lVar12 >> 3)) {
      FUN_010614bc(*(undefined8 *)(lVar12 + 0x550),&local_70,0);
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if ((local_80[0] != '\0') && (local_78 != (long *)0x0)) {
      (**(code **)(*local_78 + 0x20))(local_78);
    }
  }
  return;
LAB_0181e568:
  if (*plVar11 == 0) goto code_r0x0181e570;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x128));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x128));
        while (*plVar11 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0181e578;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar7) {
      *plVar11 = lVar15;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0181e578:
  if (*(long *)(lVar12 + 0x110) == 0) {
    local_80[0] = '\0';
  }
  else {
    FUN_01dedab0(local_80,*(long *)(lVar12 + 0x110),&local_70,&local_24);
  }
  *(undefined8 *)(lVar12 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x128));
LAB_0181e5a0:
  lVar15 = *(long *)(lVar12 + 0x70);
  psVar2 = (short *)(lVar15 + 0x1a);
  do {
    sVar13 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar13 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar15 + 0x10) = 0;
    (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))((long *)(lVar12 + -0x28));
  }
  else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_0181e320;
code_r0x0181e570:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar7) {
    *plVar11 = lVar15;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0181e578;
  goto LAB_0181e568;
}


