/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021744bc; name: FUN_021744bc
 */


undefined1  [16] FUN_021744bc(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar6 = *param_1 + ((param_2 & 1) - 1 & (param_2 | 1));
  uVar1 = param_1[1] + ((param_2 | 1) & -(param_2 & 1));
  uVar5 = (ulong)uVar1;
  iVar3 = 1 << (ulong)(param_1[2] & 0x1f);
  if ((int)uVar6 < 0) {
    uVar6 = iVar3 + uVar6;
    uVar2 = param_1[3] | 1;
    uVar1 = uVar2;
    if ((1 << (ulong)(param_1[3] & 0x1fU | 1) & 0x20aU) == 0) {
      uVar1 = 0;
    }
    uVar4 = 0;
    if (uVar2 < 10) {
      uVar4 = uVar1;
    }
    uVar7 = (ulong)uVar4;
  }
  else if ((int)uVar1 < 0) {
    uVar5 = (ulong)(iVar3 + uVar1);
    uVar2 = param_1[3] | 8;
    uVar1 = uVar2;
    if ((1 << (ulong)(param_1[3] & 0x1fU | 8) & 0x1300U) == 0) {
      uVar1 = 0;
    }
    uVar4 = 0;
    if (uVar2 < 0xd) {
      uVar4 = uVar1;
    }
    uVar7 = (ulong)uVar4;
  }
  else if ((int)uVar6 < iVar3) {
    if ((int)uVar1 < iVar3) {
      uVar7 = (ulong)(uint)param_1[3];
    }
    else {
      uVar4 = param_1[3] | 2;
      uVar2 = uVar4;
      if ((1 << (ulong)(param_1[3] & 0x1fU | 2) & 0x4cU) == 0) {
        uVar2 = 0;
      }
      uVar5 = (ulong)(uVar1 - iVar3);
      uVar1 = 0;
      if (uVar4 < 7) {
        uVar1 = uVar2;
      }
      uVar7 = (ulong)uVar1;
    }
  }
  else {
    uVar2 = param_1[3] | 4;
    uVar1 = uVar2;
    if ((1 << (ulong)(param_1[3] & 0x1fU | 4) & 0x1050U) == 0) {
      uVar1 = 0;
    }
    uVar4 = 0;
    if (uVar2 < 0xd) {
      uVar4 = uVar1;
    }
    uVar7 = (ulong)uVar4;
    uVar6 = uVar6 - iVar3;
  }
  auVar8._8_8_ = (ulong)(uint)param_1[2] | uVar7 << 0x20;
  auVar8._0_8_ = (ulong)uVar6 | uVar5 << 0x20;
  return auVar8;
}


