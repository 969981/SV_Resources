/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ca29c4; name: FUN_00ca29c4
 */


/* WARNING: Removing unreachable block (ram,0x00ca2a88) */
/* WARNING: Removing unreachable block (ram,0x00ca2a90) */
/* WARNING: Removing unreachable block (ram,0x00ca2a98) */
/* WARNING: Removing unreachable block (ram,0x00ca2aa0) */
/* WARNING: Removing unreachable block (ram,0x00ca2b34) */
/* WARNING: Removing unreachable block (ram,0x00ca2aa8) */
/* WARNING: Removing unreachable block (ram,0x00ca2aac) */

void FUN_00ca29c4(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *local_38 [2];
  long local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = *(long *)(param_2 + 8);
  FUN_00ca2b84(local_38,lVar8);
  if (local_38[0] != (long *)0x0) {
    FUN_00ca3a00(&local_28);
    if (local_28 != 0) {
      FUN_00ca3980(param_1);
      lVar6 = local_28;
      local_28 = 0;
      *param_1 = lVar6;
      param_1[1] = lVar8;
    }
    if (local_38[0] != (long *)0x0) {
      plVar1 = local_38[0] + 3;
      do {
        sVar3 = (short)*plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(short *)plVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_38[0] + 0x1c);
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
          local_28 = *local_38[0];
          FUN_00c44438(lVar8 + 0x8040,&local_28);
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
  return;
}


