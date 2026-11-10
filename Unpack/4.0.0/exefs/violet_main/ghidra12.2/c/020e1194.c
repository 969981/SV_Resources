/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e1194; name: FUN_020e1194
 */


void FUN_020e1194(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_80 [3];
  long *local_68;
  undefined8 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1c0));
  *(undefined4 *)(param_2 + 0x1a0) = param_3;
  *(undefined4 *)(param_2 + 0x1a8) = param_4;
  *(undefined4 *)(param_2 + 0x1ac) = param_1;
  FUN_010f42fc(&local_60,param_2);
  puVar6 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar9 = *(short *)((long)local_60 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_020e123c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_020e123c:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (local_60[2] != 0) {
            plVar10 = (long *)(local_60[2] + -0x28);
          }
          goto LAB_020e1264;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_020e1264:
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_80[0] = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,local_80);
      }
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar10 != (long *)0x0) {
      local_60 = (undefined8 *)0x122e7207bd67361b;
      puStack_58 = &DAT_03c3c6f0;
      local_50 = 2;
      local_48 = (long *)0x0;
      FUN_0116b840(local_80,param_3);
      (**(code **)(*plVar10 + 0x130))(plVar10,&local_60,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      lVar8 = plVar10[0x13];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1c0));
  return;
}


