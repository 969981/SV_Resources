/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ef4e0; name: FUN_003ef4e0
 */


void FUN_003ef4e0(undefined4 *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = (ulong)*param_2 * (ulong)*param_2;
  *param_1 = (int)uVar5;
  uVar6 = (ulong)*param_2 * (ulong)param_2[1] + (uVar5 >> 0x20);
  uVar5 = (ulong)*param_2 * (ulong)param_2[1] + (uVar6 & 0xffffffff);
  param_1[1] = (int)uVar5;
  uVar2 = (uVar5 >> 0x20) + (uVar6 >> 0x20);
  uVar6 = (ulong)param_2[1] * (ulong)param_2[1] + (uVar2 & 0xffffffff);
  uVar1 = (ulong)*param_2 * (ulong)param_2[2] + (uVar6 & 0xffffffff);
  uVar8 = (uint)((uint)uVar2 < (uint)(uVar5 >> 0x20));
  uVar4 = (uint)(uVar6 >> 0x20);
  lVar7 = (ulong)*param_2 * (ulong)param_2[2] + (uVar1 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar8)) {
    uVar3 = 1;
  }
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar9 = uVar4 + uVar8 + uVar10;
  param_1[2] = (int)lVar7;
  if (!CARRY4(uVar4 + uVar8,uVar10)) {
    uVar3 = (uint)CARRY4(uVar4,uVar8);
  }
  uVar4 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar9,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar6 = (ulong)*param_2 * (ulong)param_2[3] + (ulong)(uVar9 + uVar4);
  uVar5 = (ulong)*param_2 * (ulong)param_2[3] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[1] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar8)) {
    uVar4 = 1;
  }
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar3 + uVar8 + uVar10;
  if (!CARRY4(uVar3 + uVar8,uVar10)) {
    uVar4 = (uint)CARRY4(uVar3,uVar8);
  }
  lVar7 = (ulong)param_2[1] * (ulong)param_2[2] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar3 = uVar9 + uVar8;
  param_1[3] = (int)lVar7;
  if (CARRY4(uVar9,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar8 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar3,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar6 = (ulong)(uVar3 + uVar8) + (ulong)param_2[2] * (ulong)param_2[2];
  uVar5 = (ulong)param_2[1] * (ulong)param_2[3] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  lVar7 = (ulong)param_2[1] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar8)) {
    uVar3 = 1;
  }
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar4 + uVar8 + uVar10;
  param_1[4] = (int)lVar7;
  if (!CARRY4(uVar4 + uVar8,uVar10)) {
    uVar3 = (uint)CARRY4(uVar4,uVar8);
  }
  uVar4 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar9,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_2[2] * (ulong)param_2[3] + (ulong)(uVar9 + uVar4);
  lVar7 = (ulong)param_2[2] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  param_1[5] = (int)lVar7;
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar8)) {
    uVar4 = 1;
  }
  uVar9 = (uint)((ulong)lVar7 >> 0x20);
  if (!CARRY4(uVar3 + uVar8,uVar9)) {
    uVar4 = (uint)CARRY4(uVar3,uVar8);
  }
  lVar7 = (ulong)(uVar3 + uVar8 + uVar9) + (ulong)param_2[3] * (ulong)param_2[3];
  param_1[6] = (int)lVar7;
  param_1[7] = uVar4 + (int)((ulong)lVar7 >> 0x20);
  return;
}


