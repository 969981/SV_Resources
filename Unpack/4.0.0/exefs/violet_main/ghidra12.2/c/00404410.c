/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00404410; name: FUN_00404410
 */


undefined4 * FUN_00404410(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 local_58;
  
  local_58 = 0;
  puVar5 = param_2;
  if ((param_2 == (undefined4 *)0x0) &&
     (puVar5 = (undefined4 *)FUN_003e49a0(PTR_DAT_047cd288), puVar5 == (undefined4 *)0x0)) {
    FUN_004806c0(0x10,0x105,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x1cb);
    goto LAB_00404750;
  }
  *puVar5 = 1;
  if ((param_1 == 0) || (plVar18 = *(long **)(puVar5 + 2), plVar18 == (long *)0x0)) {
LAB_00404730:
    uVar14 = 0x1d6;
LAB_00404740:
    uVar16 = 0x10;
  }
  else {
    FUN_003dffa0(*plVar18);
    FUN_003e50e0(plVar18[1]);
    FUN_0040d100(param_1);
    iVar3 = FUN_0040d110();
    lVar6 = FUN_0045bc10();
    *plVar18 = lVar6;
    if (lVar6 == 0) {
      uVar14 = 0x109;
LAB_00404630:
      uVar16 = 0x9a;
      uVar15 = 8;
      goto LAB_00404720;
    }
    if (iVar3 != 0x197) {
      if (iVar3 != 0x196) {
        uVar16 = 0x9a;
        uVar15 = 0x83;
        uVar14 = 0x169;
        goto LAB_00404720;
      }
      lVar6 = FUN_003eb5b0();
      if (lVar6 == 0) {
        uVar14 = 0x41;
        uVar16 = 0x10f;
LAB_004047b8:
        FUN_004806c0(0x10,0x9a,uVar14,"external/openssl/crypto/ec/ec_asn1.c",uVar16);
      }
      else {
        iVar3 = FUN_0040d6e0(param_1,lVar6,0,0,0);
        if (iVar3 != 0) {
          lVar7 = FUN_003e10e0(lVar6,0);
          plVar18[1] = lVar7;
          if (lVar7 == 0) {
            uVar14 = 0xd;
            uVar16 = 0x11a;
            goto LAB_004047b8;
          }
          goto LAB_004044dc;
        }
        FUN_004806c0(0x10,0x9a,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x114);
      }
LAB_00404728:
      FUN_003eb520(lVar6);
      goto LAB_00404730;
    }
    puVar11 = (undefined4 *)FUN_003e49a0(&DAT_044a3b90);
    plVar18[1] = (long)puVar11;
    if (puVar11 == (undefined4 *)0x0) {
      uVar16 = 0x9a;
      uVar15 = 0x41;
      uVar14 = 300;
LAB_00404720:
      FUN_004806c0(0x10,uVar16,uVar15,"external/openssl/crypto/ec/ec_asn1.c",uVar14);
      lVar6 = 0;
      goto LAB_00404728;
    }
    uVar4 = FUN_0040d720(param_1);
    *puVar11 = uVar4;
    FUN_0040d100(param_1);
    iVar3 = FUN_0040d110();
    if (((iVar3 != 0x197) || (*(int *)(param_1 + 0x48) == 0)) || (*(int *)(param_1 + 0x4c) == 0)) {
LAB_004046bc:
      uVar16 = 0x9a;
      uVar14 = 0x135;
      uVar15 = 0x10;
      goto LAB_00404720;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      bVar17 = false;
      uVar14 = 0x2aa;
    }
    else {
      if ((*(int *)(param_1 + 0x54) == 0) || (*(int *)(param_1 + 0x58) != 0)) goto LAB_004046bc;
      uVar14 = 0x2ab;
      bVar17 = true;
    }
    lVar6 = FUN_0045bc10(uVar14);
    *(long *)(puVar11 + 2) = lVar6;
    if (lVar6 == 0) {
      uVar14 = 0x13a;
      goto LAB_00404630;
    }
    FUN_0040d100(param_1);
    iVar3 = FUN_0040d110();
    if (!bVar17) {
      if (((iVar3 != 0x197) || (*(int *)(param_1 + 0x48) == 0)) ||
         ((iVar3 = *(int *)(param_1 + 0x4c), iVar3 == 0 || (*(int *)(param_1 + 0x50) != 0)))) {
        uVar16 = 0xc2;
        uVar15 = 0x42;
        uVar14 = 0x34;
      }
      else {
        lVar6 = FUN_003e5030();
        *(long *)(puVar11 + 4) = lVar6;
        if (lVar6 == 0) {
          uVar16 = 0x9a;
          uVar15 = 0x41;
          uVar14 = 0x146;
        }
        else {
          iVar3 = FUN_003e1030(lVar6,iVar3);
          if (iVar3 != 0) {
            lVar6 = 0;
            goto LAB_004044dc;
          }
          uVar16 = 0x9a;
          uVar15 = 0xd;
          uVar14 = 0x14a;
        }
      }
      goto LAB_00404720;
    }
    if (((((iVar3 != 0x197) || (*(int *)(param_1 + 0x48) == 0)) ||
         (iVar3 = *(int *)(param_1 + 0x4c), iVar3 == 0)) ||
        ((iVar1 = *(int *)(param_1 + 0x50), iVar1 == 0 ||
         (iVar2 = *(int *)(param_1 + 0x54), iVar2 == 0)))) || (*(int *)(param_1 + 0x58) != 0)) {
      uVar16 = 0xc1;
      uVar15 = 0x42;
      uVar14 = 0x4a;
      goto LAB_00404720;
    }
    piVar12 = (int *)FUN_003e49a0(&DAT_044a3b58);
    *(int **)(puVar11 + 4) = piVar12;
    if (piVar12 == (int *)0x0) {
      uVar16 = 0x9a;
      uVar15 = 0x41;
      uVar14 = 0x155;
      goto LAB_00404720;
    }
    *piVar12 = iVar2;
    *(int *)(*(long *)(puVar11 + 4) + 4) = iVar1;
    lVar6 = 0;
    *(int *)(*(long *)(puVar11 + 4) + 8) = iVar3;
LAB_004044dc:
    FUN_003eb520(lVar6);
    plVar18 = *(long **)(puVar5 + 4);
    if (((plVar18 == (long *)0x0) || (*plVar18 == 0)) || (plVar18[1] == 0)) {
LAB_004049c8:
      uVar14 = 0x1dc;
      goto LAB_00404740;
    }
    lVar6 = FUN_003eb5b0();
    if ((lVar6 == 0) || (lVar7 = FUN_003eb5b0(), lVar7 == 0)) {
      FUN_004806c0(0x10,0x99,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x17f);
      FUN_00452f80(0,"external/openssl/crypto/ec/ec_asn1.c",0x1b7);
      FUN_00452f80(0,"external/openssl/crypto/ec/ec_asn1.c",0x1b8);
      FUN_003eb520(lVar6);
      lVar7 = 0;
LAB_004049c4:
      FUN_003eb520(lVar7);
      goto LAB_004049c8;
    }
    iVar3 = FUN_0040d6e0(param_1,0,lVar6,lVar7,0);
    if (iVar3 == 0) {
      FUN_004806c0(0x10,0x99,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x185);
      lVar8 = 0;
LAB_00404928:
      FUN_00452f80(lVar8,"external/openssl/crypto/ec/ec_asn1.c",0x1b7);
      lVar9 = 0;
LAB_004049b0:
      FUN_00452f80(lVar9,"external/openssl/crypto/ec/ec_asn1.c",0x1b8);
      FUN_003eb520(lVar6);
      goto LAB_004049c4;
    }
    iVar3 = FUN_0040d720(param_1);
    uVar19 = (long)iVar3 + 7U >> 3;
    lVar8 = FUN_00452c30(uVar19,"external/openssl/crypto/ec/ec_asn1.c",399);
    if ((lVar8 == 0) ||
       (lVar9 = FUN_00452c30(uVar19,"external/openssl/crypto/ec/ec_asn1.c",400), lVar9 == 0)) {
      FUN_004806c0(0x10,0x99,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x191);
      goto LAB_00404928;
    }
    iVar3 = FUN_003ebc80(lVar6,lVar8,uVar19 & 0xffffffff);
    if ((iVar3 < 0) || (iVar3 = FUN_003ebc80(lVar7,lVar9,uVar19 & 0xffffffff), iVar3 < 0)) {
      uVar16 = 0x196;
      uVar14 = 3;
LAB_00404990:
      FUN_004806c0(0x10,0x99,uVar14,"external/openssl/crypto/ec/ec_asn1.c",uVar16);
      FUN_00452f80(lVar8,"external/openssl/crypto/ec/ec_asn1.c",0x1b7);
      goto LAB_004049b0;
    }
    iVar3 = thunk_FUN_003df070(*plVar18,lVar8,uVar19 & 0xffffffff);
    if ((iVar3 == 0) ||
       (iVar3 = thunk_FUN_003df070(plVar18[1],lVar9,uVar19 & 0xffffffff), iVar3 == 0)) {
      uVar14 = 0xd;
      uVar16 = 0x19d;
      goto LAB_00404990;
    }
    lVar13 = *(long *)(param_1 + 0x30);
    lVar10 = plVar18[2];
    if (lVar13 == 0) {
      thunk_FUN_003df2e0();
      plVar18[2] = 0;
    }
    else {
      if (lVar10 == 0) {
        lVar10 = FUN_003e5060();
        plVar18[2] = lVar10;
        if (lVar10 == 0) {
          uVar14 = 0x41;
          uVar16 = 0x1a5;
          goto LAB_00404990;
        }
        lVar13 = *(long *)(param_1 + 0x30);
      }
      *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffff0 | 8;
      iVar3 = thunk_FUN_003df070(lVar10,lVar13,*(undefined4 *)(param_1 + 0x38));
      if (iVar3 == 0) {
        uVar14 = 0xd;
        uVar16 = 0x1ac;
        goto LAB_00404990;
      }
    }
    FUN_00452f80(lVar8,"external/openssl/crypto/ec/ec_asn1.c",0x1b7);
    FUN_00452f80(lVar9,"external/openssl/crypto/ec/ec_asn1.c",0x1b8);
    FUN_003eb520(lVar6);
    FUN_003eb520(lVar7);
    lVar6 = FUN_0040d4a0(param_1);
    if (lVar6 != 0) {
      uVar4 = FUN_0040d5c0(param_1);
      uVar19 = FUN_0040fa80(param_1,lVar6,uVar4,&local_58,0);
      if (uVar19 == 0) {
        uVar14 = 0x1ea;
      }
      else {
        lVar6 = *(long *)(puVar5 + 6);
        if (lVar6 == 0) {
          lVar6 = FUN_003e4ff0();
          *(long *)(puVar5 + 6) = lVar6;
          if (lVar6 == 0) {
            FUN_00452f80(local_58,"external/openssl/crypto/ec/ec_asn1.c",0x1ee);
            uVar16 = 0x41;
            uVar14 = 0x1ef;
            goto LAB_00404748;
          }
        }
        FUN_003df340(lVar6,local_58,uVar19 & 0xffffffff);
        lVar6 = FUN_0040d4f0(param_1);
        if (lVar6 != 0) {
          uVar14 = *(undefined8 *)(puVar5 + 8);
          lVar6 = FUN_003e10e0(lVar6,uVar14);
          *(long *)(puVar5 + 8) = lVar6;
          if (lVar6 == 0) {
            *(undefined8 *)(puVar5 + 8) = uVar14;
            uVar16 = 0xd;
            uVar14 = 0x1fd;
          }
          else {
            lVar6 = FUN_0040d560(param_1);
            if (lVar6 == 0) {
              return puVar5;
            }
            uVar14 = *(undefined8 *)(puVar5 + 10);
            lVar6 = FUN_003e10e0(lVar6,uVar14);
            *(long *)(puVar5 + 10) = lVar6;
            if (lVar6 != 0) {
              return puVar5;
            }
            *(undefined8 *)(puVar5 + 10) = uVar14;
            uVar16 = 0xd;
            uVar14 = 0x207;
          }
          goto LAB_00404748;
        }
        uVar14 = 0x1f7;
      }
      goto LAB_00404740;
    }
    uVar16 = 0x71;
    uVar14 = 0x1e2;
  }
LAB_00404748:
  FUN_004806c0(0x10,0x105,uVar16,"external/openssl/crypto/ec/ec_asn1.c",uVar14);
  if (param_2 != (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_00404750:
  FUN_003e4550(puVar5,PTR_DAT_047cd288);
  return (undefined4 *)0x0;
}


