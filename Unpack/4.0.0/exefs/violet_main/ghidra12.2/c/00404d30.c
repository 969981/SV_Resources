/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00404d30; name: FUN_00404d30
 */


long FUN_00404d30(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  
  plVar11 = *(long **)(param_1 + 8);
  if (((plVar11 == (long *)0x0) || (*plVar11 == 0)) || (plVar11[1] == 0)) {
    uVar9 = 0x255;
LAB_00404e30:
    FUN_004806c0(0x10,0x107,0x73,"external/openssl/crypto/ec/ec_asn1.c",uVar9);
    lVar3 = 0;
LAB_00404e48:
    lVar15 = 0;
    lVar14 = 0;
    lVar4 = 0;
LAB_00404e4c:
    lVar18 = 0;
LAB_00404e50:
    lVar6 = 0;
    lVar19 = 0;
  }
  else {
    puVar13 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar13 == (undefined8 *)0x0) ||
        (puVar12 = (undefined4 *)*puVar13, puVar12 == (undefined4 *)0x0)) ||
       ((*(long *)(puVar12 + 2) == 0 || ((puVar13[1] == 0 || (*(long *)(puVar13[1] + 8) == 0)))))) {
      uVar9 = 0x262;
      goto LAB_00404e30;
    }
    lVar3 = FUN_003eba50(*(long *)(puVar12 + 2),*puVar12,0);
    if (lVar3 == 0) {
      FUN_004806c0(0x10,0x107,3,"external/openssl/crypto/ec/ec_asn1.c",0x267);
      goto LAB_00404e48;
    }
    puVar12 = *(undefined4 **)(*(long *)(param_1 + 0x10) + 8);
    lVar4 = FUN_003eba50(*(undefined8 *)(puVar12 + 2),*puVar12,0);
    if (lVar4 == 0) {
      uVar10 = 0x26c;
      uVar9 = 3;
      goto LAB_00405008;
    }
    iVar1 = FUN_0045bea0(**(undefined8 **)(param_1 + 8));
    if (iVar1 != 0x196) {
      if (iVar1 == 0x197) {
        piVar17 = *(int **)(*(long *)(param_1 + 8) + 8);
        iVar1 = *piVar17;
        if (iVar1 < 0x296) {
          lVar14 = FUN_003eb5b0();
          if (lVar14 == 0) {
            uVar9 = 0x41;
            uVar10 = 0x285;
            goto LAB_004052b8;
          }
          iVar2 = FUN_0045bea0(*(undefined8 *)(piVar17 + 2));
          if (iVar2 == 0x2a9) {
            uVar10 = 0x2c0;
            uVar9 = 0x7e;
            goto LAB_004052b8;
          }
          if (iVar2 != 0x2ab) {
            if (iVar2 == 0x2aa) {
              if (*(long *)(piVar17 + 4) == 0) {
                uVar9 = 0x73;
                uVar10 = 0x290;
              }
              else {
                uVar5 = FUN_003e10b0();
                if ((0 < (long)uVar5) && ((long)uVar5 < (long)*piVar17)) {
                  iVar2 = FUN_003ec020(lVar14);
                  if (iVar2 != 0) {
                    iVar2 = FUN_003ec020(lVar14,uVar5 & 0xffffffff);
                    goto joined_r0x00404fc4;
                  }
                  goto LAB_004052bc;
                }
                uVar9 = 0x89;
                uVar10 = 0x298;
              }
            }
            else {
              uVar9 = 0x73;
              uVar10 = 0x2c4;
            }
            goto LAB_004052b8;
          }
          piVar16 = *(int **)(piVar17 + 4);
          if (piVar16 == (int *)0x0) {
            uVar9 = 0x73;
            uVar10 = 0x2a8;
            lVar15 = 0;
            goto LAB_004052fc;
          }
          if ((((*piVar17 <= piVar16[2]) || (piVar16[2] <= piVar16[1])) || (piVar16[1] <= *piVar16))
             || (*piVar16 < 1)) {
            uVar9 = 0x84;
            uVar10 = 0x2b0;
            goto LAB_004052b8;
          }
          iVar2 = FUN_003ec020(lVar14);
          if (((iVar2 != 0) && (iVar2 = FUN_003ec020(lVar14,*piVar16), iVar2 != 0)) &&
             (iVar2 = FUN_003ec020(lVar14,piVar16[1]), iVar2 != 0)) {
            iVar2 = FUN_003ec020(lVar14,piVar16[2]);
joined_r0x00404fc4:
            if ((iVar2 != 0) && (iVar2 = FUN_003ec020(lVar14,0), iVar2 != 0)) {
              lVar15 = FUN_00406e70(lVar14,lVar3,lVar4,0);
              goto LAB_00405184;
            }
          }
          goto LAB_004052bc;
        }
        uVar9 = 0x8f;
        uVar10 = 0x280;
      }
      else {
        uVar9 = 0x67;
        uVar10 = 0x2e7;
      }
LAB_00405008:
      FUN_004806c0(0x10,0x107,uVar9,"external/openssl/crypto/ec/ec_asn1.c",uVar10);
      lVar15 = 0;
      lVar14 = 0;
      goto LAB_00404e4c;
    }
    lVar15 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (lVar15 == 0) {
      uVar9 = 0x73;
      uVar10 = 0x2d0;
      goto LAB_00405008;
    }
    lVar14 = FUN_003e1230(lVar15,0);
    if (lVar14 == 0) {
      uVar9 = 0xd;
      uVar10 = 0x2d5;
LAB_004052b8:
      FUN_004806c0(0x10,0x107,uVar9,"external/openssl/crypto/ec/ec_asn1.c",uVar10);
LAB_004052bc:
      lVar15 = 0;
      goto LAB_00404e4c;
    }
    iVar1 = FUN_003ec670(lVar14);
    if ((iVar1 != 0) || (iVar1 = FUN_003eb480(lVar14), iVar1 != 0)) {
      uVar9 = 0x67;
      uVar10 = 0x2da;
      goto LAB_004052b8;
    }
    iVar1 = FUN_003eb2b0(lVar14);
    if (0x295 < iVar1) {
      uVar9 = 0x8f;
      uVar10 = 0x2e0;
      goto LAB_004052b8;
    }
    lVar15 = FUN_00406de0(lVar14,lVar3,lVar4,0);
