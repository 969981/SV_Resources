/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029bb6e8; name: FUN_029bb6e8
 */


void FUN_029bb6e8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long **pplVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long **local_d0;
  undefined4 *local_c8;
  long *local_68;
  uint *local_60 [2];
  uint *local_38;
  
  lVar13 = *param_3;
  if (lVar13 == 0) {
    return;
  }
  uVar11 = *(undefined8 *)*param_1;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  pplVar5 = (long **)param_2[3];
  if (pplVar5 != (long **)0x0) {
    (*(code *)(*pplVar5)[3])(pplVar5);
  }
  local_f0 = (code *)CONCAT71(local_f0._1_7_,1);
  local_e8 = (code *)uVar2;
  local_e0 = (undefined1 *)uVar4;
  local_d8 = (undefined1 *)uVar3;
  local_d0 = pplVar5;
  FUN_00c5ecb4(&local_68,uVar11,&local_f0);
  if (((char)local_f0 != '\0') && (local_d0 != (long **)0x0)) {
    (*(code *)(*local_d0)[4])();
  }
  if (local_68 == (long *)0x0) {
    return;
  }
  local_c8 = (undefined4 *)param_1[1];
  local_d0 = &local_68;
  local_f0 = FUN_02e4d920;
  local_e8 = FUN_02e4d9b4;
  local_e0 = &LAB_02e4d9b8;
  local_d8 = &LAB_02e4d9c4;
  plVar12 = *(long **)(lVar13 + 0x50);
  pcVar10 = FUN_02e4d9b4;
  if (plVar12 == (long *)0x0) {
LAB_029bb850:
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  else {
    puVar1 = (uint *)(plVar12 + 6);
    local_60[0] = puVar1;
    if ((0.0 < *(float *)((long)plVar12 + 0x34)) &&
       (uVar9 = (**(code **)(*(long *)(local_68[7] + 0x30) + 0x98))
                          ((long *)(local_68[7] + 0x30),&local_38,plVar12 + 2,local_68 + 0x15),
       (uVar9 & 1) != 0)) {
      pcVar10 = *(code **)(PTR_PTR_047e3190 + (ulong)*puVar1 * 0x10);
      uVar9 = *(ulong *)((long)(PTR_PTR_047e3190 + (ulong)*puVar1 * 0x10) + 8);
      if ((uVar9 & 1) != 0) {
        pcVar10 = *(code **)(pcVar10 + *(long *)((long)puVar1 + ((long)uVar9 >> 1)));
      }
      (*pcVar10)(*local_c8,local_38._0_4_);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      do {
        local_60[0] = (uint *)(plVar12 + 6);
        (*local_f0)(&local_d0,plVar12 + 2,local_60);
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
    pcVar10 = local_e8;
    if (local_e8 != (code *)0x0) goto LAB_029bb850;
  }
  local_c8 = (undefined4 *)param_1[1];
  local_d0 = &local_68;
  local_f0 = FUN_02e4d9d0;
  local_e8 = FUN_02e4da88;
  local_e0 = &LAB_02e4dadc;
  local_d8 = &LAB_02e4dae8;
  plVar12 = *(long **)(lVar13 + 0xb8);
  pcVar10 = FUN_02e4da88;
  if (plVar12 != (long *)0x0) {
    puVar1 = (uint *)(plVar12 + 6);
    local_38 = puVar1;
    if ((0.0 < *(float *)((long)plVar12 + 0x34)) &&
       (uVar9 = (**(code **)(*(long *)(local_68[7] + 0x30) + 0xa8))
                          ((long *)(local_68[7] + 0x30),local_60,plVar12 + 2,local_68 + 0x15),
       (uVar9 & 1) != 0)) {
      pcVar10 = *(code **)(PTR_PTR_047e31a0 + (ulong)*puVar1 * 0x10);
      uVar9 = *(ulong *)((long)(PTR_PTR_047e31a0 + (ulong)*puVar1 * 0x10) + 8);
      if ((uVar9 & 1) != 0) {
        pcVar10 = *(code **)(pcVar10 + *(long *)((long)puVar1 + ((long)uVar9 >> 1)));
      }
      (*pcVar10)(*local_c8,local_60[0]._0_4_);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      do {
        local_38 = (uint *)(plVar12 + 6);
        (*local_f0)(&local_d0,plVar12 + 2,&local_38);
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
    pcVar10 = local_e8;
    if (local_e8 == (code *)0x0) goto LAB_029bb8b4;
  }
  local_e0 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_f0 = (code *)0x0;
  local_e8 = (code *)0x0;
  (*pcVar10)(&local_d0);
LAB_029bb8b4:
  if (local_68 != (long *)0x0) {
    plVar12 = local_68 + 5;
    do {
      lVar13 = *plVar12;
      iVar8 = (int)lVar13 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


