/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc0454; name: FUN_01dc0454
 */


void FUN_01dc0454(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x1aa0) != '\0') {
    return;
  }
  *(char *)(param_1 + 0x1aa0) = '\x01';
  if (*(int *)(param_1 + 0x170) == 0x11) {
    if (*(long *)(param_1 + 0x150) != 0) {
      FUN_0129e570();
    }
    if (*(long *)(param_1 + 0x168) != 0) {
      FUN_01df060c(&local_28);
      FUN_015d81e0(local_28,0);
      FUN_014a3154(&local_28);
    }
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_01084328(&local_38,param_1 + 0x140);
    FUN_0199332c(&local_38,s_F344E928923DC26C8_04541c31);
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
LAB_01dc0580:
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_38 + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar8 = local_38;
    } while (cVar4 != '\0');
  }
  else {
    cVar4 = *(char *)(param_1 + 0x1aa1);
    FUN_01a85858(param_1,0);
    if (cVar4 == '\0') {
      if (*(long *)(param_1 + 0x1b8) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x170) = 1;
      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 1;
      return;
    }
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_01084328(&local_48,param_1 + 0x130);
    FUN_0199332c(&local_48,s_F76B0852E4609E048_04541c57);
    if (local_48 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) goto LAB_01dc0580;
    piVar2 = (int *)((long)local_48 + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar8 = local_48;
    } while (cVar4 != '\0');
  }
  if (iVar6 != -1) {
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar7 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar7;
    local_28 = *puVar8;
    FUN_00c44438(lVar7 + 0x8040,&local_28);
  }
  return;
}


