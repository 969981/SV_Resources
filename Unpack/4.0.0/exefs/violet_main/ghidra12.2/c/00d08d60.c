/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d08d60; name: FUN_00d08d60
 */


void FUN_00d08d60(long *param_1,long *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int local_60;
  int iStack_5c;
  long local_58;
  ulong local_50 [2];
  undefined4 local_40;
  undefined1 local_38 [16];
  ulong local_28;
  
  if ((param_4 + 1) * (param_3 + 1) < 0x10000) {
    FUN_012a6430();
    return;
  }
  local_58 = *param_2;
  local_40 = 0;
  local_50[0] = (ulong)(uint)(((param_4 + -2) * param_3 * 2 + param_3 * 2) * 0xc);
  local_50[1] = 4;
  local_60 = param_4;
  iStack_5c = param_3;
  lVar6 = FUN_00cf3764(local_38,*(undefined8 *)(local_58 + 8),&local_58);
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
  lVar7 = *(long *)(*(long *)(lVar6 + 0x70) + 0x30);
  local_38._0_8_ = *(undefined8 *)(lVar7 + 8);
  local_38._8_8_ = *(undefined8 *)(lVar7 + 0x6098);
  local_28 = lVar7 + 0x10;
  local_38 = FUN_00d56874(*(undefined8 *)(lVar7 + 0x6140),local_38,local_50,0,0);
  local_28 = local_28 & 0xffffffffffffff00;
  FUN_00d56380(lVar6 + 0x30,local_38);
  uVar5 = FUN_00d56320(lVar6 + 0x30);
  *(undefined4 *)(lVar6 + 0x78) = uVar5;
  local_38._0_8_ = &iStack_5c;
  local_38._8_8_ = &local_60;
  FUN_0271736c(lVar6,local_38,0);
  return;
}


