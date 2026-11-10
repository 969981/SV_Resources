/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190aac8; name: FUN_0190aac8
 */


void FUN_0190aac8(undefined8 param_1,byte *param_2,char *param_3,undefined1 param_4)

{
  long *plVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 local_74 [4];
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  ulong *local_50 [2];
  long *local_28;
  
  uVar8 = DAT_04855d40;
  FUN_00efb870(local_50);
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_2);
    bVar5 = *param_2;
    local_70 = &DAT_cbf29ce484222645;
    pbVar11 = param_2;
    while (bVar5 != 0) {
      pbVar11 = pbVar11 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar11;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  if (*param_3 == '\x01') {
    local_28 = *(long **)(param_3 + 8);
    if (local_28 == (long *)0x0) goto LAB_0190ab6c;
    plVar1 = local_28 + 5;
    do {
      iVar9 = (int)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  else {
    if (*param_3 != '\0') {
      local_28 = (long *)0x0;
      goto LAB_0190ab6c;
    }
    local_28 = *(long **)(param_3 + 8);
    if (local_28 == (long *)0x0) goto LAB_0190ab6c;
    plVar1 = local_28 + 5;
    do {
      iVar9 = (int)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_0190ab6c:
  local_74[0] = param_4;
  FUN_0190ade0(uVar8,local_50,&local_70,&local_28,local_74);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
    do {
      lVar10 = *plVar1;
      iVar9 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != (ulong *)0x0) {
    puVar2 = local_50[0] + 3;
    do {
      sVar4 = (short)*puVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *(short *)puVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_70 = (undefined1 *)*local_50[0];
        FUN_00c44438(lVar10 + 0x8040,&local_70);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


