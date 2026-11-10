/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017720f8; name: FUN_017720f8
 */


void FUN_017720f8(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58 [3];
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined4 *local_28;
  
  local_60 = 2;
  uStack_5c = 0xb;
  local_64 = 0x16;
  local_58[0] = *param_2;
  local_40 = 0;
  local_58[1] = 0x108;
  local_58[2] = 4;
  lVar6 = FUN_00cf3764(local_38,*(undefined8 *)(local_58[0] + 8),local_58);
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar6 = *param_1;
  }
  lVar7 = *(long *)(*(long *)(lVar6 + 0x70) + 0x30);
  local_38._0_8_ = *(undefined8 *)(lVar7 + 8);
  local_38._8_8_ = *(undefined8 *)(lVar7 + 0x6098);
  local_28 = (undefined4 *)(lVar7 + 0x10);
  local_38 = FUN_00d56874(*(undefined8 *)(lVar7 + 0x6140),local_38,local_58 + 1,0,0);
  local_28 = (undefined4 *)((ulong)local_28 & 0xffffffffffffff00);
  FUN_00d56380(lVar6 + 0x30,local_38);
  uVar5 = FUN_00d56320(lVar6 + 0x30);
  local_38._0_8_ = &uStack_5c;
  local_38._8_8_ = &local_64;
  *(undefined4 *)(lVar6 + 0x78) = uVar5;
  local_28 = &local_60;
  FUN_01772228(lVar6,local_38);
  return;
}


