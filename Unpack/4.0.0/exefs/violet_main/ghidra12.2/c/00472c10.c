/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00472c10; name: FUN_00472c10
 */


void FUN_00472c10(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = param_2[5] ^ *param_2 ^ param_2[10] ^ param_2[0xf] ^ param_2[0x14];
  uVar4 = param_2[6] ^ param_2[1] ^ param_2[0xb] ^ param_2[0x10] ^ param_2[0x15];
  uVar5 = param_2[7] ^ param_2[2] ^ param_2[0xc] ^ param_2[0x11] ^ param_2[0x16];
  uVar1 = param_2[8] ^ param_2[3] ^ param_2[0xd] ^ param_2[0x12] ^ param_2[0x17];
  uVar2 = param_2[9] ^ param_2[4] ^ param_2[0xe] ^ param_2[0x13] ^ param_2[0x18];
  uVar3 = uVar7 ^ (uVar5 >> 0x3f | uVar5 << 1);
  uVar6 = uVar4 ^ (uVar1 >> 0x3f | uVar1 << 1);
  uVar5 = uVar5 ^ (uVar2 >> 0x3f | uVar2 << 1);
  uVar2 = uVar2 ^ (uVar4 >> 0x3f | uVar4 << 1);
  uVar1 = uVar1 ^ (uVar7 >> 0x3f | uVar7 << 1);
  uVar4 = uVar3 ^ param_2[6];
  uVar9 = uVar6 ^ param_2[0xc];
  uVar8 = uVar4 >> 0x14 | uVar4 << 0x2c;
  uVar7 = uVar5 ^ param_2[0x12];
  uVar10 = uVar9 >> 0x15 | uVar9 << 0x2b;
  uVar9 = param_2[0x18] ^ uVar1;
  uVar4 = uVar2 ^ *param_2;
  uVar7 = uVar7 >> 0x2b | uVar7 << 0x15;
  uVar9 = uVar9 >> 0x32 | uVar9 << 0xe;
  *param_1 = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ *(ulong *)(&DAT_03d00da8 + param_3 * 8) ^ uVar4
  ;
  param_1[1] = uVar7 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  param_1[4] = uVar8 & (uVar4 ^ 0xffffffffffffffff) ^ uVar9;
  param_1[2] = uVar9 & (uVar7 ^ 0xffffffffffffffff) ^ uVar10;
  param_1[3] = uVar7 ^ uVar4 & (uVar9 ^ 0xffffffffffffffff);
  uVar7 = (param_2[9] ^ uVar1) >> 0x2c | (param_2[9] ^ uVar1) << 0x14;
  uVar9 = (param_2[10] ^ uVar2) >> 0x3d | (param_2[10] ^ uVar2) << 3;
  uVar8 = (param_2[0x10] ^ uVar3) >> 0x13 | (param_2[0x10] ^ uVar3) << 0x2d;
  uVar4 = (param_2[3] ^ uVar5) >> 0x24 | (param_2[3] ^ uVar5) << 0x1c;
  uVar10 = (param_2[0x16] ^ uVar6) >> 3 | (param_2[0x16] ^ uVar6) << 0x3d;
  param_1[5] = uVar9 & (uVar7 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[6] = uVar8 & (uVar9 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[9] = uVar10 ^ uVar7 & (uVar4 ^ 0xffffffffffffffff);
  param_1[7] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar9;
  param_1[8] = uVar4 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  uVar7 = (param_2[7] ^ uVar6) >> 0x3a | (param_2[7] ^ uVar6) << 6;
  uVar9 = (param_2[0xd] ^ uVar5) >> 0x27 | (param_2[0xd] ^ uVar5) << 0x19;
  uVar8 = (param_2[0x13] ^ uVar1) >> 0x38 | (param_2[0x13] ^ uVar1) << 8;
  uVar4 = (param_2[1] ^ uVar3) >> 0x3f | (param_2[1] ^ uVar3) << 1;
  uVar10 = (param_2[0x14] ^ uVar2) >> 0x2e | (param_2[0x14] ^ uVar2) << 0x12;
  param_1[10] = uVar9 & (uVar7 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[0xb] = uVar8 & (uVar9 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[0xe] = uVar10 ^ uVar7 & (uVar4 ^ 0xffffffffffffffff);
  param_1[0xc] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar9;
  param_1[0xd] = uVar4 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  uVar7 = (param_2[5] ^ uVar2) >> 0x1c | (param_2[5] ^ uVar2) << 0x24;
  uVar9 = (param_2[0xb] ^ uVar3) >> 0x36 | (param_2[0xb] ^ uVar3) << 10;
  uVar8 = (param_2[0x11] ^ uVar6) >> 0x31 | (param_2[0x11] ^ uVar6) << 0xf;
  uVar4 = (param_2[4] ^ uVar1) >> 0x25 | (param_2[4] ^ uVar1) << 0x1b;
  uVar10 = (param_2[0x17] ^ uVar5) >> 8 | (param_2[0x17] ^ uVar5) << 0x38;
  param_1[0xf] = uVar9 & (uVar7 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[0x10] = uVar8 & (uVar9 ^ 0xffffffffffffffff) ^ uVar7;
  param_1[0x13] = uVar10 ^ uVar7 & (uVar4 ^ 0xffffffffffffffff);
  param_1[0x11] = uVar10 & (uVar8 ^ 0xffffffffffffffff) ^ uVar9;
  param_1[0x12] = uVar4 & (uVar10 ^ 0xffffffffffffffff) ^ uVar8;
  uVar5 = (param_2[8] ^ uVar5) >> 9 | (param_2[8] ^ uVar5) << 0x37;
  uVar4 = (param_2[0xe] ^ uVar1) >> 0x19 | (param_2[0xe] ^ uVar1) << 0x27;
  uVar2 = (param_2[0xf] ^ uVar2) >> 0x17 | (param_2[0xf] ^ uVar2) << 0x29;
  uVar6 = (param_2[2] ^ uVar6) >> 2 | (param_2[2] ^ uVar6) << 0x3e;
  uVar1 = (param_2[0x15] ^ uVar3) >> 0x3e | (param_2[0x15] ^ uVar3) << 2;
  param_1[0x14] = uVar4 & (uVar5 ^ 0xffffffffffffffff) ^ uVar6;
  param_1[0x15] = uVar2 & (uVar4 ^ 0xffffffffffffffff) ^ uVar5;
  param_1[0x16] = uVar1 & (uVar2 ^ 0xffffffffffffffff) ^ uVar4;
  param_1[0x17] = uVar6 & (uVar1 ^ 0xffffffffffffffff) ^ uVar2;
  param_1[0x18] = uVar1 ^ uVar5 & (uVar6 ^ 0xffffffffffffffff);
  return;
}


