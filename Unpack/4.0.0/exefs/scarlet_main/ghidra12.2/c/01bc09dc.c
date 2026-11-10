/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc09dc; name: FUN_01bc09dc
 */


void FUN_01bc09dc(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  short *psVar1;
  undefined *puVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  undefined1 *local_58;
  byte *pbStack_50;
  size_t local_48;
  long *local_40;
  long *local_38;
  
  puVar2 = PTR_LAB_047d55b8;
  if (DAT_0480ef58 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_00e43628(&local_38,param_2);
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_58 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_50 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_48 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_40 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x18))();
    }
  }
  else {
    local_48 = strlen((char *)param_3);
    bVar4 = *param_3;
    local_58 = &DAT_cbf29ce484222645;
    pbVar9 = param_3;
    while (bVar4 != 0) {
      pbVar9 = pbVar9 + 1;
      local_58 = (undefined1 *)(((ulong)local_58 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar9;
    }
    local_40 = (long *)0x0;
    pbStack_50 = param_3;
  }
  FUN_01bc40a0(param_1,puVar2,0,&local_38,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


