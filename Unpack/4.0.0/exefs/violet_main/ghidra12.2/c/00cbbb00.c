/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cbbb00; name: FUN_00cbbb00
 */


long FUN_00cbbb00(long param_1)

{
  long lVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  long local_28;
  
  lVar1 = param_1 + 0x158;
  if ((*(long *)(param_1 + 0x158) == 0) || (*(short *)(*(long *)(param_1 + 0x158) + 0x1a) == 0)) {
    FUN_00c9e664(&local_50,param_1 + 0xe8);
    if (local_48 == (long *)0x0) {
      lVar13 = 0;
    }
    else {
      lVar13 = local_48[9];
    }
    plVar10 = (long *)(lVar13 + 0x110);
    lVar12 = *plVar10;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar12) {
      lVar9 = nn::os::GetCurrentThread();
LAB_00cbbb68:
      if (*plVar10 == 0) goto code_r0x00cbbb70;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
            while (*plVar10 == 0) {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar11) {
                *plVar10 = lVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00cbbb78;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar11) {
          *plVar10 = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00cbbb78:
      bVar11 = false;
      goto LAB_00cbbb7c;
    }
    bVar11 = true;
LAB_00cbbb7c:
    plVar10 = (long *)FUN_00cbbec0(*(undefined8 *)(lVar13 + 0x128),*(undefined8 *)(lVar13 + 0x130));
    if ((*(long **)(lVar13 + 0x130) == plVar10) || (*plVar10 == 0)) {
      plVar10 = (long *)FUN_00cbbec0(*(undefined8 *)(lVar13 + 0x160),*(undefined8 *)(lVar13 + 0x168)
                                    );
      if (*(long **)(lVar13 + 0x168) == plVar10) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if (*plVar10 != 0) {
          lVar9 = *plVar10 + -0x20;
        }
      }
    }
    else {
      lVar9 = *plVar10 + -0x20;
    }
    if (!bVar11) {
      *(undefined8 *)(lVar13 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x118));
    }
    if (local_48 != (long *)0x0) {
      plVar10 = local_48 + 5;
      do {
        lVar13 = *plVar10;
        iVar8 = (int)lVar13 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar11) {
          *(int *)plVar10 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
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
    if (lVar9 == 0) {
      return lVar1;
    }
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    FUN_00c43ef0(&local_50,lVar9 + 0x98);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if (local_50[2] == lVar9 + 0x28) {
      FUN_00c953a8(&local_60,&local_50);
    }
    plVar10 = local_50;
    if (local_50 != (long *)0x0) {
      plVar3 = local_50 + 3;
      do {
        sVar5 = (short)*plVar3;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *(short *)plVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_50 + 0x1c);
        do {
          iVar8 = *piVar4;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar11) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_28 = *plVar10;
          FUN_00c44438(lVar13 + 0x8040,&local_28);
        }
      }
      else if (sVar5 == 0) goto LAB_00cbbd28;
    }
    FUN_00cacc64(lVar1,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_60 + 3);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_60 + 0x1c);
        do {
          iVar8 = *piVar4;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar11) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_50 = (long *)*puVar7;
          FUN_00c44438(lVar13 + 0x8040,&local_50);
        }
      }
      else if (sVar5 == 0) {
LAB_00cbbd28:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return lVar1;
code_r0x00cbbb70:
  cVar6 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar11) {
    *plVar10 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00cbbb78;
  goto LAB_00cbbb68;
}


