/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e1410; name: FUN_003e1410
 */


/* WARNING: Removing unreachable block (ram,0x003e1454) */

undefined8 FUN_003e1410(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte bVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte local_28 [8];
  
  if (param_4 == 0) {
    uVar6 = 0xe2;
    uVar8 = 0xde;
    uVar9 = 0x9a;
    goto LAB_003e1624;
  }
  pbVar7 = (byte *)*param_3;
  uVar14 = param_4 - 1;
  if (uVar14 == 0) {
    param_4 = 1;
  }
  else {
    bVar4 = *pbVar7;
    if (bVar4 == 0) {
LAB_003e15bc:
      if (-1 < (char)(pbVar7[1] ^ bVar4)) {
        uVar6 = 0xe2;
        uVar8 = 0xdd;
        uVar9 = 0xbb;
        goto LAB_003e1624;
      }
      param_4 = param_4 - 1;
    }
    else if (bVar4 == 0xff) {
      if (uVar14 < 4) {
        bVar13 = 0;
        uVar11 = 1;
LAB_003e1550:
        uVar5 = (int)param_4 - (int)uVar11;
        uVar10 = ~uVar11;
        uVar14 = (ulong)uVar5 & 3;
        if ((uVar5 & 3) != 0) {
          do {
            pbVar12 = pbVar7 + uVar11;
            uVar11 = uVar11 + 1;
            bVar13 = bVar13 | *pbVar12;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if (2 < uVar10 + param_4) {
          lVar15 = param_4 - uVar11;
          pbVar12 = pbVar7 + uVar11 + 1;
          do {
            pbVar3 = pbVar12 + -1;
            bVar18 = *pbVar12;
            pbVar1 = pbVar12 + 1;
            pbVar2 = pbVar12 + 2;
            pbVar12 = pbVar12 + 4;
            bVar13 = bVar13 | *pbVar3 | bVar18 | *pbVar1 | *pbVar2;
            lVar15 = lVar15 + -4;
          } while (lVar15 != 0);
        }
      }
      else {
        uVar16 = uVar14 & 0xfffffffffffffffc;
        bVar18 = 0;
        bVar19 = 0;
        bVar17 = 0;
        bVar13 = 0;
        uVar11 = uVar16 | 1;
        uVar10 = uVar16;
        pbVar12 = pbVar7;
        do {
          bVar18 = bVar18 | pbVar12[1];
          bVar19 = bVar19 | pbVar12[2];
          bVar17 = bVar17 | pbVar12[3];
          bVar13 = bVar13 | pbVar12[4];
          uVar10 = uVar10 - 4;
          pbVar12 = pbVar12 + 4;
        } while (uVar10 != 0);
        bVar13 = bVar13 | bVar17 | bVar19 | bVar18;
        if (uVar14 != uVar16) goto LAB_003e1550;
      }
      if (bVar13 != 0) goto LAB_003e15bc;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (8 < param_4) {
      uVar6 = 0x65;
      uVar8 = 0xdf;
      uVar9 = 0x267;
LAB_003e1624:
      FUN_004806c0(0xd,uVar6,uVar8,"external/openssl/crypto/asn1/a_int.c",uVar9);
      return 0;
    }
  }
  FUN_003e0b10(local_28);
  if (param_4 == 1) {
    uVar14 = 0;
    uVar10 = 0;
  }
  else {
    uVar11 = 0;
    uVar14 = 0;
    do {
      uVar10 = uVar14 + 2;
      uVar11 = (ulong)local_28[uVar14] << 8 | uVar11 << 0x10 | (ulong)local_28[uVar14 + 1];
      uVar14 = uVar10;
    } while ((param_4 & 0xfffffffffffffffe) != uVar10);
    uVar14 = uVar11 << 8;
    if ((param_4 & 1) == 0) goto LAB_003e14dc;
  }
  uVar11 = uVar14 | local_28[uVar10];
LAB_003e14dc:
  *param_1 = uVar11;
  return 1;
}


