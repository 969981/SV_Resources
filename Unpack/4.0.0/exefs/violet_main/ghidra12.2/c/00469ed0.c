/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00469ed0; name: FUN_00469ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00469ed0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  byte bVar19;
  long lVar18;
  byte bVar22;
  long lVar20;
  undefined8 uVar21;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  
  if ((param_2 == 0) && (param_2 = *(long *)(param_3 + 8), param_2 == 0)) {
    FUN_004806c0(3,0x65,0x6b,"external/openssl/crypto/bn/bn_blind.c",0xaf);
    return 0;
  }
  if (*(long *)(param_3 + 0x38) == 0) {
    uVar4 = FUN_003f0dc0(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4);
    return uVar4;
  }
  uVar2 = *(uint *)(param_2 + 8);
  uVar5 = (ulong)(int)uVar2;
  if (*(int *)((long)param_1 + 0xc) < (int)uVar2) goto LAB_0046a078;
  uVar3 = *(uint *)(param_1 + 1);
  lVar6 = (long)(int)uVar3;
  if (uVar2 != 0) {
    lVar8 = *param_1;
    uVar1 = uVar5;
    if (uVar5 < 2) {
      uVar1 = 1;
    }
    if (uVar1 < 0x10) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar1 & 0xfffffffffffffff0;
      puVar12 = (undefined8 *)(lVar8 + 0x20);
      uVar13 = uVar11;
      lVar10 = _DAT_03cab730;
      lVar14 = _UNK_03cab738;
      lVar15 = _DAT_03caa7b0;
      lVar16 = _UNK_03caa7b8;
      do {
        lVar18 = lVar15 - lVar6;
        lVar20 = lVar16 - lVar6;
        lVar23 = lVar10 - lVar6;
        lVar25 = lVar14 - lVar6;
        uVar13 = uVar13 - 0x10;
        bVar31 = (byte)(lVar23 >> 0x3f);
        lVar10 = lVar10 + 0x10;
        lVar14 = lVar14 + 0x10;
        lVar15 = lVar15 + 0x10;
        lVar16 = lVar16 + 0x10;
        uVar21 = puVar12[-3];
        uVar4 = puVar12[-4];
        uVar26 = puVar12[-1];
        uVar24 = puVar12[-2];
        bVar17 = (byte)(lVar18 >> 0x3f);
        bVar19 = (byte)(lVar20 >> 0x3f);
        bVar22 = (byte)(lVar25 >> 0x3f);
        bVar27 = (byte)(lVar18 + 4 >> 0x3f);
        bVar28 = (byte)(lVar20 + 4 >> 0x3f);
        bVar29 = (byte)(lVar23 + 4 >> 0x3f);
        bVar30 = (byte)(lVar25 + 4 >> 0x3f);
        puVar12[-3] = CONCAT17((byte)((ulong)uVar21 >> 0x38) & bVar22,
                               CONCAT16((byte)((ulong)uVar21 >> 0x30) & bVar22,
                                        CONCAT15((byte)((ulong)uVar21 >> 0x28) & bVar22,
                                                 CONCAT14((byte)((ulong)uVar21 >> 0x20) & bVar22,
                                                          CONCAT13((byte)((ulong)uVar21 >> 0x18) &
                                                                   bVar31,CONCAT12((byte)((ulong)
                                                  uVar21 >> 0x10) & bVar31,
                                                  CONCAT11((byte)((ulong)uVar21 >> 8) & bVar31,
                                                           (byte)uVar21 & bVar31)))))));
        puVar12[-4] = CONCAT17((byte)((ulong)uVar4 >> 0x38) & bVar19,
                               CONCAT16((byte)((ulong)uVar4 >> 0x30) & bVar19,
                                        CONCAT15((byte)((ulong)uVar4 >> 0x28) & bVar19,
                                                 CONCAT14((byte)((ulong)uVar4 >> 0x20) & bVar19,
                                                          CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                                   bVar17,CONCAT12((byte)((ulong)
                                                  uVar4 >> 0x10) & bVar17,
                                                  CONCAT11((byte)((ulong)uVar4 >> 8) & bVar17,
                                                           (byte)uVar4 & bVar17)))))));
        puVar12[-1] = CONCAT17((byte)((ulong)uVar26 >> 0x38) & bVar30,
                               CONCAT16((byte)((ulong)uVar26 >> 0x30) & bVar30,
                                        CONCAT15((byte)((ulong)uVar26 >> 0x28) & bVar30,
                                                 CONCAT14((byte)((ulong)uVar26 >> 0x20) & bVar30,
                                                          CONCAT13((byte)((ulong)uVar26 >> 0x18) &
                                                                   bVar29,CONCAT12((byte)((ulong)
                                                  uVar26 >> 0x10) & bVar29,
                                                  CONCAT11((byte)((ulong)uVar26 >> 8) & bVar29,
                                                           (byte)uVar26 & bVar29)))))));
        puVar12[-2] = CONCAT17((byte)((ulong)uVar24 >> 0x38) & bVar28,
                               CONCAT16((byte)((ulong)uVar24 >> 0x30) & bVar28,
                                        CONCAT15((byte)((ulong)uVar24 >> 0x28) & bVar28,
                                                 CONCAT14((byte)((ulong)uVar24 >> 0x20) & bVar28,
                                                          CONCAT13((byte)((ulong)uVar24 >> 0x18) &
                                                                   bVar27,CONCAT12((byte)((ulong)
                                                  uVar24 >> 0x10) & bVar27,
                                                  CONCAT11((byte)((ulong)uVar24 >> 8) & bVar27,
                                                           (byte)uVar24 & bVar27)))))));
        uVar21 = puVar12[1];
        uVar4 = *puVar12;
        uVar26 = puVar12[3];
        uVar24 = puVar12[2];
        bVar27 = (byte)(lVar18 + 0xc >> 0x3f);
        bVar28 = (byte)(lVar20 + 0xc >> 0x3f);
        bVar29 = (byte)(lVar23 + 0xc >> 0x3f);
        bVar30 = (byte)(lVar25 + 0xc >> 0x3f);
        bVar31 = (byte)(lVar18 + 8 >> 0x3f);
        bVar17 = (byte)(lVar20 + 8 >> 0x3f);
        bVar19 = (byte)(lVar23 + 8 >> 0x3f);
        bVar22 = (byte)(lVar25 + 8 >> 0x3f);
        puVar12[1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) & bVar22,
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) & bVar22,
                                       CONCAT15((byte)((ulong)uVar21 >> 0x28) & bVar22,
                                                CONCAT14((byte)((ulong)uVar21 >> 0x20) & bVar22,
                                                         CONCAT13((byte)((ulong)uVar21 >> 0x18) &
                                                                  bVar19,CONCAT12((byte)((ulong)
                                                  uVar21 >> 0x10) & bVar19,
                                                  CONCAT11((byte)((ulong)uVar21 >> 8) & bVar19,
                                                           (byte)uVar21 & bVar19)))))));
        *puVar12 = CONCAT17((byte)((ulong)uVar4 >> 0x38) & bVar17,
                            CONCAT16((byte)((ulong)uVar4 >> 0x30) & bVar17,
                                     CONCAT15((byte)((ulong)uVar4 >> 0x28) & bVar17,
                                              CONCAT14((byte)((ulong)uVar4 >> 0x20) & bVar17,
                                                       CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                                bVar31,CONCAT12((byte)((ulong)uVar4
                                                                                      >> 0x10) &
                                                                                bVar31,CONCAT11((
                                                  byte)((ulong)uVar4 >> 8) & bVar31,
                                                  (byte)uVar4 & bVar31)))))));
        puVar12[3] = CONCAT17((byte)((ulong)uVar26 >> 0x38) & bVar30,
                              CONCAT16((byte)((ulong)uVar26 >> 0x30) & bVar30,
                                       CONCAT15((byte)((ulong)uVar26 >> 0x28) & bVar30,
                                                CONCAT14((byte)((ulong)uVar26 >> 0x20) & bVar30,
                                                         CONCAT13((byte)((ulong)uVar26 >> 0x18) &
                                                                  bVar29,CONCAT12((byte)((ulong)
                                                  uVar26 >> 0x10) & bVar29,
                                                  CONCAT11((byte)((ulong)uVar26 >> 8) & bVar29,
                                                           (byte)uVar26 & bVar29)))))));
        puVar12[2] = CONCAT17((byte)((ulong)uVar24 >> 0x38) & bVar28,
                              CONCAT16((byte)((ulong)uVar24 >> 0x30) & bVar28,
                                       CONCAT15((byte)((ulong)uVar24 >> 0x28) & bVar28,
                                                CONCAT14((byte)((ulong)uVar24 >> 0x20) & bVar28,
                                                         CONCAT13((byte)((ulong)uVar24 >> 0x18) &
                                                                  bVar27,CONCAT12((byte)((ulong)
                                                  uVar24 >> 0x10) & bVar27,
                                                  CONCAT11((byte)((ulong)uVar24 >> 8) & bVar27,
                                                           (byte)uVar24 & bVar27)))))));
        puVar12 = puVar12 + 8;
      } while (uVar13 != 0);
      if (uVar1 == uVar11) goto LAB_0046a060;
    }
    lVar10 = uVar1 - uVar11;
    puVar9 = (uint *)(lVar8 + uVar11 * 4);
    lVar8 = uVar11 - lVar6;
    do {
      lVar10 = lVar10 + -1;
      *puVar9 = *puVar9 & (uint)(lVar8 >> 0x3f);
      puVar9 = puVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar10 != 0);
  }
LAB_0046a060:
  uVar7 = (uint)((long)(uVar5 - lVar6) >> 0x3f);
  *(uint *)(param_1 + 1) = uVar3 & uVar7 | uVar2 & (uVar7 ^ 0xffffffff);
LAB_0046a078:
  uVar4 = FUN_003ec770(param_1,param_1,param_2);
  return uVar4;
}


