/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047c590; name: FUN_0047c590
 */


void FUN_0047c590(uint *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar10;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar10 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar11 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar10 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  uVar12 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar10 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  uVar13 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar2 = uVar13 ^ uVar12;
  uVar3 = uVar2 ^ uVar11 ^ param_3[0x1f];
  uVar8 = (uint)(byte)(&DAT_03d0129c)[uVar3 >> 0x18] << 0x18;
  bVar4 = (&DAT_03d0129c)[(ulong)uVar3 & 0xff];
  uVar10 = uVar8 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar3 >> 0x10) & 0xff] << 0x10;
  uVar1 = uVar10 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar3 >> 8) & 0xff] << 8;
  uVar14 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar9 = uVar1 | bVar4;
  uVar3 = uVar9 ^ (uVar14 >> 0x10 | uVar14 << 0x10) ^ (uint)(CONCAT14(bVar4,uVar1) >> 8) ^
          ((uint)((byte)(&DAT_03d0129c)[uVar3 >> 0x18] >> 6) |
          (uVar8 & 0x3fffffff | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar3 >> 0x10) & 0xff] << 0x10 |
           (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar3 >> 8) & 0xff] << 8 | (uint)bVar4) << 2) ^
          (uint)(CONCAT44(uVar9,uVar10) >> 0x16) ^ (uint)(CONCAT44(uVar9,uVar1) >> 0xe);
  uVar2 = uVar2 ^ param_3[0x1e] ^ uVar3;
  uVar8 = (uint)(byte)(&DAT_03d0129c)[uVar2 >> 0x18] << 0x18;
  bVar4 = (&DAT_03d0129c)[(ulong)uVar2 & 0xff];
  uVar10 = uVar8 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10;
  uVar1 = uVar10 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar2 >> 8) & 0xff] << 8;
  uVar9 = uVar1 | bVar4;
  uVar2 = uVar9 ^ uVar11 ^ (uint)(CONCAT14(bVar4,uVar1) >> 8) ^
          ((uint)((byte)(&DAT_03d0129c)[uVar2 >> 0x18] >> 6) |
          (uVar8 & 0x3fffffff | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10 |
           (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar2 >> 8) & 0xff] << 8 | (uint)bVar4) << 2) ^
          (uint)(CONCAT44(uVar9,uVar10) >> 0x16) ^ (uint)(CONCAT44(uVar9,uVar1) >> 0xe);
  uVar8 = param_3[0x1d] ^ uVar13 ^ uVar2 ^ uVar3;
  bVar4 = (&DAT_03d0129c)[(ulong)uVar8 & 0xff];
  uVar9 = (uint)(byte)(&DAT_03d0129c)[uVar8 >> 0x18] << 0x18;
  uVar10 = uVar9 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar8 >> 0x10) & 0xff] << 0x10;
  uVar1 = uVar10 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar8 >> 8) & 0xff] << 8;
  uVar11 = uVar1 | bVar4;
  uVar8 = uVar11 ^ uVar12 ^ (uint)(CONCAT14(bVar4,uVar1) >> 8) ^
          ((uint)((byte)(&DAT_03d0129c)[uVar8 >> 0x18] >> 6) |
          (uVar9 & 0x3fffffff | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar8 >> 0x10) & 0xff] << 0x10 |
           (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar8 >> 8) & 0xff] << 8 | (uint)bVar4) << 2) ^
          (uint)(CONCAT44(uVar11,uVar10) >> 0x16) ^ (uint)(CONCAT44(uVar11,uVar1) >> 0xe);
  uVar9 = uVar2 ^ uVar3 ^ param_3[0x1c] ^ uVar8;
  bVar4 = (&DAT_03d0129c)[(ulong)uVar9 & 0xff];
  uVar11 = (uint)(byte)(&DAT_03d0129c)[uVar9 >> 0x18] << 0x18;
  uVar10 = uVar11 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar9 >> 0x10) & 0xff] << 0x10;
  uVar1 = uVar10 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar9 >> 8) & 0xff] << 8;
  uVar12 = uVar1 | bVar4;
  uVar10 = uVar12 ^ uVar13 ^ (uint)(CONCAT14(bVar4,uVar1) >> 8) ^
           ((uint)((byte)(&DAT_03d0129c)[uVar9 >> 0x18] >> 6) |
           (uVar11 & 0x3fffffff | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar9 >> 0x10) & 0xff] << 0x10
            | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar9 >> 8) & 0xff] << 8 | (uint)bVar4) << 2) ^
           (uint)(CONCAT44(uVar12,uVar10) >> 0x16) ^ (uint)(CONCAT44(uVar12,uVar1) >> 0xe);
  uVar1 = uVar10 ^ uVar8 ^ uVar2 ^ param_3[0x1b];
  uVar1 = *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x18) * 4) ^ uVar3 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 & 0xff) * 4) << 8);
  uVar3 = uVar10 ^ uVar8 ^ param_3[0x1a] ^ uVar1;
  uVar2 = *(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 0x18) * 4) ^ uVar2 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar3 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar3 & 0xff) * 4) << 8);
  uVar3 = param_3[0x19] ^ uVar10 ^ uVar2 ^ uVar1;
  uVar3 = *(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 0x18) * 4) ^ uVar8 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar3 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar3 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar3 & 0xff) * 4) << 8);
  uVar8 = param_3[0x18] ^ uVar2 ^ uVar1 ^ uVar3;
  uVar10 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar10 ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ uVar2 ^ param_3[0x17];
  uVar1 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar1 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ param_3[0x16] ^ uVar1;
  uVar2 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar2 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = param_3[0x15] ^ uVar10 ^ uVar2 ^ uVar1;
  uVar3 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar3 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = param_3[0x14] ^ uVar2 ^ uVar1 ^ uVar3;
  uVar10 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar10 ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ uVar2 ^ param_3[0x13];
  uVar1 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar1 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ param_3[0x12] ^ uVar1;
  uVar2 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar2 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = param_3[0x11] ^ uVar10 ^ uVar2 ^ uVar1;
  uVar3 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar3 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = param_3[0x10] ^ uVar2 ^ uVar1 ^ uVar3;
  uVar10 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar10 ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ uVar2 ^ param_3[0xf];
  uVar1 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar1 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ param_3[0xe] ^ uVar1;
  uVar2 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar2 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = param_3[0xd] ^ uVar10 ^ uVar2 ^ uVar1;
  uVar3 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar3 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = param_3[0xc] ^ uVar2 ^ uVar1 ^ uVar3;
  uVar10 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar10 ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ uVar2 ^ param_3[0xb];
  uVar1 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar1 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ param_3[10] ^ uVar1;
  uVar2 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar2 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = param_3[9] ^ uVar10 ^ uVar2 ^ uVar1;
  uVar3 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar3 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = param_3[8] ^ uVar2 ^ uVar1 ^ uVar3;
  uVar10 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar10 ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
           (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
           *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar8 = uVar10 ^ uVar3 ^ uVar2 ^ param_3[7];
  uVar8 = *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x18) * 4) ^ uVar1 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar8 & 0xff) * 4) << 8);
  uVar1 = uVar10 ^ uVar3 ^ param_3[6] ^ uVar8;
  uVar2 = *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x18) * 4) ^ uVar2 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 & 0xff) * 4) << 8);
  uVar1 = param_3[5] ^ uVar10 ^ uVar2 ^ uVar8;
  uVar3 = *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x18) * 4) ^ uVar3 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 & 0xff) * 4) << 8);
  uVar1 = param_3[4] ^ uVar2 ^ uVar8 ^ uVar3;
  uVar12 = *param_3;
  uVar9 = *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x18) * 4) ^ uVar10 ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) << 0x18) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 8 & 0xff) * 4) >> 0x10 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 >> 8 & 0xff) * 4) << 0x10) ^
          (*(uint *)(&DAT_03d0139c + (ulong)(uVar1 & 0xff) * 4) >> 0x18 |
          *(uint *)(&DAT_03d0139c + (ulong)(uVar1 & 0xff) * 4) << 8);
  uVar11 = uVar9 ^ uVar3 ^ uVar2 ^ param_3[3];
  bVar4 = (&DAT_03d0129c)[(ulong)uVar11 & 0xff];
  uVar13 = (uint)(byte)(&DAT_03d0129c)[uVar11 >> 0x18] << 0x18;
  uVar10 = uVar13 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar11 >> 0x10) & 0xff] << 0x10;
  uVar1 = uVar10 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar11 >> 8) & 0xff] << 8;
  uVar14 = uVar1 | bVar4;
  uVar8 = uVar14 ^ uVar8 ^ (uint)(CONCAT14(bVar4,uVar1) >> 8) ^
          ((uint)((byte)(&DAT_03d0129c)[uVar11 >> 0x18] >> 6) |
          (uVar13 & 0x3fffffff | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar11 >> 0x10) & 0xff] << 0x10
           | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar11 >> 8) & 0xff] << 8 | (uint)bVar4) << 2) ^
          (uint)(CONCAT44(uVar14,uVar10) >> 0x16) ^ (uint)(CONCAT44(uVar14,uVar1) >> 0xe);
  uVar11 = uVar9 ^ uVar3 ^ param_3[2] ^ uVar8;
  bVar4 = (&DAT_03d0129c)[(ulong)uVar11 & 0xff];
  uVar13 = (uint)(byte)(&DAT_03d0129c)[uVar11 >> 0x18] << 0x18;
  uVar10 = uVar13 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar11 >> 0x10) & 0xff] << 0x10;
  uVar1 = uVar10 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar11 >> 8) & 0xff] << 8;
  uVar14 = uVar1 | bVar4;
  uVar2 = uVar14 ^ uVar2 ^ (uint)(CONCAT14(bVar4,uVar1) >> 8) ^
          ((uint)((byte)(&DAT_03d0129c)[uVar11 >> 0x18] >> 6) |
          (uVar13 & 0x3fffffff | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar11 >> 0x10) & 0xff] << 0x10
           | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar11 >> 8) & 0xff] << 8 | (uint)bVar4) << 2) ^
          (uint)(CONCAT44(uVar14,uVar10) >> 0x16) ^ (uint)(CONCAT44(uVar14,uVar1) >> 0xe);
  uVar1 = param_3[1] ^ uVar9 ^ uVar2 ^ uVar8;
  param_2[8] = (char)(uVar2 >> 0x18);
  bVar4 = (&DAT_03d0129c)[uVar1 >> 0x18];
  bVar5 = (&DAT_03d0129c)[(ulong)(uVar1 >> 0x10) & 0xff];
  bVar6 = (&DAT_03d0129c)[(ulong)(uVar1 >> 8) & 0xff];
  uVar11 = (uint)bVar4 << 0x18;
  uVar10 = uVar11 | (uint)bVar5 << 0x10;
  bVar7 = (&DAT_03d0129c)[(ulong)uVar1 & 0xff];
  uVar1 = uVar10 | (uint)bVar6 << 8;
  param_2[0xb] = (char)uVar2;
  param_2[0xf] = (char)uVar8;
  uVar13 = uVar1 | bVar7;
  uVar10 = uVar13 ^ uVar3 ^ (uint)(CONCAT14(bVar7,uVar1) >> 8) ^
           ((uint)(bVar4 >> 6) |
           (uVar11 & 0x3fffffff | (uint)bVar5 << 0x10 | (uint)bVar6 << 8 | (uint)bVar7) << 2) ^
           (uint)(CONCAT44(uVar13,uVar10) >> 0x16) ^ (uint)(CONCAT44(uVar13,uVar1) >> 0xe);
  param_2[0xd] = (char)(uVar8 >> 0x10);
  param_2[10] = (char)(uVar2 >> 8);
  uVar3 = uVar2 ^ uVar8 ^ uVar12 ^ uVar10;
  param_2[0xc] = (char)(uVar8 >> 0x18);
  param_2[9] = (char)(uVar2 >> 0x10);
  param_2[7] = (char)uVar10;
  param_2[4] = (char)(uVar10 >> 0x18);
  bVar4 = (&DAT_03d0129c)[uVar3 >> 0x18];
  param_2[5] = (char)(uVar10 >> 0x10);
  bVar5 = (&DAT_03d0129c)[(ulong)(uVar3 >> 0x10) & 0xff];
  param_2[6] = (char)(uVar10 >> 8);
  bVar6 = (&DAT_03d0129c)[(ulong)uVar3 & 0xff];
  uVar2 = (uint)bVar4 << 0x18;
  uVar10 = uVar2 | (uint)bVar5 << 0x10;
  uVar1 = uVar10 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar3 >> 8) & 0xff] << 8;
  uVar11 = uVar1 | bVar6;
  uVar10 = uVar11 ^ uVar9 ^ (uint)(CONCAT14(bVar6,uVar1) >> 8) ^
           ((uint)(bVar4 >> 6) |
           (uVar2 & 0x3fffffff | (uint)bVar5 << 0x10 |
            (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar3 >> 8) & 0xff] << 8 | (uint)bVar6) << 2) ^
           (uint)(CONCAT44(uVar11,uVar10) >> 0x16) ^ (uint)(CONCAT44(uVar11,uVar1) >> 0xe);
  param_2[3] = (char)uVar10;
  *param_2 = (char)(uVar10 >> 0x18);
  param_2[2] = (char)(uVar10 >> 8);
  param_2[1] = (char)(uVar10 >> 0x10);
  param_2[0xe] = (char)(uVar8 >> 8);
  return;
}


