/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00515980; name: FUN_00515980
 */


byte * FUN_00515980(ulong param_1,undefined8 *param_2,byte *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 local_38;
  
  uVar5 = param_1 >> 3;
  if ((int)uVar5 == 0) goto switchD_005159c8_default;
  pbVar4 = param_3;
  switch(param_1 & 7) {
  case 0:
    bVar3 = *param_3;
    if ((char)bVar3 < '\0') {
      iVar1 = (uint)bVar3 + (uint)param_3[1] * 0x80 + -0x80;
      if ((char)param_3[1] < '\0') {
        auVar6 = FUN_0052e420(param_3,iVar1);
        if (auVar6._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar6._8_4_ = iVar1;
        auVar6._0_8_ = param_3 + 2;
        auVar6._12_4_ = 0;
      }
    }
    else {
      auVar6[8] = bVar3;
      auVar6._0_8_ = param_3 + 1;
      auVar6._9_7_ = 0;
    }
    pbVar4 = auVar6._0_8_;
    FUN_00514e00(*param_2,uVar5 & 0xffffffff,auVar6._8_8_);
    break;
  case 1:
    pbVar4 = param_3 + 8;
    FUN_00514ff8(*param_2,uVar5 & 0xffffffff,*(undefined8 *)param_3);
    break;
  case 2:
    pbVar4 = (byte *)FUN_00515cb0(param_2,uVar5 & 0xffffffff,param_3,param_4);
    break;
  case 3:
    local_38 = FUN_00515210(*param_2,uVar5 & 0xffffffff);
    iVar1 = *(int *)(param_4 + 0x58);
    *(int *)(param_4 + 0x58) = iVar1 + -1;
    if (0 < iVar1) {
      *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
      pbVar4 = (byte *)FUN_00515860(&local_38,param_3,param_4);
      *(int *)(param_4 + 0x58) = *(int *)(param_4 + 0x58) + 1;
      *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + -1;
      uVar2 = *(uint *)(param_4 + 0x50);
      *(undefined4 *)(param_4 + 0x50) = 0;
      if (uVar2 == ((uint)param_1 & 0xfffffff8 | 3)) {
        return pbVar4;
      }
    }
  default:
switchD_005159c8_default:
    pbVar4 = (byte *)0x0;
    break;
  case 4:
    break;
  case 5:
    pbVar4 = param_3 + 4;
    FUN_00514ef8(*param_2,uVar5 & 0xffffffff,*(undefined4 *)param_3);
  }
  return pbVar4;
}


