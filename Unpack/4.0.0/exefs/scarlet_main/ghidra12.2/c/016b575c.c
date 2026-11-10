/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b575c; name: FUN_016b575c
 */


void FUN_016b575c(undefined1 *param_1,undefined8 param_2,byte *param_3)

{
  short *psVar1;
  int *piVar2;
  undefined1 *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  puVar3 = &LAB_018f94c0;
  if (DAT_048462f0 == '\0') {
    puVar3 = (undefined1 *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_3);
    bVar5 = *param_3;
    local_80 = &DAT_cbf29ce484222645;
    pbVar11 = param_3;
    while (bVar5 != 0) {
      pbVar11 = pbVar11 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar11;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_3;
  }
  FUN_016b5a88(local_60,param_2,puVar3,0,&local_80);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_010e6eac(&local_50,local_60);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_010e6adc(param_1 + 8,&local_50);
  puVar8 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
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
        local_28 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar4 == 0) goto LAB_016b5888;
  }
  if (local_60[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_60[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
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
        local_50 = (undefined8 *)*local_60[0];
        FUN_00c44438(lVar10 + 0x8040,&local_50);
      }
    }
    else if (sVar4 == 0) {
LAB_016b5888:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


