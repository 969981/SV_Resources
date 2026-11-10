/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027642b0; name: FUN_027642b0
 */


void FUN_027642b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88 [2];
  undefined8 local_78;
  undefined8 *puStack_70;
  char local_68;
  
  FUN_00d5f508(local_88,param_4);
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_01032b10(&local_c0,local_88);
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  local_a0 = 0;
  uVar3 = *(undefined4 *)(param_1 + 0xa4);
  local_b0 = param_5;
  FUN_00f338dc(&local_78,param_1);
  lVar11 = FUN_01032970(local_78,&local_c0);
  uVar9 = local_78;
  puVar8 = local_c0;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  if (local_c0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c0 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_78 = *puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_78);
      }
    }
    else if (sVar5 == 0) goto LAB_02764444;
  }
  if (local_88[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88[0] + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_88[0] + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_78 = *local_88[0];
        FUN_00c44438(lVar12 + 0x8040,&local_78);
      }
    }
    else if (sVar5 == 0) goto LAB_02764444;
  }
  local_a0 = *param_6;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = param_1;
  uStack_b8 = param_2;
  local_b0 = param_3;
  local_a8 = lVar11;
  FUN_00cacc64(&local_98,param_6 + 1);
  fVar4 = *(float *)(param_1 + 0xa4);
  FUN_0276a478(fVar4,uVar9,&local_c0);
  puVar8 = local_98;
  *(float *)(param_1 + 0xa4) = fVar4 + 0.01;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_78 = *puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_78);
      }
    }
    else if (sVar5 == 0) {
LAB_02764444:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_68 != '\0') {
    *puStack_70 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puStack_70 + 1));
  }
  return;
}


