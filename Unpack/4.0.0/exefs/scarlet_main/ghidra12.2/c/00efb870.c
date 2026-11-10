/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00efb870; name: FUN_00efb870
 */


void FUN_00efb870(undefined8 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  cVar4 = *param_2;
  if (cVar4 == '\x02') {
LAB_00efb890:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_00efb898;
  }
  else {
    if ((cVar4 != '\0') && (cVar4 != '\x01')) {
      if (cVar4 != '\x03') goto LAB_00efb898;
      goto LAB_00efb890;
    }
    if (*(long *)(param_2 + 8) == 0) goto LAB_00efb898;
  }
  cVar4 = *param_2;
  if (cVar4 == '\x02') {
    local_30 = (undefined8 *)0x0;
    uStack_28 = 0;
    FUN_00ca1a48(&local_30,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ca1ea4(param_1,&local_30);
    puVar6 = local_30;
    if (local_30 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_30 + 3);
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
    if (iVar7 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar8 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar8;
    local_8 = *puVar6;
    FUN_00c44438(lVar8 + 0x8040,&local_8);
    return;
  }
  if (cVar4 == '\x03') {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ca1a48(param_1,param_2 + 8);
    return;
  }
  if ((cVar4 == '\x01') || (cVar4 == '\0')) {
    FUN_01360a3c(param_1,*(undefined8 *)(param_2 + 8));
    return;
  }
LAB_00efb898:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


