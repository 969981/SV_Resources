/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a89e0c; name: FUN_00a89e0c
 */


void FUN_00a89e0c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  MutexType *pMVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 *local_40;
  ulong uStack_38;
  
  lVar9 = *param_1;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
    plVar12 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar10) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00a8a05c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a8a05c:
        bVar6 = false;
      }
      if (bVar6) {
        plVar12 = (long *)0x0;
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
        }
        break;
      }
      plVar12 = (long *)0x0;
      sVar10 = sVar4;
    } while (sVar4 != 0);
  }
  FUN_00f1b364(&local_40,plVar12);
  puVar7 = local_40;
  if (local_40 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar10 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar10) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00a89fb0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a89fb0:
          bVar6 = false;
        }
        if (bVar6) {
          plVar11 = (long *)0x0;
          if (local_40[2] != 0) {
            plVar11 = (long *)(local_40[2] + -0x28);
          }
          goto LAB_00a89fdc;
        }
        sVar10 = sVar4;
      } while (sVar4 != 0);
    }
    plVar11 = (long *)0x0;
LAB_00a89fdc:
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      piVar3 = (int *)((long)local_40 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_50 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_50);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x13];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar10 == 0) goto LAB_00a8a12c;
  }
  if (plVar11 != (long *)0x0) {
    if (*(int *)((long)plVar11 + 0x74) == 2) {
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar9 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar9;
      pMVar2 = (MutexType *)(*(long *)(lVar9 + 0x70) + 0x120);
      nn::os::LockMutex(pMVar2);
      local_40 = (undefined8 *)*param_3;
      uStack_38 = param_3[1] & 0xffffffff;
      local_50 = *param_4;
      uStack_48 = param_4[1] & 0xffffffff;
      (**(code **)(*(long *)plVar11[0x1a] + 0x1c0))
                ((long *)plVar11[0x1a],plVar11[0x1b],&local_40,&local_50,0);
      nn::os::UnlockMutex(pMVar2);
    }
    lVar9 = plVar11[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar10 == 0) {
LAB_00a8a12c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


