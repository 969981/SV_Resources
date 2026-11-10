/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03271010; name: FUN_03271010
 */


int FUN_03271010(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int local_80 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar2 = param_1[3];
  uVar4 = *param_1;
  if ((long)uVar2 < 0) {
    uVar5 = ~uVar4;
    uVar4 = -uVar4;
    uVar6 = ~param_1[1] + (ulong)(uVar4 < uVar5);
    uVar8 = (ulong)CARRY8(~param_1[1],(ulong)(uVar4 < uVar5));
    uVar7 = -uVar2;
    uVar5 = uVar8 + ~param_1[2];
    if (!CARRY8(uVar8,~param_1[2])) {
      uVar7 = ~uVar2;
    }
  }
  else {
    uVar6 = param_1[1];
    uVar5 = param_1[2];
    uVar7 = uVar2;
  }
  uVar2 = param_2[3];
  uVar8 = *param_2;
  if ((long)uVar2 < 0) {
    uVar9 = ~uVar8;
    uVar8 = -uVar8;
    uVar11 = ~param_2[1] + (ulong)(uVar8 < uVar9);
    uVar10 = (ulong)CARRY8(~param_2[1],(ulong)(uVar8 < uVar9));
    uVar12 = -uVar2;
    uVar9 = uVar10 + ~param_2[2];
    if (!CARRY8(uVar10,~param_2[2])) {
      uVar12 = ~uVar2;
    }
  }
  else {
    uVar11 = param_2[1];
    uVar9 = param_2[2];
    uVar12 = uVar2;
  }
  local_40 = (undefined4)uVar4;
  uStack_3c = (undefined4)(uVar4 >> 0x20);
  local_60 = (undefined4)uVar8;
  uStack_5c = (undefined4)(uVar8 >> 0x20);
  local_38 = (undefined4)uVar6;
  uStack_34 = (undefined4)(uVar6 >> 0x20);
  local_58 = (undefined4)uVar11;
  uStack_54 = (undefined4)(uVar11 >> 0x20);
  local_30 = (undefined4)uVar5;
  uStack_2c = (undefined4)(uVar5 >> 0x20);
  local_50 = (undefined4)uVar9;
  uStack_4c = (undefined4)(uVar9 >> 0x20);
  local_28 = (undefined4)uVar7;
  uStack_24 = (undefined4)(uVar7 >> 0x20);
  local_48 = (undefined4)uVar12;
  uStack_44 = (undefined4)(uVar12 >> 0x20);
  FUN_0326ffe0(&local_40,&local_60,local_80,0,8);
  if ((long)param_1[3] < 0) {
    uVar1 = 0xffffffff;
  }
  else if ((*param_1 == 0) && (param_1[1] == 0)) {
    uVar1 = (uint)(param_1[2] != 0 || param_1[3] != 0);
  }
  else {
    uVar1 = 1;
  }
  if ((long)param_2[3] < 0) {
    uVar3 = 0xffffffff;
  }
  else if ((*param_2 == 0) && (param_2[1] == 0)) {
    uVar3 = (uint)(param_2[2] != 0 || param_2[3] != 0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3 * uVar1 * local_80[0];
}


