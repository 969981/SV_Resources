/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ac788; name: FUN_014ac788
 */


void FUN_014ac788(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long local_48;
  undefined8 *local_40;
  undefined8 local_18;
  
  uVar8 = (ulong)param_2;
  if ((uVar8 < (ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3)) &&
     (FUN_014ac934(&local_48,param_1,param_3), local_40 != (undefined8 *)0x0)) {
    if ((*(short *)((long)local_40 + 0x1a) != 0) && (local_48 != 0)) {
      if (local_40 == (undefined8 *)0x0) {
        return;
      }
      if ((*(short *)((long)local_40 + 0x1a) != 0) && (local_48 != 0)) {
        if ((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_014acc4c(*(undefined8 *)(*(long *)(param_1 + 0x2a0) + uVar8 * 8),&local_48,param_4);
      }
    }
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_40 + 0x1c);
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
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_18 = *local_40;
          FUN_00c44438(lVar7 + 0x8040,&local_18);
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


