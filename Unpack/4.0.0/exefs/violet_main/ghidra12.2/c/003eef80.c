/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eef80; name: FUN_003eef80
 */


void FUN_003eef80(undefined4 *param_1,uint *param_2)

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
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar4 + uVar8 + uVar9;
  param_1[2] = (int)lVar7;
  if (!CARRY4(uVar4 + uVar8,uVar9)) {
    uVar3 = (uint)CARRY4(uVar4,uVar8);
  }
  uVar4 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar10,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar6 = (ulong)*param_2 * (ulong)param_2[3] + (ulong)(uVar10 + uVar4);
  uVar5 = (ulong)*param_2 * (ulong)param_2[3] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[1] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar8)) {
    uVar4 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar3 + uVar8 + uVar9;
  if (!CARRY4(uVar3 + uVar8,uVar9)) {
    uVar4 = (uint)CARRY4(uVar3,uVar8);
  }
  lVar7 = (ulong)param_2[1] * (ulong)param_2[2] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar3 = uVar10 + uVar8;
  param_1[3] = (int)lVar7;
  if (CARRY4(uVar10,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar8 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar3,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar6 = (ulong)(uVar3 + uVar8) + (ulong)param_2[2] * (ulong)param_2[2];
  uVar5 = (ulong)param_2[1] * (ulong)param_2[3] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[1] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar8)) {
    uVar3 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar4 + uVar8 + uVar9;
  if (!CARRY4(uVar4 + uVar8,uVar9)) {
    uVar3 = (uint)CARRY4(uVar4,uVar8);
  }
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar4 = uVar10 + uVar8;
  if (CARRY4(uVar10,uVar8)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)*param_2 * (ulong)param_2[4] + (uVar6 & 0xffffffff);
  lVar7 = (ulong)*param_2 * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar4 + uVar10;
  param_1[4] = (int)lVar7;
  if (CARRY4(uVar4,uVar10)) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar8,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar6 = (ulong)*param_2 * (ulong)param_2[5] + (ulong)(uVar8 + uVar4);
  uVar5 = (ulong)*param_2 * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[1] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar8)) {
    uVar4 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar3 + uVar8 + uVar9;
  if (!CARRY4(uVar3 + uVar8,uVar9)) {
    uVar4 = (uint)CARRY4(uVar3,uVar8);
  }
  uVar5 = (ulong)param_2[1] * (ulong)param_2[4] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar3 = uVar10 + uVar8;
  if (CARRY4(uVar10,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar3 + uVar10;
  if (CARRY4(uVar3,uVar10)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)param_2[2] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  lVar7 = (ulong)param_2[2] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar8 + uVar10;
  param_1[5] = (int)lVar7;
  if (CARRY4(uVar8,uVar10)) {
    uVar4 = uVar4 + 1;
  }
  uVar8 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar3,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar6 = (ulong)(uVar3 + uVar8) + (ulong)param_2[3] * (ulong)param_2[3];
  uVar5 = (ulong)param_2[2] * (ulong)param_2[4] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[2] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar8)) {
    uVar3 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar4 + uVar8 + uVar9;
  if (!CARRY4(uVar4 + uVar8,uVar9)) {
    uVar3 = (uint)CARRY4(uVar4,uVar8);
  }
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar4 = uVar10 + uVar8;
  if (CARRY4(uVar10,uVar8)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_2[1] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar6 = (ulong)param_2[1] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar4 + uVar10;
  if (CARRY4(uVar4,uVar10)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (uint)(uVar6 >> 0x20);
  uVar4 = uVar8 + uVar10;
  if (CARRY4(uVar8,uVar10)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)*param_2 * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  lVar7 = (ulong)*param_2 * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar4 + uVar10;
  param_1[6] = (int)lVar7;
  if (CARRY4(uVar4,uVar10)) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar8,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar6 = (ulong)*param_2 * (ulong)param_2[7] + (ulong)(uVar8 + uVar4);
  uVar5 = (ulong)*param_2 * (ulong)param_2[7] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[1] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar8)) {
    uVar4 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar3 + uVar8 + uVar9;
  if (!CARRY4(uVar3 + uVar8,uVar9)) {
    uVar4 = (uint)CARRY4(uVar3,uVar8);
  }
  uVar5 = (ulong)param_2[1] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar3 = uVar10 + uVar8;
  if (CARRY4(uVar10,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar3 + uVar10;
  if (CARRY4(uVar3,uVar10)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)param_2[2] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar6 = (ulong)param_2[2] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar8 + uVar10;
  if (CARRY4(uVar8,uVar10)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = (uint)(uVar6 >> 0x20);
  uVar8 = uVar3 + uVar10;
  if (CARRY4(uVar3,uVar10)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)param_2[3] * (ulong)param_2[4] + (uVar6 & 0xffffffff);
  lVar7 = (ulong)param_2[3] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar8 + uVar10;
  param_1[7] = (int)lVar7;
  if (CARRY4(uVar8,uVar10)) {
    uVar4 = uVar4 + 1;
  }
  uVar8 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar3,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar6 = (ulong)(uVar3 + uVar8) + (ulong)param_2[4] * (ulong)param_2[4];
  uVar5 = (ulong)param_2[3] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[3] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar8)) {
    uVar3 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar4 + uVar8 + uVar9;
  if (!CARRY4(uVar4 + uVar8,uVar9)) {
    uVar3 = (uint)CARRY4(uVar4,uVar8);
  }
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar4 = uVar10 + uVar8;
  if (CARRY4(uVar10,uVar8)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_2[2] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar6 = (ulong)param_2[2] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar4 + uVar10;
  if (CARRY4(uVar4,uVar10)) {
    uVar3 = uVar3 + 1;
  }
  uVar10 = (uint)(uVar6 >> 0x20);
  uVar4 = uVar8 + uVar10;
  if (CARRY4(uVar8,uVar10)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_2[1] * (ulong)param_2[7] + (uVar6 & 0xffffffff);
  lVar7 = (ulong)param_2[1] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar4 + uVar10;
  param_1[8] = (int)lVar7;
  if (CARRY4(uVar4,uVar10)) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar8,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar6 = (ulong)param_2[2] * (ulong)param_2[7] + (ulong)(uVar8 + uVar4);
  uVar5 = (ulong)param_2[2] * (ulong)param_2[7] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[3] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar8)) {
    uVar4 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar3 + uVar8 + uVar9;
  if (!CARRY4(uVar3 + uVar8,uVar9)) {
    uVar4 = (uint)CARRY4(uVar3,uVar8);
  }
  uVar5 = (ulong)param_2[3] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar3 = uVar10 + uVar8;
  if (CARRY4(uVar10,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar3 + uVar10;
  if (CARRY4(uVar3,uVar10)) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)param_2[4] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  lVar7 = (ulong)param_2[4] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar8 + uVar10;
  param_1[9] = (int)lVar7;
  if (CARRY4(uVar8,uVar10)) {
    uVar4 = uVar4 + 1;
  }
  uVar8 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar3,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar6 = (ulong)(uVar3 + uVar8) + (ulong)param_2[5] * (ulong)param_2[5];
  uVar5 = (ulong)param_2[4] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[4] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar8)) {
    uVar3 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar4 + uVar8 + uVar9;
  if (!CARRY4(uVar4 + uVar8,uVar9)) {
    uVar3 = (uint)CARRY4(uVar4,uVar8);
  }
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar4 = uVar10 + uVar8;
  if (CARRY4(uVar10,uVar8)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_2[3] * (ulong)param_2[7] + (uVar6 & 0xffffffff);
  lVar7 = (ulong)param_2[3] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  uVar10 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar4 + uVar10;
  param_1[10] = (int)lVar7;
  if (CARRY4(uVar4,uVar10)) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar8,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar6 = (ulong)param_2[4] * (ulong)param_2[7] + (ulong)(uVar8 + uVar4);
  uVar5 = (ulong)param_2[4] * (ulong)param_2[7] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar6 = (ulong)param_2[5] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar8)) {
    uVar4 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar3 + uVar8 + uVar9;
  if (!CARRY4(uVar3 + uVar8,uVar9)) {
    uVar4 = (uint)CARRY4(uVar3,uVar8);
  }
  lVar7 = (ulong)param_2[5] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar3 = uVar10 + uVar8;
  param_1[0xb] = (int)lVar7;
  if (CARRY4(uVar10,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar8 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar3,uVar8)) {
    uVar4 = uVar4 + 1;
  }
  uVar6 = (ulong)(uVar3 + uVar8) + (ulong)param_2[6] * (ulong)param_2[6];
  uVar5 = (ulong)param_2[5] * (ulong)param_2[7] + (uVar6 & 0xffffffff);
  uVar8 = (uint)(uVar6 >> 0x20);
  lVar7 = (ulong)param_2[5] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  uVar3 = 2;
  if (!CARRY4(uVar4,uVar8)) {
    uVar3 = 1;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar10 = uVar4 + uVar8 + uVar9;
  param_1[0xc] = (int)lVar7;
  if (!CARRY4(uVar4 + uVar8,uVar9)) {
    uVar3 = (uint)CARRY4(uVar4,uVar8);
  }
  uVar4 = (uint)((ulong)lVar7 >> 0x20);
  if (CARRY4(uVar10,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_2[6] * (ulong)param_2[7] + (ulong)(uVar10 + uVar4);
  lVar7 = (ulong)param_2[6] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  param_1[0xd] = (int)lVar7;
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar4 = 2;
  if (!CARRY4(uVar3,uVar8)) {
    uVar4 = 1;
  }
  uVar10 = (uint)((ulong)lVar7 >> 0x20);
  if (!CARRY4(uVar3 + uVar8,uVar10)) {
    uVar4 = (uint)CARRY4(uVar3,uVar8);
  }
  lVar7 = (ulong)(uVar3 + uVar8 + uVar10) + (ulong)param_2[7] * (ulong)param_2[7];
  param_1[0xe] = (int)lVar7;
  param_1[0xf] = uVar4 + (int)((ulong)lVar7 >> 0x20);
  return;
}


