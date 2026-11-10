/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02294884; name: FUN_02294884
 */


undefined4 FUN_02294884(void)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  FUN_01193548(local_38);
  if (local_38[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_38[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_38[0] + 0x1a);
      sVar9 = *(short *)((long)local_38[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar9) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_022948f0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_022948f0:
          bVar6 = false;
        }
        if (bVar6) {
          plVar10 = (long *)0x0;
          if (local_38[0][2] != 0) {
            plVar10 = (long *)(local_38[0][2] + -0x28);
          }
          goto LAB_02294918;
        }
        sVar9 = sVar4;
      } while (sVar4 != 0);
    }
    plVar10 = (long *)0x0;
LAB_02294918:
    psVar1 = (short *)(local_38[0] + 3);
    do {
      sVar9 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_38[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *local_38[0];
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar10 != (long *)0x0) {
      lVar8 = plVar10[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      uVar3 = *(undefined4 *)((long)plVar10 + 0x3a4);
      do {
        sVar9 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
        return uVar3;
      }
      if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return uVar3;
    }
  }
  return 0xffffffff;
}


