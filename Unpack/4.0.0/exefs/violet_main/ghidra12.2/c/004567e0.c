/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004567e0; name: FUN_004567e0
 */


undefined8 FUN_004567e0(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong local_78;
  
  uVar23 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar23) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  pcVar6 = *(code **)(param_1 + 0x178);
  uVar26 = *(undefined8 *)(param_1 + 0x180);
  *(ulong *)(param_1 + 0x38) = uVar23;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar22 = *(uint *)(param_1 + 0x170);
    uVar23 = (ulong)uVar22;
    uVar21 = *(uint *)(param_1 + 0xc);
    uVar25 = uVar22 & 0xf;
    if ((uVar22 & 0xf) == 0) goto LAB_0045697c;
    if (param_4 == 0) goto LAB_00456f0c;
    puVar8 = param_2;
    puVar18 = param_3;
    do {
      uVar14 = (ulong)uVar25;
      param_2 = (ulong *)((long)puVar8 + 1);
      uVar25 = uVar25 + 1 & 0xf;
      bVar5 = *(byte *)(param_1 + 0x10 + uVar14) ^ (byte)*puVar8;
      lVar24 = param_1 + uVar23;
      param_3 = (ulong *)((long)puVar18 + 1);
      *(byte *)puVar18 = bVar5;
      uVar22 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar22;
      local_78 = param_4 - 1;
      *(byte *)(lVar24 + 0x188) = bVar5;
      if (uVar25 == 0) break;
      bVar7 = param_4 != 1;
      param_4 = local_78;
      puVar8 = param_2;
      puVar18 = param_3;
    } while (bVar7);
    if (uVar25 != 0) goto LAB_00456f0c;
    uVar14 = (ulong)*(byte *)(param_1 + 0x4f);
    lVar24 = param_1 + 0x188;
    lVar11 = param_1 + 0x196;
    do {
      uVar15 = (ulong)((uint)*(byte *)(lVar24 + 0xf) ^ (uint)uVar14);
      lVar9 = param_1 + (uVar15 & 0xf) * 0x10;
      lVar12 = 0;
      uVar14 = *(ulong *)(lVar9 + 0x60);
      uVar16 = *(ulong *)(lVar9 + 0x68);
      while( true ) {
        lVar9 = param_1 + (uVar15 & 0xfffffffffffffff0);
        uVar17 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar14 >> 4 ^
                 *(ulong *)(lVar9 + 0x60);
        uVar16 = *(ulong *)(lVar9 + 0x68) ^ (uVar16 >> 4 | uVar14 << 0x3c);
        if (lVar12 == -0xf) break;
        uVar15 = (ulong)(*(byte *)(lVar11 + lVar12) ^ *(byte *)(param_1 + 0x4e + lVar12));
        lVar9 = param_1 + (uVar15 & 0xf) * 0x10;
        lVar12 = lVar12 + -1;
        uVar14 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar17 >> 4 ^
                 *(ulong *)(lVar9 + 0x60);
        uVar16 = *(ulong *)(lVar9 + 0x68) ^ (uVar16 >> 4 | uVar17 << 0x3c);
      }
      uVar14 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      lVar24 = lVar24 + 0x10;
      uVar23 = uVar23 - 0x10;
      *(ulong *)(param_1 + 0x40) = uVar14 >> 0x20 | uVar14 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar16 >> 0x20 | uVar16 << 0x20;
      uVar14 = (uVar16 & 0xffffffff) >> 0x18;
      lVar11 = lVar11 + 0x10;
    } while (uVar23 != 0);
    uVar23 = 0;
    uVar20 = 0;
    uVar22 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
    uVar25 = uVar22 >> 0x10 | uVar22 << 0x10;
  }
  else {
    if (param_4 == 0) {
      uVar16 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar24 = param_1 + (uVar16 & 0xf) * 0x10;
      uVar23 = *(ulong *)(lVar24 + 0x60);
      uVar14 = *(ulong *)(lVar24 + 0x68);
      lVar24 = 0;
      while( true ) {
        lVar11 = param_1 + (uVar16 & 0xfffffffffffffff0);
        uVar15 = *(ulong *)(&DAT_03cfa528 + (uVar14 & 0xf) * 8) ^ uVar23 >> 4 ^
                 *(ulong *)(lVar11 + 0x60);
        uVar14 = *(ulong *)(lVar11 + 0x68) ^ (uVar14 >> 4 | uVar23 << 0x3c);
        if (lVar24 == -0xf) break;
        uVar16 = (ulong)*(byte *)(param_1 + 0x4e + lVar24);
        lVar11 = param_1 + (uVar16 & 0xf) * 0x10;
        uVar23 = *(ulong *)(&DAT_03cfa528 + (uVar14 & 0xf) * 8) ^ uVar15 >> 4 ^
                 *(ulong *)(lVar11 + 0x60);
        uVar14 = *(ulong *)(lVar11 + 0x68) ^ (uVar14 >> 4 | uVar15 << 0x3c);
        lVar24 = lVar24 + -1;
      }
      uVar23 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_1 + 0x40) = uVar23 >> 0x20 | uVar23 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar14 >> 0x20 | uVar14 << 0x20;
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    uVar23 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar21 = *(uint *)(param_1 + 0xc);
LAB_0045697c:
    if ((0xf < param_4) && ((int)uVar23 != 0)) {
      uVar14 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar24 = param_1 + 0x188;
      lVar11 = param_1 + 0x196;
      do {
        uVar15 = (ulong)((uint)*(byte *)(lVar24 + 0xf) ^ (uint)uVar14);
        lVar9 = param_1 + (uVar15 & 0xf) * 0x10;
        lVar12 = 0;
        uVar14 = *(ulong *)(lVar9 + 0x60);
        uVar16 = *(ulong *)(lVar9 + 0x68);
        while( true ) {
          lVar9 = param_1 + (uVar15 & 0xfffffffffffffff0);
          uVar17 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar14 >> 4 ^
                   *(ulong *)(lVar9 + 0x60);
          uVar16 = *(ulong *)(lVar9 + 0x68) ^ (uVar16 >> 4 | uVar14 << 0x3c);
          if (lVar12 == -0xf) break;
          uVar15 = (ulong)(*(byte *)(lVar11 + lVar12) ^ *(byte *)(param_1 + 0x4e + lVar12));
          lVar9 = param_1 + (uVar15 & 0xf) * 0x10;
          lVar12 = lVar12 + -1;
          uVar14 = *(ulong *)(&DAT_03cfa528 + (uVar16 & 0xf) * 8) ^ uVar17 >> 4 ^
                   *(ulong *)(lVar9 + 0x60);
          uVar16 = *(ulong *)(lVar9 + 0x68) ^ (uVar16 >> 4 | uVar17 << 0x3c);
        }
        uVar14 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        lVar24 = lVar24 + 0x10;
        uVar23 = uVar23 - 0x10;
        *(ulong *)(param_1 + 0x40) = uVar14 >> 0x20 | uVar14 << 0x20;
        *(ulong *)(param_1 + 0x48) = uVar16 >> 0x20 | uVar16 << 0x20;
        uVar14 = (uVar16 & 0xffffffff) >> 0x18;
        lVar11 = lVar11 + 0x10;
      } while (uVar23 != 0);
      uVar23 = 0;
    }
    uVar20 = (uint)uVar23;
    uVar22 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
    uVar25 = uVar22 >> 0x10 | uVar22 << 0x10;
    local_78 = param_4;
  }
  if (0xbff < local_78) {
    puVar8 = param_3;
    do {
      lVar24 = 0;
      pbVar3 = (byte *)((long)puVar8 + -0xbe2);
      do {
        pbVar19 = pbVar3;
        puVar18 = (ulong *)((long)puVar8 + lVar24);
        puVar1 = (ulong *)((long)param_2 + lVar24);
        (*pcVar6)(param_1,param_1 + 0x10,uVar26);
        uVar25 = uVar25 + 1;
        uVar22 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0xc) = uVar22 >> 0x10 | uVar22 << 0x10;
        *puVar18 = *(ulong *)(param_1 + 0x10) ^ *puVar1;
        lVar24 = lVar24 + 0x10;
        puVar18[1] = *(ulong *)(param_1 + 0x18) ^ puVar1[1];
        pbVar3 = pbVar19 + 0x10;
      } while (lVar24 != 0xc00);
      uVar23 = (ulong)*(byte *)(param_1 + 0x4f);
      param_3 = puVar8 + 0x180;
      param_2 = param_2 + 0x180;
      lVar24 = 0xc00;
      do {
        uVar16 = (ulong)((uint)*(byte *)((long)puVar8 + 0xf) ^ (uint)uVar23);
        lVar11 = param_1 + (uVar16 & 0xf) * 0x10;
        lVar9 = 0;
        uVar23 = *(ulong *)(lVar11 + 0x60);
        uVar14 = *(ulong *)(lVar11 + 0x68);
        while( true ) {
          lVar11 = param_1 + (uVar16 & 0xfffffffffffffff0);
          uVar15 = *(ulong *)(&DAT_03cfa528 + (uVar14 & 0xf) * 8) ^ uVar23 >> 4 ^
                   *(ulong *)(lVar11 + 0x60);
          uVar14 = *(ulong *)(lVar11 + 0x68) ^ (uVar14 >> 4 | uVar23 << 0x3c);
          if (lVar9 == -0xf) break;
          uVar16 = (ulong)(pbVar19[lVar9] ^ *(byte *)(param_1 + 0x4e + lVar9));
          lVar11 = param_1 + (uVar16 & 0xf) * 0x10;
          lVar9 = lVar9 + -1;
          uVar23 = *(ulong *)(&DAT_03cfa528 + (uVar14 & 0xf) * 8) ^ uVar15 >> 4 ^
                   *(ulong *)(lVar11 + 0x60);
          uVar14 = *(ulong *)(lVar11 + 0x68) ^ (uVar14 >> 4 | uVar15 << 0x3c);
        }
        uVar23 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        puVar8 = puVar8 + 2;
        lVar24 = lVar24 + -0x10;
        *(ulong *)(param_1 + 0x40) = uVar23 >> 0x20 | uVar23 << 0x20;
        *(ulong *)(param_1 + 0x48) = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar23 = (uVar14 & 0xffffffff) >> 0x18;
        pbVar19 = pbVar19 + 0x10;
      } while (lVar24 != 0);
      local_78 = local_78 - 0xc00;
      puVar8 = param_3;
    } while (0xbff < local_78);
    uVar23 = (ulong)uVar20;
  }
  uVar21 = (uint)uVar23;
  uVar14 = local_78 & 0xfffffffffffffff0;
  if (uVar14 != 0) {
    if (0xf < local_78) {
      do {
        (*pcVar6)(param_1,param_1 + 0x10,uVar26);
        uVar25 = uVar25 + 1;
        uVar22 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0xc) = uVar22 >> 0x10 | uVar22 << 0x10;
        *param_3 = *(ulong *)(param_1 + 0x10) ^ *param_2;
        puVar8 = param_2 + 1;
        local_78 = local_78 - 0x10;
        param_2 = param_2 + 2;
        param_3[1] = *(ulong *)(param_1 + 0x18) ^ *puVar8;
        param_3 = param_3 + 2;
      } while (0xf < local_78);
    }
    uVar16 = (ulong)*(byte *)(param_1 + 0x4f);
    lVar24 = (long)param_3 - uVar14;
    do {
      uVar17 = (ulong)((uint)*(byte *)(lVar24 + 0xf) ^ (uint)uVar16);
      lVar11 = param_1 + (uVar17 & 0xf) * 0x10;
      lVar9 = 0;
      uVar16 = *(ulong *)(lVar11 + 0x60);
      uVar15 = *(ulong *)(lVar11 + 0x68);
      while( true ) {
        lVar11 = param_1 + (uVar17 & 0xfffffffffffffff0);
        uVar13 = *(ulong *)(&DAT_03cfa528 + (uVar15 & 0xf) * 8) ^ uVar16 >> 4 ^
                 *(ulong *)(lVar11 + 0x60);
        uVar15 = *(ulong *)(lVar11 + 0x68) ^ (uVar15 >> 4 | uVar16 << 0x3c);
        if (lVar9 == -0xf) break;
        uVar17 = (ulong)(*(byte *)(lVar24 + lVar9 + 0xe) ^ *(byte *)(param_1 + 0x4e + lVar9));
        lVar11 = param_1 + (uVar17 & 0xf) * 0x10;
        lVar9 = lVar9 + -1;
        uVar16 = *(ulong *)(&DAT_03cfa528 + (uVar15 & 0xf) * 8) ^ uVar13 >> 4 ^
                 *(ulong *)(lVar11 + 0x60);
        uVar15 = *(ulong *)(lVar11 + 0x68) ^ (uVar15 >> 4 | uVar13 << 0x3c);
      }
      uVar16 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      lVar24 = lVar24 + 0x10;
      *(ulong *)(param_1 + 0x40) = uVar16 >> 0x20 | uVar16 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar14 = uVar14 - 0x10;
      uVar16 = (uVar15 & 0xffffffff) >> 0x18;
    } while (uVar14 != 0);
  }
  uVar22 = uVar21;
  if (local_78 == 0) goto LAB_00456f0c;
  lVar24 = param_1 + 0x10;
  (*pcVar6)(param_1,lVar24,uVar26);
  uVar22 = (uVar25 + 1 & 0xff00ff00) >> 8 | (uVar25 + 1 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar22 >> 0x10 | uVar22 << 0x10;
  if (((local_78 < 0x20) || (CARRY4(uVar21,(uint)(local_78 - 1)))) || (local_78 - 1 >> 0x20 != 0)) {
LAB_00456ed4:
    uVar16 = 0;
    uVar14 = local_78;
  }
  else {
    puVar18 = (ulong *)(param_1 + 0x188 + uVar23);
    puVar1 = (ulong *)(param_1 + 0x188 + local_78 + uVar23);
    puVar2 = (ulong *)((long)param_3 + local_78);
    puVar8 = (ulong *)(param_1 + 0x10);
    if (((param_3 < puVar1 && puVar18 < puVar2) ||
        (param_3 < (ulong *)((long)param_2 + local_78) && param_2 < puVar2)) ||
       ((param_3 < (ulong *)((long)puVar8 + local_78) && puVar8 < puVar2 ||
        ((puVar18 < (ulong *)((long)param_2 + local_78) && param_2 < puVar1 ||
         (puVar18 < (ulong *)((long)puVar8 + local_78) && puVar8 < puVar1)))))) goto LAB_00456ed4;
    uVar16 = local_78 & 0xffffffffffffffe0;
    uVar15 = 0;
    uVar14 = local_78 & 0x1f;
    uVar22 = uVar21 + (int)uVar16;
    uVar23 = (ulong)uVar22;
    do {
      uVar17 = uVar15 & 0xffffffe0;
      pbVar3 = (byte *)((long)param_2 + uVar17);
      puVar4 = (undefined8 *)(lVar24 + uVar17);
      uVar27 = *(undefined8 *)(pbVar3 + 8);
      uVar26 = *(undefined8 *)pbVar3;
      uVar29 = *(undefined8 *)(pbVar3 + 0x18);
      uVar28 = *(undefined8 *)(pbVar3 + 0x10);
      uVar31 = puVar4[1];
      uVar30 = *puVar4;
      uVar33 = puVar4[3];
      uVar32 = puVar4[2];
      uVar28 = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                        CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar28 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                          (byte)((ulong)uVar28 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                   (byte)((ulong)uVar28 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                            (byte)((ulong)uVar28 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                     (byte)((ulong)uVar28 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar32
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar28
                                                                                    >> 8),
                                                                              (byte)uVar32 ^
                                                                              (byte)uVar28)))))));
      uVar29 = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                        CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uVar29 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                          (byte)((ulong)uVar29 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                   (byte)((ulong)uVar29 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                            (byte)((ulong)uVar29 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                     (byte)((ulong)uVar29 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar33
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar29
                                                                                    >> 8),
                                                                              (byte)uVar33 ^
                                                                              (byte)uVar29)))))));
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
      uVar27 = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                        CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((ulong)uVar27 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                          (byte)((ulong)uVar27 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                   (byte)((ulong)uVar27 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                            (byte)((ulong)uVar27 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                     (byte)((ulong)uVar27 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar31
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar27
                                                                                    >> 8),
                                                                              (byte)uVar31 ^
                                                                              (byte)uVar27)))))));
      pbVar3 = (byte *)((long)param_3 + uVar17);
      *(undefined8 *)(pbVar3 + 8) = uVar27;
      *(undefined8 *)pbVar3 = uVar26;
      *(undefined8 *)(pbVar3 + 0x18) = uVar29;
      *(undefined8 *)(pbVar3 + 0x10) = uVar28;
      iVar10 = (int)uVar15;
      uVar15 = uVar15 + 0x20;
      lVar11 = param_1 + (ulong)(uVar21 + iVar10);
      *(undefined8 *)(lVar11 + 400) = uVar27;
      *(undefined8 *)(lVar11 + 0x188) = uVar26;
      *(undefined8 *)(lVar11 + 0x1a0) = uVar29;
      *(undefined8 *)(lVar11 + 0x198) = uVar28;
    } while (uVar16 != uVar15);
    if (local_78 == uVar16) goto LAB_00456f0c;
  }
  do {
    uVar15 = uVar16 & 0xffffffff;
    uVar16 = (ulong)((int)uVar16 + 1);
    uVar22 = (int)uVar23 + 1;
    bVar5 = *(byte *)(lVar24 + uVar15) ^ *(byte *)((long)param_2 + uVar15);
    uVar14 = uVar14 - 1;
    *(byte *)((long)param_3 + uVar15) = bVar5;
    *(byte *)(param_1 + uVar23 + 0x188) = bVar5;
    uVar23 = (ulong)uVar22;
  } while (uVar14 != 0);
LAB_00456f0c:
  *(uint *)(param_1 + 0x170) = uVar22;
  return 0;
}