LAB_00405184:
    if (lVar15 == 0) {
      uVar10 = 0x2ec;
      uVar9 = 0x10;
LAB_004052fc:
      FUN_004806c0(0x10,0x107,uVar9,"external/openssl/crypto/ec/ec_asn1.c",uVar10);
      goto LAB_00404e4c;
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
      FUN_00452f80(*(undefined8 *)(lVar15 + 0x30),"external/openssl/crypto/ec/ec_asn1.c",0x2f2);
      __dest = (void *)FUN_00452c30((long)**(int **)(*(long *)(param_1 + 0x10) + 0x10),
                                    "external/openssl/crypto/ec/ec_asn1.c",0x2f3);
      *(void **)(lVar15 + 0x30) = __dest;
      if (__dest == (void *)0x0) {
        uVar9 = 0x41;
        uVar10 = 0x2f4;
        goto LAB_004052fc;
      }
      piVar17 = *(int **)(*(long *)(param_1 + 0x10) + 0x10);
      memcpy(__dest,*(void **)(piVar17 + 2),(long)*piVar17);
      *(long *)(lVar15 + 0x38) = (long)**(int **)(*(long *)(param_1 + 0x10) + 0x10);
    }
    if ((((*(long *)(param_1 + 0x20) == 0) ||
         (piVar17 = *(int **)(param_1 + 0x18), piVar17 == (int *)0x0)) ||
        (*(long *)(piVar17 + 2) == 0)) || (*piVar17 == 0)) {
      uVar9 = 0x73;
      uVar10 = 0x300;
      goto LAB_004052fc;
    }
    lVar18 = FUN_0040cf10(lVar15);
    if (lVar18 == 0) goto LAB_00404e50;
    FUN_0040d5b0(lVar15,**(byte **)(*(long *)(param_1 + 0x18) + 8) & 0xfe);
    iVar2 = FUN_0040f9d0(lVar15,lVar18,*(undefined8 *)(*(int **)(param_1 + 0x18) + 2),
                         (long)**(int **)(param_1 + 0x18),0);
    if (iVar2 == 0) {
      uVar9 = 0x30e;
LAB_00405330:
      uVar10 = 0x10;
LAB_00405354:
      FUN_004806c0(0x10,0x107,uVar10,"external/openssl/crypto/ec/ec_asn1.c",uVar9);
      goto LAB_00404e50;
    }
    lVar3 = FUN_003e1230(*(undefined8 *)(param_1 + 0x20),lVar3);
    if (lVar3 == 0) {
      uVar10 = 0xd;
      uVar9 = 0x314;
      goto LAB_00405354;
    }
    iVar2 = FUN_003ec670(lVar3);
    if ((iVar2 != 0) || (iVar2 = FUN_003eb480(lVar3), iVar2 != 0)) {
      uVar10 = 0x7a;
      uVar9 = 0x318;
      goto LAB_00405354;
    }
    iVar2 = FUN_003eb2b0(lVar3);
    if (iVar1 + 1 < iVar2) {
      uVar10 = 0x7a;
      uVar9 = 0x31c;
      goto LAB_00405354;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_003eb520(lVar4);
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_003e1230(*(long *)(param_1 + 0x28),lVar4);
      if (lVar4 == 0) {
        uVar10 = 0xd;
        uVar9 = 0x325;
        goto LAB_00405354;
      }
    }
    iVar1 = FUN_0040d120(lVar15,lVar18,lVar3,lVar4);
    if (iVar1 == 0) {
      uVar9 = 0x32a;
      goto LAB_00405330;
    }
    lVar19 = FUN_003ed1c0();
    if (lVar19 == 0) {
      FUN_004806c0(0x10,0x107,3,"external/openssl/crypto/ec/ec_asn1.c",0x33b);
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0040d0a0(lVar15);
      if (((lVar6 == 0) || (lVar7 = FUN_0040d5d0(lVar6,0,0), lVar7 != 1)) ||
         (iVar1 = FUN_0040d120(lVar6,lVar18,lVar3,0), iVar1 == 0)) {
        uVar9 = 0x341;
      }
      else {
        iVar1 = FUN_00406940(lVar6,lVar19);
        if (iVar1 == 0) {
          lVar7 = lVar15;
          goto LAB_00404e60;
        }
        lVar7 = FUN_004062c0();
        if (lVar7 != 0) {
          FUN_0040ca30(lVar15);
          FUN_0040d590(lVar7,0);
          if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
            goto LAB_00404e60;
          }
          lVar8 = FUN_0040d5d0(lVar7,0,0);
          lVar15 = lVar7;
          if (lVar8 == 1) goto LAB_00404e60;
          goto LAB_00404e54;
        }
        uVar9 = 0x35a;
      }
      FUN_004806c0(0x10,0x107,0x10,"external/openssl/crypto/ec/ec_asn1.c",uVar9);
    }
  }
LAB_00404e54:
  FUN_0040ca30(lVar15);
  lVar7 = 0;
LAB_00404e60:
  FUN_0040ca30(lVar6);
  FUN_003eb520(lVar14);
  FUN_003eb520(lVar3);
  FUN_003eb520(lVar4);
  FUN_0040caf0(lVar18);
  FUN_003ed280(lVar19);
  return lVar7;
}


