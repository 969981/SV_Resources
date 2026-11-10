/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004348c0; name: FUN_004348c0
 */


void FUN_004348c0(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar4 = param_1[1] ^ uVar3 << 4;
  uVar3 = uVar3 ^ *param_1;
  uVar1 = uVar4 & 0xffff ^ uVar3 >> 0x10;
  uVar3 = uVar3 ^ uVar1 << 0x10;
  uVar1 = uVar1 ^ uVar4;
  uVar4 = (uVar3 ^ uVar1 >> 2) & 0x33333333;
  uVar1 = uVar1 ^ uVar4 << 2;
  uVar4 = uVar4 ^ uVar3;
  uVar3 = (uVar1 ^ uVar4 >> 8) & 0xff00ff;
  uVar4 = uVar4 ^ uVar3 << 8;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = (uVar4 ^ uVar3 >> 1) & 0x55555555;
  uVar4 = uVar1 ^ uVar4;
  uVar4 = uVar4 >> 0x1d | uVar4 << 3;
  uVar3 = uVar3 ^ uVar1 << 1;
  uVar3 = uVar3 >> 0x1d | uVar3 << 3;
  if (param_3 == 0) {
    uVar1 = param_2[0x1e] ^ uVar4;
    uVar2 = param_2[0x1f] ^ uVar4;
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[0x1c];
    uVar2 = uVar3 ^ param_2[0x1d];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[0x1a];
    uVar2 = uVar4 ^ param_2[0x1b];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[0x18];
    uVar2 = uVar3 ^ param_2[0x19];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[0x16];
    uVar2 = uVar4 ^ param_2[0x17];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[0x14];
    uVar2 = uVar3 ^ param_2[0x15];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[0x12];
    uVar2 = uVar4 ^ param_2[0x13];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[0x10];
    uVar2 = uVar3 ^ param_2[0x11];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[0xe];
    uVar2 = uVar4 ^ param_2[0xf];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[0xc];
    uVar2 = uVar3 ^ param_2[0xd];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[10];
    uVar2 = uVar4 ^ param_2[0xb];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[8];
    uVar2 = uVar3 ^ param_2[9];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[6];
    uVar2 = uVar4 ^ param_2[7];
    uVar1 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar3 = uVar1 ^ param_2[4];
    uVar2 = uVar1 ^ param_2[5];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar4 = uVar3 ^ param_2[2];
    uVar2 = uVar3 ^ param_2[3];
    uVar6 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100);
    uVar7 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300);
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500);
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar5 = *param_2;
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^ uVar1 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 0x1a) * 4 + 0x600);
    param_2 = param_2 + 1;
  }
  else {
    uVar1 = *param_2 ^ uVar4;
    uVar2 = param_2[1] ^ uVar4;
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[2];
    uVar2 = uVar3 ^ param_2[3];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[4];
    uVar2 = uVar4 ^ param_2[5];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[6];
    uVar2 = uVar3 ^ param_2[7];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[8];
    uVar2 = uVar4 ^ param_2[9];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[10];
    uVar2 = uVar3 ^ param_2[0xb];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[0xc];
    uVar2 = uVar4 ^ param_2[0xd];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[0xe];
    uVar2 = uVar3 ^ param_2[0xf];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[0x10];
    uVar2 = uVar4 ^ param_2[0x11];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[0x12];
    uVar2 = uVar3 ^ param_2[0x13];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[0x14];
    uVar2 = uVar4 ^ param_2[0x15];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar3 ^ param_2[0x16];
    uVar2 = uVar3 ^ param_2[0x17];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar1 = uVar4 ^ param_2[0x18];
    uVar2 = uVar4 ^ param_2[0x19];
    uVar1 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar3 = uVar1 ^ param_2[0x1a];
    uVar2 = uVar1 ^ param_2[0x1b];
    uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^ uVar4 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar3 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar4 = uVar3 ^ param_2[0x1c];
    uVar2 = uVar3 ^ param_2[0x1d];
    uVar6 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100);
    uVar7 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300);
    uVar8 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500);
    uVar2 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar2 >> 0x1e | (uVar2 & 0xf) << 2) * 4 + 0x700);
    uVar5 = param_2[0x1e];
    uVar4 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^ uVar1 ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 0x1a) * 4 + 0x600);
    param_2 = param_2 + 0x1f;
  }
  uVar2 = uVar4 ^ uVar6 ^ uVar7 ^ uVar8 ^ uVar2;
  uVar5 = uVar2 ^ uVar5;
  uVar4 = uVar2 ^ *param_2;
  uVar3 = *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^ uVar3 ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x400) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar5 >> 0x1a) * 4 + 0x600) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 6 & 0x3f) * 4 + 0x100) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 0xe & 0x3f) * 4 + 0x300) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 0x16 & 0x3f) * 4 + 0x500) ^
          *(uint *)(PTR_DAT_047cd330 + (ulong)(uVar4 >> 0x1e | (uVar4 & 0xf) << 2) * 4 + 0x700);
  uVar1 = uVar2 >> 3 | uVar2 << 0x1d;
  uVar4 = uVar3 >> 3 | uVar3 << 0x1d;
  uVar3 = (uVar1 ^ uVar4 >> 1) & 0x55555555;
  uVar1 = uVar3 ^ uVar1;
  uVar4 = uVar4 ^ uVar3 << 1;
  uVar3 = (uVar4 ^ uVar1 >> 8) & 0xff00ff;
  uVar4 = uVar3 ^ uVar4;
  uVar1 = uVar1 ^ uVar3 << 8;
  uVar3 = (uVar1 ^ uVar4 >> 2) & 0x33333333;
  uVar1 = uVar3 ^ uVar1;
  uVar4 = uVar4 ^ uVar3 << 2;
  uVar2 = uVar4 & 0xffff ^ uVar1 >> 0x10;
  uVar1 = uVar1 ^ uVar2 << 0x10;
  uVar2 = uVar2 ^ uVar4;
  uVar3 = (uVar1 ^ uVar2 >> 4) & 0xf0f0f0f;
  *param_1 = uVar3 ^ uVar1;
  param_1[1] = uVar2 ^ uVar3 << 4;
  return;
}


