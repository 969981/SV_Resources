/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025b8684; name: FUN_025b8684
 */


void FUN_025b8684(undefined8 param_1,byte *param_2,char *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 local_6c;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar2 = PTR_FUN_047dfce0;
  if (DAT_04852a08 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_2);
    bVar3 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar8 = param_2;
    while (bVar3 != 0) {
      pbVar8 = pbVar8 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar8;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  if (*param_3 == '\x01') {
    local_68 = *(long **)(param_3 + 8);
    if (local_68 == (long *)0x0) goto LAB_025b8730;
    plVar1 = local_68 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (*param_3 != '\0') {
      local_68 = (long *)0x0;
      goto LAB_025b8730;
    }
    local_68 = *(long **)(param_3 + 8);
    if (local_68 == (long *)0x0) goto LAB_025b8730;
    plVar1 = local_68 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_025b8730:
  local_6c = param_4;
  FUN_025bb49c(param_1,puVar2,0,&local_60,&local_68,&local_6c);
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
    do {
      lVar6 = *plVar1;
      iVar7 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


