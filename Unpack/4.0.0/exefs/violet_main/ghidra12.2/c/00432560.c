/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00432560; name: FUN_00432560
 */


void FUN_00432560(uint param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar7 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar9 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  uVar8 = (uVar8 >> 0x10 | uVar8 << 0x10) ^ *param_3;
  uVar7 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ param_3[1];
  uVar9 = (uVar9 >> 0x10 | uVar9 << 0x10) ^ param_3[2];
  uVar10 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  uVar10 = (uVar10 >> 0x10 | uVar10 << 0x10) ^ param_3[3];
  uVar6 = -(ulong)((param_1 & 0xfffffff) >> 0x1b) & 0xfffffffc00000000 | (ulong)(param_1 << 4) << 2;
  param_3 = param_3 + 0x13;
  while( true ) {
    uVar6 = uVar6 - 0x40;
    uVar3 = param_3[-0xf] ^ uVar8;
    uVar4 = param_3[-0xe] ^ uVar7;
    uVar3 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar3 >> 0x18) * 4);
    uVar5 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar4 & 0xff) * 4) ^ uVar3 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar4 >> 0x18) * 4);
    uVar10 = uVar10 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar5;
    uVar5 = uVar5 ^ uVar9;
    uVar9 = uVar10 ^ param_3[-0xc];
    uVar3 = uVar5 ^ param_3[-0xd];
    uVar3 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar3 >> 0x18) * 4);
    uVar4 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar9 & 0xff) * 4) ^ uVar3 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar9 >> 0x18) * 4);
    uVar7 = uVar7 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar4;
    uVar4 = uVar4 ^ uVar8;
    uVar8 = uVar7 ^ param_3[-10];
    uVar9 = uVar4 ^ param_3[-0xb];
    uVar9 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar9 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar9 >> 0x18) * 4);
    uVar8 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar8 & 0xff) * 4) ^ uVar9 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar8 >> 0x18) * 4);
    uVar5 = uVar8 ^ uVar5;
    uVar8 = uVar10 ^ (uVar9 >> 8 | uVar9 << 0x18) ^ uVar8;
    uVar9 = uVar5 ^ param_3[-9];
    uVar10 = uVar8 ^ param_3[-8];
    uVar9 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar9 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar9 >> 0x18) * 4);
    uVar3 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar10 & 0xff) * 4) ^ uVar9 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar10 >> 0x18) * 4);
    uVar4 = uVar3 ^ uVar4;
    uVar10 = uVar4 ^ param_3[-7];
    uVar3 = uVar7 ^ (uVar9 >> 8 | uVar9 << 0x18) ^ uVar3;
    uVar7 = uVar3 ^ param_3[-6];
    uVar9 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar10 >> 0x18) * 4);
    uVar10 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf3c10 + (ulong)(uVar7 & 0xff) * 4) ^ uVar9 ^
             *(uint *)(&DAT_03cf4810 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf4410 + (ulong)(uVar7 >> 0x18) * 4);
    uVar5 = uVar10 ^ uVar5;
    uVar10 = uVar8 ^ (uVar9 >> 8 | uVar9 << 0x18) ^ uVar10;
    uVar8 = uVar5 ^ param_3[-5];
    uVar7 = uVar10 ^ param_3[-4];
    uVar8 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar8 >> 0x18) * 4);
    uVar7 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar7 & 0xff) * 4) ^ uVar8 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar7 >> 0x18) * 4);
    uVar4 = uVar7 ^ uVar4;
    uVar7 = uVar3 ^ (uVar8 >> 8 | uVar8 << 0x18) ^ uVar7;
    if (uVar6 == 0) break;
    uVar8 = uVar4 & param_3[-3];
    uVar7 = uVar7 ^ (uVar8 >> 0x1f | uVar8 << 1);
    puVar2 = param_3 + -1;
    uVar9 = (*param_3 | uVar10) ^ uVar5;
    puVar1 = param_3 + -2;
    param_3 = param_3 + 0x10;
    uVar8 = (*puVar1 | uVar7) ^ uVar4;
    uVar10 = uVar10 ^ ((uVar9 & *puVar2) >> 0x1f | (uVar9 & *puVar2) << 1);
  }
  uVar5 = param_3[-3] ^ uVar5;
  uVar8 = param_3[-2];
  uVar9 = param_3[-1];
  uVar3 = *param_3;
  *param_4 = (char)(uVar5 >> 0x18);
  param_4[3] = (char)uVar5;
  param_4[2] = (char)(uVar5 >> 8);
  uVar8 = uVar8 ^ uVar10;
  param_4[4] = (char)(uVar8 >> 0x18);
  uVar9 = uVar9 ^ uVar4;
  param_4[5] = (char)(uVar8 >> 0x10);
  param_4[7] = (char)uVar8;
  param_4[8] = (char)(uVar9 >> 0x18);
  uVar3 = uVar3 ^ uVar7;
  param_4[1] = (char)(uVar5 >> 0x10);
  param_4[6] = (char)(uVar8 >> 8);
  param_4[0xb] = (char)uVar9;
  param_4[0xf] = (char)uVar3;
  param_4[9] = (char)(uVar9 >> 0x10);
  param_4[10] = (char)(uVar9 >> 8);
  param_4[0xc] = (char)(uVar3 >> 0x18);
  param_4[0xd] = (char)(uVar3 >> 0x10);
  param_4[0xe] = (char)(uVar3 >> 8);
  return;
}


