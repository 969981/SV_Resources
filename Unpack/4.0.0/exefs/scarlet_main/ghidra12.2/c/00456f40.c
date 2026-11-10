/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00456f40; name: FUN_00456f40
 */


undefined8 FUN_00456f40(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong local_70;
  
  uVar22 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar22) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  pcVar5 = *(code **)(param_1 + 0x178);
  uVar25 = *(undefined8 *)(param_1 + 0x180);
  *(ulong *)(param_1 + 0x38) = uVar22;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar21 = *(uint *)(param_1 + 0x170);
    uVar22 = (ulong)uVar21;
    uVar9 = *(uint *)(param_1 + 0xc);
    uVar24 = uVar21 & 0xf;
    if ((uVar21 & 0xf) == 0) goto LAB_004570dc;
    if (param_4 == 0) goto LAB_00457684;
    puVar8 = param_2;
    puVar23 = param_3;
    do {
      uVar18 = (ulong)uVar24;
      param_2 = (ulong *)((long)puVar8 + 1);
      uVar15 = *puVar8;
      *(byte *)(param_1 + uVar22 + 0x188) = (byte)uVar15;
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulong)uVar21;
      uVar24 = uVar24 + 1 & 0xf;
      local_70 = param_4 - 1;
      param_3 = (ulong *)((long)puVar23 + 1);
      *(byte *)puVar23 = *(byte *)(param_1 + 0x10 + uVar18) ^ (byte)uVar15;
      if (uVar24 == 0) break;
      bVar7 = param_4 != 1;
      param_4 = local_70;
      puVar8 = param_2;
      puVar23 = param_3;
    } while (bVar7);
    if (uVar24 != 0) goto LAB_00457684;
    uVar15 = (ulong)*(byte *)(param_1 + 0x4f);
    lVar10 = param_1 + 0x188;
    lVar13 = param_1 + 0x196;
    do {
      uVar17 = (ulong)((uint)*(byte *)(lVar10 + 0xf) ^ (uint)uVar15);
      lVar11 = param_1 + (uVar17 & 0xf) * 0x10;
      lVar14 = 0;
      uVar15 = *(ulong *)(lVar11 + 0x60);
      uVar18 = *(ulong *)(lVar11 + 0x68);
      while( true ) {
        lVar11 = param_1 + (uVar17 & 0xfffffffffffffff0);
        uVar19 = *(ulong *)(&DAT_03cfa528 + (uVar18 & 0xf) * 8) ^ uVar15 >> 4 ^
                 *(ulong *)(lVar11 + 0x60);
        uVar18 = *(ulong *)(lVar11 + 0x68) ^ (uVar18 >> 4 | uVar15 << 0x3c);
        if (lVar14 == -0xf) break;
        uVar17 = (ulong)(*(byte *)(lVar13 + lVar14) ^ *(byte *)(param_1 + 0x4e + lVar14));
        lVar11 = param_1 + (uVar17 & 0xf) * 0x10;
        lVar14 = lVar14 + -1;
        uVar15 = *(ulong *)(&DAT_03cfa528 + (uVar18 & 0xf) * 8) ^ uVar19 >> 4 ^
                 *(ulong *)(lVar11 + 0x60);
        uVar18 = *(ulong *)(lVar11 + 0x68) ^ (uVar18 >> 4 | uVar19 << 0x3c);
      }
      uVar15 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      lVar10 = lVar10 + 0x10;
      uVar22 = uVar22 - 0x10;
      *(ulong *)(param_1 + 0x40) = uVar15 >> 0x20 | uVar15 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar18 >> 0x20 | uVar18 << 0x20;
      uVar15 = (uVar18 & 0xffffffff) >> 0x18;
      lVar13 = lVar13 + 0x10;
    } while (uVar22 != 0);
    uVar22 = 0;
    uVar20 = 0;
    uVar21 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar24 = uVar21 >> 0x10 | uVar21 << 0x10;
  }
  else {
    if (param_4 == 0) {
      uVar18 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar10 = param_1 + (uVar18 & 0xf) * 0x10;
      uVar22 = *(ulong *)(lVar10 + 0x60);
      uVar15 = *(ulong *)(lVar10 + 0x68);
      lVar10 = 0;
      while( true ) {
        lVar13 = param_1 + (uVar18 & 0xfffffffffffffff0);
        uVar17 = *(ulong *)(&DAT_03cfa528 + (uVar15 & 0xf) * 8) ^ uVar22 >> 4 ^
                 *(ulong *)(lVar13 + 0x60);
        uVar15 = *(ulong *)(lVar13 + 0x68) ^ (uVar15 >> 4 | uVar22 << 0x3c);
        if (lVar10 == -0xf) break;
        uVar18 = (ulong)*(byte *)(param_1 + 0x4e + lVar10);
        lVar13 = param_1 + (uVar18 & 0xf) * 0x10;
        uVar22 = *(ulong *)(&DAT_03cfa528 + (uVar15 & 0xf) * 8) ^ uVar17 >> 4 ^
                 *(ulong *)(lVar13 + 0x60);
        uVar15 = *(ulong *)(lVar13 + 0x68) ^ (uVar15 >> 4 | uVar17 << 0x3c);
        lVar10 = lVar10 + -1;
      }
      uVar22 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_1 + 0x40) = uVar22 >> 0x20 | uVar22 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar15 >> 0x20 | uVar15 << 0x20;
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    uVar22 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar9 = *(uint *)(param_1 + 0xc);
LAB_004570dc:
    if ((0xf < param_4) && ((int)uVar22 != 0)) {
      uVar15 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar10 = param_1 + 0x188;
      lVar13 = param_1 + 0x196;
      do {
        uVar17 = (ulong)((uint)*(byte *)(lVar10 + 0xf) ^ (uint)uVar15);
        lVar11 = param_1 + (uVar17 & 0xf) * 0x10;
        lVar14 = 0;
        uVar15 = *(ulong *)(lVar11 + 0x60);
        uVar18 = *(ulong *)(lVar11 + 0x68);
        while( true ) {
          lVar11 = param_1 + (uVar17 & 0xfffffffffffffff0);
          uVar19 = *(ulong *)(&DAT_03cfa528 + (uVar18 & 0xf) * 8) ^ uVar15 >> 4 ^
                   *(ulong *)(lVar11 + 0x60);
          uVar18 = *(ulong *)(lVar11 + 0x68) ^ (uVar18 >> 4 | uVar15 << 0x3c);
          if (lVar14 == -0xf) break;
          uVar17 = (ulong)(*(byte *)(lVar13 + lVar14) ^ *(byte *)(param_1 + 0x4e + lVar14));
          lVar11 = param_1 + (uVar17 & 0xf) * 0x10;
          lVar14 = lVar14 + -1;
          uVar15 = *(ulong *)(&DAT_03cfa528 + (uVar18 & 0xf) * 8) ^ uVar19 >> 4 ^
                   *(ulong *)(lVar11 + 0x60);
          uVar18 = *(ulong *)(lVar11 + 0x68) ^ (uVar18 >> 4 | uVar19 << 0x3c);
        }
        uVar15 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        lVar10 = lVar10 + 0x10;
        uVar22 = uVar22 - 0x10;
        *(ulong *)(param_1 + 0x40) = uVar15 >> 0x20 | uVar15 << 0x20;
        *(ulong *)(param_1 + 0x48) = uVar18 >> 0x20 | uVar18 << 0x20;
        uVar15 = (uVar18 & 0xffffffff) >> 0x18;
        lVar13 = lVar13 + 0x10;
      } while (uVar22 != 0);
      uVar22 = 0;
    }
    uVar20 = (uint)uVar22;
    uVar21 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar24 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_70 = param_4;
  }
  if (0xbff < local_70) {
    do {
      uVar22 = (ulong)*(byte *)(param_1 + 0x4f);
      lVar10 = 0xc00;
      puVar8 = param_2;
      do {
        uVar18 = (ulong)((uint)*(byte *)((long)puVar8 + 0xf) ^ (uint)uVar22);
        lVar13 = param_1 + (uVar18 & 0xf) * 0x10;
        lVar11 = 0;
        uVar22 = *(ulong *)(lVar13 + 0x60);
        uVar15 = *(ulong *)(lVar13 + 0x68);
        while( true ) {
          lVar13 = param_1 + (uVar18 & 0xfffffffffffffff0);
          uVar17 = *(ulong *)(&DAT_03cfa528 + (uVar15 & 0xf) * 8) ^ uVar22 >> 4 ^
                   *(ulong *)(lVar13 + 0x60);
          uVar15 = *(ulong *)(lVar13 + 0x68) ^ (uVar15 >> 4 | uVar22 << 0x3c);
          if (lVar11 == -0xf) break;
          uVar18 = (ulong)(*(byte *)((long)puVar8 + lVar11 + 0xe) ^
                          *(byte *)(param_1 + 0x4e + lVar11));
          lVar13 = param_1 + (uVar18 & 0xf) * 0x10;
          lVar11 = lVar11 + -1;
          uVar22 = *(ulong *)(&DAT_03cfa528 + (uVar15 & 0xf) * 8) ^ uVar17 >> 4 ^
                   *(ulong *)(lVar13 + 0x60);
          uVar15 = *(ulong *)(lVar13 + 0x68) ^ (uVar15 >> 4 | uVar17 << 0x3c);
        }
        uVar22 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        puVar8 = puVar8 + 2;
        *(ulong *)(param_1 + 0x40) = uVar22 >> 0x20 | uVar22 << 0x20;
        *(ulong *)(param_1 + 0x48) = uVar15 >> 0x20 | uVar15 << 0x20;
        lVar10 = lVar10 + -0x10;
        uVar22 = (uVar15 & 0xffffffff) >> 0x18;
      } while (lVar10 != 0);
      lVar10 = 0;
      do {
        puVar8 = (ulong *)((long)param_3 + lVar10);
        puVar23 = (ulong *)((long)param_2 + lVar10);
        (*pcVar5)(param_1,param_1 + 0x10,uVar25);
        uVar24 = uVar24 + 1;
        uVar21 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
        *puVar8 = *(ulong *)(param_1 + 0x10) ^ *puVar23;
        lVar10 = lVar10 + 0x10;
        puVar8[1] = *(ulong *)(param_1 + 0x18) ^ puVar23[1];
      } while (lVar10 != 0xc00);
      local_70 = local_70 - 0xc00;
      param_2 = param_2 + 0x180;
      param_3 = param_3 + 0x180;
    } while (0xbff < local_70);
    uVar22 = (ulong)uVar20;
  }
  uVar9 = (uint)uVar22;
  uVar15 = local_70 & 0xfffffffffffffff0;
  if (uVar15 != 0) {
    uVar18 = (ulong)*(byte *)(param_1 + 0x4f);
    puVar8 = param_2;
    do {
      uVar19 = (ulong)((uint)*(byte *)((long)puVar8 + 0xf) ^ (uint)uVar18);
      lVar10 = param_1 + (uVar19 & 0xf) * 0x10;
      lVar13 = 0;
      uVar18 = *(ulong *)(lVar10 + 0x60);
      uVar17 = *(ulong *)(lVar10 + 0x68);
      while( true ) {
        lVar10 = param_1 + (uVar19 & 0xfffffffffffffff0);
        uVar16 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar18 >> 4 ^
                 *(ulong *)(lVar10 + 0x60);
        uVar17 = *(ulong *)(lVar10 + 0x68) ^ (uVar17 >> 4 | uVar18 << 0x3c);
        if (lVar13 == -0xf) break;
        uVar19 = (ulong)(*(byte *)((long)puVar8 + lVar13 + 0xe) ^ *(byte *)(param_1 + 0x4e + lVar13)
                        );
        lVar10 = param_1 + (uVar19 & 0xf) * 0x10;
        lVar13 = lVar13 + -1;
        uVar18 = *(ulong *)(&DAT_03cfa528 + (uVar17 & 0xf) * 8) ^ uVar16 >> 4 ^
                 *(ulong *)(lVar10 + 0x60);
        uVar17 = *(ulong *)(lVar10 + 0x68) ^ (uVar17 >> 4 | uVar16 << 0x3c);
      }
      uVar18 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      puVar8 = puVar8 + 2;
      *(ulong *)(param_1 + 0x40) = uVar18 >> 0x20 | uVar18 << 0x20;
      *(ulong *)(param_1 + 0x48) = uVar17 >> 0x20 | uVar17 << 0x20;
      uVar15 = uVar15 - 0x10;
      uVar18 = (uVar17 & 0xffffffff) >> 0x18;
    } while (uVar15 != 0);
    if (0xf < local_70) {
      do {
        (*pcVar5)(param_1,param_1 + 0x10,uVar25);
        uVar24 = uVar24 + 1;
        uVar21 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
        *param_3 = *(ulong *)(param_1 + 0x10) ^ *param_2;
        puVar8 = param_2 + 1;
        local_70 = local_70 - 0x10;
        param_2 = param_2 + 2;
        param_3[1] = *(ulong *)(param_1 + 0x18) ^ *puVar8;
        param_3 = param_3 + 2;
      } while (0xf < local_70);
    }
  }
  uVar21 = uVar9;
  if (local_70 == 0) goto LAB_00457684;
  lVar10 = param_1 + 0x10;
  (*pcVar5)(param_1,lVar10,uVar25);
  uVar21 = (uVar24 + 1 & 0xff00ff00) >> 8 | (uVar24 + 1 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0xc) = uVar21 >> 0x10 | uVar21 << 0x10;
  if (local_70 < 0x20) {
    uVar18 = 0;
  }
  else {
    if ((!CARRY4(uVar9,(uint)(local_70 - 1))) && (local_70 - 1 >> 0x20 == 0)) {
      puVar23 = (ulong *)(param_1 + 0x188 + uVar22);
      puVar1 = (ulong *)((long)param_3 + local_70);
      puVar2 = (ulong *)(param_1 + 0x188 + local_70 + uVar22);
      puVar8 = (ulong *)(param_1 + 0x10);
      if (((puVar1 <= puVar23 || puVar2 <= param_3) &&
          ((((ulong *)((long)param_2 + local_70) <= puVar23 || puVar2 <= param_2 &&
            ((ulong *)((long)puVar8 + local_70) <= puVar23 || puVar2 <= puVar8)) &&
           ((ulong *)((long)param_2 + local_70) <= param_3 || puVar1 <= param_2)))) &&
         ((ulong *)((long)puVar8 + local_70) <= param_3 || puVar1 <= puVar8)) {
        uVar18 = local_70 & 0xffffffffffffffe0;
        uVar15 = 0;
        uVar21 = uVar9 + (int)uVar18;
        uVar22 = (ulong)uVar21;
        do {
          uVar17 = uVar15 & 0xffffffe0;
          pbVar3 = (byte *)((long)param_2 + uVar17);
          uVar26 = *(undefined8 *)(pbVar3 + 8);
          uVar25 = *(undefined8 *)pbVar3;
          uVar28 = *(undefined8 *)(pbVar3 + 0x18);
          uVar27 = *(undefined8 *)(pbVar3 + 0x10);
          iVar12 = (int)uVar15;
          uVar15 = uVar15 + 0x20;
          lVar13 = param_1 + (ulong)(uVar9 + iVar12);
          *(undefined8 *)(lVar13 + 400) = uVar26;
          *(undefined8 *)(lVar13 + 0x188) = uVar25;
          *(undefined8 *)(lVar13 + 0x1a0) = uVar28;
          *(undefined8 *)(lVar13 + 0x198) = uVar27;
          puVar4 = (undefined8 *)(lVar10 + uVar17);
          pbVar3 = (byte *)((long)param_3 + uVar17);
          uVar30 = puVar4[1];
          uVar29 = *puVar4;
          uVar32 = puVar4[3];
          uVar31 = puVar4[2];
          *(ulong *)(pbVar3 + 8) =
               CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
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
          *(ulong *)pbVar3 =
               CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
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
          *(ulong *)(pbVar3 + 0x18) =
               CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
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
          *(ulong *)(pbVar3 + 0x10) =
               CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
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
        } while (uVar18 != uVar15);
        bVar7 = local_70 == uVar18;
        local_70 = local_70 & 0x1f;
        if (bVar7) goto LAB_00457684;
        goto LAB_00457654;
      }
    }
    uVar18 = 0;
  }
LAB_00457654:
  do {
    uVar15 = uVar18 & 0xffffffff;
    uVar18 = (ulong)((int)uVar18 + 1);
    bVar6 = *(byte *)((long)param_2 + uVar15);
    *(byte *)(param_1 + uVar22 + 0x188) = bVar6;
    uVar21 = (int)uVar22 + 1;
    uVar22 = (ulong)uVar21;
    local_70 = local_70 - 1;
    *(byte *)((long)param_3 + uVar15) = *(byte *)(lVar10 + uVar15) ^ bVar6;
  } while (local_70 != 0);
LAB_00457684:
  *(uint *)(param_1 + 0x170) = uVar21;
  return 0;
}


