/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3a5f0; name: FUN_01e3a5f0
 */


bool FUN_01e3a5f0(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  short sVar10;
  undefined8 *local_28 [2];
  undefined8 local_18;
  
  FUN_01e3a7ec(local_28);
  bVar8 = false;
  if (local_28[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_28[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_28[0] + 0x1a);
      sVar10 = *(short *)((long)local_28[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01e3a650;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e3a650:
          bVar8 = false;
        }
        if (bVar8) {
          plVar7 = (long *)0x0;
          if (local_28[0][2] != 0) {
            plVar7 = (long *)(local_28[0][2] + -0x28);
          }
          goto LAB_01e3a678;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    plVar7 = (long *)0x0;
LAB_01e3a678:
    psVar1 = (short *)(local_28[0] + 3);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_28[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_18 = *local_28[0];
        FUN_00c44438(lVar9 + 0x8040,&local_18);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar7 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      lVar9 = plVar7[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      bVar8 = 1 < (int)plVar7[8];
      do {
        sVar10 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return bVar8;
}


