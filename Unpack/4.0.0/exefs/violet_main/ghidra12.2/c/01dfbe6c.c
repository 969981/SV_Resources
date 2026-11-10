/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfbe6c; name: FUN_01dfbe6c
 */


undefined8 FUN_01dfbe6c(long param_1)

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
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  FUN_00c9e664(&local_78,param_1 + 0xe8);
  if (local_70 == (long *)0x0) {
    lVar16 = 0;
  }
  else {
    lVar16 = local_70[9];
    plVar18 = local_70 + 5;
    do {
      lVar13 = *plVar18;
      iVar10 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
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
  if (lVar16 != 0) {
    plVar18 = *(long **)(param_1 + 0x688);
    plVar17 = *(long **)(param_1 + 0x690);
    if (plVar18 != plVar17) {
LAB_01dfbf20:
      lVar13 = *plVar18;
      if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar13 + 0x1a);
        sVar15 = *(short *)(lVar13 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01dfbf5c;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01dfbf5c:
            bVar6 = false;
          }
          if (bVar6) goto LAB_01dfbf8c;
          sVar15 = sVar4;
          if (sVar4 == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
LAB_01dfbf8c:
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
    return 0;
  }
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  FUN_00c43ef0(&local_78,(long *)(lVar13 + 8));
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if (local_78[2] == lVar13) {
    FUN_00f5d3e8(&local_88,&local_78);
  }
  plVar9 = local_78;
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 3;
    do {
      sVar15 = (short)*plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)puVar7 = lVar14;
        local_68 = *plVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar15 == 0) goto LAB_01dfc074;
  }
  if (*(undefined8 **)(lVar16 + 0x30) == (undefined8 *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = **(undefined8 **)(lVar16 + 0x30);
  }
  uVar11 = FUN_01dfc220(&local_88,uVar12);
  puVar8 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)puVar7 = lVar14;
        local_78 = (long *)*puVar8;
        FUN_00c44438(lVar14 + 0x8040,&local_78);
      }
    }
    else if (sVar15 == 0) {
LAB_01dfc074:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar14 = *(long *)(lVar13 + 8);
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))();
  }
  else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  plVar18 = plVar18 + 2;
  if (plVar18 == plVar17) {
    return 1;
  }
  goto LAB_01dfbf20;
}


