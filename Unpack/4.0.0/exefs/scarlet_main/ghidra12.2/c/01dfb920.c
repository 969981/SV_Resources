/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dfb920; name: FUN_01dfb920
 */


undefined8 FUN_01dfb920(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  FUN_00c9e664(&local_78,param_1 + 0xe8);
  if (local_70 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = (long *)local_70[9];
    plVar17 = local_70 + 5;
    do {
      lVar12 = *plVar17;
      iVar10 = (int)lVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x60))();
  }
  puVar7 = PTR_DAT_047d3918;
  if (plVar15 != (long *)0x0) {
    plVar17 = *(long **)(param_1 + 0x688);
    plVar16 = *(long **)(param_1 + 0x690);
    if (plVar17 != plVar16) {
LAB_01dfb9b0:
      lVar12 = *plVar17;
      if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar12 + 0x1a);
        sVar14 = *(short *)(lVar12 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar14) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01dfba28;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01dfba28:
            bVar6 = false;
          }
          if (bVar6) goto LAB_01dfba40;
          sVar14 = sVar4;
          if (sVar4 == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
LAB_01dfba40:
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    return 0;
  }
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  FUN_00c43ef0(&local_78,(long *)(lVar12 + 8));
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if (local_78[2] == lVar12) {
    FUN_00f5d3e8(&local_88,&local_78);
  }
  plVar9 = local_78;
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 3;
    do {
      sVar14 = (short)*plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)puVar7 = lVar13;
        local_98 = (undefined8 *)*plVar9;
        FUN_00c44438(lVar13 + 0x8040,&local_98);
      }
    }
    else if (sVar14 == 0) goto LAB_01dfbbb0;
  }
  (**(code **)(*plVar15 + 0x18))(&local_78,plVar15);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  if ((long *)local_78[2] == plVar15 + 5) {
    FUN_00c9ea00(&local_98,&local_78);
  }
  plVar9 = local_78;
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 3;
    do {
      sVar14 = (short)*plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)puVar7 = lVar13;
        local_68 = *plVar9;
        FUN_00c44438(lVar13 + 0x8040,&local_68);
      }
    }
    else if (sVar14 == 0) goto LAB_01dfbbb0;
  }
  uVar11 = FUN_01440384(&local_88,&local_98);
  puVar8 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_98 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)puVar7 = lVar13;
        local_78 = (long *)*puVar8;
        FUN_00c44438(lVar13 + 0x8040,&local_78);
      }
    }
    else if (sVar14 == 0) goto LAB_01dfbbb0;
  }
  puVar8 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)puVar7 = lVar13;
        local_78 = (long *)*puVar8;
        FUN_00c44438(lVar13 + 0x8040,&local_78);
      }
    }
    else if (sVar14 == 0) {
LAB_01dfbbb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar13 = *(long *)(lVar12 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
  }
  else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  plVar17 = plVar17 + 2;
  if (plVar17 == plVar16) {
    return 1;
  }
  goto LAB_01dfb9b0;
}


