/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0229437c; name: FUN_0229437c
 */


undefined4 FUN_0229437c(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
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
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_022943e8;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_022943e8:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (local_38[0][2] != 0) {
            plVar10 = (long *)(local_38[0][2] + -0x28);
          }
          goto LAB_02294410;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_02294410:
    psVar1 = (short *)(local_38[0] + 3);
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
      piVar2 = (int *)((long)local_38[0] + 0x1c);
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
      lVar7 = plVar10[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      lVar8 = plVar10[0xaf];
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
        return (int)lVar8;
      }
      if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return (int)lVar8;
    }
  }
  return 0;
}


