/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003df570; name: FUN_003df570
 */


ulong FUN_003df570(long param_1,int param_2,byte *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 local_88 [24];
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 == -1) {
    sVar10 = strlen((char *)param_3);
    param_4 = (int)sVar10;
  }
  bVar3 = *param_3;
  uVar5 = bVar3 - 0x30;
  if (uVar5 < 3) {
    if (param_4 < 2) {
      uVar12 = 0x8a;
      uVar13 = 0x4e;
      goto LAB_003df604;
    }
    param_4 = param_4 + -2;
    if (param_4 != 0) {
      uVar24 = (ulong)param_3[1];
      param_3 = param_3 + 2;
      puVar11 = local_88;
      lVar21 = 0;
      uVar22 = 0;
      iVar2 = 0x18;
      do {
        if (((int)uVar24 != 0x2e) && ((int)uVar24 != 0x20)) {
          uVar12 = 0x83;
          uVar13 = 0x57;
LAB_003df9a0:
          FUN_004806c0(0xd,100,uVar12,"external/openssl/crypto/asn1/a_object.c",uVar13);
LAB_003df9a4:
          if (puVar11 != local_88) {
LAB_003df9b0:
            FUN_00452f80(puVar11,"external/openssl/crypto/asn1/a_object.c",0xaf);
          }
          goto LAB_003df60c;
        }
        uVar23 = 0;
        bVar1 = false;
        param_4 = param_4 + 1;
        pbVar6 = param_3 + 1;
        do {
          while( true ) {
            param_3 = pbVar6;
            bVar4 = param_3[-1];
            uVar24 = (ulong)bVar4;
            if ((bVar4 == 0x20) || (bVar4 == 0x2e)) {
              param_4 = param_4 + -2;
              goto LAB_003df770;
            }
            iVar7 = FUN_003f6e20(uVar24,4);
            if (iVar7 == 0) {
              uVar12 = 0x82;
              uVar13 = 100;
              goto LAB_003df9a0;
            }
            if ((bVar1) || (uVar23 < 0x1999999999999991)) break;
            if (((lVar21 == 0) && (lVar21 = FUN_003eb5b0(), lVar21 == 0)) ||
               (iVar7 = FUN_003eb9f0(lVar21,uVar23 & 0xffffffff), iVar7 == 0)) goto LAB_003df9a4;
            bVar1 = true;
LAB_003df734:
            iVar7 = FUN_003f3030(lVar21,10);
            if ((iVar7 == 0) || (iVar7 = FUN_003f2e00(lVar21,bVar4 - 0x30), iVar7 == 0))
            goto LAB_003df9a4;
            param_4 = param_4 + -1;
            pbVar6 = param_3 + 1;
            if (param_4 < 2) goto LAB_003df764;
          }
          if (bVar1) goto LAB_003df734;
          uVar23 = (uVar24 + uVar23 * 10) - 0x30;
          param_4 = param_4 + -1;
          pbVar6 = param_3 + 1;
        } while (1 < param_4);
LAB_003df764:
        param_4 = 0;
LAB_003df770:
        iVar7 = (int)uVar22;
        if (iVar7 == 0) {
          if ((bVar3 < 0x32) && (0x27 < uVar23)) {
            uVar12 = 0x93;
            uVar13 = 0x78;
            goto LAB_003df9a0;
          }
          if (!bVar1) {
            uVar23 = uVar23 + (ulong)uVar5 * 0x28;
            goto LAB_003df864;
          }
          iVar8 = FUN_003f2e00(lVar21,uVar5 * 0x28);
          if (iVar8 != 0) goto LAB_003df7a0;
          goto LAB_003df9a4;
        }
        if (bVar1) {
LAB_003df7a0:
          iVar9 = FUN_003eb2b0(lVar21);
          iVar8 = (iVar9 + 6) / 7;
          if (iVar8 <= iVar2) {
LAB_003df818:
            if (iVar9 + 0xcU < 0xd) {
              uVar16 = 0;
            }
            else {
              uVar23 = 0;
              do {
                iVar9 = FUN_003f2cf0(lVar21,0x80);
                if (iVar9 == -1) goto LAB_003df9a4;
                uVar16 = uVar23 + 1;
                puVar11[uVar23] = (char)iVar9;
                uVar23 = uVar16;
              } while (iVar8 != (int)uVar16);
            }
            goto LAB_003df87c;
          }
          if (puVar11 != local_88) {
            FUN_00452f80(puVar11,"external/openssl/crypto/asn1/a_object.c",0x88);
          }
          iVar2 = iVar8 + 0x20;
          puVar11 = (undefined1 *)FUN_00452c30(iVar2,"external/openssl/crypto/asn1/a_object.c",0x8a)
          ;
          if (puVar11 != (undefined1 *)0x0) goto LAB_003df818;
          goto LAB_003df9b0;
        }
LAB_003df864:
        uVar16 = 0;
        do {
          bVar4 = (byte)uVar23;
          uVar23 = uVar23 >> 7;
          puVar11[uVar16] = bVar4 & 0x7f;
          uVar16 = uVar16 + 1;
        } while (uVar23 != 0);
LAB_003df87c:
        uVar15 = (uint)uVar16;
        uVar14 = uVar15 + iVar7;
        if (param_1 != 0) {
          if (param_2 < (int)uVar14) {
            uVar12 = 0x6b;
            uVar13 = 0xa0;
            goto LAB_003df9a0;
          }
          if (1 < (int)uVar15) {
            uVar16 = uVar16 & 0xffffffff;
            uVar22 = uVar16;
            if (1 < uVar15) {
              uVar22 = 2;
            }
            uVar23 = (uVar16 - uVar22) + 1;
            uVar22 = (ulong)iVar7;
            if (7 < uVar23) {
              puVar17 = (ulong *)(param_1 + uVar22);
              puVar19 = (ulong *)(puVar11 + uVar16);
              uVar20 = uVar16;
              if (1 < uVar16) {
                uVar20 = 2;
              }
              if ((puVar19 <= puVar17) ||
                 ((undefined1 *)(param_1 + 1 + ((uVar22 + uVar16) - uVar20)) <=
                  puVar11 + (uVar20 - 1))) {
                uVar18 = uVar23 & 0xfffffffffffffff8;
                uVar22 = uVar18 + uVar22;
                uVar16 = uVar16 - uVar18;
                uVar20 = uVar18;
                do {
                  puVar19 = puVar19 + -1;
                  uVar25 = NEON_rev64(*puVar19 | 0x8080808080808080,1);
                  uVar20 = uVar20 - 8;
                  *puVar17 = uVar25;
                  puVar17 = puVar17 + 1;
                } while (uVar20 != 0);
                if (uVar23 == uVar18) goto LAB_003df94c;
              }
            }
            uVar23 = uVar22;
            do {
              uVar22 = uVar23 + 1;
              *(byte *)(param_1 + uVar23) = puVar11[uVar16 - 1] | 0x80;
              bVar1 = 2 < (long)uVar16;
              uVar16 = uVar16 - 1;
              uVar23 = uVar22;
            } while (bVar1);
          }
LAB_003df94c:
          *(undefined1 *)(param_1 + (int)uVar22) = *puVar11;
          uVar14 = (int)uVar22 + 1;
        }
        uVar22 = (ulong)uVar14;
      } while (0 < param_4);
      if (puVar11 != local_88) {
        FUN_00452f80(puVar11,"external/openssl/crypto/asn1/a_object.c",0xaa);
      }
      goto LAB_003df610;
    }
  }
  else {
    uVar12 = 0x7a;
    uVar13 = 0x49;
LAB_003df604:
    FUN_004806c0(0xd,100,uVar12,"external/openssl/crypto/asn1/a_object.c",uVar13);
  }
  lVar21 = 0;
LAB_003df60c:
  uVar22 = 0;
LAB_003df610:
  FUN_003eb520(lVar21);
  return uVar22;
}


