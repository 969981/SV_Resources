/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df9780; name: FUN_01df9780
 */


void FUN_01df9780(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  short sVar7;
  long lVar8;
  long *plVar9;
  undefined8 *local_30 [2];
  undefined8 local_8;
  
  FUN_01df9240(local_30);
  if (local_30[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_30[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_30[0] + 0x1a);
      sVar7 = *(short *)((long)local_30[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar7) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01df97ec;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01df97ec:
          bVar5 = false;
        }
        if (bVar5) {
          plVar9 = (long *)0x0;
          if (local_30[0][2] != 0) {
            plVar9 = (long *)(local_30[0][2] + -0x28);
          }
          goto LAB_01df9818;
        }
        sVar7 = sVar3;
      } while (sVar3 != 0);
    }
    plVar9 = (long *)0x0;
LAB_01df9818:
    psVar1 = (short *)(local_30[0] + 3);
    do {
      sVar7 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)local_30[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_8 = *local_30[0];
        FUN_00c44438(lVar8 + 0x8040,&local_8);
      }
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar9 != (long *)0x0) {
      FUN_013e0f3c(plVar9);
      (**(code **)(*plVar9 + 0x60))(plVar9);
    }
  }
  return;
}


