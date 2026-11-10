/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b208a4; name: FUN_00b208a4
 */


void FUN_00b208a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_8;
  
  local_84 = 0;
  local_88 = 0;
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  uStack_90 = param_3;
  FUN_00ca1a48(&local_a0,param_1);
  local_c0 = *param_2;
  uStack_b8 = param_2[1];
  local_b0 = param_2[2];
  local_a8 = (long *)param_2[3];
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x18))();
  }
  FUN_01ecc470(&local_a0,&local_c0,&uStack_90);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  puVar6 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a0 + 3);
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
      piVar2 = (int *)((long)local_a0 + 0x1c);
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
        local_8 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_8);
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


