/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004062c0; name: FUN_004062c0
 */


long FUN_004062c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (0 < param_1) {
    lVar12 = 1;
    piVar11 = &DAT_044a42f8;
    do {
      if (piVar11[-8] == param_1) {
        lVar12 = lVar12 + -1;
LAB_00406324:
        lVar4 = FUN_003ed1c0();
        if (lVar4 == 0) {
          FUN_004806c0(0x10,0xaf,0x41,"external/openssl/crypto/ec/ec_curve.c",0xbd4);
          lVar12 = 0;
          lVar5 = 0;
LAB_00406420:
          lVar6 = 0;
          lVar14 = 0;
          lVar13 = 0;
          lVar16 = 0;
          lVar15 = 0;
          lVar7 = 0;
LAB_00406438:
          FUN_0040ca30(lVar7);
          lVar7 = 0;
        }
        else {
          piVar11 = (int *)(&PTR_DAT_044a42e0)[lVar12 * 4];
          iVar1 = piVar11[1];
          iVar3 = piVar11[2];
          lVar16 = (long)(piVar11 + 4) + (long)iVar1;
          lVar12 = FUN_003eba50(lVar16,iVar3,0);
          if (lVar12 == 0) {
LAB_004063d4:
            lVar5 = 0;
LAB_004063d8:
            FUN_004806c0(0x10,0xaf,3,"external/openssl/crypto/ec/ec_curve.c",0xbe1);
            goto LAB_00406420;
          }
          lVar13 = (long)iVar3;
          lVar5 = FUN_003eba50(lVar16 + lVar13,iVar3,0);
          if (lVar5 == 0) goto LAB_004063d4;
          lVar6 = FUN_003eba50(lVar16 + lVar13 * 2,iVar3,0);
          if (lVar6 == 0) goto LAB_004063d8;
          if (*piVar11 == 0x196) {
            lVar7 = FUN_00406de0(lVar12,lVar5,lVar6,lVar4);
            if (lVar7 != 0) goto LAB_004064ec;
            uVar9 = 0xbee;
LAB_00406618:
            FUN_004806c0(0x10,0xaf,0x10,"external/openssl/crypto/ec/ec_curve.c",uVar9);
            lVar14 = 0;
            lVar13 = 0;
            lVar16 = 0;
            lVar15 = 0;
            goto LAB_00406438;
          }
          lVar7 = FUN_00406e70(lVar12,lVar5,lVar6,lVar4);
          if (lVar7 == 0) {
            uVar9 = 0xbf7;
            goto LAB_00406618;
          }
LAB_004064ec:
          FUN_0040d570(lVar7,param_1);
          lVar15 = FUN_0040cf10(lVar7);
          if (lVar15 == 0) {
            FUN_004806c0(0x10,0xaf,0x10,"external/openssl/crypto/ec/ec_curve.c",0xc00);
            lVar14 = 0;
LAB_004065fc:
            lVar13 = 0;
            lVar16 = 0;
            goto LAB_00406438;
          }
          lVar14 = FUN_003eba50(lVar16 + lVar13 * 3,iVar3,0);
          if ((lVar14 == 0) || (lVar13 = FUN_003eba50(lVar16 + lVar13 * 4,iVar3,0), lVar13 == 0)) {
            FUN_004806c0(0x10,0xaf,3,"external/openssl/crypto/ec/ec_curve.c",0xc06);
            goto LAB_004065fc;
          }
          iVar2 = FUN_0040dbd0(lVar7,lVar15,lVar14,lVar13,lVar4);
          if (iVar2 == 0) {
            FUN_004806c0(0x10,0xaf,0x10,"external/openssl/crypto/ec/ec_curve.c",0xc0a);
            lVar16 = 0;
            goto LAB_00406438;
          }
          lVar16 = FUN_003eba50(lVar16 + iVar3 * 5,iVar3,0);
          if ((lVar16 == 0) || (iVar3 = FUN_003eb9f0(lVar14,piVar11[3]), iVar3 == 0)) {
            uVar10 = 0xc0f;
            uVar9 = 3;
LAB_004066a8:
            FUN_004806c0(0x10,0xaf,uVar9,"external/openssl/crypto/ec/ec_curve.c",uVar10);
            goto LAB_00406438;
          }
          iVar3 = FUN_0040d120(lVar7,lVar15,lVar16,lVar14);
          if (iVar3 == 0) {
            uVar10 = 0xc13;
LAB_004066a0:
            uVar9 = 0x10;
            goto LAB_004066a8;
          }
          if ((iVar1 != 0) && (lVar8 = FUN_0040d5d0(lVar7,piVar11 + 4,(long)iVar1), lVar8 == 0)) {
            uVar10 = 0xc18;
            goto LAB_004066a0;
          }
        }
        FUN_0040caf0(lVar15);
        FUN_003ed280(lVar4);
        FUN_003eb520(lVar12);
        FUN_003eb520(lVar5);
        FUN_003eb520(lVar6);
        FUN_003eb520(lVar16);
        FUN_003eb520(lVar14);
        FUN_003eb520(lVar13);
        if (lVar7 != 0) {
          return lVar7;
        }
        break;
      }
      if (*piVar11 == param_1) goto LAB_00406324;
      lVar12 = lVar12 + 2;
      piVar11 = piVar11 + 0x10;
    } while (lVar12 != 0x53);
    FUN_004806c0(0x10,0xae,0x81,"external/openssl/crypto/ec/ec_curve.c",0xc3c);
  }
  return 0;
}


