/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0217c100; name: FUN_0217c100
 */


void FUN_0217c100(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7)

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
  undefined8 uVar11;
  long lVar12;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  undefined8 *puStack_60;
  char local_58;
  
  FUN_00d5f508(local_78,param_4);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_01032b10(&local_b0,local_78);
  local_98 = CONCAT44(local_98._4_4_,param_1);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  local_a0 = param_5;
  local_90 = param_7;
  FUN_00f338dc(&local_68,param_2);
  uVar11 = FUN_01032970(local_68,&local_b0);
  uVar9 = local_68;
  puVar8 = local_b0;
  *(undefined4 *)(param_2 + 0xa4) = uVar3;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
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
      piVar2 = (int *)((long)local_b0 + 0x1c);
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
        local_68 = *puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_0217c29c;
  }
  if (local_78[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78[0] + 3);
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
      piVar2 = (int *)((long)local_78[0] + 0x1c);
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
        local_68 = *local_78[0];
        FUN_00c44438(lVar12 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_0217c29c;
  }
  uStack_a8 = *param_3;
  local_a0 = param_3[1];
  local_90 = *param_6;
  local_80 = 0;
  local_88 = (undefined8 *)0x0;
  local_b0 = param_2;
  local_98 = uVar11;
  FUN_01160880(&local_88,param_6 + 1);
  fVar4 = *(float *)(param_2 + 0xa4);
  FUN_0217c4b0(fVar4,uVar9,&local_b0);
  puVar8 = local_88;
  *(float *)(param_2 + 0xa4) = fVar4 + 0.01;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
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
      piVar2 = (int *)((long)local_88 + 0x1c);
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
        local_68 = *puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) {
LAB_0217c29c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_58 != '\0') {
    *puStack_60 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puStack_60 + 1));
  }
  return;
}


