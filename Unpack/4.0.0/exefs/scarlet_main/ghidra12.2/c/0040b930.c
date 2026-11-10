/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040b930; name: FUN_0040b930
 */


void FUN_0040b930(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_20 [4];
  uint local_10;
  uint uStack_c;
  uint local_8;
  uint uStack_4;
  
  local_20[1] = param_3 & 0x3fffffff;
  local_20[2] = local_20[1] << 1;
  local_10 = param_3 << 2;
  uStack_c = local_20[1] ^ local_10;
  local_20[0] = 0;
  local_20[3] = local_20[2] ^ local_20[1];
  local_8 = local_20[2] ^ local_10;
  uStack_4 = local_20[2] ^ local_20[1] ^ local_10;
  uVar14 = -(param_3 >> 0x1e & 1);
  uVar3 = local_20[param_4 & 7];
  uVar4 = local_20[param_4 >> 3 & 7];
  uVar1 = 0;
  if ((int)param_3 < 0) {
    uVar1 = param_4 << 0x1f;
  }
  uVar5 = local_20[param_4 >> 6 & 7];
  uVar2 = 0;
  if ((int)param_3 < 0) {
    uVar2 = param_4 >> 1;
  }
  uVar6 = local_20[param_4 >> 9 & 7];
  uVar7 = local_20[param_4 >> 0xc & 7];
  uVar8 = local_20[param_4 >> 0xf & 7];
  uVar9 = local_20[param_4 >> 0x12 & 7];
  uVar10 = local_20[param_4 >> 0x15 & 7];
  uVar11 = local_20[param_4 >> 0x18 & 7];
  uVar12 = local_20[param_4 >> 0x1b & 7];
  uVar13 = local_20[param_4 >> 0x1e];
  *param_1 = uVar2 ^ uVar14 & param_4 >> 2 ^ uVar4 >> 0x1d ^ uVar5 >> 0x1a ^ uVar6 >> 0x17 ^
             uVar7 >> 0x14 ^ uVar8 >> 0x11 ^ uVar9 >> 0xe ^ uVar10 >> 0xb ^ uVar11 >> 8 ^
             uVar12 >> 5 ^ uVar13 >> 2;
  *param_2 = uVar1 ^ uVar14 & param_4 << 0x1e ^ uVar3 ^ uVar4 << 3 ^ uVar5 << 6 ^ uVar6 << 9 ^
             uVar7 << 0xc ^ uVar8 << 0xf ^ uVar9 << 0x12 ^ uVar10 << 0x15 ^ uVar11 << 0x18 ^
             uVar12 << 0x1b ^ uVar13 << 0x1e;
  return;
}


