/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00413440; name: FUN_00413440
 */


long FUN_00413440(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  
  iVar2 = FUN_003ec640(param_3);
  lVar6 = param_1;
  if ((iVar2 == 0) || (iVar2 = FUN_003ec570(param_3,1), iVar2 != 0)) {
    iVar2 = FUN_003ec570(param_3,2);
    if (iVar2 == 0) {
      FUN_004806c0(3,0x79,0x70,"external/openssl/crypto/bn/bn_sqrt.c",0x29);
      return 0;
    }
    if (param_1 == 0) {
      lVar6 = FUN_003eb5b0();
      lVar13 = 0;
      if (lVar6 == 0) goto LAB_00413868;
    }
    uVar3 = FUN_003ec150(param_2,0);
    iVar2 = FUN_003eb9f0(lVar6,uVar3);
    goto joined_r0x004134c4;
  }
  iVar2 = FUN_003eb480(param_2);
  if ((iVar2 != 0) || (iVar2 = FUN_003ec5b0(param_2), iVar2 != 0)) {
    if (param_1 == 0) {
      lVar6 = FUN_003eb5b0();
      lVar13 = 0;
      if (lVar6 == 0) goto LAB_00413868;
    }
    uVar3 = FUN_003ec5b0(param_2);
    iVar2 = FUN_003eb9f0(lVar6,uVar3);
joined_r0x004134c4:
    if (iVar2 == 0) {
      if (lVar6 == param_1) {
        lVar6 = 0;
      }
      else {
        FUN_003eb520(lVar6);
        lVar6 = 0;
      }
    }
    return lVar6;
  }
  FUN_003ed410(param_4);
  uVar7 = FUN_003ed5c0(param_4);
  uVar8 = FUN_003ed5c0(param_4);
  lVar6 = FUN_003ed5c0(param_4);
  uVar9 = FUN_003ed5c0(param_4);
  uVar10 = FUN_003ed5c0(param_4);
  lVar11 = FUN_003ed5c0(param_4);
  if (lVar11 != 0) {
    lVar13 = param_1;
    if (((param_1 != 0) || (lVar13 = FUN_003eb5b0(), lVar13 != 0)) &&
       (iVar2 = FUN_003f0870(uVar7,param_2,param_3,param_4), iVar2 != 0)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar4 = FUN_003ec150(param_3,iVar2);
      } while (iVar4 == 0);
      if (iVar2 == 2) {
        iVar2 = FUN_003f0f00(uVar9,uVar7,param_3);
        if ((iVar2 != 0) && (iVar2 = FUN_003f23a0(lVar6,param_3,3), iVar2 != 0)) {
          *(undefined4 *)(lVar6 + 0x10) = 0;
          iVar2 = FUN_003fd370(uVar8,uVar9,lVar6,param_3,param_4);
          if (((((iVar2 != 0) && (iVar2 = FUN_003f0eb0(lVar11,uVar8,param_3,param_4), iVar2 != 0))
               && (iVar2 = FUN_003f0dc0(uVar9,uVar9,lVar11,param_3,param_4), iVar2 != 0)) &&
              ((iVar2 = FUN_003f2f20(uVar9,1), iVar2 != 0 &&
               (iVar2 = FUN_003f0dc0(uVar10,uVar7,uVar8,param_3,param_4), iVar2 != 0)))) &&
             (iVar2 = FUN_003f0dc0(uVar10,uVar10,uVar9,param_3,param_4), iVar2 != 0)) {
            lVar6 = FUN_003eb8f0(lVar13,uVar10);
joined_r0x00413b00:
            if (lVar6 != 0) {
LAB_00413644:
              iVar2 = FUN_003f0eb0(uVar10,lVar13,param_3,param_4);
              if (iVar2 != 0) {
                iVar2 = FUN_003ebf70(uVar10,uVar7);
                if (iVar2 == 0) goto LAB_0041387c;
                uVar7 = 0x6f;
                uVar8 = 0x159;
                goto LAB_00413864;
              }
            }
          }
        }
      }
      else if (iVar2 == 1) {
        iVar2 = FUN_003f23a0(lVar6,param_3,2);
        if (iVar2 != 0) {
          *(undefined4 *)(lVar6 + 0x10) = 0;
          iVar2 = FUN_003f2e00(lVar6,1);
          if ((iVar2 != 0) && (iVar2 = FUN_003fd370(lVar13,uVar7,lVar6,param_3,param_4), iVar2 != 0)
             ) goto LAB_00413644;
        }
      }
      else {
        lVar12 = FUN_003eb8f0(lVar6,param_3);
        if (lVar12 != 0) {
          uVar14 = 2;
          *(undefined4 *)(lVar6 + 0x10) = 0;
          do {
            if (uVar14 < 0x16) {
LAB_004137e4:
              iVar4 = FUN_003eb9f0(lVar11,uVar14);
              if (iVar4 == 0) goto LAB_00413868;
            }
            else {
              uVar3 = FUN_003eb2b0(param_3);
              iVar4 = FUN_003ff560(lVar11,uVar3,0,0);
              if (iVar4 == 0) goto LAB_00413868;
              iVar4 = FUN_003ebf10(lVar11,param_3);
              if (-1 < iVar4) {
                pcVar1 = (code *)PTR_FUN_047cd250;
                if (*(int *)(param_3 + 0x10) != 0) {
                  pcVar1 = (code *)PTR_FUN_047cd258;
                }
                iVar4 = (*pcVar1)(lVar11,lVar11,param_3);
                if (iVar4 == 0) goto LAB_00413868;
              }
              iVar4 = FUN_003eb480(lVar11);
              if (iVar4 != 0) goto LAB_004137e4;
            }
            iVar4 = FUN_004131e0(lVar11,lVar6,param_4);
            if (iVar4 < -1) goto LAB_00413868;
            if (iVar4 != 1) {
              if (iVar4 == -1) {
                iVar4 = FUN_003f23a0(lVar6,lVar6,iVar2);
                if ((iVar4 == 0) ||
                   (iVar4 = FUN_003fd370(lVar11,lVar11,lVar6,param_3,param_4), iVar4 == 0))
                goto LAB_00413868;
                iVar4 = FUN_003ec5b0(lVar11);
                if (iVar4 == 0) {
                  iVar4 = FUN_003f2040(uVar9,lVar6);
                  if (iVar4 == 0) goto LAB_00413868;
                  iVar4 = FUN_003eb480(uVar9);
                  if (iVar4 == 0) {
                    iVar4 = FUN_003fd370(uVar10,uVar7,uVar9,param_3,param_4);
                    if (iVar4 == 0) goto LAB_00413868;
                    iVar4 = FUN_003eb480(uVar10);
                    if (iVar4 != 0) goto LAB_00413974;
                  }
                  else {
                    iVar4 = FUN_003f0870(uVar9,uVar7,param_3,param_4);
                    if (iVar4 == 0) goto LAB_00413868;
                    iVar4 = FUN_003eb480(uVar9);
                    if (iVar4 != 0) {
LAB_00413974:
                      FUN_003eb9f0(lVar13,0);
                      goto LAB_0041387c;
                    }
                    iVar4 = FUN_003eb9f0(uVar10,1);
                    if (iVar4 == 0) goto LAB_00413868;
                  }
                  iVar4 = FUN_003f0eb0(uVar8,uVar10,param_3,param_4);
                  if ((iVar4 == 0) ||
                     (iVar4 = FUN_003f0dc0(uVar8,uVar8,uVar7,param_3,param_4), iVar4 == 0))
                  goto LAB_00413868;
                  iVar4 = FUN_003f0dc0(uVar10,uVar10,uVar7,param_3,param_4);
                  goto joined_r0x004139d0;
                }
                uVar8 = 0xe3;
              }
              else {
                if (iVar4 != 0) break;
                uVar8 = 200;
              }
              uVar7 = 0x70;
              goto LAB_00413864;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x52);
          uVar7 = 0x71;
          uVar8 = 0xd4;
LAB_00413864:
          FUN_004806c0(3,0x79,uVar7,"external/openssl/crypto/bn/bn_sqrt.c",uVar8);
        }
      }
    }
LAB_00413868:
    if (lVar13 != param_1) {
      FUN_003eb490(lVar13);
    }
  }
  lVar13 = 0;
LAB_0041387c:
  FUN_003ed530(param_4);
  return lVar13;
joined_r0x004139d0:
  if (iVar4 == 0) goto LAB_00413868;
  iVar4 = FUN_003ec5b0(uVar8);
  if (iVar4 != 0) {
    lVar6 = FUN_003eb8f0(lVar13,uVar10);
    goto joined_r0x00413b00;
  }
  iVar4 = FUN_003f0eb0(uVar9,uVar8,param_3,param_4);
  if (iVar4 == 0) goto LAB_00413868;
  iVar4 = 2;
  iVar15 = iVar2;
  while( true ) {
    iVar15 = iVar15 + -1;
    iVar5 = FUN_003ec5b0(uVar9);
    if (iVar5 != 0) break;
    if (iVar2 == iVar4) {
      uVar7 = 0x6f;
      uVar8 = 0x137;
      goto LAB_00413864;
    }
    iVar5 = FUN_003f0dc0(uVar9,uVar9,uVar9,param_3,param_4);
    iVar4 = iVar4 + 1;
    if (iVar5 == 0) goto LAB_00413868;
  }
  lVar6 = FUN_003eb8f0(uVar9,lVar11);
  if (lVar6 == 0) goto LAB_00413868;
  if (0 < iVar2 - iVar4) {
    do {
      iVar2 = FUN_003f0eb0(uVar9,uVar9,param_3,param_4);
      if (iVar2 == 0) goto LAB_00413868;
      iVar15 = iVar15 + -1;
    } while (1 < iVar15);
  }
  iVar2 = FUN_003f0dc0(lVar11,uVar9,uVar9,param_3,param_4);
  if ((iVar2 == 0) || (iVar2 = FUN_003f0dc0(uVar10,uVar10,uVar9,param_3,param_4), iVar2 == 0))
  goto LAB_00413868;
  iVar2 = iVar4 + -1;
  iVar4 = FUN_003f0dc0(uVar8,uVar8,lVar11,param_3,param_4);
  goto joined_r0x004139d0;
}


