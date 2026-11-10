/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cd1d60; name: FUN_01cd1d60
 */


void FUN_01cd1d60(undefined8 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  undefined1 *puVar11;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar11 = *(undefined1 **)PTR_DAT_047d3e30;
    param_2 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar7 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar10 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  else {
    puVar11 = &DAT_cbf29ce484222645;
    sVar7 = strlen((char *)param_2);
    bVar3 = *param_2;
    pbVar9 = param_2;
    while (bVar3 != 0) {
      pbVar9 = pbVar9 + 1;
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar9;
    }
    plVar10 = (long *)0x0;
  }
  local_70 = puVar11;
  pbStack_68 = param_2;
  local_60 = sVar7;
  local_58 = plVar10;
  FUN_01cdd374(&local_78,&local_70,param_3,param_4,param_5);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_01cdd3b0(param_1,&local_78);
  if (local_78 != (long *)0x0) {
    lVar8 = local_78[0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
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


