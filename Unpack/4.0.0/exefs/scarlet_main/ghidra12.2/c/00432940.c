/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00432940; name: FUN_00432940
 */


void FUN_00432940(int param_1,uint *param_2,long param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar5 = (uint *)(param_3 + (long)(param_1 << 4) * 4);
  lVar4 = (long)(param_1 << 4);
  uVar7 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar9 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar8 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  uVar6 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ *puVar5;
  uVar7 = (uVar9 >> 0x10 | uVar9 << 0x10) ^ puVar5[1];
  uVar8 = (uVar8 >> 0x10 | uVar8 << 0x10) ^ puVar5[2];
  uVar9 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  uVar9 = (uVar9 >> 0x10 | uVar9 << 0x10) ^ puVar5[3];
  puVar5 = puVar5 + -8;
  while( true ) {
    lVar4 = lVar4 + -0x10;
    uVar1 = puVar5[6] ^ uVar6;
    uVar2 = puVar5[7] ^ uVar7;
    uVar1 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar1 >> 0x18) * 4);
    uVar2 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar2 & 0xff) * 4) ^ uVar1 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar2 >> 0x18) * 4);
    uVar8 = uVar2 ^ uVar8;
    uVar2 = uVar9 ^ (uVar1 >> 8 | uVar1 << 0x18) ^ uVar2;
    uVar9 = uVar8 ^ puVar5[4];
    uVar1 = uVar2 ^ puVar5[5];
    uVar9 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar9 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar9 >> 0x18) * 4);
    uVar3 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar1 & 0xff) * 4) ^ uVar9 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar1 >> 0x18) * 4);
    uVar6 = uVar3 ^ uVar6;
    uVar1 = uVar6 ^ puVar5[2];
    uVar3 = uVar7 ^ (uVar9 >> 8 | uVar9 << 0x18) ^ uVar3;
    uVar7 = uVar3 ^ puVar5[3];
    uVar9 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar1 >> 0x18) * 4);
    uVar7 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar7 & 0xff) * 4) ^ uVar9 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar7 >> 0x18) * 4);
    uVar8 = uVar7 ^ uVar8;
    uVar7 = uVar2 ^ (uVar9 >> 8 | uVar9 << 0x18) ^ uVar7;
    uVar9 = uVar8 ^ *puVar5;
    uVar1 = uVar7 ^ puVar5[1];
    uVar9 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar9 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar9 >> 0x18) * 4);
    uVar1 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar1 & 0xff) * 4) ^ uVar9 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar1 >> 0x18) * 4);
    uVar6 = uVar1 ^ uVar6;
    uVar1 = uVar3 ^ (uVar9 >> 8 | uVar9 << 0x18) ^ uVar1;
    uVar9 = uVar6 ^ puVar5[-2];
    uVar2 = uVar1 ^ puVar5[-1];
    uVar3 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar9 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar9 >> 0x18) * 4);
    uVar9 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar2 & 0xff) * 4) ^ uVar3 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar2 >> 0x18) * 4);
    uVar8 = uVar9 ^ uVar8;
    uVar2 = uVar8 ^ puVar5[-4];
    uVar9 = uVar7 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ uVar9;
    uVar7 = uVar9 ^ puVar5[-3];
    uVar2 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4010 + (ulong)(uVar2 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar2 >> 0x18) * 4);
    uVar7 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar7 & 0xff) * 4) ^ uVar2 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar7 >> 0x18) * 4);
    uVar6 = uVar7 ^ uVar6;
    uVar7 = uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18) ^ uVar7;
    if (lVar4 == 0) break;
    uVar8 = (puVar5[-7] | uVar9) ^ uVar8;
    uVar7 = uVar7 ^ ((puVar5[-6] & uVar6) >> 0x1f | (puVar5[-6] & uVar6) << 1);
    uVar9 = uVar9 ^ ((uVar8 & puVar5[-8]) >> 0x1f | (uVar8 & puVar5[-8]) << 1);
    uVar6 = (uVar7 | puVar5[-5]) ^ uVar6;
    puVar5 = puVar5 + -0x10;
  }
  uVar1 = puVar5[-7];
  uVar8 = puVar5[-8] ^ uVar8;
  uVar2 = puVar5[-6];
  uVar3 = puVar5[-5];
  param_4[3] = (char)uVar8;
  *param_4 = (char)(uVar8 >> 0x18);
  param_4[2] = (char)(uVar8 >> 8);
  uVar1 = uVar1 ^ uVar9;
  param_4[4] = (char)(uVar1 >> 0x18);
  param_4[5] = (char)(uVar1 >> 0x10);
  uVar2 = uVar2 ^ uVar6;
  param_4[7] = (char)uVar1;
  param_4[8] = (char)(uVar2 >> 0x18);
  uVar3 = uVar3 ^ uVar7;
  param_4[1] = (char)(uVar8 >> 0x10);
  param_4[6] = (char)(uVar1 >> 8);
  param_4[0xb] = (char)uVar2;
  param_4[0xf] = (char)uVar3;
  param_4[9] = (char)(uVar2 >> 0x10);
  param_4[10] = (char)(uVar2 >> 8);
  param_4[0xc] = (char)(uVar3 >> 0x18);
  param_4[0xd] = (char)(uVar3 >> 0x10);
  param_4[0xe] = (char)(uVar3 >> 8);
  return;
}


