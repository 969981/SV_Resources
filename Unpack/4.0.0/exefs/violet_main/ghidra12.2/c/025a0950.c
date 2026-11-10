/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025a0950; name: FUN_025a0950
 */


uint FUN_025a0950(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  short *psVar1;
  undefined *puVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  long *local_38;
  
  puVar2 = PTR_LAB_047dfa20;
  if (DAT_048520b0 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_00e43628(&local_38,param_2);
  puVar8 = PTR_DAT_047d3e30;
  puVar7 = PTR_DAT_047d3e28;
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)puVar8;
    pbStack_68 = *(byte **)(puVar8 + 8);
    local_60 = *(size_t *)(puVar8 + 0x10);
    local_58 = *(long **)(puVar8 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_3);
    bVar4 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar12 = param_3;
    while (bVar4 != 0) {
      pbVar12 = pbVar12 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  if (param_4 == (byte *)0x0) {
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(undefined1 **)puVar8;
    pbStack_88 = *(byte **)(puVar8 + 8);
    local_80 = *(size_t *)(puVar8 + 0x10);
    local_78 = *(long **)(puVar8 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    local_80 = strlen((char *)param_4);
    bVar4 = *param_4;
    local_90 = &DAT_cbf29ce484222645;
    pbVar12 = param_4;
    while (bVar4 != 0) {
      pbVar12 = pbVar12 + 1;
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
    }
    local_78 = (long *)0x0;
    pbStack_88 = param_4;
  }
  uVar9 = FUN_025a30c8(param_1,puVar2,0,&local_38,&local_70,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return uVar9 & 1;
}


