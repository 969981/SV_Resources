/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00457d80; name: FUN_00457d80
 */


undefined8 FUN_00457d80(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 uVar20;
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
  uVar20 = *(undefined8 *)(param_1 + 0x180);
  *(ulong *)(param_1 + 0x38) = uVar22;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar21 = *(uint *)(param_1 + 0x170);
    uVar22 = (ulong)uVar21;
    uVar6 = *(uint *)(param_1 + 0xc);
    uVar23 = uVar21 & 0xf;
    if ((uVar21 & 0xf) == 0) goto LAB_00457f18;
    if (param_4 == 0) goto LAB_00458420;
    uVar14 = param_4;
    pbVar8 = param_3;
    pbVar19 = param_2;
    do {
      uVar17 = (ulong)uVar23;
      param_2 = pbVar19 + 1;
      bVar4 = *pbVar19;
      *(byte *)(param_1 + uVar22 + 0x188) = bVar4;
      uVar23 = uVar23 + 1 & 0xf;
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulong)uVar21;
      param_4 = uVar14 - 1;
      param_3 = pbVar8 + 1;
      *pbVar8 = *(byte *)(param_1 + 0x10 + uVar17) ^ bVar4;
      if (uVar23 == 0) break;
      bVar5 = uVar14 != 1;
      uVar14 = param_4;
      pbVar8 = param_3;
      pbVar19 = param_2;
    } while (bVar5);
    if (uVar23 != 0) goto LAB_00458420;
    uVar14 = (ulong)*(byte *)(param_1 + 0x4f);
    lVar7 = param_1 + 0x188;
    lVar11 = param_1 + 0x196;
    do {
      uVar16 = (ulong)((uint)*(byte *)(lVar7 + 0xf) ^ (uint)uVar14);
      lVar9 = param_1 + (uVar16 & 0xf) * 0x10;
      lVar12 = 0;
      uVar14 = *(ulong *)(lVar9 + 0x60);
      uVar17 = *(ulong *)(lVar9 + 0x68);
      while( true ) {
        lVar9 = param_1 + (uVar16 & 0xfffffffffffffff0);
        uVar18 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar14 >> 4 ^
                 *(ulong *)(lVar9 + 0x60);
        uVar17 = *(ulong *)(lVar9 + 0x68) ^ (uVar17 >> 4 | uVar14 << 0x3c);
        if (lVar12 == -0xf) break;
        uVar16 = (ulong)(*(byte *)(lVar11 + lVar12) ^ *(byte *)(param_1 + 0x4e + lVar12));
        lVar9 = param_1 + (uVar16 & 0xf) * 0x10;
        lVar12 = lVar12 + -1;
        uVar14 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar18 >> 4 ^
                 *(ulong *)(lVar9 + 0x60);
        uVar17 = *(ulong *)(lVar9 + 0x68) ^ (uVar17 >> 4 | uVar18 << 0x3c);
      }
      uVar14 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      lVar7 = lVar7 + 0x10;
      uVar22 = uVar22 - 0x10;
      *(ulong *)(param_1 + 0x40) = uVar14 >> 0x20 | uVar14 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar17 >> 0x20 | uVar17 << 0x20;
      uVar14 = (uVar17 & 0xffffffff) >> 0x18;
      lVar11 = lVar11 + 0x10;
    } while (uVar22 != 0);
    uVar22 = 0;
    uVar21 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar23 = uVar21 >> 0x10 | uVar21 << 0x10;
  }
  else {
    if (param_4 == 0) {
      uVar17 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar7 = param_1 + (uVar17 & 0xf) * 0x10;
      uVar22 = *(ulong *)(lVar7 + 0x60);
      uVar14 = *(ulong *)(lVar7 + 0x68);
      lVar7 = 0;
      while( true ) {
        lVar11 = param_1 + (uVar17 & 0xfffffffffffffff0);
        uVar16 = *(ulong *)(&DAT_03cfa528 + (uVar14 & 0xf) * 8) ^ uVar22 >> 4 ^
                 *(ulong *)(lVar11 + 0x60);
        uVar14 = *(ulong *)(lVar11 + 0x68) ^ (uVar14 >> 4 | uVar22 << 0x3c);
        if (lVar7 == -0xf) break;
        uVar17 = (ulong)*(byte *)(param_1 + 0x4e + lVar7);
        lVar11 = param_1 + (uVar17 & 0xf) * 0x10;
        uVar22 = *(ulong *)(&DAT_03cfa528 + (uVar14 & 0xf) * 8) ^ uVar16 >> 4 ^
                 *(ulong *)(lVar11 + 0x60);
        uVar14 = *(ulong *)(lVar11 + 0x68) ^ (uVar14 >> 4 | uVar16 << 0x3c);
        lVar7 = lVar7 + -1;
      }
      uVar22 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_1 + 0x40) = uVar22 >> 0x20 | uVar22 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar14 >> 0x20 | uVar14 << 0x20;
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    uVar22 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar6 = *(uint *)(param_1 + 0xc);
LAB_00457f18:
    if ((0xf < param_4) && ((int)uVar22 != 0)) {
      uVar14 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar7 = param_1 + 0x188;
      lVar11 = param_1 + 0x196;
      do {
        uVar16 = (ulong)((uint)*(byte *)(lVar7 + 0xf) ^ (uint)uVar14);
        lVar9 = param_1 + (uVar16 & 0xf) * 0x10;
        lVar12 = 0;
        uVar14 = *(ulong *)(lVar9 + 0x60);
        uVar17 = *(ulong *)(lVar9 + 0x68);
        while( true ) {
          lVar9 = param_1 + (uVar16 & 0xfffffffffffffff0);
          uVar18 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar14 >> 4 ^
                   *(ulong *)(lVar9 + 0x60);
          uVar17 = *(ulong *)(lVar9 + 0x68) ^ (uVar17 >> 4 | uVar14 << 0x3c);
          if (lVar12 == -0xf) break;
          uVar16 = (ulong)(*(byte *)(lVar11 + lVar12) ^ *(byte *)(param_1 + 0x4e + lVar12));
          lVar9 = param_1 + (uVar16 & 0xf) * 0x10;
          lVar12 = lVar12 + -1;
          uVar14 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar18 >> 4 ^
                   *(ulong *)(lVar9 + 0x60);
          uVar17 = *(ulong *)(lVar9 + 0x68) ^ (uVar17 >> 4 | uVar18 << 0x3c);
        }
        uVar14 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        lVar7 = lVar7 + 0x10;
        uVar22 = uVar22 - 0x10;
        *(ulong *)(param_1 + 0x40) = uVar14 >> 0x20 | uVar14 << 0x20;
        *(ulong *)(param_1 + 0x48) = uVar17 >> 0x20 | uVar17 << 0x20;
        uVar14 = (uVar17 & 0xffffffff) >> 0x18;
        lVar11 = lVar11 + 0x10;
      } while (uVar22 != 0);
      uVar22 = 0;
    }
    uVar21 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar23 = uVar21 >> 0x10 | uVar21 << 0x10;
  }
  if (0xbff < param_4) {
    do {
      uVar14 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar7 = 0xc00;
      pbVar8 = param_2;
      do {
        uVar16 = (ulong)((uint)pbVar8[0xf] ^ (uint)uVar14);
        lVar11 = param_1 + (uVar16 & 0xf) * 0x10;
        lVar9 = 0;
        uVar14 = *(ulong *)(lVar11 + 0x60);
        uVar17 = *(ulong *)(lVar11 + 0x68);
        while( true ) {
          lVar11 = param_1 + (uVar16 & 0xfffffffffffffff0);
          uVar18 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar14 >> 4 ^
                   *(ulong *)(lVar11 + 0x60);
          uVar17 = *(ulong *)(lVar11 + 0x68) ^ (uVar17 >> 4 | uVar14 << 0x3c);
          if (lVar9 == -0xf) break;
          uVar16 = (ulong)(pbVar8[lVar9 + 0xe] ^ *(byte *)(param_1 + 0x4e + lVar9));
          lVar11 = param_1 + (uVar16 & 0xf) * 0x10;
          lVar9 = lVar9 + -1;
          uVar14 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar18 >> 4 ^
                   *(ulong *)(lVar11 + 0x60);
          uVar17 = *(ulong *)(lVar11 + 0x68) ^ (uVar17 >> 4 | uVar18 << 0x3c);
        }
        uVar14 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        pbVar8 = pbVar8 + 0x10;
        *(ulong *)(param_1 + 0x40) = uVar14 >> 0x20 | uVar14 << 0x20;
        *(ulong *)(param_1 + 0x48) = uVar17 >> 0x20 | uVar17 << 0x20;
        lVar7 = lVar7 + -0x10;
        uVar14 = (uVar17 & 0xffffffff) >> 0x18;
      } while (lVar7 != 0);
      (*param_5)(param_2,param_3,0xc0,uVar20,param_1);
      param_4 = param_4 - 0xc00;
      uVar23 = uVar23 + 0xc0;
      uVar21 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
    } while (0xbff < param_4);
  }
  uVar6 = (uint)uVar22;
  uVar14 = param_4 & 0xfffffffffffffff0;
  if (uVar14 != 0) {
    uVar16 = (ulong)*(byte *)(param_1 + 0x4f);
    uVar17 = uVar14;
    pbVar8 = param_2;
    do {
      uVar13 = (ulong)((uint)pbVar8[0xf] ^ (uint)uVar16);
      lVar7 = param_1 + (uVar13 & 0xf) * 0x10;
      lVar11 = 0;
      uVar16 = *(ulong *)(lVar7 + 0x60);
      uVar18 = *(ulong *)(lVar7 + 0x68);
      while( true ) {
        lVar7 = param_1 + (uVar13 & 0xfffffffffffffff0);
        uVar15 = *(ulong *)(&DAT_03cfa528 + (uVar18 & 0xf) * 8) ^ uVar16 >> 4 ^
                 *(ulong *)(lVar7 + 0x60);
        uVar18 = *(ulong *)(lVar7 + 0x68) ^ (uVar18 >> 4 | uVar16 << 0x3c);
        if (lVar11 == -0xf) break;
        uVar13 = (ulong)(pbVar8[lVar11 + 0xe] ^ *(byte *)(param_1 + 0x4e + lVar11));
        lVar7 = param_1 + (uVar13 & 0xf) * 0x10;
        lVar11 = lVar11 + -1;
        uVar16 = *(ulong *)(&DAT_03cfa528 + (uVar18 & 0xf) * 8) ^ uVar15 >> 4 ^
                 *(ulong *)(lVar7 + 0x60);
        uVar18 = *(ulong *)(lVar7 + 0x68) ^ (uVar18 >> 4 | uVar15 << 0x3c);
      }
      uVar16 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      pbVar8 = pbVar8 + 0x10;
      *(ulong *)(param_1 + 0x40) = uVar16 >> 0x20 | uVar16 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar18 >> 0x20 | uVar18 << 0x20;
      uVar17 = uVar17 - 0x10;
      uVar16 = (uVar18 & 0xffffffff) >> 0x18;
    } while (uVar17 != 0);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar20,param_1);
    uVar23 = uVar23 + (int)(param_4 >> 4);
    param_3 = param_3 + uVar14;
    uVar21 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
    param_2 = param_2 + uVar14;
    param_4 = param_4 & 0xf;
    *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
  }
  uVar21 = uVar6;
  if (param_4 == 0) goto LAB_00458420;
  lVar7 = param_1 + 0x10;
  (**(code **)(param_1 + 0x178))(param_1,lVar7,uVar20);
  uVar21 = (uVar23 + 1 & 0xff00ff00) >> 8 | (uVar23 + 1 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
  if (((param_4 < 0x20) || (CARRY4(uVar6,(uint)(param_4 - 1)))) || (param_4 - 1 >> 0x20 != 0)) {
LAB_004583e8:
    uVar17 = 0;
    uVar14 = param_4;
  }
  else {
    pbVar19 = (byte *)(param_1 + 0x188 + uVar22);
    pbVar1 = param_3 + param_4;
    pbVar2 = (byte *)(param_1 + 0x188 + param_4 + uVar22);
    pbVar8 = (byte *)(param_1 + 0x10);
    if (((pbVar19 < pbVar1 && param_3 < pbVar2) || (pbVar19 < param_2 + param_4 && param_2 < pbVar2)
        ) || ((pbVar19 < pbVar8 + param_4 && pbVar8 < pbVar2 ||
              ((param_3 < param_2 + param_4 && param_2 < pbVar1 ||
               (param_3 < pbVar8 + param_4 && pbVar8 < pbVar1)))))) goto LAB_004583e8;
    uVar17 = param_4 & 0xffffffffffffffe0;
    uVar16 = 0;
    uVar14 = param_4 & 0x1f;
    uVar21 = uVar6 + (int)uVar17;
    uVar22 = (ulong)uVar21;
    do {
      uVar18 = uVar16 & 0xffffffe0;
      pbVar8 = param_2 + uVar18;
      uVar24 = *(undefined8 *)(pbVar8 + 8);
      uVar20 = *(undefined8 *)pbVar8;
      uVar26 = *(undefined8 *)(pbVar8 + 0x18);
      uVar25 = *(undefined8 *)(pbVar8 + 0x10);
      iVar10 = (int)uVar16;
      uVar16 = uVar16 + 0x20;
      lVar11 = param_1 + (ulong)(uVar6 + iVar10);
      *(undefined8 *)(lVar11 + 400) = uVar24;
      *(undefined8 *)(lVar11 + 0x188) = uVar20;
      *(undefined8 *)(lVar11 + 0x1a0) = uVar26;
      *(undefined8 *)(lVar11 + 0x198) = uVar25;
      puVar3 = (undefined8 *)(lVar7 + uVar18);
      pbVar8 = param_3 + uVar18;
      uVar28 = puVar3[1];
      uVar27 = *puVar3;
      uVar30 = puVar3[3];
      uVar29 = puVar3[2];
      *(ulong *)(pbVar8 + 8) =
           CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                    CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar24 >> 0x30),
                             CONCAT15((byte)((ulong)uVar28 >> 0x28) ^ (byte)((ulong)uVar24 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                               (byte)((ulong)uVar24 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                        (byte)((ulong)uVar24 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                                 (byte)((ulong)uVar24 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar28 >> 8)
                                                                          ^ (byte)((ulong)uVar24 >>
                                                                                  8),
                                                                          (byte)uVar28 ^
                                                                          (byte)uVar24)))))));
      *(ulong *)pbVar8 =
           CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                    CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                             CONCAT15((byte)((ulong)uVar27 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                               (byte)((ulong)uVar20 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                        (byte)((ulong)uVar20 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                 (byte)((ulong)uVar20 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar27 >> 8)
                                                                          ^ (byte)((ulong)uVar20 >>
                                                                                  8),
                                                                          (byte)uVar27 ^
                                                                          (byte)uVar20)))))));
      *(ulong *)(pbVar8 + 0x18) =
           CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                    CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ (byte)((ulong)uVar26 >> 0x30),
                             CONCAT15((byte)((ulong)uVar30 >> 0x28) ^ (byte)((ulong)uVar26 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                               (byte)((ulong)uVar26 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                        (byte)((ulong)uVar26 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                                 (byte)((ulong)uVar26 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar30 >> 8)
                                                                          ^ (byte)((ulong)uVar26 >>
                                                                                  8),
                                                                          (byte)uVar30 ^
                                                                          (byte)uVar26)))))));
      *(ulong *)(pbVar8 + 0x10) =
           CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                    CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30),
                             CONCAT15((byte)((ulong)uVar29 >> 0x28) ^ (byte)((ulong)uVar25 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                               (byte)((ulong)uVar25 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                        (byte)((ulong)uVar25 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar29 >> 0x10) ^
                                                                 (byte)((ulong)uVar25 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar29 >> 8)
                                                                          ^ (byte)((ulong)uVar25 >>
                                                                                  8),
                                                                          (byte)uVar29 ^
                                                                          (byte)uVar25)))))));
    } while (uVar17 != uVar16);
    if (param_4 == uVar17) goto LAB_00458420;
  }
  do {
    uVar16 = uVar17 & 0xffffffff;
    uVar17 = (ulong)((int)uVar17 + 1);
    bVar4 = param_2[uVar16];
    *(byte *)(param_1 + uVar22 + 0x188) = bVar4;
    uVar21 = (int)uVar22 + 1;
    uVar22 = (ulong)uVar21;
    uVar14 = uVar14 - 1;
    param_3[uVar16] = *(byte *)(lVar7 + uVar16) ^ bVar4;
  } while (uVar14 != 0);
LAB_00458420:
  *(uint *)(param_1 + 0x170) = uVar21;
  return 0;
}


