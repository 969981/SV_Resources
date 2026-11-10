/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019aa20c; name: FUN_019aa20c
 */


void FUN_019aa20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined4 param_5)

{
  ulong *puVar1;
  int *piVar2;
  undefined *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 local_80 [2];
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  ulong *local_50 [2];
  undefined4 local_24;
  
  puVar3 = PTR_FUN_047de108;
  if (DAT_048463e0 == '\0') {
    puVar3 = (undefined *)0x0;
  }
  FUN_0110a914(local_50,param_3);
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
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
    local_60 = strlen((char *)param_4);
    bVar5 = *param_4;
    local_70 = &DAT_cbf29ce484222645;
    pbVar10 = param_4;
    while (bVar5 != 0) {
      pbVar10 = pbVar10 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar10;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_4;
  }
  local_80[0] = param_1;
  local_24 = param_5;
  FUN_019aa464(param_2,puVar3,0,local_50,&local_70,local_80,&local_24);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != (ulong *)0x0) {
    puVar1 = local_50[0] + 3;
    do {
      sVar4 = (short)*puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *(short *)puVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_70 = (undefined1 *)*local_50[0];
        FUN_00c44438(lVar9 + 0x8040,&local_70);
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


