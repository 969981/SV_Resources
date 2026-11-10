/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0125c124; name: FUN_0125c124
 */


void FUN_0125c124(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uVar9 = (ulong)&local_80 | 8;
  local_70 = 0;
  uStack_68 = 0xffffffffffffffff;
  local_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  local_60 = 0x7f7fffff;
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  FUN_00d0a71c(param_1 + 0x128,uVar9);
  memcpy((void *)(param_1 + 0x138),&uStack_68,0x28);
  *(undefined1 *)(param_1 + 0x160) = (undefined1)local_80;
  FUN_00d0a71c(param_1 + 0x168,uVar9);
  memcpy((void *)(param_1 + 0x178),&uStack_68,0x28);
  *(undefined1 *)(param_1 + 0x1a0) = (undefined1)local_80;
  FUN_00d0a71c(param_1 + 0x1a8,uVar9);
  memcpy((void *)(param_1 + 0x1b8),&uStack_68,0x28);
  *(undefined1 *)(param_1 + 0x1e0) = (undefined1)local_80;
  FUN_00d0a71c(param_1 + 0x1e8,uVar9);
  memcpy((void *)(param_1 + 0x1f8),&uStack_68,0x28);
  *(undefined1 *)(param_1 + 0x220) = (undefined1)local_80;
  FUN_00d0a71c(param_1 + 0x228,uVar9);
  memcpy((void *)(param_1 + 0x238),&uStack_68,0x28);
  *(undefined1 *)(param_1 + 0x260) = (undefined1)local_80;
  FUN_00d0a71c(param_1 + 0x268,uVar9);
  memcpy((void *)(param_1 + 0x278),&uStack_68,0x28);
  *(undefined1 *)(param_1 + 0x2a0) = (undefined1)local_80;
  FUN_00d0a71c(param_1 + 0x2a8,uVar9);
  memcpy((void *)(param_1 + 0x2b8),&uStack_68,0x28);
  *(undefined1 *)(param_1 + 0x2e0) = (undefined1)local_80;
  FUN_00d0a71c(param_1 + 0x2e8,uVar9);
  memcpy((void *)(param_1 + 0x2f8),&uStack_68,0x28);
  puVar6 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
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
      piVar2 = (int *)((long)local_78 + 0x1c);
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
        local_38 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_38);
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
  return;
}


