/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008209a0; name: FUN_008209a0
 */


void FUN_008209a0(int *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  
  if (((ulong)param_1 & 3) == 0) {
    if (param_2 < 0x10) {
      iVar6 = param_3 + 0x165667b1;
    }
    else {
      piVar9 = (int *)((long)param_1 + (param_2 - 0xf));
      uVar8 = param_3 + 0x24234428;
      uVar7 = param_3 + 0x85ebca77;
      uVar5 = param_3 + 0x61c8864f;
      do {
        uVar7 = uVar7 + param_1[1] * -0x7a143589;
        uVar8 = uVar8 + *param_1 * -0x7a143589;
        uVar1 = uVar8 >> 0x13 | uVar8 * 0x2000;
        uVar2 = uVar7 >> 0x13 | uVar7 * 0x2000;
        param_3 = param_3 + param_1[2] * -0x7a143589;
        uVar5 = uVar5 + param_1[3] * -0x7a143589;
        uVar8 = uVar1 * -0x61c8864f;
        uVar3 = param_3 >> 0x13 | param_3 * 0x2000;
        uVar4 = uVar5 >> 0x13 | uVar5 * 0x2000;
        uVar7 = uVar2 * -0x61c8864f;
        param_3 = uVar3 * -0x61c8864f;
        uVar5 = uVar4 * -0x61c8864f;
        param_1 = param_1 + 4;
      } while (param_1 < piVar9);
      iVar6 = (uVar2 * 0x1bbcd880 | uVar7 >> 0x19) + (uVar1 * 0x3c6ef362 | uVar8 >> 0x1f) +
              (uVar3 * 0x779b1000 | param_3 >> 0x14) + (uVar4 * -0x193c0000 | uVar5 >> 0xe);
    }
    FUN_00820dd0(iVar6 + (int)param_2,param_1,param_2 & 0xf,0);
    return;
  }
  if (param_2 < 0x10) {
    iVar6 = param_3 + 0x165667b1;
  }
  else {
    piVar9 = (int *)((long)param_1 + (param_2 - 0xf));
    uVar8 = param_3 + 0x24234428;
    uVar7 = param_3 + 0x85ebca77;
    uVar5 = param_3 + 0x61c8864f;
    do {
      uVar7 = uVar7 + param_1[1] * -0x7a143589;
      uVar8 = uVar8 + *param_1 * -0x7a143589;
      uVar1 = uVar8 >> 0x13 | uVar8 * 0x2000;
      uVar2 = uVar7 >> 0x13 | uVar7 * 0x2000;
      param_3 = param_3 + param_1[2] * -0x7a143589;
      uVar5 = uVar5 + param_1[3] * -0x7a143589;
      uVar8 = uVar1 * -0x61c8864f;
      uVar3 = param_3 >> 0x13 | param_3 * 0x2000;
      uVar4 = uVar5 >> 0x13 | uVar5 * 0x2000;
      uVar7 = uVar2 * -0x61c8864f;
      param_3 = uVar3 * -0x61c8864f;
      uVar5 = uVar4 * -0x61c8864f;
      param_1 = param_1 + 4;
    } while (param_1 < piVar9);
    iVar6 = (uVar2 * 0x1bbcd880 | uVar7 >> 0x19) + (uVar1 * 0x3c6ef362 | uVar8 >> 0x1f) +
            (uVar3 * 0x779b1000 | param_3 >> 0x14) + (uVar4 * -0x193c0000 | uVar5 >> 0xe);
  }
  FUN_00820dd0(iVar6 + (int)param_2,param_1,param_2 & 0xf,1);
  return;
}


