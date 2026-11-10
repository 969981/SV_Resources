/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c5c60; name: FUN_029c5c60
 */


void FUN_029c5c60(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar8 = param_2[1];
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00c43ef0(param_1 + 1,&local_40);
    if (local_40 == (undefined8 *)0x0) {
      return;
    }
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
        puVar9 = local_40;
      } while (cVar4 != '\0');
      goto LAB_029c5da0;
    }
  }
  else {
    uVar7 = (**(code **)(*(long *)*param_2 + 0x80))();
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c43ef0(&local_50,param_2 + 1);
    *param_1 = uVar7;
    param_1[2] = 0;
    param_1[1] = 0;
    FUN_00c43ef0(param_1 + 1,&local_50);
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
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
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puVar9 = local_50;
      } while (cVar4 != '\0');
LAB_029c5da0:
      if (iVar6 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_18 = *puVar9;
      FUN_00c44438(lVar8 + 0x8040,&local_18);
      return;
    }
  }
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


