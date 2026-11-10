/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fd860; name: FUN_003fd860
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_003fd860(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  ulong uVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint local_164;
  long local_160 [32];
  
  iVar1 = FUN_003eb510(param_3,4);
  if (((iVar1 != 0) || (iVar1 = FUN_003eb510(param_2,4), iVar1 != 0)) ||
     (iVar1 = FUN_003eb510(param_4,4), iVar1 != 0)) {
    uVar2 = FUN_003fe300(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  iVar1 = FUN_003ec640(param_4);
  if (iVar1 == 0) {
    FUN_004806c0(3,0x6d,0x66,"external/openssl/crypto/bn/bn_exp.c",0x13e);
    return 0;
  }
  iVar1 = FUN_003eb2b0(param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_003ec570(param_4,1);
    if (iVar1 == 0) {
      uVar2 = FUN_003eb9f0(param_1,1);
      return uVar2;
    }
    FUN_003eb9f0(param_1,0);
    return 1;
  }
  FUN_003ed410(param_5);
  uVar5 = FUN_003ed5c0(param_5);
  puVar6 = (undefined8 *)FUN_003ed5c0(param_5);
  lVar7 = FUN_003ed5c0(param_5);
  local_160[0] = lVar7;
  if (lVar7 == 0) {
    uVar2 = 0;
    lVar8 = 0;
joined_r0x003fda0c:
    if (param_6 != 0) goto LAB_003fde48;
  }
  else {
    lVar8 = param_6;
    if ((param_6 != 0) ||
       ((lVar8 = FUN_003ecc70(), lVar8 != 0 &&
        (iVar3 = FUN_003ecd40(lVar8,param_4,param_5), iVar3 != 0)))) {
      if ((((*(int *)(param_2 + 0x10) == 0) && (iVar3 = FUN_003ebf10(param_2,param_4), iVar3 < 0))
          || (iVar3 = FUN_003f0870(lVar7,param_2,param_4,param_5), param_2 = lVar7, iVar3 != 0)) &&
         (iVar3 = FUN_003ecc60(lVar7,param_2,lVar8,param_5), iVar3 != 0)) {
        if (iVar1 < 0x2a0) {
          if (0xef < iVar1) {
            local_164 = 5;
            goto LAB_003fda78;
          }
          if (0x4f < iVar1) {
            local_164 = 4;
            goto LAB_003fda78;
          }
          if (0x17 < iVar1) {
            local_164 = 3;
            goto LAB_003fda78;
          }
          local_164 = 1;
        }
        else {
          local_164 = 6;
LAB_003fda78:
          iVar3 = FUN_003ec7a0(uVar5,lVar7,lVar7,lVar8,param_5);
          if (iVar3 == 0) goto LAB_003fde38;
          plVar25 = local_160;
          lVar7 = (ulong)(uint)(1 << (ulong)(local_164 - 1 & 0x1f)) - 1;
          do {
            plVar25 = plVar25 + 1;
            lVar9 = FUN_003ed5c0(param_5);
            *plVar25 = lVar9;
            if ((lVar9 == 0) ||
               (iVar3 = FUN_003ec7a0(lVar9,plVar25[-1],uVar5,lVar8,param_5), iVar3 == 0))
            goto LAB_003fde38;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        uVar2 = *(uint *)(param_4 + 1);
        uVar23 = (ulong)uVar2;
        if (*(int *)(*param_4 + (long)(int)(uVar2 - 1) * 4) < 0) {
          lVar7 = FUN_003eb9a0(puVar6,uVar2);
          if (lVar7 != 0) {
            piVar10 = (int *)*param_4;
            piVar12 = (int *)*puVar6;
            *piVar12 = -*piVar10;
            if (1 < (int)uVar2) {
              uVar15 = uVar23 - 1;
              if ((uVar15 < 0x10) ||
                 ((piVar12 + 1 < piVar10 + uVar23 && (piVar10 + 1 < piVar12 + uVar23)))) {
                uVar14 = 1;
              }
              else {
                uVar16 = uVar15 & 0xfffffffffffffff0;
                uVar14 = uVar16 | 1;
                piVar17 = piVar12 + 9;
                piVar18 = piVar10 + 9;
                uVar19 = uVar16;
                do {
                  uVar26 = *(undefined8 *)(piVar18 + -6);
                  uVar5 = *(undefined8 *)(piVar18 + -8);
                  uVar28 = *(undefined8 *)(piVar18 + -2);
                  uVar27 = *(undefined8 *)(piVar18 + -4);
                  uVar19 = uVar19 - 0x10;
                  uVar30 = *(undefined8 *)(piVar18 + 2);
                  uVar29 = *(undefined8 *)piVar18;
                  uVar32 = *(undefined8 *)(piVar18 + 6);
                  uVar31 = *(undefined8 *)(piVar18 + 4);
                  *(ulong *)(piVar17 + -6) =
                       CONCAT17(~(byte)((ulong)uVar26 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar26 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar26 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar26 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar26 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar26
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar26 >> 8),~(byte)uVar26)))))));
                  *(ulong *)(piVar17 + -8) =
                       CONCAT17(~(byte)((ulong)uVar5 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar5 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar5 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar5 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar5 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar5 >>
                                                                                    0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar5 >> 8),~(byte)uVar5)))))));
                  *(ulong *)(piVar17 + -2) =
                       CONCAT17(~(byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar28
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar28 >> 8),~(byte)uVar28)))))));
                  *(ulong *)(piVar17 + -4) =
                       CONCAT17(~(byte)((ulong)uVar27 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar27 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar27 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar27 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar27
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar27 >> 8),~(byte)uVar27)))))));
                  *(ulong *)(piVar17 + 2) =
                       CONCAT17(~(byte)((ulong)uVar30 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar30 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar30 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar30 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar30 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar30
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar30 >> 8),~(byte)uVar30)))))));
                  *(ulong *)piVar17 =
                       CONCAT17(~(byte)((ulong)uVar29 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar29 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar29 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar29 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar29 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar29
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar29 >> 8),~(byte)uVar29)))))));
                  *(ulong *)(piVar17 + 6) =
                       CONCAT17(~(byte)((ulong)uVar32 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar32 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar32 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar32 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar32 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar32
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar32 >> 8),~(byte)uVar32)))))));
                  *(ulong *)(piVar17 + 4) =
                       CONCAT17(~(byte)((ulong)uVar31 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar31 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar31 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar31 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar31 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar31
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar31 >> 8),~(byte)uVar31)))))));
                  piVar17 = piVar17 + 0x10;
                  piVar18 = piVar18 + 0x10;
                } while (uVar19 != 0);
                if (uVar15 == uVar16) goto LAB_003fdc28;
              }
              uVar15 = uVar14;
              if ((uVar2 & 1) == 0) {
                uVar15 = uVar14 + 1;
                piVar12[uVar14] = ~piVar10[uVar14];
              }
              if (~uVar14 + uVar23 != 0) {
                lVar7 = uVar23 - uVar15;
                puVar11 = (uint *)(piVar10 + uVar15 + 1);
                puVar13 = (uint *)(piVar12 + uVar15 + 1);
                do {
                  puVar13[-1] = ~puVar11[-1];
                  lVar7 = lVar7 + -2;
                  *puVar13 = ~*puVar11;
                  puVar11 = puVar11 + 2;
                  puVar13 = puVar13 + 2;
                } while (lVar7 != 0);
              }
            }
