/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d9b450; name: FUN_01d9b450
 */


void FUN_01d9b450(undefined8 *param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined4 local_5c;
  undefined1 *local_58;
  byte *pbStack_50;
  size_t local_48;
  long *local_40;
  long *local_38;
  
  uVar9 = *param_1;
  FUN_00e43628(&local_38,param_2);
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
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
    bVar3 = *param_3;
    local_58 = &DAT_cbf29ce484222645;
    pbVar8 = param_3;
    while (bVar3 != 0) {
      pbVar8 = pbVar8 + 1;
      local_58 = (undefined1 *)(((ulong)local_58 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar8;
    }
    local_40 = (long *)0x0;
    pbStack_50 = param_3;
  }
  local_5c = param_4;
  FUN_01d9d9b0(uVar9,&local_38,&local_58,&local_5c);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


