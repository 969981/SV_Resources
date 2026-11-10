/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00430640; name: FUN_00430640
 */


void FUN_00430640(uint *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (undefined1 *)0x0)) && (param_3 != (uint *)0x0)) &&
     ((uVar3 = param_3[0x44], uVar3 < 0x11 && ((1 << (ulong)(uVar3 & 0x1f) & 0x15000U) != 0)))) {
    uVar10 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar11 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar12 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
    uVar13 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
    uVar10 = *param_3 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
    uVar11 = param_3[1] ^ (uVar11 >> 0x10 | uVar11 << 0x10);
    uVar12 = param_3[2] ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar13 = param_3[3] ^ (uVar13 >> 0x10 | uVar13 << 0x10);
    uVar10 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar10 >> 0x18) * 4) ^
             *(uint *)(&DAT_03cf33c0 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf37c0 + (ulong)(uVar10 & 0xff) * 4);
    uVar1 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar12 >> 0x18) * 4) ^
            *(uint *)(&DAT_03cf33c0 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf37c0 + (ulong)(uVar12 & 0xff) * 4);
    uVar11 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar11 >> 0x18) * 4) ^
             *(uint *)(&DAT_03cf33c0 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf37c0 + (ulong)(uVar11 & 0xff) * 4) ^ uVar1;
    uVar13 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar13 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar13 >> 0x18) * 4) ^
             *(uint *)(&DAT_03cf33c0 + (ulong)(uVar13 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf37c0 + (ulong)(uVar13 & 0xff) * 4);
    uVar12 = uVar11 ^ uVar10;
    uVar1 = uVar13 ^ uVar1;
    uVar13 = uVar13 ^ uVar11;
    uVar11 = uVar1 ^ uVar12;
    uVar1 = uVar1 ^ uVar10;
    uVar10 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar1 = uVar10 ^ ((uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8);
    uVar10 = uVar10 ^ uVar11;
    uVar11 = param_3[7] ^ uVar11 ^ uVar1;
    uVar1 = uVar1 ^ uVar12;
    uVar12 = param_3[5] ^ uVar12 ^ uVar10;
    uVar13 = uVar1 ^ param_3[4];
    uVar1 = uVar10 ^ param_3[6] ^ uVar1;
    while( true ) {
      uVar3 = uVar3 - 2;
      param_3 = param_3 + 8;
      if (uVar3 == 0) break;
      uVar10 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar13 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf33c0 + (ulong)(uVar13 >> 0x18) * 4) ^
               *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar13 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar13 & 0xff) * 4);
      uVar1 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_03cf33c0 + (ulong)(uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar1 & 0xff) * 4);
      uVar12 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf33c0 + (ulong)(uVar12 >> 0x18) * 4) ^
               *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar12 & 0xff) * 4) ^ uVar1;
      uVar13 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf33c0 + (ulong)(uVar11 >> 0x18) * 4) ^
               *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar11 & 0xff) * 4);
      uVar11 = uVar12 ^ uVar10;
      uVar1 = uVar13 ^ uVar1;
      uVar13 = uVar13 ^ uVar12;
      uVar2 = uVar1 ^ uVar11;
      uVar1 = uVar1 ^ uVar10;
      uVar10 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar1 = (uVar13 & 0xff00ff) << 8 | uVar13 >> 8 & 0xff00ff;
      uVar13 = uVar11 >> 0x10 | uVar11 << 0x10;
      uVar10 = (uVar10 >> 0x10 | uVar10 << 0x10) ^ uVar2;
      uVar11 = uVar10 ^ uVar13;
      uVar2 = uVar1 ^ uVar2;
      uVar12 = uVar11 ^ *param_3;
      uVar13 = param_3[1] ^ uVar13 ^ uVar2;
      uVar2 = uVar11 ^ param_3[2] ^ uVar2;
      uVar1 = uVar10 ^ param_3[3] ^ uVar1;
      uVar11 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar12 >> 0x18) * 4) ^
               *(uint *)(&DAT_03cf33c0 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf37c0 + (ulong)(uVar12 & 0xff) * 4);
      uVar2 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_03cf33c0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_03cf37c0 + (ulong)(uVar2 & 0xff) * 4);
      uVar1 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_03cf33c0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_03cf37c0 + (ulong)(uVar1 & 0xff) * 4);
      uVar10 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar13 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar13 >> 0x18) * 4) ^
               *(uint *)(&DAT_03cf33c0 + (ulong)(uVar13 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_03cf37c0 + (ulong)(uVar13 & 0xff) * 4) ^ uVar2;
      uVar2 = uVar1 ^ uVar2;
      uVar12 = uVar10 ^ uVar11;
      uVar11 = uVar2 ^ uVar11;
      uVar1 = uVar1 ^ uVar10;
      uVar2 = uVar2 ^ uVar12;
      uVar10 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar13 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar2 = uVar13 >> 0x10 | uVar13 << 0x10;
      uVar11 = ((uVar11 & 0xff00ff) << 8 | uVar11 >> 8 & 0xff00ff) ^ uVar10;
      uVar10 = uVar10 ^ uVar2;
      uVar1 = uVar11 ^ uVar12;
      uVar12 = param_3[5] ^ uVar12 ^ uVar10;
      uVar13 = uVar1 ^ param_3[4];
      uVar11 = param_3[7] ^ uVar2 ^ uVar11;
      uVar1 = uVar10 ^ param_3[6] ^ uVar1;
    }
    uVar2 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
    uVar3 = ((*(uint *)(&DAT_03cf37c0 + (ulong)(uVar13 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
             *(int *)(&DAT_03cf33c0 + (ulong)(uVar13 >> 0x18) * 4) << 0x18 |
             (*(uint *)(&DAT_03cf2bc0 + (ulong)(uVar13 >> 8 & 0xff) * 4) & 0xff) << 8 |
            (uint)(byte)(&DAT_03cf2fc0)[(ulong)(uVar13 & 0xff) * 4]) ^ *param_3;
    iVar4 = *(int *)(&DAT_03cf33c0 + (ulong)(uVar1 >> 0x18) * 4);
    uVar10 = ((*(uint *)(&DAT_03cf37c0 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
              *(int *)(&DAT_03cf33c0 + (ulong)(uVar12 >> 0x18) * 4) << 0x18 |
              (*(uint *)(&DAT_03cf2bc0 + (ulong)(uVar12 >> 8 & 0xff) * 4) & 0xff) << 8 |
             (uint)(byte)(&DAT_03cf2fc0)[(ulong)(uVar12 & 0xff) * 4]) ^ param_3[1];
    iVar5 = *(int *)(&DAT_03cf33c0 + (ulong)(uVar11 >> 0x18) * 4);
    uVar12 = param_3[2];
    uVar13 = param_3[3];
    *param_2 = (char)(uVar3 >> 0x18);
    uVar6 = *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar1 >> 8 & 0xff) * 4);
    param_2[1] = (char)(uVar3 >> 0x10);
    bVar8 = (&DAT_03cf2fc0)[(ulong)(uVar1 & 0xff) * 4];
    param_2[2] = (char)(uVar3 >> 8);
    uVar1 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar11 >> 0x10 & 0xff) * 4);
    param_2[5] = (char)(uVar10 >> 0x10);
    uVar7 = *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar11 >> 8 & 0xff) * 4);
    param_2[6] = (char)(uVar10 >> 8);
    bVar9 = (&DAT_03cf2fc0)[(ulong)(uVar11 & 0xff) * 4];
    param_2[3] = (char)uVar3;
    uVar12 = ((uVar2 & 0xff00) << 8 | iVar4 << 0x18 | (uVar6 & 0xff) << 8 | (uint)bVar8) ^ uVar12;
    param_2[8] = (char)(uVar12 >> 0x18);
    param_2[9] = (char)(uVar12 >> 0x10);
    param_2[4] = (char)(uVar10 >> 0x18);
    param_2[10] = (char)(uVar12 >> 8);
    param_2[0xb] = (char)uVar12;
    uVar13 = ((uVar1 & 0xff00) << 8 | iVar5 << 0x18 | (uVar7 & 0xff) << 8 | (uint)bVar9) ^ uVar13;
    param_2[0xc] = (char)(uVar13 >> 0x18);
    param_2[0xd] = (char)(uVar13 >> 0x10);
    param_2[7] = (char)uVar10;
    param_2[0xf] = (char)uVar13;
    param_2[0xe] = (char)(uVar13 >> 8);
  }
  return;
}


