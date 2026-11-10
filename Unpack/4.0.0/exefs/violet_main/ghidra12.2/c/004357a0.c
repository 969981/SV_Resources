/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004357a0; name: FUN_004357a0
 */


void FUN_004357a0(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *param_1 >> 0x1d | *param_1 << 3;
  uVar2 = param_1[1] >> 0x1d | param_1[1] << 3;
  if (param_3 == 0) {
    uVar1 = param_2[0x1e] ^ uVar8;
    uVar7 = param_2[0x1f] ^ uVar8;
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0x1c];
    uVar7 = uVar2 ^ param_2[0x1d];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0x1a];
    uVar7 = uVar8 ^ param_2[0x1b];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0x18];
    uVar7 = uVar2 ^ param_2[0x19];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0x16];
    uVar7 = uVar8 ^ param_2[0x17];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0x14];
    uVar7 = uVar2 ^ param_2[0x15];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0x12];
    uVar7 = uVar8 ^ param_2[0x13];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0x10];
    uVar7 = uVar2 ^ param_2[0x11];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0xe];
    uVar7 = uVar8 ^ param_2[0xf];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0xc];
    uVar7 = uVar2 ^ param_2[0xd];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[10];
    uVar7 = uVar8 ^ param_2[0xb];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[8];
    uVar7 = uVar2 ^ param_2[9];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[6];
    uVar7 = uVar8 ^ param_2[7];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[4];
    uVar7 = uVar2 ^ param_2[5];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[2];
    uVar7 = uVar8 ^ param_2[3];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100);
    uVar5 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300);
    uVar6 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500);
    uVar7 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar3 = *param_2;
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600);
    param_2 = param_2 + 1;
  }
  else {
    uVar1 = *param_2 ^ uVar8;
    uVar7 = param_2[1] ^ uVar8;
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[2];
    uVar7 = uVar2 ^ param_2[3];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[4];
    uVar7 = uVar8 ^ param_2[5];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[6];
    uVar7 = uVar2 ^ param_2[7];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[8];
    uVar7 = uVar8 ^ param_2[9];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[10];
    uVar7 = uVar2 ^ param_2[0xb];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0xc];
    uVar7 = uVar8 ^ param_2[0xd];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0xe];
    uVar7 = uVar2 ^ param_2[0xf];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0x10];
    uVar7 = uVar8 ^ param_2[0x11];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0x12];
    uVar7 = uVar2 ^ param_2[0x13];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0x14];
    uVar7 = uVar8 ^ param_2[0x15];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0x16];
    uVar7 = uVar2 ^ param_2[0x17];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0x18];
    uVar7 = uVar8 ^ param_2[0x19];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar2 ^ param_2[0x1a];
    uVar7 = uVar2 ^ param_2[0x1b];
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar8 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar8 ^ param_2[0x1c];
    uVar7 = uVar8 ^ param_2[0x1d];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 6 & 0x3f) * 4 + 0x100);
    uVar5 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0xe & 0x3f) * 4 + 0x300);
    uVar6 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x16 & 0x3f) * 4 + 0x500);
    uVar7 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar7 >> 0x1e | (uVar7 & 0xf) << 2) * 4 + 0x700);
    uVar3 = param_2[0x1e];
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar2 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600);
    param_2 = param_2 + 0x1f;
  }
  uVar7 = uVar2 ^ uVar4 ^ uVar5 ^ uVar6 ^ uVar7;
  uVar3 = uVar7 ^ uVar3;
  uVar2 = uVar7 ^ *param_2;
  uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^ uVar8 ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4 + 0x400) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 0x1a) * 4 + 0x600) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
  *param_1 = uVar7 >> 3 | uVar7 << 0x1d;
  param_1[1] = uVar8 >> 3 | uVar8 << 0x1d;
  return;
}


