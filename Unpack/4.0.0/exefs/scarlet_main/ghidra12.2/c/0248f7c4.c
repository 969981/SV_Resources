/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0248f7c4; name: FUN_0248f7c4
 */


void FUN_0248f7c4(undefined8 param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  long *local_98;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  puVar8 = PTR_DAT_047d3e30;
  puVar7 = PTR_DAT_047d3e28;
  puVar2 = PTR_LAB_047ded48;
  if (DAT_0484c3a0 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
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
    local_60 = strlen((char *)param_2);
    bVar3 = *param_2;
    local_70 = &DAT_cbf29ce484222645;
    pbVar10 = param_2;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  if (param_3 == (byte *)0x0) {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
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
    local_80 = strlen((char *)param_3);
    bVar3 = *param_3;
    local_90 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    local_78 = (long *)0x0;
    pbStack_88 = param_3;
  }
  FUN_019bdcf0(&local_98,param_4);
  FUN_024920a8(param_1,puVar2,0,&local_70,&local_90,&local_98);
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 5;
    do {
      lVar6 = *plVar1;
      iVar9 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


