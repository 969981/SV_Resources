/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040b360; name: FUN_0040b360
 */


bool FUN_0040b360(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  
  if (*(int *)param_3 == 0) {
    FUN_003eb9f0(param_1,0);
    return true;
  }
  FUN_003ed410(param_4);
  plVar7 = (long *)FUN_003ed5c0(param_4);
  plVar8 = (long *)FUN_003ed5c0(param_4);
  plVar9 = (long *)FUN_003ed5c0(param_4);
  if ((plVar9 != (long *)0x0) && (iVar5 = FUN_00409c50(plVar7,param_2,param_3), iVar5 != 0)) {
    iVar5 = FUN_003eb480(plVar7);
    if (iVar5 != 0) {
      FUN_003eb9f0(param_1,0);
      bVar4 = true;
      goto LAB_0040b8e8;
    }
    if ((*param_3 & 1) == 0) {
      plVar10 = (long *)FUN_003ed5c0(param_4);
      plVar11 = (long *)FUN_003ed5c0(param_4);
      plVar12 = (long *)FUN_003ed5c0(param_4);
      if (plVar12 != (long *)0x0) {
        uVar20 = 0;
        do {
          iVar5 = FUN_003ff560(plVar10,*(int *)param_3,0,0);
          if ((iVar5 == 0) || (iVar5 = FUN_00409c50(plVar10,plVar10,param_3), iVar5 == 0))
          goto LAB_0040b8e4;
          FUN_003eb9f0(plVar8,0);
          lVar13 = FUN_003eb8f0(plVar9,plVar10);
          if (lVar13 == 0) goto LAB_0040b8e4;
          if (1 < *(int *)param_3) {
            iVar5 = 1;
            do {
              iVar6 = FUN_0040a3a0(plVar8,plVar8,param_3,param_4);
              if (((iVar6 == 0) ||
                  (iVar6 = FUN_0040a3a0(plVar11,plVar9,param_3,param_4), iVar6 == 0)) ||
                 (iVar6 = FUN_0040a120(plVar12,plVar11,plVar7,param_3,param_4), iVar6 == 0))
              goto LAB_0040b8e4;
              plVar1 = plVar8;
              plVar2 = plVar12;
              if ((int)plVar12[1] <= (int)plVar8[1]) {
                plVar1 = plVar12;
                plVar2 = plVar8;
              }
              lVar13 = FUN_003eb9a0(plVar8,(int)plVar2[1]);
              if (lVar13 == 0) goto LAB_0040b8e4;
              if ((int)plVar1[1] < 1) {
                uVar16 = 0;
                iVar6 = (int)plVar2[1];
                if (0 < iVar6) goto LAB_0040b594;
              }
              else {
                lVar13 = *plVar2;
                uVar16 = 0;
                lVar17 = *plVar1;
                lVar18 = *plVar8;
                do {
                  lVar19 = uVar16 * 4;
                  uVar16 = uVar16 + 1;
                  *(uint *)(lVar18 + lVar19) =
                       *(uint *)(lVar17 + lVar19) ^ *(uint *)(lVar13 + lVar19);
                } while ((long)uVar16 < (long)(int)plVar1[1]);
                iVar6 = (int)plVar2[1];
                if ((int)uVar16 < iVar6) {
LAB_0040b594:
                  lVar13 = *plVar2;
                  uVar16 = uVar16 & 0xffffffff;
                  lVar17 = *plVar8;
                  do {
                    lVar18 = uVar16 * 4;
                    uVar16 = uVar16 + 1;
                    *(undefined4 *)(lVar17 + lVar18) = *(undefined4 *)(lVar13 + lVar18);
                    iVar6 = (int)plVar2[1];
                  } while ((int)uVar16 < iVar6);
                }
              }
              *(int *)(plVar8 + 1) = iVar6;
              FUN_003ebc30(plVar8);
              plVar1 = plVar10;
              if ((int)plVar10[1] <= (int)plVar11[1]) {
                plVar1 = plVar11;
              }
              plVar2 = plVar11;
              if ((int)plVar10[1] <= (int)plVar11[1]) {
                plVar2 = plVar10;
              }
              lVar13 = FUN_003eb9a0(plVar9,(int)plVar1[1]);
              if (lVar13 == 0) goto LAB_0040b8e4;
              if ((int)plVar2[1] < 1) {
                uVar16 = 0;
                iVar6 = (int)plVar1[1];
                if (0 < iVar6) goto LAB_0040b658;
              }
              else {
                lVar13 = *plVar1;
                uVar16 = 0;
                lVar17 = *plVar2;
                lVar18 = *plVar9;
                do {
                  lVar19 = uVar16 * 4;
                  uVar16 = uVar16 + 1;
                  *(uint *)(lVar18 + lVar19) =
                       *(uint *)(lVar17 + lVar19) ^ *(uint *)(lVar13 + lVar19);
                } while ((long)uVar16 < (long)(int)plVar2[1]);
                iVar6 = (int)plVar1[1];
                if ((int)uVar16 < iVar6) {
LAB_0040b658:
                  lVar13 = *plVar1;
                  uVar16 = uVar16 & 0xffffffff;
                  lVar17 = *plVar9;
                  do {
                    lVar18 = uVar16 * 4;
                    uVar16 = uVar16 + 1;
                    *(undefined4 *)(lVar17 + lVar18) = *(undefined4 *)(lVar13 + lVar18);
                    iVar6 = (int)plVar1[1];
                  } while ((int)uVar16 < iVar6);
                }
              }
              *(int *)(plVar9 + 1) = iVar6;
              FUN_003ebc30(plVar9);
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)param_3);
          }
          iVar5 = FUN_003eb480(plVar9);
        } while ((uVar20 < 0x31) && (uVar20 = uVar20 + 1, iVar5 != 0));
        iVar5 = FUN_003eb480(plVar9);
        if (iVar5 == 0) goto LAB_0040b6e4;
        uVar14 = 0x71;
        uVar15 = 0x420;
LAB_0040b8dc:
        FUN_004806c0(3,0x87,uVar14,"external/openssl/crypto/bn/bn_gf2m.c",uVar15);
      }
    }
    else {
      lVar13 = FUN_003eb8f0(plVar8,plVar7);
      if (lVar13 != 0) {
        if (2 < *(int *)param_3) {
          iVar5 = 1;
          do {
            iVar6 = FUN_0040a3a0(plVar8,plVar8,param_3,param_4);
            if ((iVar6 == 0) || (iVar6 = FUN_0040a3a0(plVar8,plVar8,param_3,param_4), iVar6 == 0))
            goto LAB_0040b8e4;
            plVar10 = plVar7;
            if ((int)plVar7[1] <= (int)plVar8[1]) {
              plVar10 = plVar8;
            }
            plVar11 = plVar8;
            if ((int)plVar7[1] <= (int)plVar8[1]) {
              plVar11 = plVar7;
            }
            lVar13 = FUN_003eb9a0(plVar8,(int)plVar10[1]);
            if (lVar13 == 0) goto LAB_0040b8e4;
            if ((int)plVar11[1] < 1) {
              uVar16 = 0;
              iVar6 = (int)plVar10[1];
              if (0 < iVar6) goto LAB_0040b848;
            }
            else {
              lVar13 = *plVar10;
              uVar16 = 0;
              lVar17 = *plVar11;
              lVar18 = *plVar8;
              do {
                lVar19 = uVar16 * 4;
                uVar16 = uVar16 + 1;
                *(uint *)(lVar18 + lVar19) = *(uint *)(lVar17 + lVar19) ^ *(uint *)(lVar13 + lVar19)
                ;
              } while ((long)uVar16 < (long)(int)plVar11[1]);
              iVar6 = (int)plVar10[1];
              if ((int)uVar16 < iVar6) {
LAB_0040b848:
                lVar13 = *plVar10;
                uVar16 = uVar16 & 0xffffffff;
                lVar17 = *plVar8;
                do {
                  lVar18 = uVar16 * 4;
                  uVar16 = uVar16 + 1;
                  *(undefined4 *)(lVar17 + lVar18) = *(undefined4 *)(lVar13 + lVar18);
                  iVar6 = (int)plVar10[1];
                } while ((int)uVar16 < iVar6);
              }
            }
            *(int *)(plVar8 + 1) = iVar6;
            FUN_003ebc30(plVar8);
            iVar3 = *(int *)param_3 + -1;
            iVar6 = *(int *)param_3;
            if (-1 < iVar3) {
              iVar6 = iVar3;
            }
            bVar4 = iVar5 < iVar6 >> 1;
            iVar5 = iVar5 + 1;
          } while (bVar4);
        }
LAB_0040b6e4:
        iVar5 = FUN_0040a3a0(plVar9,plVar8,param_3,param_4);
        if (iVar5 != 0) {
          plVar10 = plVar9;
          if ((int)plVar9[1] <= (int)plVar8[1]) {
            plVar10 = plVar8;
          }
          plVar11 = plVar8;
          if ((int)plVar9[1] <= (int)plVar8[1]) {
            plVar11 = plVar9;
          }
          lVar13 = FUN_003eb9a0(plVar9,(int)plVar10[1]);
          if (lVar13 != 0) {
            if ((int)plVar11[1] < 1) {
              uVar16 = 0;
            }
            else {
              lVar13 = *plVar10;
              uVar16 = 0;
              lVar17 = *plVar11;
              lVar18 = *plVar9;
              do {
                lVar19 = uVar16 * 4;
                uVar16 = uVar16 + 1;
                *(uint *)(lVar18 + lVar19) = *(uint *)(lVar17 + lVar19) ^ *(uint *)(lVar13 + lVar19)
                ;
              } while ((long)uVar16 < (long)(int)plVar11[1]);
            }
            iVar5 = (int)plVar10[1];
            if ((int)uVar16 < iVar5) {
              lVar13 = *plVar10;
              uVar16 = uVar16 & 0xffffffff;
              lVar17 = *plVar9;
              do {
                lVar18 = uVar16 * 4;
                uVar16 = uVar16 + 1;
                *(undefined4 *)(lVar17 + lVar18) = *(undefined4 *)(lVar13 + lVar18);
                iVar5 = (int)plVar10[1];
              } while ((int)uVar16 < iVar5);
            }
            *(int *)(plVar9 + 1) = iVar5;
            FUN_003ebc30(plVar9);
            iVar5 = FUN_003ebf10(plVar9,plVar7);
            if (iVar5 == 0) {
              lVar13 = FUN_003eb8f0(param_1,plVar8);
              bVar4 = lVar13 != 0;
              goto LAB_0040b8e8;
            }
            uVar14 = 0x74;
            uVar15 = 0x42a;
            goto LAB_0040b8dc;
          }
        }
      }
    }
  }
LAB_0040b8e4:
  bVar4 = false;
LAB_0040b8e8:
  FUN_003ed530(param_4);
  return bVar4;
}


