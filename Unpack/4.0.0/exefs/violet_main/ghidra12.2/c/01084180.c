/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01084180; name: FUN_01084180
 */


void FUN_01084180(char *param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_18;
  
  cVar4 = *param_1;
  if (cVar4 == '\x02') {
    puVar8 = *(undefined8 **)(param_1 + 8);
    if (puVar8 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar8 + 3);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar1 = (int *)((long)puVar8 + 0x1c);
        do {
          iVar6 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if ((*PTR_DAT_047d3908 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
            if (iVar6 != 0) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = *puVar8;
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else {
    if (cVar4 == '\x03') {
      FUN_0128eeb0(param_1 + 8);
      return;
    }
    if ((cVar4 == '\x01') && (plVar7 = *(long **)(param_1 + 8), plVar7 != (long *)0x0)) {
      lVar9 = plVar7[0x13];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x010842dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x50))();
        return;
      }
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


