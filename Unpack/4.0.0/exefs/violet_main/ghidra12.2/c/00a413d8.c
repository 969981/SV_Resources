/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a413d8; name: FUN_00a413d8
 */


void FUN_00a413d8(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int local_11c;
  long local_118;
  long lStack_110;
  undefined8 local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  int *local_98;
  undefined8 *puStack_90;
  
  FUN_00a42ac0();
  local_f8 = 1;
  uStack_f0 = 2;
  local_e0 = 0x400000003;
  uStack_d8 = 5;
  local_e8 = 0x200000025;
  local_118 = (long)*(int *)(param_2 + 0x18);
  lStack_110 = (long)*(int *)(param_2 + 0x1c);
  lStack_100 = local_118 << 2;
  local_108 = 1;
  local_d0 = 0x10;
  local_c8 = DAT_0485a0a0;
  lVar6 = FUN_00cf3764(local_c0,*(undefined8 *)(DAT_0485a0a0 + 8),&local_c8);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar6 = *param_1;
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0x70) + 0x30);
  local_c0 = *(undefined1 (*) [8])(lVar9 + 8);
  local_b8 = *(code **)(lVar9 + 0x6098);
  local_b0 = (undefined1 *)(lVar9 + 0x10);
  _local_c0 = FUN_0117e498(*(undefined8 *)(lVar9 + 0x6140),local_c0,&local_118,1,0);
  local_b0 = (undefined1 *)((ulong)local_b0 & 0xffffffffffffff00);
  FUN_00d56380(lVar6 + 0x30,local_c0);
  uVar5 = FUN_00d56320(lVar6 + 0x30);
  *(undefined4 *)(lVar6 + 0x78) = uVar5;
  lVar9 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  iVar11 = (int)((ulong)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) - lVar9) >> 2);
  if (iVar11 < 3) {
    iVar10 = 0;
    local_11c = 0;
    local_c8 = (ulong)local_c8._4_4_ << 0x20;
    if (iVar11 == 2) {
      iVar10 = 0;
      goto LAB_00a41520;
    }
  }
  else {
    iVar10 = *(int *)(lVar9 + 8);
    local_c8 = CONCAT44(local_c8._4_4_,iVar10);
LAB_00a41520:
    local_11c = *(int *)(lVar9 + 4);
  }
  local_a0 = param_2;
  if ((*(int *)(param_2 + 0x18) == iVar10) && (*(int *)(param_2 + 0x1c) == local_11c)) {
    local_c0 = (undefined1  [8])&LAB_00a42144;
    local_b8 = FUN_00a42150;
    local_b0 = &LAB_00a42260;
    local_a8 = &LAB_00a4226c;
    pcVar7 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar6 + 0x30);
    uVar8 = 0;
    if ((*pcVar7 != '\0') && (*(long *)(pcVar7 + 8) != 0)) {
      lVar9 = *(long *)(*(long *)(pcVar7 + 8) + 0x20);
      if (lVar9 == 0) {
LAB_00a416b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_buffer","Map",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                   ,0x31);
      }
      uVar8 = (**(code **)PTR_DAT_047d8da8)(lVar9,0);
      param_2 = local_a0;
    }
    FUN_00a42154(param_2,uVar8);
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar6 + 0x30);
    pcVar4 = local_b8;
  }
  else {
    local_98 = &local_11c;
    puStack_90 = &local_c8;
    local_b0 = &LAB_00a425dc;
    local_c0 = (undefined1  [8])&LAB_00a42278;
    local_b8 = FUN_00a42280;
    local_a8 = &LAB_00a425f0;
    pcVar7 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar6 + 0x30);
    uVar8 = 0;
    if ((*pcVar7 != '\0') && (*(long *)(pcVar7 + 8) != 0)) {
      lVar9 = *(long *)(*(long *)(pcVar7 + 8) + 0x20);
      if (lVar9 == 0) goto LAB_00a416b0;
      uVar8 = (**(code **)PTR_DAT_047d8da8)(lVar9,0);
    }
    FUN_00a42284(&local_a0,uVar8);
    FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar6 + 0x30);
    pcVar4 = local_b8;
  }
  if (pcVar4 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1  [8])0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(&local_a0);
  }
  return;
}


