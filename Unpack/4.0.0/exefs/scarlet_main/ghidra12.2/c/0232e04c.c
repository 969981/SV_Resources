/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0232e04c; name: FUN_0232e04c
 */


void FUN_0232e04c(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  plVar8 = (long *)FUN_0232e27c(param_2 + 0x108,&local_38);
  if (plVar8 == (long *)0x0) {
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_0232dffc(param_1,&local_38);
    puVar6 = local_38;
    if (local_38 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_38 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) goto joined_r0x0232e0f0;
    piVar2 = (int *)((long)local_38 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_28 = *puVar6;
  }
  else {
    (**(code **)(*plVar8 + 0x18))(&local_38);
    *param_1 = 0;
    param_1[1] = 0;
    if ((long *)local_38[2] == plVar8 + 5) {
      FUN_00e7f0bc(param_1,&local_38);
    }
    puVar6 = local_38;
    if (local_38 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_38 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) {
joined_r0x0232e0f0:
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_38 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_28 = *puVar6;
  }
  FUN_00c44438(lVar9 + 0x8040,&local_28);
  return;
}


