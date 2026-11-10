/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bd8f4; name: FUN_019bd8f4
 */


void FUN_019bd8f4(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5)

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
  undefined1 *local_c0;
  byte *pbStack_b8;
  size_t local_b0;
  long *local_a8;
  undefined1 *local_a0;
  byte *pbStack_98;
  size_t local_90;
  long *local_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  long *local_48;
  
  puVar8 = PTR_DAT_047d3e30;
  puVar7 = PTR_DAT_047d3e28;
  puVar2 = PTR_LAB_047ded40;
  if (DAT_0484c398 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)puVar8;
    pbStack_78 = *(byte **)(puVar8 + 8);
    local_70 = *(size_t *)(puVar8 + 0x10);
    local_68 = *(long **)(puVar8 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_2);
    bVar3 = *param_2;
    local_80 = &DAT_cbf29ce484222645;
    pbVar10 = param_2;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_2;
  }
  if (param_3 == (byte *)0x0) {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a0 = *(undefined1 **)puVar8;
    pbStack_98 = *(byte **)(puVar8 + 8);
    local_90 = *(size_t *)(puVar8 + 0x10);
    local_88 = *(long **)(puVar8 + 0x18);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
  }
  else {
    local_90 = strlen((char *)param_3);
    bVar3 = *param_3;
    local_a0 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    local_88 = (long *)0x0;
    pbStack_98 = param_3;
  }
  if (param_4 == (byte *)0x0) {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_c0 = *(undefined1 **)puVar8;
    pbStack_b8 = *(byte **)(puVar8 + 8);
    local_b0 = *(size_t *)(puVar8 + 0x10);
    local_a8 = *(long **)(puVar8 + 0x18);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x18))();
    }
  }
  else {
    local_b0 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_c0 = &DAT_cbf29ce484222645;
    pbVar10 = param_4;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    local_a8 = (long *)0x0;
    pbStack_b8 = param_4;
  }
  FUN_019bdcf0(&local_48,param_5);
  FUN_019bdc60(param_1,puVar2,0,&local_80,&local_a0,&local_c0,&local_48);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 5;
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
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


