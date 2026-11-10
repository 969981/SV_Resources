/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e08c0; name: FUN_003e08c0
 */


long FUN_003e08c0(long *param_1,long *param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  long lVar17;
  ulong uVar18;
  int local_34;
  
  if (param_3 == 0) {
    FUN_004806c0(0xd,0xe2,0xde,"external/openssl/crypto/asn1/a_int.c",0x9a);
    return 0;
  }
  uVar13 = param_3 - 1;
  if (uVar13 == 0) {
    uVar18 = 1;
    goto LAB_003e0a4c;
  }
  pbVar7 = (byte *)*param_2;
  bVar4 = *pbVar7;
  if (bVar4 == 0) {
LAB_003e0a00:
    if (-1 < (char)(pbVar7[1] ^ bVar4)) {
      FUN_004806c0(0xd,0xe2,0xdd,"external/openssl/crypto/asn1/a_int.c",0xbb);
      return 0;
    }
    uVar18 = param_3 - 1;
  }
  else {
    uVar18 = param_3;
    if (bVar4 == 0xff) {
      if (uVar13 < 4) {
        bVar10 = 0;
        uVar8 = 1;
LAB_003e0994:
        uVar5 = (int)param_3 - (int)uVar8;
        uVar11 = ~uVar8;
        uVar13 = (ulong)uVar5 & 3;
        if ((uVar5 & 3) != 0) {
          do {
            pbVar9 = pbVar7 + uVar8;
            uVar8 = uVar8 + 1;
            bVar10 = bVar10 | *pbVar9;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (2 < uVar11 + param_3) {
          lVar17 = param_3 - uVar8;
          pbVar9 = pbVar7 + uVar8 + 1;
          do {
            pbVar3 = pbVar9 + -1;
            bVar15 = *pbVar9;
            pbVar1 = pbVar9 + 1;
            pbVar2 = pbVar9 + 2;
            pbVar9 = pbVar9 + 4;
            bVar10 = bVar10 | *pbVar3 | bVar15 | *pbVar1 | *pbVar2;
            lVar17 = lVar17 + -4;
          } while (lVar17 != 0);
        }
      }
      else {
        uVar12 = uVar13 & 0xfffffffffffffffc;
        bVar15 = 0;
        bVar16 = 0;
        bVar14 = 0;
        bVar10 = 0;
        uVar8 = uVar12 | 1;
        uVar11 = uVar12;
        pbVar9 = pbVar7;
        do {
          bVar15 = bVar15 | pbVar9[1];
          bVar16 = bVar16 | pbVar9[2];
          bVar14 = bVar14 | pbVar9[3];
          bVar10 = bVar10 | pbVar9[4];
          uVar11 = uVar11 - 4;
          pbVar9 = pbVar9 + 4;
        } while (uVar11 != 0);
        bVar10 = bVar10 | bVar14 | bVar16 | bVar15;
        if (uVar13 != uVar12) goto LAB_003e0994;
      }
      if (bVar10 != 0) goto LAB_003e0a00;
    }
  }
  if (uVar18 == 0) {
    return 0;
  }
LAB_003e0a4c:
  if ((param_1 == (long *)0x0) || (lVar17 = *param_1, lVar17 == 0)) {
    lVar17 = FUN_003e5030();
    if (lVar17 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar17 + 4) = 2;
  }
  iVar6 = FUN_003df070(lVar17,0,uVar18 & 0xffffffff);
  if (iVar6 == 0) {
    FUN_004806c0(0xd,0xc2,0x41,"external/openssl/crypto/asn1/a_int.c",0x139);
    if ((param_1 == (long *)0x0) || (*param_1 != lVar17)) {
      thunk_FUN_003df2e0(lVar17);
    }
    return 0;
  }
  FUN_003e0b10(*(undefined8 *)(lVar17 + 8),&local_34,*param_2,param_3);
  if (local_34 != 0) {
    *(uint *)(lVar17 + 4) = *(uint *)(lVar17 + 4) | 0x100;
  }
  *param_2 = *param_2 + param_3;
  if (param_1 == (long *)0x0) {
    return lVar17;
  }
  *param_1 = lVar17;
  return lVar17;
}


