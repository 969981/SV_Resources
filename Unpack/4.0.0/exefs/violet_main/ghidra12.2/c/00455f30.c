/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00455f30; name: FUN_00455f30
 */


void FUN_00455f30(undefined8 *param_1,undefined8 param_2,code *param_3)

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
  ulong *puVar11;
  
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  puVar11 = param_1 + 10;
  param_1[0xb] = 0;
  *puVar11 = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x2f] = param_3;
  param_1[0x30] = param_2;
  (*param_3)(puVar11,puVar11,param_2);
  uVar2 = (*puVar11 & 0xff00ff00ff00ff00) >> 8 | (*puVar11 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar2 >> 0x20;
  uVar1 = uVar4 | uVar2 << 0x20;
  *puVar11 = uVar1;
  uVar2 = (param_1[0xb] & 0xff00ff00ff00ff00) >> 8 | (param_1[0xb] & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar2 & 0xffff0000ffff0000) >> 0x10;
  uVar2 = uVar3 | (uVar2 & 0xffff0000ffff) << 0x10;
  uVar2 = uVar2 >> 0x20 | uVar2 << 0x20;
  uVar7 = uVar2 >> 1 | uVar4 << 0x3f;
  uVar6 = -((uVar3 & 0x100000000) >> 0x20) & 0xe100000000000000 ^ uVar1 >> 1;
  uVar4 = uVar7 >> 1 | (uVar1 >> 1) << 0x3f;
  uVar8 = uVar6 >> 1 ^ -((uVar3 & 0x200000000) >> 0x21) & 0xe100000000000000;
  uVar10 = uVar4 >> 1 | (uVar6 >> 1) << 0x3f;
  uVar3 = -((uVar3 & 0x400000000) >> 0x22) & 0xe100000000000000 ^ uVar8 >> 1;
  param_1[0xb] = uVar2;
  param_1[0xc] = 0;
  param_1[0x10] = uVar8;
  param_1[0x11] = uVar4;
  param_1[0x20] = uVar8 ^ uVar1;
  uVar9 = uVar3 ^ uVar8;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar10;
  uVar5 = uVar10 ^ uVar4;
  param_1[0x1e] = uVar3 ^ uVar1;
  param_1[0x1f] = uVar10 ^ uVar2;
  param_1[0xd] = 0;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar2;
  param_1[0x14] = uVar6;
  param_1[0x15] = uVar7;
  param_1[0x18] = uVar8 ^ uVar6;
  param_1[0x19] = uVar4 ^ uVar7;
  param_1[0x12] = uVar9;
  param_1[0x13] = uVar5;
  param_1[0x16] = uVar3 ^ uVar6;
  param_1[0x17] = uVar10 ^ uVar7;
  param_1[0x1a] = uVar9 ^ uVar6;
  param_1[0x1b] = uVar5 ^ uVar7;
  param_1[0x21] = uVar4 ^ uVar2;
  param_1[0x22] = uVar9 ^ uVar1;
  param_1[0x23] = uVar5 ^ uVar2;
  param_1[0x24] = uVar6 ^ uVar1;
  param_1[0x25] = uVar7 ^ uVar2;
  param_1[0x26] = uVar3 ^ uVar6 ^ uVar1;
  param_1[0x27] = uVar10 ^ uVar7 ^ uVar2;
  param_1[0x28] = uVar8 ^ uVar6 ^ uVar1;
  param_1[0x29] = uVar4 ^ uVar7 ^ uVar2;
  param_1[0x2a] = uVar9 ^ uVar6 ^ uVar1;
  param_1[0x2b] = uVar5 ^ uVar7 ^ uVar2;
  return;
}


