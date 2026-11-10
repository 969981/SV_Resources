/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6c394; name: FUN_01e6c394
 */


void FUN_01e6c394(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_30;
  undefined8 uStack_28;
  long local_8;
  
  local_30 = (long *)0x0;
  uStack_28 = 0;
  FUN_01c1b770(&local_30);
  FUN_01e61628(param_1,&local_30);
  plVar6 = local_30;
  if (local_30 != (long *)0x0) {
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
    if (sVar3 == 1) {
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
      if (iVar7 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar7 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *plVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *param_1 = &DAT_04551ba8;
  param_1[4] = &PTR_LAB_04551c40;
  param_1[5] = &PTR_LAB_04551c90;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (param_1[0xb] == 0) {
    local_8 = 0;
  }
  else {
    FUN_01c27dd8(&local_8);
    if (local_8 != 0) {
      cVar4 = *(char *)(local_8 + 0xf1);
      *(char *)(param_1 + 0x17) = cVar4;
      if (cVar4 != '\0') {
        uVar8 = FUN_01e6c92c();
        param_1[0x16] = uVar8;
      }
    }
  }
  FUN_01c1abf8(&local_8);
  return;
}


