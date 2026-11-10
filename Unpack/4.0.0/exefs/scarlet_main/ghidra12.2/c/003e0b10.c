/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e0b10; name: FUN_003e0b10
 */


ulong FUN_003e0b10(byte *param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  
  if (param_4 == 0) {
    uVar7 = 0xde;
    uVar8 = 0x9a;
    goto LAB_003e0b64;
  }
  bVar4 = *param_3;
  if (param_2 != (uint *)0x0) {
    *param_2 = bVar4 & 0x80;
  }
  uVar13 = param_4 - 1;
  if (uVar13 == 0) {
    if (param_1 == (byte *)0x0) {
      return 1;
    }
    if ((bVar4 & 0x80) == 0) {
      *param_1 = *param_3;
      return 1;
    }
    *param_1 = -*param_3;
    return 1;
  }
  if (*param_3 != 0) {
    uVar6 = param_4;
    if (*param_3 != 0xff) goto joined_r0x003e0ccc;
    if (uVar13 < 4) {
      bVar12 = 0;
      uVar10 = 1;
LAB_003e0c1c:
      uVar9 = (int)param_4 - (int)uVar10;
      uVar14 = ~uVar10;
      uVar13 = (ulong)uVar9 & 3;
      if ((uVar9 & 3) != 0) {
        do {
          pbVar11 = param_3 + uVar10;
          uVar10 = uVar10 + 1;
          bVar12 = bVar12 | *pbVar11;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (2 < uVar14 + param_4) {
        lVar15 = param_4 - uVar10;
        pbVar11 = param_3 + uVar10 + 1;
        do {
          pbVar3 = pbVar11 + -1;
          bVar18 = *pbVar11;
          pbVar1 = pbVar11 + 1;
          pbVar2 = pbVar11 + 2;
          pbVar11 = pbVar11 + 4;
          bVar12 = bVar12 | *pbVar3 | bVar18 | *pbVar1 | *pbVar2;
          lVar15 = lVar15 + -4;
        } while (lVar15 != 0);
      }
    }
    else {
      uVar16 = uVar13 & 0xfffffffffffffffc;
      bVar18 = 0;
      bVar19 = 0;
      bVar17 = 0;
      bVar12 = 0;
      uVar10 = uVar16 | 1;
      uVar14 = uVar16;
      pbVar11 = param_3;
      do {
        bVar18 = bVar18 | pbVar11[1];
        bVar19 = bVar19 | pbVar11[2];
        bVar17 = bVar17 | pbVar11[3];
        bVar12 = bVar12 | pbVar11[4];
        uVar14 = uVar14 - 4;
        pbVar11 = pbVar11 + 4;
      } while (uVar14 != 0);
      bVar12 = bVar12 | bVar17 | bVar19 | bVar18;
      if (uVar13 != uVar16) goto LAB_003e0c1c;
    }
    if (bVar12 == 0) goto joined_r0x003e0ccc;
  }
  if ((bVar4 & 0x80) == (param_3[1] & 0x80)) {
    uVar7 = 0xdd;
    uVar8 = 0xbb;
LAB_003e0b64:
    FUN_004806c0(0xd,0xe2,uVar7,"external/openssl/crypto/asn1/a_int.c",uVar8);
    return 0;
  }
  uVar6 = param_4 - 1;
joined_r0x003e0ccc:
  if ((param_1 != (byte *)0x0) && (uVar6 != 0)) {
    uVar5 = -(uint)(bVar4 >> 7);
    uVar9 = (uint)(bVar4 >> 7);
    param_3 = param_3 + param_4;
    param_1 = param_1 + uVar6;
    uVar13 = uVar6;
    if ((uVar6 & 1) != 0) {
      param_3 = param_3 + -1;
      uVar9 = (uint)(bVar4 >> 7) + ((uint)*param_3 ^ uVar5 & 0xff);
      param_1 = param_1 + -1;
      *param_1 = (byte)uVar9;
      uVar9 = uVar9 >> 8;
      uVar13 = uVar6 - 1;
    }
    if (uVar6 != 1) {
      param_1 = param_1 + -1;
      param_3 = param_3 + -1;
      do {
        uVar9 = uVar9 + ((*param_3 ^ uVar5) & 0xff);
        *param_1 = (byte)uVar9;
        uVar9 = (uVar9 >> 8) + ((param_3[-1] ^ uVar5) & 0xff);
        uVar13 = uVar13 - 2;
        param_1[-1] = (byte)uVar9;
        uVar9 = uVar9 >> 8;
        param_1 = param_1 + -2;
        param_3 = param_3 + -2;
      } while (uVar13 != 0);
    }
  }
  return uVar6;
}


