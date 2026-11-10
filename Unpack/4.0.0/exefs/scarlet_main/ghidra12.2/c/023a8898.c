/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023a8898; name: FUN_023a8898
 */


void FUN_023a8898(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
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
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  undefined8 *puStack_60;
  char local_58;
  
  FUN_00d5f508(local_78,param_4);
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_01032b10(&local_d0,local_78);
  local_b8 = CONCAT44(local_b8._4_4_,param_1);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  local_c0 = param_5;
  local_b0 = param_7;
  FUN_00f338dc(&local_68,param_2);
  uVar11 = FUN_01032970(local_68,&local_d0);
  uVar9 = local_68;
  puVar8 = local_d0;
  *(undefined4 *)(param_2 + 0xa4) = uVar3;
  if (local_d0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d0 + 3);
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
      piVar2 = (int *)((long)local_d0 + 0x1c);
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
    else if (sVar5 == 0) goto LAB_023a8a54;
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
    else if (sVar5 == 0) goto LAB_023a8a54;
  }
  uStack_c8 = *param_3;
  local_c0 = param_3[1];
  local_b0 = *param_6;
  local_a0 = 0;
  local_a8 = (undefined8 *)0x0;
  local_d0 = param_2;
  local_b8 = uVar11;
  FUN_00c43ef0(&local_a8,param_6 + 1);
  local_98 = param_6[3];
  uStack_90 = param_6[4];
  local_88 = param_6[5];
  local_80 = (long *)param_6[6];
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  fVar4 = *(float *)(param_2 + 0xa4);
  FUN_023a8c88(fVar4,uVar9,&local_d0);
  *(float *)(param_2 + 0xa4) = fVar4 + 0.01;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  puVar8 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8 + 3);
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
      piVar2 = (int *)((long)local_a8 + 0x1c);
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
LAB_023a8a54:
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


