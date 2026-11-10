/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022991c8; name: FUN_022991c8
 */


bool FUN_022991c8(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
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
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_02299234;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02299234:
          bVar6 = false;
        }
        if (bVar6) {
          plVar10 = (long *)0x0;
          if (local_38[0][2] != 0) {
            plVar10 = (long *)(local_38[0][2] + -0x28);
          }
          goto LAB_0229925c;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_0229925c:
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
      if (plVar10[9] == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)(plVar10[9] + 0xbb) != '\0';
      }
      lVar8 = plVar10[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
        return bVar6;
      }
      if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return bVar6;
    }
  }
  return false;
}


