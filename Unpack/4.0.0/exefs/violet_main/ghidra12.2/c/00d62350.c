/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d62350; name: FUN_00d62350
 */


long FUN_00d62350(long param_1)

{
  long lVar1;
  long *plVar2;
  short *psVar3;
  long *plVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  long local_28;
  
  lVar1 = param_1 + 0x168;
  if ((*(long *)(param_1 + 0x168) == 0) || (*(short *)(*(long *)(param_1 + 0x168) + 0x1a) == 0)) {
    FUN_00c9e664(&local_50,param_1 + 0xe8);
    if (local_48 == (long *)0x0) {
      lVar13 = 0;
    }
    else {
      lVar13 = local_48[9];
    }
    plVar2 = (long *)(lVar13 + 0x110);
    lVar11 = *plVar2;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar11) {
      lVar10 = nn::os::GetCurrentThread();
LAB_00d623a8:
      if (*plVar2 == 0) goto code_r0x00d623b0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
            while (*plVar2 == 0) {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar12) {
                *plVar2 = lVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00d623b8;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar12) {
          *plVar2 = lVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00d623b8:
      bVar12 = false;
      goto LAB_00d623bc;
    }
    bVar12 = true;
LAB_00d623bc:
    lVar10 = FUN_00d626d4(lVar13 + 0x128);
    if (lVar10 == 0) {
      lVar10 = FUN_00d626d4(lVar13 + 0x160);
    }
    if (!bVar12) {
      *(undefined8 *)(lVar13 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x118));
    }
    if (local_48 != (long *)0x0) {
      plVar2 = local_48 + 5;
      do {
        lVar13 = *plVar2;
        iVar9 = (int)lVar13 + -1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar12) {
          *(int *)plVar2 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
    if (lVar10 == 0) {
      return lVar1;
    }
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    FUN_00c43ef0(&local_50,lVar10 + 0x98);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if (local_50[2] == lVar10 + 0x28) {
      FUN_00d94688(&local_60,&local_50);
    }
    plVar2 = local_50;
    if (local_50 != (long *)0x0) {
      plVar4 = local_50 + 3;
      do {
        sVar6 = (short)*plVar4;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar12) {
          *(short *)plVar4 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar5 = (int *)((long)local_50 + 0x1c);
        do {
          iVar9 = *piVar5;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar12) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_28 = *plVar2;
          FUN_00c44438(lVar13 + 0x8040,&local_28);
        }
      }
      else if (sVar6 == 0) goto LAB_00d62544;
    }
    FUN_00d48230(lVar1,&local_60);
    puVar8 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_60 + 3);
      do {
        sVar6 = *psVar3;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar12) {
          *psVar3 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar5 = (int *)((long)local_60 + 0x1c);
        do {
          iVar9 = *piVar5;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar12) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_50 = (long *)*puVar8;
          FUN_00c44438(lVar13 + 0x8040,&local_50);
        }
      }
      else if (sVar6 == 0) {
LAB_00d62544:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return lVar1;
code_r0x00d623b0:
  cVar7 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar12) {
    *plVar2 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00d623b8;
  goto LAB_00d623a8;
}