LAB_003fdc28:
            *(uint *)(puVar6 + 1) = uVar2;
            goto LAB_003fdc2c;
          }
        }
        else {
          uVar5 = FUN_003eb200();
          iVar3 = FUN_003ecc60(puVar6,uVar5,lVar8,param_5);
          if (iVar3 != 0) {
LAB_003fdc2c:
            lVar7 = local_160[0];
            iVar1 = iVar1 + -1;
            if (local_164 < 2) {
              bVar20 = false;
              bVar21 = true;
              do {
                iVar3 = FUN_003ec150(param_3,iVar1);
                if (iVar3 == 0) {
                  if (bVar20) {
                    do {
                      iVar3 = FUN_003ec7a0(puVar6,puVar6,puVar6,lVar8,param_5);
                      if (iVar3 == 0) goto LAB_003fde38;
                      if (iVar1 == 0) goto LAB_003fde54;
                      iVar1 = iVar1 + -1;
                      iVar3 = FUN_003ec150(param_3,iVar1);
                    } while (iVar3 == 0);
                  }
                  else {
                    do {
                      if (iVar1 == 0) goto LAB_003fde54;
                      iVar1 = iVar1 + -1;
                      iVar3 = FUN_003ec150(param_3,iVar1);
                    } while (iVar3 == 0);
                  }
                }
                if (((!bVar21) &&
                    (iVar3 = FUN_003ec7a0(puVar6,puVar6,puVar6,lVar8,param_5), iVar3 == 0)) ||
                   (iVar3 = FUN_003ec7a0(puVar6,puVar6,lVar7,lVar8,param_5), iVar3 == 0))
                goto LAB_003fde38;
                bVar21 = false;
                iVar1 = iVar1 + -1;
                bVar20 = true;
              } while (-1 < iVar1);
            }
            else {
              bVar20 = false;
              bVar21 = true;
              do {
                iVar3 = FUN_003ec150(param_3,iVar1);
                if (iVar3 == 0) {
                  if (bVar20) {
                    do {
                      iVar3 = FUN_003ec7a0(puVar6,puVar6,puVar6,lVar8,param_5);
                      if (iVar3 == 0) goto LAB_003fde38;
                      if (iVar1 == 0) goto LAB_003fde54;
                      iVar1 = iVar1 + -1;
                      iVar3 = FUN_003ec150(param_3,iVar1);
                    } while (iVar3 == 0);
                  }
                  else {
                    do {
                      if (iVar1 == 0) goto LAB_003fde54;
                      iVar1 = iVar1 + -1;
                      iVar3 = FUN_003ec150(param_3,iVar1);
                    } while (iVar3 == 0);
                  }
                }
                uVar22 = 0;
                uVar24 = 1;
                uVar2 = 1;
                iVar3 = iVar1;
                do {
                  iVar3 = iVar3 + -1;
                  if (iVar3 < 0) break;
                  iVar4 = FUN_003ec150(param_3,iVar3);
                  if (iVar4 != 0) {
                    uVar2 = uVar2 << (ulong)(uVar24 - uVar22 & 0x1f) | 1;
                    uVar22 = uVar24;
                  }
                  uVar24 = uVar24 + 1;
                } while (local_164 != uVar24);
                if (!bVar21 && -1 < (int)uVar22) {
                  iVar3 = uVar22 + 1;
                  do {
                    iVar4 = FUN_003ec7a0(puVar6,puVar6,puVar6,lVar8,param_5);
                    if (iVar4 == 0) goto LAB_003fde38;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                iVar3 = FUN_003ec7a0(puVar6,puVar6,local_160[(int)uVar2 >> 1],lVar8,param_5);
                if (iVar3 == 0) goto LAB_003fde38;
                bVar21 = false;
                bVar20 = true;
                iVar1 = iVar1 + ~uVar22;
              } while (-1 < iVar1);
            }
LAB_003fde54:
            iVar1 = FUN_003ecb60(param_1,puVar6,lVar8,param_5);
            uVar2 = (uint)(iVar1 != 0);
            goto joined_r0x003fda0c;
          }
        }
      }
LAB_003fde38:
      uVar2 = 0;
      goto joined_r0x003fda0c;
    }
    uVar2 = 0;
  }
  FUN_003eccf0(lVar8);
LAB_003fde48:
  FUN_003ed530(param_5);
  return uVar2;
}


