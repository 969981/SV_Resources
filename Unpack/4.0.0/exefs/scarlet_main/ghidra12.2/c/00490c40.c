/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00490c40; name: FUN_00490c40
 */


bool FUN_00490c40(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    bVar1 = true;
  }
  else if ((*param_1 == 1) && (iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 2)), iVar2 != 0)) {
    FUN_0047e4d0(*(undefined8 *)(param_1 + 2));
    iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 2));
    uVar5 = *(undefined8 *)(param_1 + 2);
    if (iVar2 < 2) {
      lVar12 = 0;
      lVar8 = 0;
    }
    else {
      lVar12 = 0;
      iVar2 = 0;
      lVar11 = 0;
      do {
        piVar6 = (int *)FUN_0047e450(uVar5,iVar2);
        iVar4 = iVar2 + 1;
        piVar7 = (int *)FUN_0047e450(*(undefined8 *)(param_1 + 2),iVar4);
        if (piVar6 == (int *)0x0) goto LAB_00490f38;
        if (*piVar6 == 1) {
          uVar5 = **(undefined8 **)(piVar6 + 2);
          uVar10 = (*(undefined8 **)(piVar6 + 2))[1];
        }
        else {
          if (*piVar6 != 0) goto LAB_00490f38;
          uVar5 = *(undefined8 *)(piVar6 + 2);
          uVar10 = uVar5;
        }
        if (piVar7 == (int *)0x0) goto LAB_00490f38;
        if (*piVar7 == 1) {
          uVar14 = **(undefined8 **)(piVar7 + 2);
          uVar13 = (*(undefined8 **)(piVar7 + 2))[1];
        }
        else {
          if (*piVar7 != 0) goto LAB_00490f38;
          uVar13 = *(undefined8 *)(piVar7 + 2);
          uVar14 = uVar13;
        }
        iVar3 = FUN_003e0620(uVar5,uVar14);
        if (((0 < iVar3) || (iVar3 = FUN_003e0620(uVar5,uVar10), 0 < iVar3)) ||
           (iVar3 = FUN_003e0620(uVar14,uVar13), 0 < iVar3)) goto LAB_00490f38;
        iVar3 = FUN_003e0620(uVar10,uVar14);
        if (-1 < iVar3) {
          uVar5 = 0x74;
          uVar10 = 0x1a2;
LAB_00490f34:
          FUN_004806c0(0x22,0xa1,uVar5,"external/openssl/crypto/x509v3/v3_asid.c",uVar10);
          goto LAB_00490f38;
        }
        if (((lVar12 == 0) && (lVar12 = FUN_003eb5b0(), lVar12 == 0)) ||
           ((lVar8 = FUN_003e1230(uVar10,lVar12), lVar8 == 0 ||
            (iVar3 = FUN_003f2e00(lVar12,1), iVar3 == 0)))) {
          uVar5 = 0x41;
          uVar10 = 0x1ad;
          goto LAB_00490f34;
        }
        lVar8 = FUN_003e10e0(lVar12,lVar11);
        if (lVar8 == 0) {
          uVar5 = 0x41;
          uVar10 = 0x1b5;
          goto LAB_00490f34;
        }
        iVar3 = FUN_003e0620(lVar8,uVar14);
        lVar11 = lVar8;
        if (iVar3 == 0) {
          if (*piVar6 == 1) {
            thunk_FUN_003df2e0(*(undefined8 *)(*(long *)(piVar6 + 2) + 8));
            *(undefined8 *)(*(long *)(piVar6 + 2) + 8) = uVar13;
          }
          else if (*piVar6 == 0) {
            puVar9 = (undefined8 *)
                     FUN_00452c30(0x10,"external/openssl/crypto/x509v3/v3_asid.c",0x1c0);
            if (puVar9 == (undefined8 *)0x0) {
              uVar5 = 0x41;
              uVar10 = 0x1c2;
              goto LAB_00490f34;
            }
            *puVar9 = uVar5;
            puVar9[1] = uVar13;
            *piVar6 = 1;
            *(undefined8 **)(piVar6 + 2) = puVar9;
          }
          if (*piVar7 == 1) {
            piVar6 = *(int **)(piVar7 + 2);
LAB_00490e2c:
            piVar6[2] = 0;
            piVar6[3] = 0;
          }
          else {
            piVar6 = piVar7;
            if (*piVar7 == 0) goto LAB_00490e2c;
          }
          FUN_003e4550(piVar7,PTR_DAT_047cd618);
          FUN_0047e170(*(undefined8 *)(param_1 + 2),iVar4);
        }
        else {
          iVar2 = iVar4;
        }
        iVar4 = FUN_0047e430(*(undefined8 *)(param_1 + 2));
        uVar5 = *(undefined8 *)(param_1 + 2);
      } while (iVar2 < iVar4 + -1);
    }
    iVar2 = FUN_0047e430();
    piVar6 = (int *)FUN_0047e450(*(undefined8 *)(param_1 + 2),iVar2 + -1);
    lVar11 = lVar8;
    if (((piVar6 == (int *)0x0) || (*piVar6 != 1)) ||
       (iVar2 = FUN_003e0620(**(undefined8 **)(piVar6 + 2),(*(undefined8 **)(piVar6 + 2))[1]),
       iVar2 < 1)) {
      iVar2 = FUN_00490a20(param_1);
      bVar1 = iVar2 != 0;
    }
    else {
LAB_00490f38:
      bVar1 = false;
    }
    thunk_FUN_003df2e0(lVar11);
    FUN_003eb520(lVar12);
  }
  else {
    FUN_004806c0(0x22,0xa1,0x74,"external/openssl/crypto/x509v3/v3_asid.c",0x179);
    bVar1 = false;
  }
  return bVar1;
}


