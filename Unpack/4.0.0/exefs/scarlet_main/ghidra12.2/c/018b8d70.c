/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018b8d70; name: FUN_018b8d70
 */


void FUN_018b8d70(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  char local_38 [8];
  long *local_30;
  long local_8;
  
  local_38[0] = '\0';
  local_30 = param_2;
  FUN_00d78850(param_1,local_38);
  plVar6 = local_30;
  if (local_38[0] == '\x02') {
    if (local_30 == (long *)0x0) {
      return;
    }
    plVar1 = local_30 + 3;
    do {
      sVar3 = (short)*plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(short *)plVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) goto LAB_018b8de0;
    piVar2 = (int *)((long)local_30 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (local_38[0] != '\x03') {
      if (local_38[0] != '\x01') {
        return;
      }
      if (local_30 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_30 + 0x60))();
      return;
    }
    if (local_30 == (long *)0x0) {
      return;
    }
    plVar1 = local_30 + 3;
    do {
      sVar3 = (short)*plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(short *)plVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) {
LAB_018b8de0:
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_30 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar7 != -1) {
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar8 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar8;
    local_8 = *plVar6;
    FUN_00c44438(lVar8 + 0x8040,&local_8);
  }
  return;
}


