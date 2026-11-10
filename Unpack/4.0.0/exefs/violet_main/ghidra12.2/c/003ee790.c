/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ee790; name: FUN_003ee790
 */


void FUN_003ee790(undefined4 *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *param_2;
  uVar3 = *param_3;
  *param_1 = (int)((ulong)uVar3 * (ulong)uVar2);
  uVar4 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar3 * (ulong)uVar2 >> 0x20);
  uVar5 = (ulong)*param_3 * (ulong)param_2[1] + (uVar4 & 0xffffffff);
  param_1[1] = (int)uVar5;
  uVar1 = (uVar5 >> 0x20) + (uVar4 >> 0x20);
  uVar4 = (ulong)*param_3 * (ulong)param_2[2] + (uVar1 & 0xffffffff);
  uVar7 = (uint)((uint)uVar1 < (uint)(uVar5 >> 0x20));
  uVar3 = (uint)(uVar4 >> 0x20);
  uVar5 = (ulong)param_3[1] * (ulong)param_2[1] + (uVar4 & 0xffffffff);
  uVar2 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar2 = 1;
  }
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar2 = (uint)CARRY4(uVar3,uVar7);
  }
  lVar6 = (ulong)param_3[2] * (ulong)*param_2 + (uVar5 & 0xffffffff);
  param_1[2] = (int)lVar6;
  uVar3 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar9,uVar3)) {
    uVar2 = uVar2 + 1;
  }
  uVar4 = (ulong)(uVar9 + uVar3) + (ulong)param_3[3] * (ulong)*param_2;
  uVar5 = (ulong)param_3[2] * (ulong)param_2[1] + (uVar4 & 0xffffffff);
  uVar7 = (uint)(uVar4 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar2,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar2 + uVar7 + uVar8;
  if (!CARRY4(uVar2 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar2,uVar7);
  }
  uVar5 = (ulong)param_3[1] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)*param_3 * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  param_1[3] = (int)lVar6;
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar2,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar2 + uVar7) + (ulong)*param_3 * (ulong)param_2[4];
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar2 = 1;
  }
  uVar5 = (ulong)param_3[1] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar2 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar5 = (ulong)param_3[2] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar2 = uVar2 + 1;
  }
  uVar5 = (ulong)param_3[3] * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  lVar6 = (ulong)param_3[4] * (ulong)*param_2 + (uVar5 & 0xffffffff);
  param_1[4] = (int)lVar6;
  uVar3 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar7,uVar3)) {
    uVar2 = uVar2 + 1;
  }
  uVar4 = (ulong)(uVar7 + uVar3) + (ulong)param_3[5] * (ulong)*param_2;
  uVar5 = (ulong)param_3[4] * (ulong)param_2[1] + (uVar4 & 0xffffffff);
  uVar7 = (uint)(uVar4 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar2,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar2 + uVar7 + uVar8;
  if (!CARRY4(uVar2 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar2,uVar7);
  }
  uVar5 = (ulong)param_3[3] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_3[2] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar2 + uVar9;
  if (CARRY4(uVar2,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_3[1] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)*param_3 * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  param_1[5] = (int)lVar6;
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar2,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar2 + uVar7) + (ulong)*param_3 * (ulong)param_2[6];
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar2 = 1;
  }
  uVar5 = (ulong)param_3[1] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar2 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar5 = (ulong)param_3[2] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar2 = uVar2 + 1;
  }
  uVar5 = (ulong)param_3[3] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  uVar5 = (ulong)param_3[4] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  uVar5 = (ulong)param_3[5] * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  lVar6 = (ulong)param_3[6] * (ulong)*param_2 + (uVar5 & 0xffffffff);
  param_1[6] = (int)lVar6;
  uVar3 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar7,uVar3)) {
    uVar2 = uVar2 + 1;
  }
  uVar4 = (ulong)(uVar7 + uVar3) + (ulong)param_3[7] * (ulong)*param_2;
  uVar5 = (ulong)param_3[6] * (ulong)param_2[1] + (uVar4 & 0xffffffff);
  uVar7 = (uint)(uVar4 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar2,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar2 + uVar7 + uVar8;
  if (!CARRY4(uVar2 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar2,uVar7);
  }
  uVar5 = (ulong)param_3[5] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_3[4] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar2 + uVar9;
  if (CARRY4(uVar2,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_3[3] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_3[2] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar2 + uVar9;
  if (CARRY4(uVar2,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_3[1] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)*param_3 * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  param_1[7] = (int)lVar6;
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar2,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar2 + uVar7) + (ulong)param_3[1] * (ulong)param_2[7];
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar2 = 1;
  }
  uVar5 = (ulong)param_3[2] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar2 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar5 = (ulong)param_3[3] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar2 = uVar2 + 1;
  }
  uVar5 = (ulong)param_3[4] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  uVar5 = (ulong)param_3[5] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  uVar5 = (ulong)param_3[6] * (ulong)param_2[2] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  lVar6 = (ulong)param_3[7] * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  param_1[8] = (int)lVar6;
  uVar3 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar7,uVar3)) {
    uVar2 = uVar2 + 1;
  }
  uVar4 = (ulong)(uVar7 + uVar3) + (ulong)param_3[7] * (ulong)param_2[2];
  uVar5 = (ulong)param_3[6] * (ulong)param_2[3] + (uVar4 & 0xffffffff);
  uVar7 = (uint)(uVar4 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar2,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar2 + uVar7 + uVar8;
  if (!CARRY4(uVar2 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar2,uVar7);
  }
  uVar5 = (ulong)param_3[5] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_3[4] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar2 + uVar9;
  if (CARRY4(uVar2,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)param_3[3] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar7 + uVar9;
  if (CARRY4(uVar7,uVar9)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)param_3[2] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  param_1[9] = (int)lVar6;
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar2,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar2 + uVar7) + (ulong)param_3[3] * (ulong)param_2[7];
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar2 = 1;
  }
  uVar5 = (ulong)param_3[4] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar2 = (uint)CARRY4(uVar3,uVar7);
  }
  uVar5 = (ulong)param_3[5] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar2 = uVar2 + 1;
  }
  uVar5 = (ulong)param_3[6] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar3 + uVar9;
  if (CARRY4(uVar3,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  lVar6 = (ulong)param_3[7] * (ulong)param_2[3] + (uVar5 & 0xffffffff);
  param_1[10] = (int)lVar6;
  uVar3 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar7,uVar3)) {
    uVar2 = uVar2 + 1;
  }
  uVar4 = (ulong)(uVar7 + uVar3) + (ulong)param_3[7] * (ulong)param_2[4];
  uVar5 = (ulong)param_3[6] * (ulong)param_2[5] + (uVar4 & 0xffffffff);
  uVar7 = (uint)(uVar4 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar2,uVar7)) {
    uVar3 = 1;
  }
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar2 + uVar7 + uVar8;
  if (!CARRY4(uVar2 + uVar7,uVar8)) {
    uVar3 = (uint)CARRY4(uVar2,uVar7);
  }
  uVar5 = (ulong)param_3[5] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  lVar6 = (ulong)param_3[4] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  param_1[0xb] = (int)lVar6;
  uVar7 = (uint)((ulong)lVar6 >> 0x20);
  if (CARRY4(uVar2,uVar7)) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = (ulong)(uVar2 + uVar7) + (ulong)param_3[5] * (ulong)param_2[7];
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar2 = 2;
  if (!CARRY4(uVar3,uVar7)) {
    uVar2 = 1;
  }
  uVar5 = (ulong)param_3[6] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar8 = (uint)(uVar5 >> 0x20);
  uVar9 = uVar3 + uVar7 + uVar8;
  if (!CARRY4(uVar3 + uVar7,uVar8)) {
    uVar2 = (uint)CARRY4(uVar3,uVar7);
  }
  lVar6 = (ulong)param_3[7] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  param_1[0xc] = (int)lVar6;
  uVar3 = (uint)((ulong)lVar6 >> 0x20);
  uVar5 = (ulong)(uVar9 + uVar3) + (ulong)param_3[7] * (ulong)param_2[6];
  if (CARRY4(uVar9,uVar3)) {
    uVar2 = uVar2 + 1;
  }
  lVar6 = (ulong)param_3[6] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  uVar7 = (uint)(uVar5 >> 0x20);
  uVar3 = 2;
  if (!CARRY4(uVar2,uVar7)) {
    uVar3 = 1;
  }
  uVar9 = (uint)((ulong)lVar6 >> 0x20);
  param_1[0xd] = (int)lVar6;
  if (!CARRY4(uVar2 + uVar7,uVar9)) {
    uVar3 = (uint)CARRY4(uVar2,uVar7);
  }
  lVar6 = (ulong)(uVar2 + uVar7 + uVar9) + (ulong)param_3[7] * (ulong)param_2[7];
  param_1[0xe] = (int)lVar6;
  param_1[0xf] = uVar3 + (int)((ulong)lVar6 >> 0x20);
  return;
}


