/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00456520; name: FUN_00456520
 */


undefined8 FUN_00456520(long param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar5 = *(ulong *)(param_1 + 0x30) + param_3;
  if (0x2000000000000000 < uVar5) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x30),param_3)) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x30) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x174);
  if (uVar3 != 0) {
    if (param_3 == 0) {
LAB_00456590:
      *(uint *)(param_1 + 0x174) = uVar3;
      return 0;
    }
    pbVar1 = param_2;
    do {
      uVar5 = (ulong)uVar3;
      param_2 = pbVar1 + 1;
      param_3 = param_3 - 1;
      uVar3 = uVar3 + 1 & 0xf;
      *(byte *)(param_1 + 0x40 + uVar5) = *(byte *)(param_1 + 0x40 + uVar5) ^ *pbVar1;
      if (param_3 == 0) break;
      pbVar1 = param_2;
    } while (uVar3 != 0);
    if (uVar3 != 0) goto LAB_00456590;
    uVar6 = (ulong)*(byte *)(param_1 + 0x4f);
    lVar2 = param_1 + (uVar6 & 0xf) * 0x10;
    uVar5 = *(ulong *)(lVar2 + 0x60);
    uVar8 = *(ulong *)(lVar2 + 0x68);
    lVar2 = 0;
    while( true ) {
      lVar10 = param_1 + (uVar6 & 0xfffffffffffffff0);
      uVar9 = *(ulong *)(&DAT_03cfa528 + (uVar8 & 0xf) * 8) ^ uVar5 >> 4 ^ *(ulong *)(lVar10 + 0x60)
      ;
      uVar8 = *(ulong *)(lVar10 + 0x68) ^ (uVar8 >> 4 | uVar5 << 0x3c);
      if (lVar2 == -0xf) break;
      uVar6 = (ulong)*(byte *)(param_1 + 0x4e + lVar2);
      lVar10 = param_1 + (uVar6 & 0xf) * 0x10;
      uVar5 = *(ulong *)(&DAT_03cfa528 + (uVar8 & 0xf) * 8) ^ uVar9 >> 4 ^ *(ulong *)(lVar10 + 0x60)
      ;
      uVar8 = *(ulong *)(lVar10 + 0x68) ^ (uVar8 >> 4 | uVar9 << 0x3c);
      lVar2 = lVar2 + -1;
    }
    uVar5 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 0x40) = uVar5 >> 0x20 | uVar5 << 0x20;
    *(ulong *)(param_1 + 0x48) = uVar8 >> 0x20 | uVar8 << 0x20;
  }
  uVar5 = param_3 & 0xfffffffffffffff0;
  if (uVar5 != 0) {
    uVar6 = (ulong)*(byte *)(param_1 + 0x4f);
    uVar8 = uVar5;
    pbVar1 = param_2;
    do {
      uVar11 = (ulong)((uint)pbVar1[0xf] ^ (uint)uVar6);
      lVar2 = param_1 + (uVar11 & 0xf) * 0x10;
      lVar10 = 0;
      uVar6 = *(ulong *)(lVar2 + 0x60);
      uVar9 = *(ulong *)(lVar2 + 0x68);
      while( true ) {
        lVar2 = param_1 + (uVar11 & 0xfffffffffffffff0);
        uVar12 = *(ulong *)(&DAT_03cfa528 + (uVar9 & 0xf) * 8) ^ uVar6 >> 4 ^
                 *(ulong *)(lVar2 + 0x60);
        uVar9 = *(ulong *)(lVar2 + 0x68) ^ (uVar9 >> 4 | uVar6 << 0x3c);
        if (lVar10 == -0xf) break;
        uVar11 = (ulong)(pbVar1[lVar10 + 0xe] ^ *(byte *)(param_1 + 0x4e + lVar10));
        lVar2 = param_1 + (uVar11 & 0xf) * 0x10;
        lVar10 = lVar10 + -1;
        uVar6 = *(ulong *)(&DAT_03cfa528 + (uVar9 & 0xf) * 8) ^ uVar12 >> 4 ^
                *(ulong *)(lVar2 + 0x60);
        uVar9 = *(ulong *)(lVar2 + 0x68) ^ (uVar9 >> 4 | uVar12 << 0x3c);
      }
      uVar6 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      pbVar1 = pbVar1 + 0x10;
      *(ulong *)(param_1 + 0x40) = uVar6 >> 0x20 | uVar6 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar8 = uVar8 - 0x10;
      uVar6 = (uVar9 & 0xffffffff) >> 0x18;
    } while (uVar8 != 0);
    param_2 = param_2 + uVar5;
    param_3 = param_3 & 0xf;
  }
  if (param_3 != 0) {
    pbVar1 = (byte *)(param_1 + 0x40);
    if ((param_3 < 0x40) || ((pbVar1 < param_2 + param_3 && (param_2 < pbVar1 + param_3)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3 & 0xffffffffffffffc0;
      puVar7 = (undefined8 *)(param_1 + 0x70);
      pbVar4 = param_2 + 0x20;
      uVar8 = uVar5;
      do {
        uVar14 = *(undefined8 *)(pbVar4 + -0x18);
        uVar13 = *(undefined8 *)(pbVar4 + -0x20);
        uVar16 = *(undefined8 *)(pbVar4 + -8);
        uVar15 = *(undefined8 *)(pbVar4 + -0x10);
        uVar8 = uVar8 - 0x40;
        uVar22 = puVar7[-5];
        uVar21 = puVar7[-6];
        uVar24 = puVar7[-3];
        uVar23 = puVar7[-4];
        uVar18 = *(undefined8 *)(pbVar4 + 8);
        uVar17 = *(undefined8 *)pbVar4;
        uVar20 = *(undefined8 *)(pbVar4 + 0x18);
        uVar19 = *(undefined8 *)(pbVar4 + 0x10);
        puVar7[-5] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar14 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar14 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar14 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar14)))))));
        puVar7[-6] = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                 (byte)((ulong)uVar13 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                          (byte)((ulong)uVar13 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                   (byte)((ulong)uVar13 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar21 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar13 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar13)))))));
        puVar7[-3] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                              CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                 (byte)((ulong)uVar16 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                          (byte)((ulong)uVar16 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                   (byte)((ulong)uVar16 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar24 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar16)))))));
        puVar7[-4] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                 (byte)((ulong)uVar15 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                          (byte)((ulong)uVar15 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                   (byte)((ulong)uVar15 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar23 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar15 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar15)))))));
        uVar14 = puVar7[-1];
        uVar13 = puVar7[-2];
        uVar16 = puVar7[1];
        uVar15 = *puVar7;
        puVar7[-1] = CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar14 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar14 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar14 ^ (byte)uVar18)))))));
        puVar7[-2] = CONCAT17((byte)((ulong)uVar13 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)((ulong)uVar13 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar13 >> 0x28) ^
                                                 (byte)((ulong)uVar17 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar13 >> 0x20) ^
                                                          (byte)((ulong)uVar17 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar13 >> 0x18) ^
                                                                   (byte)((ulong)uVar17 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar13 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar13 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar13 ^ (byte)uVar17)))))));
        puVar7[1] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                             CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                               (byte)((ulong)uVar20 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                        (byte)((ulong)uVar20 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                 (byte)((ulong)uVar20 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar16 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar20)))))));
        *puVar7 = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                           CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                             (byte)((ulong)uVar19 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                      (byte)((ulong)uVar19 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                               (byte)((ulong)uVar19 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar15 >> 0x10
                                                                              ) ^ (byte)((ulong)
                                                  uVar19 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar15 >> 8) ^
                                                           (byte)((ulong)uVar19 >> 8),
                                                           (byte)uVar15 ^ (byte)uVar19)))))));
        puVar7 = puVar7 + 8;
        pbVar4 = pbVar4 + 0x40;
      } while (uVar8 != 0);
      if (param_3 == uVar5) goto LAB_004567d0;
    }
    uVar8 = uVar5;
    if ((param_3 & 1) != 0) {
      pbVar1[uVar5] = pbVar1[uVar5] ^ param_2[uVar5];
      uVar8 = uVar5 | 1;
    }
    if (param_3 != (uVar5 | 1)) {
      lVar2 = param_3 - uVar8;
      pbVar1 = (byte *)(param_1 + uVar8 + 1 + 0x40);
      pbVar4 = param_2 + uVar8 + 1;
      do {
        lVar2 = lVar2 + -2;
        pbVar1[-1] = pbVar1[-1] ^ pbVar4[-1];
        *pbVar1 = *pbVar1 ^ *pbVar4;
        pbVar1 = pbVar1 + 2;
        pbVar4 = pbVar4 + 2;
      } while (lVar2 != 0);
    }
  }
LAB_004567d0:
  *(int *)(param_1 + 0x174) = (int)param_3;
  return 0;
}


