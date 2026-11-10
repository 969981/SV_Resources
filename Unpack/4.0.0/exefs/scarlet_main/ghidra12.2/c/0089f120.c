/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089f120; name: FUN_0089f120
 */


void FUN_0089f120(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  char cVar14;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  ulong uVar36;
  uint *puVar37;
  byte *pbVar38;
  ulong uVar39;
  long lVar40;
  long *plVar41;
  ulong uVar42;
  int iVar43;
  uint uVar44;
  byte bVar45;
  undefined1 uVar46;
  uint uVar47;
  uint uVar48;
  undefined8 *local_138;
  undefined8 *local_d8;
  
  puVar37 = (uint *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  *puVar37 = *puVar37 & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  plVar41 = (long *)(param_1 + 0x18);
  *plVar41 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xe0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar33 = param_4;
  if (param_5 == 0) {
LAB_0089f1e4:
    uVar25 = *(undefined8 *)(param_6 + 0x30);
    param_5 = param_4;
  }
  else {
    uVar16 = *(ushort *)(param_6 + 0x44);
    if (uVar16 == 0) {
      if ((*(ushort *)(param_6 + 0x40) == 0) || ((*(ushort *)(param_6 + 0x40) >> 2 & 1) != 0)) {
        uVar25 = *(undefined8 *)(param_6 + 0x38);
        *(long *)(param_1 + 0x28) = param_5;
        cVar14 = *(char *)(param_6 + 0xda);
        lVar33 = param_5;
        param_4 = param_5;
        goto joined_r0x0089f1fc;
      }
      goto LAB_0089f1e4;
    }
    uVar25 = *(undefined8 *)(param_6 + 0x30);
    if ((uVar16 & 1) != 0) {
      lVar33 = param_5;
    }
    if (((uVar16 >> 1 & 1) == 0) ||
       (((*(uint *)(param_5 + 0x1c) ^ *(uint *)(param_4 + 0x1c)) & 3) != 0)) {
      *(long *)(param_1 + 0x28) = param_4;
      cVar14 = *(char *)(param_6 + 0xda);
      param_5 = param_4;
      goto joined_r0x0089f1fc;
    }
    uVar25 = *(undefined8 *)(param_6 + 0x38);
  }
  *(long *)(param_1 + 0x28) = param_4;
  cVar14 = *(char *)(param_6 + 0xda);
joined_r0x0089f1fc:
  if (cVar14 != '\0') {
    *(undefined1 *)(param_1 + 0x49) = 0x40;
  }
  pbVar38 = (byte *)(lVar33 + 0x20);
  if ((*pbVar38 & 3) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pbVar38 + *(byte *)(lVar33 + 0x22));
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pbVar38 + *(byte *)(lVar33 + 0x23));
    bVar45 = *(byte *)(lVar33 + 0x21);
  }
  else {
    puVar23 = (undefined8 *)FUN_00896e78(0x20);
    *(undefined8 **)(param_1 + 8) = puVar23;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x28;
    uVar32 = *(undefined8 *)(pbVar38 + *(byte *)(lVar33 + 0x22) + 8);
    *puVar23 = *(undefined8 *)(pbVar38 + *(byte *)(lVar33 + 0x22));
    puVar23[1] = uVar32;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x10;
    lVar26 = *(long *)(param_1 + 8);
    uVar32 = *(undefined8 *)(pbVar38 + *(byte *)(lVar33 + 0x23) + 8);
    *(undefined8 *)(lVar26 + 0x10) = *(undefined8 *)(pbVar38 + *(byte *)(lVar33 + 0x23));
    *(undefined8 *)(lVar26 + 0x18) = uVar32;
    bVar45 = *(byte *)(lVar33 + 0x21);
  }
  lVar33 = (ulong)bVar45 + 2;
  if (bVar45 != 0) {
    bVar15 = *pbVar38;
    if (bVar45 == 1) {
      uVar29 = 0;
    }
    else {
      uVar29 = 0;
      do {
        uVar17 = uVar29 & 0x1f;
        uVar30 = uVar29 + 1;
        uVar29 = uVar29 + 2;
        lVar26 = 4;
        if ((bVar15 >> (ulong)uVar17 & 1) != 0) {
          lVar26 = 0x10;
        }
        lVar40 = 4;
        if ((bVar15 >> (ulong)(uVar30 & 0x1f) & 1) != 0) {
          lVar40 = 0x10;
        }
        lVar33 = lVar40 + lVar26 + lVar33;
      } while ((bVar45 & 0xfe) != uVar29);
    }
    if ((bVar45 & 1) != 0) {
      lVar26 = 4;
      if ((bVar15 >> (ulong)(uVar29 & 0x1f) & 1) != 0) {
        lVar26 = 0x10;
      }
      lVar33 = lVar26 + lVar33;
    }
  }
  uVar29 = *(uint *)(param_4 + 0x1c);
  uVar39 = (ulong)uVar29;
  uVar31 = lVar33 + 0x20U + ((ulong)(uint)(*(int *)(param_5 + 0x1c) << 2) & 0xc);
  uVar3 = uVar31 + (uVar29 << 2 & (int)(uVar29 << 10) >> 0x1f & 0xc);
  uVar17 = (uVar29 & 0xff) >> 2 & 3;
  uVar18 = (uVar29 & 0xff) >> 4 & 3;
  uVar30 = uVar18 << 4;
  uVar24 = (ulong)(uVar29 >> 6) & 7;
  uVar4 = uVar3 + ((uVar17 | uVar17 << 2) << 2);
  uVar5 = uVar4 + uVar30;
  uVar6 = uVar5 + uVar24 * 4;
  lVar26 = 0xc;
  if ((uVar29 & 0x4000) == 0) {
    lVar26 = 0;
  }
  uVar7 = uVar6 + ((uVar39 & 0x200) >> 6);
  uVar8 = uVar7 + ((uVar39 & 0x400) >> 8);
  uVar9 = uVar8 + ((uVar39 & 0x1000) >> 10);
  uVar42 = uVar9 + lVar26;
  if ((uVar29 >> 0x13 & 1) == 0) {
    local_138 = (undefined8 *)0x0;
    lVar26 = 0;
    local_d8 = (undefined8 *)0x0;
  }
  else {
    local_d8 = (undefined8 *)(param_4 + (uVar42 & 0xffffffff));
    uVar42 = uVar42 + 0x1c;
    local_138 = (undefined8 *)(param_4 + (uVar42 & 0xffffffff));
    lVar26 = uVar24 << 4;
  }
  iVar43 = (int)(uVar39 & 0x20000);
  uVar22 = iVar43 != 0;
  lVar40 = 0x74;
  if ((uVar29 & 0x100000) == 0) {
    lVar40 = 0;
  }
  uVar13 = 6;
  if ((uint)uVar24 != 7) {
    uVar13 = (uint)uVar24;
  }
  uVar27 = uVar29 & 3;
  bVar45 = (byte)(uVar29 >> 0x13) & 1;
  uVar19 = uVar29 >> 0xf & 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xfb | (byte)(uVar29 >> 0x10) & 4;
  uVar20 = uVar29 >> 0x16 & 3;
  uVar21 = uVar29 >> 0x18 & 3;
  uVar46 = (undefined1)((uVar29 & 0x100000) >> 0x14);
  uVar44 = uVar19;
  uVar47 = uVar20;
  uVar48 = uVar21;
  FUN_008a00ec(param_1,uVar27);
  *(byte *)(param_1 + 0x49) =
       (byte)(*(uint *)(param_4 + 0x1c) >> 10) & 2 | *(byte *)(param_1 + 0x49) & 0xfd;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar28 = (ulong)*puVar37;
    uVar24 = lVar26 + uVar42 + (ulong)((uVar19 | uVar19 << 2) << 2);
    uVar10 = uVar24 + ((uVar39 & 0x20000) >> 0xe);
    uVar11 = uVar10 + lVar40;
    if ((*puVar37 & 3) != 0) {
      FUN_008afcd0();
      uVar28 = (ulong)*puVar37;
      if ((*puVar37 >> 1 & 1) != 0) {
        uVar36 = 1;
        lVar40 = 0x10;
        do {
          FUN_008afcd0(*plVar41 + lVar40);
          uVar28 = (ulong)*puVar37;
          uVar36 = uVar36 + 1;
          lVar40 = lVar40 + 0x10;
        } while (uVar36 < (uVar28 & 3));
      }
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffc | uVar27;
    if (uVar27 != 0) {
      FUN_008a0348(param_1,param_3,uVar25,param_6,param_5,param_5 + (lVar33 + 0x20U & 0xffffffff),
                   param_5 + (uVar31 & 0xffffffff),param_4 + (uVar11 & 0xffffffff),uVar44,uVar22,
                   bVar45,uVar46,uVar47,uVar48);
      uVar28 = (ulong)*(uint *)(param_1 + 0x10);
    }
    uVar27 = (uint)uVar28;
    puVar23 = (undefined8 *)(*plVar41 + (ulong)((uVar27 & 3) << 4));
    if ((uVar28 & 0xc) != 0) {
      *(undefined4 *)(puVar23 + 2) = 0;
      *puVar23 = 0;
      puVar23[1] = 0;
      uVar27 = *puVar37;
      if ((uVar27 >> 3 & 1) != 0) {
        *(undefined4 *)((long)puVar23 + 0x24) = 0;
        *(undefined8 *)((long)puVar23 + 0x1c) = 0;
        *(undefined8 *)((long)puVar23 + 0x14) = 0;
        uVar27 = *puVar37;
        if ((~uVar27 & 0xc) == 0) {
          *(undefined4 *)(puVar23 + 7) = 0;
          puVar23[5] = 0;
          puVar23[6] = 0;
          uVar27 = *puVar37;
        }
      }
    }
    *(uint *)(param_1 + 0x14) =
         *(uint *)(param_1 + 0x14) & 0xfffffff0 | *(uint *)(param_1 + 0x14) & 3 | uVar17 << 2;
    if (uVar17 != 0) {
      puVar1 = (undefined8 *)(param_4 + (uVar3 & 0xffffffff));
      *puVar23 = *puVar1;
      *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)((long)puVar23 + 0xc) = *(undefined8 *)((long)puVar1 + 0xc);
      if (uVar17 != 1) {
        *(undefined8 *)((long)puVar23 + 0x14) = *(undefined8 *)((long)puVar1 + 0x14);
        *(undefined4 *)((long)puVar23 + 0x1c) = *(undefined4 *)((long)puVar1 + 0x1c);
        puVar23[4] = puVar1[4];
        if (uVar17 != 2) {
          puVar23[5] = puVar1[5];
          *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar1 + 6);
          *(undefined8 *)((long)puVar23 + 0x34) = *(undefined8 *)((long)puVar1 + 0x34);
        }
      }
      uVar27 = *puVar37;
    }
    puVar23 = (undefined8 *)(*plVar41 + (ulong)((uVar27 & 3) * 0x10 + (uVar27 >> 2 & 3) * 0x14));
    if ((uVar27 & 0x30) != 0) {
      *(undefined4 *)puVar23 = 0;
      puVar23[1] = 0;
      if ((*(byte *)puVar37 >> 5 & 1) != 0) {
        *(undefined4 *)(puVar23 + 2) = 0;
        puVar23[3] = 0;
        if ((~*puVar37 & 0x30) == 0) {
          *(undefined4 *)(puVar23 + 4) = 0;
          puVar23[5] = 0;
        }
      }
    }
    uVar30 = *(uint *)(param_1 + 0x14) & 0xffffffcf | uVar30;
    *(uint *)(param_1 + 0x14) = uVar30;
    if (uVar18 != 0) {
      puVar1 = (undefined8 *)(param_4 + (uVar4 & 0xffffffff));
      uVar32 = *puVar1;
      uVar34 = puVar1[1];
      *puVar23 = uVar32;
      puVar23[1] = uVar34;
      uVar30 = (uint)((ulong)uVar32 >> 8) & 0xff;
      if ((uVar30 == 6) || (uVar30 - 3 < 3)) {
        uVar30 = *puVar37;
        uVar31 = 1;
        puVar23[1] = *plVar41 +
                     ((ulong)(uVar30 >> 4) & 0x1c) + ((ulong)(uVar30 >> 8) & 0xc) +
                     ((ulong)(uVar30 >> 2) & 3) * 0x14 + ((ulong)(uVar30 >> 0xc) & 1) * 0xc +
                     (((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) |
                     (ulong)(uVar30 >> 6) & 8);
        uVar30 = *(uint *)(param_1 + 0x14);
      }
      else {
        uVar31 = 0;
        puVar23[1] = 0;
        uVar30 = *(uint *)(param_1 + 0x14);
      }
      if ((uVar30 >> 5 & 1) != 0) {
        uVar32 = puVar1[2];
        uVar34 = puVar1[3];
        puVar23[2] = uVar32;
        puVar23[3] = uVar34;
        uVar30 = (uint)((ulong)uVar32 >> 8) & 0xff;
        if ((uVar30 == 6) || (uVar30 - 3 < 3)) {
          uVar30 = *puVar37;
          lVar33 = *plVar41 +
                   ((ulong)(uVar30 >> 4) & 0x1c) + ((ulong)(uVar30 >> 8) & 0xc) +
                   ((ulong)(uVar30 >> 2) & 3) * 0x14 + ((ulong)(uVar30 >> 0xc) & 1) * 0xc +
                   (((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) |
                   (ulong)(uVar30 >> 6) & 8) + uVar31 * 0x14;
          uVar31 = (ulong)((int)uVar31 + 1);
        }
        else {
          lVar33 = 0;
        }
        puVar23[3] = lVar33;
        uVar30 = *(uint *)(param_1 + 0x14);
        if ((~uVar30 & 0x30) == 0) {
          uVar32 = puVar1[4];
          uVar34 = puVar1[5];
          puVar23[4] = uVar32;
          puVar23[5] = uVar34;
          uVar30 = (uint)((ulong)uVar32 >> 8) & 0xff;
          if ((uVar30 == 6) || (uVar30 - 3 < 3)) {
            uVar30 = *puVar37;
            lVar33 = *plVar41 +
                     ((ulong)(uVar30 >> 4) & 0x1c) + ((ulong)(uVar30 >> 8) & 0xc) +
                     ((ulong)(uVar30 >> 2) & 3) * 0x14 + ((ulong)(uVar30 >> 0xc) & 1) * 0xc +
                     (((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) |
                     (ulong)(uVar30 >> 6) & 8) + uVar31 * 0x14;
          }
          else {
            lVar33 = 0;
          }
          puVar23[5] = lVar33;
          uVar30 = *(uint *)(param_1 + 0x14);
        }
      }
    }
    if (uVar13 != 0) {
      uVar17 = *puVar37;
      puVar2 = (undefined4 *)(param_4 + (uVar5 & 0xffffffff));
      puVar12 = (undefined4 *)
                (*plVar41 +
                ((ulong)(uVar17 >> 8) & 0xc) + ((ulong)(uVar17 >> 2) & 3) * 0x14 +
                ((ulong)(uVar17 >> 0xc) & 1) * 0xc +
                (((ulong)(uVar17 << 4) & 0x30) + ((ulong)uVar17 & 0x30) | (ulong)(uVar17 >> 6) & 8))
      ;
      if ((uVar17 & 0x1c0) != 0) {
        *puVar12 = 0;
        if (((((*(ushort *)puVar37 & 0x180) != 0) && (puVar12[1] = 0, 0x80 < (*puVar37 & 0x1c0))) &&
            (puVar12[2] = 0, (*(byte *)(param_1 + 0x11) & 1) != 0)) &&
           (((puVar12[3] = 0, 0x100 < (*puVar37 & 0x1c0) &&
             (puVar12[4] = 0, (~*puVar37 & 0x180) == 0)) &&
            (puVar12[5] = 0, (~*puVar37 & 0x1c0) == 0)))) {
          puVar12[6] = 0;
        }
        uVar30 = *(uint *)(param_1 + 0x14);
      }
      *(uint *)(param_1 + 0x14) = uVar30 & 0xfffffe00 | uVar30 & 0x3f | uVar13 << 6;
      uVar30 = uVar13;
      if (uVar13 < 2) {
        uVar30 = 1;
      }
      *puVar12 = *puVar2;
      if (((1 < uVar13) && (puVar12[1] = puVar2[1], uVar30 != 2)) &&
         ((puVar12[2] = puVar2[2], uVar30 != 3 &&
          (((puVar12[3] = puVar2[3], uVar30 != 4 && (puVar12[4] = puVar2[4], uVar30 != 5)) &&
           (puVar12[5] = puVar2[5], uVar30 != 6)))))) {
        puVar12[6] = puVar2[6];
      }
    }
    if ((int)(uVar39 & 0x200) != 0) {
      uVar30 = *puVar37;
      *(undefined8 *)
       (*plVar41 +
       ((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) + ((ulong)(uVar30 >> 2) & 3) * 0x14) =
           *(undefined8 *)(param_4 + (uVar6 & 0xffffffff));
    }
    if ((int)(uVar39 & 0x400) != 0) {
      uVar30 = *puVar37;
      *(undefined4 *)
       (*plVar41 +
       (((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) | (ulong)(uVar30 >> 6) & 8) +
       ((ulong)(uVar30 >> 2) & 3) * 0x14) = *(undefined4 *)(param_4 + (uVar7 & 0xffffffff));
    }
    if ((int)(uVar39 & 0x1000) != 0) {
      uVar30 = *puVar37;
      *(undefined4 *)
       ((((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) | (ulong)(uVar30 >> 6) & 8) +
        ((ulong)(uVar30 >> 2) & 3) * 0x14 + *plVar41 + 4) =
           *(undefined4 *)(param_4 + (uVar8 & 0xffffffff));
    }
    if ((uVar29 >> 0xe & 1) != 0) {
      uVar30 = *puVar37;
      puVar23 = (undefined8 *)(param_4 + (uVar9 & 0xffffffff));
      puVar1 = (undefined8 *)
               (*plVar41 +
               ((ulong)(uVar30 >> 8) & 0xc) + ((ulong)(uVar30 >> 2) & 3) * 0x14 +
               (((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) | (ulong)(uVar30 >> 6) & 8));
      uVar32 = *puVar23;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar23 + 1);
      *puVar1 = uVar32;
    }
    if (((uVar29 >> 0x13 & 1) != 0) && (local_d8 != (undefined8 *)0x0)) {
      uVar30 = *puVar37;
      uVar32 = *local_d8;
      uVar34 = local_d8[1];
      uVar35 = local_d8[2];
      puVar23 = (undefined8 *)
                (*plVar41 +
                ((ulong)(uVar30 >> 4) & 0x1c) + ((ulong)(uVar30 >> 8) & 0xc) +
                ((ulong)(uVar30 >> 0xc) & 8) + ((ulong)(uVar30 >> 0xc) & 1) * 0xc +
                (((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) | (ulong)(uVar30 >> 6) & 8)
                + (((ulong)(uVar30 >> 0xd) & 3) + ((ulong)(uVar30 >> 2) & 3)) * 0x14);
      *(undefined4 *)(puVar23 + 3) = *(undefined4 *)(local_d8 + 3);
      puVar23[1] = uVar34;
      puVar23[2] = uVar35;
      *puVar23 = uVar32;
      if (uVar13 != 0) {
        uVar30 = *puVar37;
        puVar23 = (undefined8 *)
                  (*plVar41 +
                  (long)(int)((uVar30 >> 4 & 0x1c) + (uVar30 >> 8 & 0xc) + (uVar30 >> 0xc & 8) +
                              (uVar30 >> 0xc & 1) * 0xc + (uVar30 >> 0x10 & 1) * 0x1c +
                              ((uVar30 & 3) * 0x10 + (uVar30 & 0x30) | uVar30 >> 6 & 8) +
                             ((uVar30 >> 0xd & 3) + (uVar30 >> 2 & 3)) * 0x14));
        uVar32 = local_138[1];
        *puVar23 = *local_138;
        puVar23[1] = uVar32;
        if (uVar13 != 1) {
          uVar32 = local_138[3];
          puVar23[2] = local_138[2];
          puVar23[3] = uVar32;
          if (uVar13 != 2) {
            uVar32 = local_138[5];
            puVar23[4] = local_138[4];
            puVar23[5] = uVar32;
            if (uVar13 != 3) {
              uVar32 = local_138[7];
              puVar23[6] = local_138[6];
              puVar23[7] = uVar32;
              if (uVar13 != 4) {
                uVar32 = local_138[9];
                puVar23[8] = local_138[8];
                puVar23[9] = uVar32;
                if (uVar13 != 5) {
                  uVar32 = local_138[0xb];
                  puVar23[10] = local_138[10];
                  puVar23[0xb] = uVar32;
                  if (uVar13 != 6) {
                    uVar32 = local_138[0xd];
                    puVar23[0xc] = local_138[0xc];
                    puVar23[0xd] = uVar32;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar19 != 0) {
      uVar30 = *puVar37;
      puVar23 = (undefined8 *)(param_4 + (lVar26 + uVar42 & 0xffffffff));
      puVar1 = (undefined8 *)
               (*plVar41 +
               ((ulong)(uVar30 >> 4) & 0x1c) + ((ulong)(uVar30 >> 8) & 0xc) +
               ((ulong)(uVar30 >> 2) & 3) * 0x14 + ((ulong)(uVar30 >> 0xc) & 1) * 0xc +
               (((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) | (ulong)(uVar30 >> 6) & 8));
      if ((uVar30 & 0x6000) != 0) {
        *(undefined4 *)(puVar1 + 2) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        if ((*(byte *)(param_1 + 0x11) >> 6 & 1) != 0) {
          *(undefined4 *)((long)puVar1 + 0x24) = 0;
          *(undefined8 *)((long)puVar1 + 0x1c) = 0;
          *(undefined8 *)((long)puVar1 + 0x14) = 0;
          if ((~*puVar37 & 0x6000) == 0) {
            *(undefined4 *)(puVar1 + 7) = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
          }
        }
      }
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) & 0xffff8000 |
           *(uint *)(param_1 + 0x14) & 0x1fff | uVar19 << 0xd;
      uVar32 = *puVar23;
      uVar34 = puVar23[1];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar23 + 2);
      *puVar1 = uVar32;
      puVar1[1] = uVar34;
      if (1 < uVar19) {
        uVar32 = *(undefined8 *)((long)puVar23 + 0x14);
        uVar34 = *(undefined8 *)((long)puVar23 + 0x1c);
        *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)((long)puVar23 + 0x24);
        *(undefined8 *)((long)puVar1 + 0x1c) = uVar34;
        *(undefined8 *)((long)puVar1 + 0x14) = uVar32;
        if (uVar19 != 2) {
          uVar32 = puVar23[5];
          uVar34 = puVar23[6];
          *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(puVar23 + 7);
          puVar1[5] = uVar32;
          puVar1[6] = uVar34;
        }
      }
    }
    if (uVar21 != 0) {
      uVar30 = *puVar37;
      puVar1 = (undefined8 *)(param_4 + (ulong)((int)uVar11 + uVar20 * 0x10));
      puVar23 = (undefined8 *)
                (*plVar41 +
                (long)(int)((uVar30 >> 4 & 0x1c) + (uVar30 >> 8 & 0xc) + (uVar30 >> 0xc & 8) +
                            (uVar30 >> 0xd & 0x60) + (uVar30 >> 0xc & 1) * 0xc +
                            (uVar30 >> 0x10 & 1) * 0x1c + (uVar30 >> 0xc & 0x10) * (uVar30 >> 6 & 7)
                            + (uVar30 >> 0x11 & 1) * 0x74 + (uint)((uVar30 & 0x300000) != 0) * 0x10
                            + ((uVar30 & 3) * 0x10 + (uVar30 & 0x30) | uVar30 >> 6 & 8) +
                           ((uVar30 >> 0xd & 3) + (uVar30 >> 2 & 3)) * 0x14));
      if ((uVar30 & 0x300000) != 0) {
        puVar23[9] = 0;
        puVar23[10] = 0;
        *puVar23 = 0;
        puVar23[7] = 0;
        puVar23[8] = 0;
        puVar23[5] = 0;
        puVar23[6] = 0;
        puVar23[3] = 0;
        puVar23[4] = 0;
        puVar23[1] = 0;
        puVar23[2] = 0;
        if ((*(byte *)(param_1 + 0x12) >> 5 & 1) != 0) {
          puVar23[0x14] = 0;
          puVar23[0x15] = 0;
          puVar23[0xb] = 0;
          puVar23[0x12] = 0;
          puVar23[0x13] = 0;
          puVar23[0x10] = 0;
          puVar23[0x11] = 0;
          puVar23[0xe] = 0;
          puVar23[0xf] = 0;
          puVar23[0xc] = 0;
          puVar23[0xd] = 0;
          if ((~*puVar37 & 0x300000) == 0) {
            puVar23[0x1f] = 0;
            puVar23[0x20] = 0;
            puVar23[0x16] = 0;
            puVar23[0x1d] = 0;
            puVar23[0x1e] = 0;
            puVar23[0x1b] = 0;
            puVar23[0x1c] = 0;
            puVar23[0x19] = 0;
            puVar23[0x1a] = 0;
            puVar23[0x17] = 0;
            puVar23[0x18] = 0;
          }
        }
      }
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) & 0xffc00000 |
           *(uint *)(param_1 + 0x14) & 0xfffff | uVar21 << 0x14;
      uVar32 = *puVar1;
      uVar34 = puVar1[2];
      puVar23[1] = puVar1[1];
      puVar23[2] = uVar34;
      *puVar23 = uVar32;
      uVar32 = puVar1[3];
      uVar34 = puVar1[4];
      uVar35 = puVar1[6];
      puVar23[5] = puVar1[5];
      puVar23[6] = uVar35;
      puVar23[3] = uVar32;
      puVar23[4] = uVar34;
      uVar32 = puVar1[7];
      uVar34 = puVar1[8];
      uVar35 = puVar1[10];
      puVar23[9] = puVar1[9];
      puVar23[10] = uVar35;
      puVar23[7] = uVar32;
      puVar23[8] = uVar34;
      if (1 < uVar21) {
        uVar32 = puVar1[0xb];
        uVar34 = puVar1[0xd];
        puVar23[0xc] = puVar1[0xc];
        puVar23[0xd] = uVar34;
        puVar23[0xb] = uVar32;
        uVar32 = puVar1[0xe];
        uVar34 = puVar1[0xf];
        uVar35 = puVar1[0x11];
        puVar23[0x10] = puVar1[0x10];
        puVar23[0x11] = uVar35;
        puVar23[0xe] = uVar32;
        puVar23[0xf] = uVar34;
        uVar32 = puVar1[0x12];
        uVar34 = puVar1[0x13];
        uVar35 = puVar1[0x15];
        puVar23[0x14] = puVar1[0x14];
        puVar23[0x15] = uVar35;
        puVar23[0x12] = uVar32;
        puVar23[0x13] = uVar34;
        if (uVar21 != 2) {
          uVar32 = puVar1[0x16];
          uVar34 = puVar1[0x18];
          puVar23[0x17] = puVar1[0x17];
          puVar23[0x18] = uVar34;
          puVar23[0x16] = uVar32;
          uVar32 = puVar1[0x19];
          uVar34 = puVar1[0x1a];
          uVar35 = puVar1[0x1c];
          puVar23[0x1b] = puVar1[0x1b];
          puVar23[0x1c] = uVar35;
          puVar23[0x19] = uVar32;
          puVar23[0x1a] = uVar34;
          uVar32 = puVar1[0x1d];
          uVar34 = puVar1[0x1e];
          uVar35 = puVar1[0x20];
          puVar23[0x1f] = puVar1[0x1f];
          puVar23[0x20] = uVar35;
          puVar23[0x1d] = uVar32;
          puVar23[0x1e] = uVar34;
        }
      }
    }
    if (iVar43 != 0) {
      uVar30 = *puVar37;
      *(undefined8 *)
       (*plVar41 +
       ((ulong)(uVar30 >> 4) & 0x1c) + ((ulong)(uVar30 >> 8) & 0xc) +
       ((ulong)(uVar30 >> 0xc) & 1) * 0xc +
       (((ulong)(uVar30 << 4) & 0x30) + ((ulong)uVar30 & 0x30) | (ulong)(uVar30 >> 6) & 8) +
       (((ulong)(uVar30 >> 0xd) & 3) + ((ulong)(uVar30 >> 2) & 3)) * 0x14) =
           *(undefined8 *)(param_4 + (uVar24 & 0xffffffff));
    }
    if ((uVar29 >> 0x14 & 1) != 0) {
      uVar29 = *puVar37;
      puVar23 = (undefined8 *)(param_4 + (uVar10 & 0xffffffff));
      puVar1 = (undefined8 *)
               (*plVar41 +
               (long)(int)((uVar29 >> 4 & 0x1c) + (uVar29 >> 8 & 0xc) + (uVar29 >> 0xc & 8) +
                           (uVar29 >> 0xc & 1) * 0xc + (uVar29 >> 0x10 & 1) * 0x1c +
                           (uVar29 >> 0xc & 0x10) * (uVar29 >> 6 & 7) +
                           ((uVar29 & 3) * 0x10 + (uVar29 & 0x30) | uVar29 >> 6 & 8) +
                          ((uVar29 >> 0xd & 3) + (uVar29 >> 2 & 3)) * 0x14));
      uVar32 = puVar23[5];
      uVar34 = puVar23[6];
      uVar35 = puVar23[4];
      puVar1[3] = puVar23[3];
      puVar1[4] = uVar35;
      puVar1[5] = uVar32;
      puVar1[6] = uVar34;
      uVar34 = puVar23[10];
      uVar32 = puVar23[7];
      uVar35 = puVar23[8];
      puVar1[9] = puVar23[9];
      puVar1[10] = uVar34;
      puVar1[7] = uVar32;
      puVar1[8] = uVar35;
      uVar32 = puVar23[0xc];
      uVar34 = puVar23[0xd];
      uVar35 = puVar23[0xb];
      *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(puVar23 + 0xe);
      puVar1[0xc] = uVar32;
      puVar1[0xd] = uVar34;
      puVar1[0xb] = uVar35;
      uVar32 = *puVar23;
      uVar34 = puVar23[2];
      puVar1[1] = puVar23[1];
      puVar1[2] = uVar34;
      *puVar1 = uVar32;
    }
  }
  FUN_008a062c(param_1,param_3,param_6,uVar25);
  FUN_008a0808(param_1,param_2,param_3);
  FUN_008a0958(param_1,param_3);
  return;
}


