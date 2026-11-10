/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01872350; name: FUN_01872350
 */


void FUN_01872350(undefined1 *param_1,byte *param_2,byte *param_3,undefined4 param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  undefined1 *local_68;
  byte *pbStack_60;
  size_t local_58;
  long *local_50;
  long *local_48;
  
  puVar9 = (undefined8 *)PTR_DAT_047d3e30;
  puVar6 = PTR_DAT_047d3e28;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_68 = (undefined1 *)*puVar9;
    pbStack_60 = *(byte **)((long)puVar9 + 8);
    local_58 = *(size_t *)((long)puVar9 + 0x10);
    local_50 = *(long **)((long)puVar9 + 0x18);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  else {
    local_58 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_68 = &DAT_cbf29ce484222645;
    pbVar8 = param_2;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      local_68 = (undefined1 *)(((ulong)local_68 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    local_50 = (long *)0x0;
    puVar9 = (undefined8 *)PTR_DAT_047d3e30;
    pbStack_60 = param_2;
  }
  if (param_3 == (byte *)0x0) {
    if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_88 = (undefined1 *)*puVar9;
    pbStack_80 = (byte *)puVar9[1];
    local_78 = puVar9[2];
    local_70 = (long *)puVar9[3];
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  else {
    local_78 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_88 = &DAT_cbf29ce484222645;
    pbVar8 = param_3;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    local_70 = (long *)0x0;
    pbStack_80 = param_3;
  }
  FUN_01872618(&local_48,&local_68,&local_88,param_4);
  if (local_48 == (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    plVar1 = local_48 + 5;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    *param_1 = 1;
    *(long **)(param_1 + 8) = local_48;
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar5 = *plVar1;
        iVar7 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


