/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023a44a0; name: FUN_023a44a0
 */


void FUN_023a44a0(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

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
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88 [2];
  undefined8 local_78;
  undefined8 *puStack_70;
  char local_68;
  
  FUN_00d5f508(local_88,param_5);
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  FUN_01032b10(&local_e0,local_88);
  local_c8 = CONCAT44(local_c8._4_4_,param_1);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  local_d0 = param_6;
  local_c0 = param_8;
  FUN_00f338dc(&local_78,param_2);
  uVar11 = FUN_01032970(local_78,&local_e0);
  uVar9 = local_78;
  puVar8 = local_e0;
  *(undefined4 *)(param_2 + 0xa4) = uVar3;
  if (local_e0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_e0 + 3);
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
      piVar2 = (int *)((long)local_e0 + 0x1c);
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
    else if (sVar5 == 0) goto LAB_023a465c;
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
    else if (sVar5 == 0) goto LAB_023a465c;
  }
  local_c0 = *param_7;
  local_b0 = 0;
  local_b8 = (undefined8 *)0x0;
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_d0 = param_4;
  local_c8 = uVar11;
  FUN_00c96b7c(&local_b8,param_7 + 1);
  local_a8 = param_7[3];
  uStack_a0 = param_7[4];
  local_98 = param_7[5];
  local_90 = (long *)param_7[6];
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  fVar4 = *(float *)(param_2 + 0xa4);
  FUN_023af8bc(fVar4,uVar9,&local_e0);
  *(float *)(param_2 + 0xa4) = fVar4 + 0.01;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  puVar8 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b8 + 3);
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
      piVar2 = (int *)((long)local_b8 + 0x1c);
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
    else if (sVar5 == 0) {
LAB_023a465c:
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


