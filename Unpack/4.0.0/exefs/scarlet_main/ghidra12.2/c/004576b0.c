/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004576b0; name: FUN_004576b0
 */


undefined8 FUN_004576b0(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar22 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar22) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x180);
  *(ulong *)(param_1 + 0x38) = uVar22;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar21 = *(uint *)(param_1 + 0x170);
    uVar22 = (ulong)uVar21;
    uVar20 = *(uint *)(param_1 + 0xc);
    uVar23 = uVar21 & 0xf;
    if ((uVar21 & 0xf) == 0) goto LAB_00457848;
    if (param_4 == 0) goto LAB_00457d50;
    uVar13 = param_4;
    pbVar7 = param_3;
    pbVar18 = param_2;
    do {
      uVar16 = (ulong)uVar23;
      param_2 = pbVar18 + 1;
      param_4 = uVar13 - 1;
      uVar23 = uVar23 + 1 & 0xf;
      bVar4 = *(byte *)(param_1 + 0x10 + uVar16) ^ *pbVar18;
      lVar6 = param_1 + uVar22;
      param_3 = pbVar7 + 1;
      *pbVar7 = bVar4;
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulong)uVar21;
      *(byte *)(lVar6 + 0x188) = bVar4;
      if (uVar23 == 0) break;
      bVar5 = uVar13 != 1;
      uVar13 = param_4;
      pbVar7 = param_3;
      pbVar18 = param_2;
    } while (bVar5);
    if (uVar23 != 0) goto LAB_00457d50;
    uVar13 = (ulong)*(byte *)(param_1 + 0x4f);
    lVar6 = param_1 + 0x188;
    lVar10 = param_1 + 0x196;
    do {
      uVar15 = (ulong)((uint)*(byte *)(lVar6 + 0xf) ^ (uint)uVar13);
      lVar8 = param_1 + (uVar15 & 0xf) * 0x10;
      lVar11 = 0;
      uVar13 = *(ulong *)(lVar8 + 0x60);
      uVar16 = *(ulong *)(lVar8 + 0x68);
      while( true ) {
        lVar8 = param_1 + (uVar15 & 0xfffffffffffffff0);
        uVar17 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar13 >> 4 ^
                 *(ulong *)(lVar8 + 0x60);
        uVar16 = *(ulong *)(lVar8 + 0x68) ^ (uVar16 >> 4 | uVar13 << 0x3c);
        if (lVar11 == -0xf) break;
        uVar15 = (ulong)(*(byte *)(lVar10 + lVar11) ^ *(byte *)(param_1 + 0x4e + lVar11));
        lVar8 = param_1 + (uVar15 & 0xf) * 0x10;
        lVar11 = lVar11 + -1;
        uVar13 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar17 >> 4 ^
                 *(ulong *)(lVar8 + 0x60);
        uVar16 = *(ulong *)(lVar8 + 0x68) ^ (uVar16 >> 4 | uVar17 << 0x3c);
      }
      uVar13 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      lVar6 = lVar6 + 0x10;
      uVar22 = uVar22 - 0x10;
      *(ulong *)(param_1 + 0x40) = uVar13 >> 0x20 | uVar13 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar16 >> 0x20 | uVar16 << 0x20;
      uVar13 = (uVar16 & 0xffffffff) >> 0x18;
      lVar10 = lVar10 + 0x10;
    } while (uVar22 != 0);
    uVar22 = 0;
    uVar21 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
    uVar23 = uVar21 >> 0x10 | uVar21 << 0x10;
  }
  else {
    if (param_4 == 0) {
      uVar16 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar6 = param_1 + (uVar16 & 0xf) * 0x10;
      uVar22 = *(ulong *)(lVar6 + 0x60);
      uVar13 = *(ulong *)(lVar6 + 0x68);
      lVar6 = 0;
      while( true ) {
        lVar10 = param_1 + (uVar16 & 0xfffffffffffffff0);
        uVar15 = *(ulong *)(&DAT_03cfa528 + (uVar13 & 0xf) * 8) ^ uVar22 >> 4 ^
                 *(ulong *)(lVar10 + 0x60);
        uVar13 = *(ulong *)(lVar10 + 0x68) ^ (uVar13 >> 4 | uVar22 << 0x3c);
        if (lVar6 == -0xf) break;
        uVar16 = (ulong)*(byte *)(param_1 + 0x4e + lVar6);
        lVar10 = param_1 + (uVar16 & 0xf) * 0x10;
        uVar22 = *(ulong *)(&DAT_03cfa528 + (uVar13 & 0xf) * 8) ^ uVar15 >> 4 ^
                 *(ulong *)(lVar10 + 0x60);
        uVar13 = *(ulong *)(lVar10 + 0x68) ^ (uVar13 >> 4 | uVar15 << 0x3c);
        lVar6 = lVar6 + -1;
      }
      uVar22 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_1 + 0x40) = uVar22 >> 0x20 | uVar22 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar13 >> 0x20 | uVar13 << 0x20;
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    uVar22 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar20 = *(uint *)(param_1 + 0xc);
LAB_00457848:
    if ((0xf < param_4) && ((int)uVar22 != 0)) {
      uVar13 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar6 = param_1 + 0x188;
      lVar10 = param_1 + 0x196;
      do {
        uVar15 = (ulong)((uint)*(byte *)(lVar6 + 0xf) ^ (uint)uVar13);
        lVar8 = param_1 + (uVar15 & 0xf) * 0x10;
        lVar11 = 0;
        uVar13 = *(ulong *)(lVar8 + 0x60);
        uVar16 = *(ulong *)(lVar8 + 0x68);
        while( true ) {
          lVar8 = param_1 + (uVar15 & 0xfffffffffffffff0);
          uVar17 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar13 >> 4 ^
                   *(ulong *)(lVar8 + 0x60);
          uVar16 = *(ulong *)(lVar8 + 0x68) ^ (uVar16 >> 4 | uVar13 << 0x3c);
          if (lVar11 == -0xf) break;
          uVar15 = (ulong)(*(byte *)(lVar10 + lVar11) ^ *(byte *)(param_1 + 0x4e + lVar11));
          lVar8 = param_1 + (uVar15 & 0xf) * 0x10;
          lVar11 = lVar11 + -1;
          uVar13 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar17 >> 4 ^
                   *(ulong *)(lVar8 + 0x60);
          uVar16 = *(ulong *)(lVar8 + 0x68) ^ (uVar16 >> 4 | uVar17 << 0x3c);
        }
        uVar13 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        lVar6 = lVar6 + 0x10;
        uVar22 = uVar22 - 0x10;
        *(ulong *)(param_1 + 0x40) = uVar13 >> 0x20 | uVar13 << 0x20;
        *(ulong *)(param_1 + 0x48) = uVar16 >> 0x20 | uVar16 << 0x20;
        uVar13 = (uVar16 & 0xffffffff) >> 0x18;
        lVar10 = lVar10 + 0x10;
      } while (uVar22 != 0);
      uVar22 = 0;
    }
    uVar21 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
    uVar23 = uVar21 >> 0x10 | uVar21 << 0x10;
  }
  if (0xbff < param_4) {
    do {
      (*param_5)(param_2,param_3,0xc0,uVar19,param_1);
      uVar13 = (ulong)*(byte *)(param_1 + 0x4f);
      uVar23 = uVar23 + 0xc0;
      uVar21 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
      lVar6 = 0xc00;
      pbVar7 = param_3;
      do {
        uVar15 = (ulong)((uint)pbVar7[0xf] ^ (uint)uVar13);
        lVar10 = param_1 + (uVar15 & 0xf) * 0x10;
        lVar8 = 0;
        uVar13 = *(ulong *)(lVar10 + 0x60);
        uVar16 = *(ulong *)(lVar10 + 0x68);
        while( true ) {
          lVar10 = param_1 + (uVar15 & 0xfffffffffffffff0);
          uVar17 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar13 >> 4 ^
                   *(ulong *)(lVar10 + 0x60);
          uVar16 = *(ulong *)(lVar10 + 0x68) ^ (uVar16 >> 4 | uVar13 << 0x3c);
          if (lVar8 == -0xf) break;
          uVar15 = (ulong)(pbVar7[lVar8 + 0xe] ^ *(byte *)(param_1 + 0x4e + lVar8));
          lVar10 = param_1 + (uVar15 & 0xf) * 0x10;
          lVar8 = lVar8 + -1;
          uVar13 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar17 >> 4 ^
                   *(ulong *)(lVar10 + 0x60);
          uVar16 = *(ulong *)(lVar10 + 0x68) ^ (uVar16 >> 4 | uVar17 << 0x3c);
        }
        uVar13 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        pbVar7 = pbVar7 + 0x10;
        *(ulong *)(param_1 + 0x40) = uVar13 >> 0x20 | uVar13 << 0x20;
        *(ulong *)(param_1 + 0x48) = uVar16 >> 0x20 | uVar16 << 0x20;
        lVar6 = lVar6 + -0x10;
        uVar13 = (uVar16 & 0xffffffff) >> 0x18;
      } while (lVar6 != 0);
      param_4 = param_4 - 0xc00;
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
    } while (0xbff < param_4);
  }
  uVar20 = (uint)uVar22;
  uVar13 = param_4 & 0xfffffffffffffff0;
  if (uVar13 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar19,param_1);
    uVar15 = (ulong)*(byte *)(param_1 + 0x4f);
    uVar23 = uVar23 + (int)(param_4 >> 4);
    param_2 = param_2 + uVar13;
    uVar21 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar16 = uVar13;
    pbVar7 = param_3;
    do {
      uVar12 = (ulong)((uint)pbVar7[0xf] ^ (uint)uVar15);
      lVar6 = param_1 + (uVar12 & 0xf) * 0x10;
      lVar10 = 0;
      uVar15 = *(ulong *)(lVar6 + 0x60);
      uVar17 = *(ulong *)(lVar6 + 0x68);
      while( true ) {
        lVar6 = param_1 + (uVar12 & 0xfffffffffffffff0);
        uVar14 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar15 >> 4 ^
                 *(ulong *)(lVar6 + 0x60);
        uVar17 = *(ulong *)(lVar6 + 0x68) ^ (uVar17 >> 4 | uVar15 << 0x3c);
        if (lVar10 == -0xf) break;
        uVar12 = (ulong)(pbVar7[lVar10 + 0xe] ^ *(byte *)(param_1 + 0x4e + lVar10));
        lVar6 = param_1 + (uVar12 & 0xf) * 0x10;
        lVar10 = lVar10 + -1;
        uVar15 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar14 >> 4 ^
                 *(ulong *)(lVar6 + 0x60);
        uVar17 = *(ulong *)(lVar6 + 0x68) ^ (uVar17 >> 4 | uVar14 << 0x3c);
      }
      uVar15 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      pbVar7 = pbVar7 + 0x10;
      *(ulong *)(param_1 + 0x40) = uVar15 >> 0x20 | uVar15 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar17 >> 0x20 | uVar17 << 0x20;
      uVar16 = uVar16 - 0x10;
      uVar15 = (uVar17 & 0xffffffff) >> 0x18;
    } while (uVar16 != 0);
    param_4 = param_4 & 0xf;
    param_3 = param_3 + uVar13;
  }
  uVar21 = uVar20;
  if (param_4 == 0) goto LAB_00457d50;
  lVar6 = param_1 + 0x10;
  (**(code **)(param_1 + 0x178))(param_1,lVar6,uVar19);
  uVar21 = (uVar23 + 1 & 0xff00ff00) >> 8 | (uVar23 + 1 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
  if (((param_4 < 0x20) || (CARRY4(uVar20,(uint)(param_4 - 1)))) || (param_4 - 1 >> 0x20 != 0)) {
LAB_00457d18:
    uVar16 = 0;
    uVar13 = param_4;
  }
  else {
    pbVar18 = (byte *)(param_1 + 0x188 + uVar22);
    pbVar1 = (byte *)(param_1 + 0x188 + param_4 + uVar22);
    pbVar2 = param_3 + param_4;
    pbVar7 = (byte *)(param_1 + 0x10);
    if (((param_3 < pbVar1 && pbVar18 < pbVar2) || (param_3 < param_2 + param_4 && param_2 < pbVar2)
        ) || ((param_3 < pbVar7 + param_4 && pbVar7 < pbVar2 ||
              ((pbVar18 < param_2 + param_4 && param_2 < pbVar1 ||
               (pbVar18 < pbVar7 + param_4 && pbVar7 < pbVar1)))))) goto LAB_00457d18;
    uVar16 = param_4 & 0xffffffffffffffe0;
    uVar15 = 0;
    uVar13 = param_4 & 0x1f;
    uVar21 = uVar20 + (int)uVar16;
    uVar22 = (ulong)uVar21;
    do {
      uVar17 = uVar15 & 0xffffffe0;
      pbVar7 = param_2 + uVar17;
      puVar3 = (undefined8 *)(lVar6 + uVar17);
      uVar24 = *(undefined8 *)(pbVar7 + 8);
      uVar19 = *(undefined8 *)pbVar7;
      uVar26 = *(undefined8 *)(pbVar7 + 0x18);
      uVar25 = *(undefined8 *)(pbVar7 + 0x10);
      uVar28 = puVar3[1];
      uVar27 = *puVar3;
      uVar30 = puVar3[3];
      uVar29 = puVar3[2];
      uVar25 = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                        CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                          (byte)((ulong)uVar25 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                   (byte)((ulong)uVar25 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                            (byte)((ulong)uVar25 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar29 >> 0x10) ^
                                                                     (byte)((ulong)uVar25 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar29
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar25
                                                                                    >> 8),
                                                                              (byte)uVar29 ^
                                                                              (byte)uVar25)))))));
      uVar26 = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                        CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ (byte)((ulong)uVar26 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                          (byte)((ulong)uVar26 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                   (byte)((ulong)uVar26 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                            (byte)((ulong)uVar26 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                                     (byte)((ulong)uVar26 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar30
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar26
                                                                                    >> 8),
                                                                              (byte)uVar30 ^
                                                                              (byte)uVar26)))))));
      uVar19 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                        CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                          (byte)((ulong)uVar19 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                   (byte)((ulong)uVar19 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                            (byte)((ulong)uVar19 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                     (byte)((ulong)uVar19 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar27
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar19
                                                                                    >> 8),
                                                                              (byte)uVar27 ^
                                                                              (byte)uVar19)))))));
      uVar24 = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                        CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar24 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                          (byte)((ulong)uVar24 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                   (byte)((ulong)uVar24 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                            (byte)((ulong)uVar24 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                                     (byte)((ulong)uVar24 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar28
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar24
                                                                                    >> 8),
                                                                              (byte)uVar28 ^
                                                                              (byte)uVar24)))))));
      pbVar7 = param_3 + uVar17;
      *(undefined8 *)(pbVar7 + 8) = uVar24;
      *(undefined8 *)pbVar7 = uVar19;
      *(undefined8 *)(pbVar7 + 0x18) = uVar26;
      *(undefined8 *)(pbVar7 + 0x10) = uVar25;
      iVar9 = (int)uVar15;
      uVar15 = uVar15 + 0x20;
      lVar10 = param_1 + (ulong)(uVar20 + iVar9);
      *(undefined8 *)(lVar10 + 400) = uVar24;
      *(undefined8 *)(lVar10 + 0x188) = uVar19;
      *(undefined8 *)(lVar10 + 0x1a0) = uVar26;
      *(undefined8 *)(lVar10 + 0x198) = uVar25;
    } while (uVar16 != uVar15);
    if (param_4 == uVar16) goto LAB_00457d50;
  }
  do {
    uVar15 = uVar16 & 0xffffffff;
    uVar16 = (ulong)((int)uVar16 + 1);
    uVar21 = (int)uVar22 + 1;
    bVar4 = *(byte *)(lVar6 + uVar15) ^ param_2[uVar15];
    uVar13 = uVar13 - 1;
    param_3[uVar15] = bVar4;
    *(byte *)(param_1 + uVar22 + 0x188) = bVar4;
    uVar22 = (ulong)uVar21;
  } while (uVar13 != 0);
LAB_00457d50:
  *(uint *)(param_1 + 0x170) = uVar21;
  return 0;
}


