/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4b204; name: FUN_00f4b204
 */


long FUN_00f4b204(long param_1)

{
  long lVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = param_1 + 0x130;
  if ((*(long *)(param_1 + 0x130) == 0) || (*(short *)(*(long *)(param_1 + 0x130) + 0x1a) == 0)) {
    FUN_00c9e664(&local_58,param_1 + 0xe8);
    if (local_50 == (long *)0x0) {
      lVar13 = 0;
    }
    else {
      lVar13 = local_50[9];
      plVar11 = local_50 + 5;
      do {
        lVar10 = *plVar11;
        iVar9 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar14) {
          *(int *)plVar11 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x60))();
    }
    if (lVar13 == 0) {
      return lVar1;
    }
    plVar11 = (long *)(lVar13 + 0x110);
    lVar12 = *plVar11;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar12) {
      lVar10 = nn::os::GetCurrentThread();
      bVar14 = false;
LAB_00f4b568:
      if (*plVar11 == 0) goto code_r0x00f4b570;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
      bVar14 = false;
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
            while (*plVar11 == 0) {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar14) {
                *plVar11 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              bVar14 = false;
              if (cVar6 == '\0') goto LAB_00f4b2b8;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_00f4b2b8;
    }
    bVar14 = true;
LAB_00f4b2b8:
    plVar11 = (long *)FUN_00f4ee10(*(undefined8 *)(lVar13 + 0x128),*(undefined8 *)(lVar13 + 0x130));
    if ((*(long **)(lVar13 + 0x130) == plVar11) || (*plVar11 == 0)) {
      plVar11 = (long *)FUN_00f4ee10(*(undefined8 *)(lVar13 + 0x160),*(undefined8 *)(lVar13 + 0x168)
                                    );
      if (*(long **)(lVar13 + 0x168) == plVar11) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if (*plVar11 != 0) {
          lVar10 = *plVar11 + -0x20;
        }
      }
    }
    else {
      lVar10 = *plVar11 + -0x20;
    }
    if (!bVar14) {
      *(undefined8 *)(lVar13 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x118));
    }
    if (lVar10 == 0) {
      return lVar1;
    }
    if (*(char *)(lVar10 + 0x11a) == '\0') {
      return lVar1;
    }
    local_58 = (long *)0x0;
    local_50 = (long *)0x0;
    FUN_00c43ef0(&local_58,lVar10 + 0x98);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    if (local_58[2] == lVar10 + 0x28) {
      FUN_012968b4(&local_68,&local_58);
    }
    plVar11 = local_58;
    if (local_58 != (long *)0x0) {
      plVar3 = local_58 + 3;
      do {
        sVar5 = (short)*plVar3;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar14) {
          *(short *)plVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_58 + 0x1c);
        do {
          iVar9 = *piVar4;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar14) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_48 = *plVar11;
          FUN_00c44438(lVar13 + 0x8040,&local_48);
        }
      }
      else if (sVar5 == 0) goto LAB_00f4b398;
    }
    FUN_0127739c(lVar1,&local_68);
    puVar8 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_68 + 3);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_68 + 0x1c);
        do {
          iVar9 = *piVar4;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar14) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_58 = (long *)*puVar8;
          FUN_00c44438(lVar13 + 0x8040,&local_58);
        }
      }
      else if (sVar5 == 0) {
LAB_00f4b398:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return lVar1;
code_r0x00f4b570:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar7) {
    *plVar11 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00f4b2b8;
  goto LAB_00f4b568;
}


