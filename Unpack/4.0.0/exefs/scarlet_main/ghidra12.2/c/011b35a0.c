/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b35a0; name: FUN_011b35a0
 */


void FUN_011b35a0(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [96];
  long local_50 [3];
  undefined4 local_38;
  
  local_50[0] = *param_2;
  local_38 = 0;
  local_50[1] = 0x48;
  local_50[2] = 4;
  lVar6 = FUN_00cf3764(local_d0,*(undefined8 *)(local_50[0] + 8),local_50);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar6 = *param_1;
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0x70) + 0x30);
  local_d0 = *(undefined1 (*) [8])(lVar9 + 8);
  local_c8 = *(code **)(lVar9 + 0x6098);
  local_c0 = (undefined1 *)(lVar9 + 0x10);
  _local_d0 = FUN_00d56874(*(undefined8 *)(lVar9 + 0x6140),local_d0,local_50 + 1,0,0);
  lVar9 = lVar6 + 0x30;
  local_c0 = (undefined1 *)((ulong)local_c0 & 0xffffffffffffff00);
  FUN_00d56380(lVar9,local_d0);
  uVar5 = FUN_00d56320(lVar9);
  *(undefined4 *)(lVar6 + 0x78) = uVar5;
  local_d0 = (undefined1  [8])&LAB_02bb4840;
  local_c8 = FUN_02bb48d8;
  local_c0 = &LAB_02bb48dc;
  puStack_b8 = &LAB_02bb48e0;
  pcVar7 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar9);
  if ((*pcVar7 != '\0') && (*(long *)(pcVar7 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar7 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    puVar8 = (undefined8 *)(**(code **)PTR_DAT_047d8da8)();
    pcVar10 = local_c8;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0x200010000;
      puVar8[1] = 0x5000400030002;
      puVar8[2] = 0x7000600040006;
      puVar8[3] = 0x8000a00090008;
      puVar8[4] = 0xd000c000b000a;
      puVar8[5] = 0xf000e000c000e;
      puVar8[6] = 0x10001200110010;
      puVar8[7] = 0x15001400130012;
      puVar8[8] = 0x17001600140016;
      FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar9);
      if (pcVar10 == (code *)0x0) {
        return;
      }
      goto LAB_011b377c;
    }
  }
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar6 + 0x70) + 0x110),lVar9);
  pcVar10 = FUN_02bb48d8;
LAB_011b377c:
  local_c0 = (undefined1 *)0x0;
  puStack_b8 = (undefined1 *)0x0;
  local_d0 = (undefined1  [8])0x0;
  local_c8 = (code *)0x0;
  (*pcVar10)(auStack_b0);
  return;
}


