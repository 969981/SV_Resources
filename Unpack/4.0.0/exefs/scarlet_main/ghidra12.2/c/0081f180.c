/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081f180; name: FUN_0081f180
 */


ulong FUN_0081f180(ushort *param_1,ulong param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ushort *puVar16;
  ushort *__src;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar22 = 0xffffffff;
  if ((param_1 != (ushort *)0x0) && (-1 < (int)param_4)) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        uVar22 = (ulong)-(uint)((byte)*param_1 != 0);
        goto LAB_0081f82c;
      }
    }
    else if (param_3 != 0) {
      uVar20 = (ulong)param_4;
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      lVar2 = param_2 + uVar20;
      pbVar21 = (byte *)(lVar2 + -7);
      lVar24 = 0;
      puVar16 = param_1;
LAB_0081f240:
      while( true ) {
        __src = (ushort *)((long)puVar16 + 1);
        bVar4 = (byte)*puVar16;
        uVar7 = (ulong)(bVar4 >> 4);
        pbVar17 = (byte *)(param_2 + lVar24);
        if (bVar4 >> 4 == 0xf) break;
        if ((pbVar1 + -0x10 <= __src) || ((byte *)(lVar2 + -0x20) < pbVar17)) goto LAB_0081f298;
        uVar26 = *(undefined8 *)__src;
        puVar10 = (ushort *)((long)__src + uVar7);
        uVar22 = lVar24 + uVar7;
        *(undefined8 *)(pbVar17 + 8) = *(undefined8 *)((long)puVar16 + 9);
        *(undefined8 *)pbVar17 = uVar26;
        __src = puVar10 + 1;
        uVar5 = *puVar10;
        uVar7 = (ulong)uVar5;
        uVar25 = (ulong)bVar4 & 0xf;
        lVar15 = uVar22 - uVar7;
        if (((int)uVar25 == 0xf) || (uVar5 < 8)) goto LAB_0081f3fc;
        puVar23 = (undefined8 *)(param_2 + lVar15);
        puVar3 = (undefined8 *)(param_2 + uVar22);
        *puVar3 = *puVar23;
        puVar3[1] = puVar23[1];
        *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar23 + 2);
        lVar24 = uVar25 + uVar22 + 4;
        puVar16 = __src;
      }
      if (pbVar1 + -0xf <= __src) goto LAB_0081f824;
      uVar6 = 0;
      puVar16 = __src;
      do {
        __src = (ushort *)((long)puVar16 + 1);
        uVar5 = *puVar16;
        uVar6 = uVar6 + (byte)uVar5;
        if (pbVar1 + -0xf <= __src) break;
        puVar16 = __src;
      } while ((byte)uVar5 == 0xff);
      uVar7 = (ulong)uVar6 + 0xf;
      if ((CARRY8((ulong)pbVar17,uVar7)) || (CARRY8((ulong)__src,uVar7))) goto LAB_0081f824;
LAB_0081f298:
      uVar22 = uVar7 + lVar24;
      pbVar19 = (byte *)(param_2 + uVar22);
      if ((pbVar19 <= (byte *)(lVar2 + -0xc)) &&
         (puVar16 = (ushort *)((long)__src + uVar7), puVar16 <= pbVar1 + -8)) {
        pbVar18 = (byte *)(param_2 + 8 + lVar24);
        pbVar11 = pbVar19;
        if (pbVar19 <= pbVar18) {
          pbVar11 = pbVar18;
        }
        if (pbVar11 + (~param_2 - lVar24) < (byte *)0x38) {
LAB_0081f39c:
          do {
            pbVar18 = pbVar17 + 8;
            *(undefined8 *)pbVar17 = *(undefined8 *)__src;
            __src = __src + 4;
            pbVar17 = pbVar18;
          } while (pbVar18 < pbVar19);
        }
        else {
          pbVar13 = pbVar19;
          if (pbVar19 <= pbVar18) {
            pbVar13 = pbVar18;
          }
          if ((pbVar17 < (byte *)((long)__src +
                                 ((ulong)(pbVar13 + (~param_2 - lVar24)) & 0xfffffffffffffff8) + 8))
             && (__src < (ushort *)
                         (param_2 + 8 +
                         lVar24 + ((ulong)(pbVar13 + (~param_2 - lVar24)) & 0xfffffffffffffff8))))
          goto LAB_0081f39c;
          uVar7 = ((ulong)(pbVar11 + (~param_2 - lVar24)) >> 3) + 1;
          uVar8 = uVar7 & 0x3ffffffffffffff8;
          uVar25 = (uVar8 - 8 >> 3) + 1;
          lVar15 = 0;
          if (uVar8 - 8 != 0) {
            lVar12 = -(uVar25 & 0x3ffffffffffffffe);
            puVar23 = (undefined8 *)(param_2 + 0x40 + lVar24);
            puVar10 = __src + 0x20;
            do {
              uVar26 = *(undefined8 *)(puVar10 + -0x20);
              uVar28 = *(undefined8 *)(puVar10 + -0x14);
              uVar27 = *(undefined8 *)(puVar10 + -0x18);
              lVar15 = lVar15 + 0x10;
              lVar12 = lVar12 + 2;
              uVar30 = *(undefined8 *)(puVar10 + -0xc);
              uVar29 = *(undefined8 *)(puVar10 + -0x10);
              uVar32 = *(undefined8 *)(puVar10 + -4);
              uVar31 = *(undefined8 *)(puVar10 + -8);
              puVar23[-7] = *(undefined8 *)(puVar10 + -0x1c);
              puVar23[-8] = uVar26;
              puVar23[-5] = uVar28;
              puVar23[-6] = uVar27;
              puVar23[-3] = uVar30;
              puVar23[-4] = uVar29;
              puVar23[-1] = uVar32;
              puVar23[-2] = uVar31;
              uVar26 = *(undefined8 *)puVar10;
              uVar28 = *(undefined8 *)(puVar10 + 0xc);
              uVar27 = *(undefined8 *)(puVar10 + 8);
              uVar30 = *(undefined8 *)(puVar10 + 0x14);
              uVar29 = *(undefined8 *)(puVar10 + 0x10);
              uVar32 = *(undefined8 *)(puVar10 + 0x1c);
              uVar31 = *(undefined8 *)(puVar10 + 0x18);
              puVar23[1] = *(undefined8 *)(puVar10 + 4);
              *puVar23 = uVar26;
              puVar23[3] = uVar28;
              puVar23[2] = uVar27;
              puVar10 = puVar10 + 0x40;
              puVar23[5] = uVar30;
              puVar23[4] = uVar29;
              puVar23[7] = uVar32;
              puVar23[6] = uVar31;
              puVar23 = puVar23 + 0x10;
            } while (lVar12 != 0);
          }
          if ((uVar25 & 1) != 0) {
            puVar10 = __src + lVar15 * 4;
            pbVar18 = pbVar17 + lVar15 * 8;
            uVar26 = *(undefined8 *)puVar10;
            uVar28 = *(undefined8 *)(puVar10 + 0xc);
            uVar27 = *(undefined8 *)(puVar10 + 8);
            uVar30 = *(undefined8 *)(puVar10 + 0x14);
            uVar29 = *(undefined8 *)(puVar10 + 0x10);
            uVar32 = *(undefined8 *)(puVar10 + 0x1c);
            uVar31 = *(undefined8 *)(puVar10 + 0x18);
            *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(puVar10 + 4);
            *(undefined8 *)pbVar18 = uVar26;
            *(undefined8 *)(pbVar18 + 0x18) = uVar28;
            *(undefined8 *)(pbVar18 + 0x10) = uVar27;
            *(undefined8 *)(pbVar18 + 0x28) = uVar30;
            *(undefined8 *)(pbVar18 + 0x20) = uVar29;
            *(undefined8 *)(pbVar18 + 0x38) = uVar32;
            *(undefined8 *)(pbVar18 + 0x30) = uVar31;
          }
          if (uVar7 != uVar8) {
            __src = __src + uVar8 * 4;
            pbVar17 = pbVar17 + uVar8 * 8;
            goto LAB_0081f39c;
          }
        }
        __src = puVar16 + 1;
        uVar7 = (ulong)*puVar16;
        lVar15 = uVar22 - uVar7;
LAB_0081f3fc:
        uVar25 = (ulong)bVar4 & 0xf;
        puVar23 = (undefined8 *)(param_2 + uVar22);
        if (uVar25 == 0xf) {
          uVar6 = 0;
          puVar10 = __src;
          puVar16 = __src;
          if (__src <= pbVar1 + -5) {
            puVar16 = (ushort *)(pbVar1 + -5);
          }
          do {
            __src = (ushort *)((long)puVar10 + 1);
            uVar5 = *puVar10;
            if (puVar16 == puVar10) {
              __src = (ushort *)((long)puVar10 + 1);
              goto LAB_0081f824;
            }
            uVar6 = uVar6 + (byte)uVar5;
            puVar10 = __src;
          } while ((byte)uVar5 == 0xff);
          uVar25 = (ulong)uVar6 + 0xf;
          if (CARRY8((ulong)puVar23,uVar25)) goto LAB_0081f824;
        }
        if (lVar15 < -0x10000) goto LAB_0081f824;
        lVar24 = uVar22 + uVar25 + 4;
        puVar3 = (undefined8 *)(param_2 + lVar15);
        pbVar17 = (byte *)(param_2 + lVar24);
        if (uVar7 < 8) {
          *(undefined4 *)puVar23 = 0;
          *(undefined1 *)puVar23 = *(undefined1 *)puVar3;
          *(undefined1 *)((long)puVar23 + 1) = *(undefined1 *)((long)puVar3 + 1);
          uVar6 = *(uint *)(&DAT_03cbf740 + uVar7 * 4);
          *(undefined1 *)((long)puVar23 + 2) = *(undefined1 *)((long)puVar3 + 2);
          *(undefined1 *)((long)puVar23 + 3) = *(undefined1 *)((long)puVar3 + 3);
          *(undefined4 *)((long)puVar23 + 4) = *(undefined4 *)((long)puVar3 + (ulong)uVar6);
          pbVar19 = (byte *)((long)((long)puVar3 + (ulong)uVar6) -
                            (long)*(int *)(&DAT_03cbf320 + uVar7 * 4));
        }
        else {
          pbVar19 = (byte *)(puVar3 + 1);
          *puVar23 = *puVar3;
        }
        puVar16 = __src;
        if ((byte *)(lVar2 + -0xc) < pbVar17) {
          pbVar18 = (byte *)(puVar23 + 1);
          if ((byte *)(lVar2 + -5) < pbVar17) goto LAB_0081f824;
          if (pbVar18 < pbVar21) {
            uVar7 = (uVar20 - 0x10) - uVar22;
            pbVar11 = pbVar19;
            if (uVar7 < 0x38) {
              pbVar13 = pbVar18;
LAB_0081f6f8:
              do {
                pbVar14 = pbVar13 + 8;
                *(undefined8 *)pbVar13 = *(undefined8 *)pbVar11;
                pbVar11 = pbVar11 + 8;
                pbVar13 = pbVar14;
              } while (pbVar14 < pbVar21);
            }
            else {
              if ((pbVar18 < pbVar19 + (uVar7 & 0xfffffffffffffff8) + 8) &&
                 (pbVar13 = pbVar18,
                 pbVar19 < (byte *)(param_2 + 0x10 + uVar22 + (uVar7 & 0xfffffffffffffff8))))
              goto LAB_0081f6f8;
              lVar15 = 0;
              uVar7 = (uVar7 >> 3) + 1;
              uVar9 = uVar7 & 0x3ffffffffffffff8;
              uVar8 = (uVar9 - 8 >> 3) + 1;
              if (uVar9 - 8 != 0) {
                lVar12 = -(uVar8 & 0x3ffffffffffffffe);
                puVar23 = (undefined8 *)(param_2 + 0x48 + uVar22);
                pbVar11 = pbVar19 + 0x40;
                do {
                  uVar26 = *(undefined8 *)(pbVar11 + -0x40);
                  uVar28 = *(undefined8 *)(pbVar11 + -0x28);
                  uVar27 = *(undefined8 *)(pbVar11 + -0x30);
                  lVar15 = lVar15 + 0x10;
                  lVar12 = lVar12 + 2;
                  uVar30 = *(undefined8 *)(pbVar11 + -0x18);
                  uVar29 = *(undefined8 *)(pbVar11 + -0x20);
                  uVar32 = *(undefined8 *)(pbVar11 + -8);
                  uVar31 = *(undefined8 *)(pbVar11 + -0x10);
                  puVar23[-7] = *(undefined8 *)(pbVar11 + -0x38);
                  puVar23[-8] = uVar26;
                  puVar23[-5] = uVar28;
                  puVar23[-6] = uVar27;
                  puVar23[-3] = uVar30;
                  puVar23[-4] = uVar29;
                  puVar23[-1] = uVar32;
                  puVar23[-2] = uVar31;
                  uVar26 = *(undefined8 *)pbVar11;
                  uVar28 = *(undefined8 *)(pbVar11 + 0x18);
                  uVar27 = *(undefined8 *)(pbVar11 + 0x10);
                  uVar30 = *(undefined8 *)(pbVar11 + 0x28);
                  uVar29 = *(undefined8 *)(pbVar11 + 0x20);
                  uVar32 = *(undefined8 *)(pbVar11 + 0x38);
                  uVar31 = *(undefined8 *)(pbVar11 + 0x30);
                  puVar23[1] = *(undefined8 *)(pbVar11 + 8);
                  *puVar23 = uVar26;
                  puVar23[3] = uVar28;
                  puVar23[2] = uVar27;
                  pbVar11 = pbVar11 + 0x80;
                  puVar23[5] = uVar30;
                  puVar23[4] = uVar29;
                  puVar23[7] = uVar32;
                  puVar23[6] = uVar31;
                  puVar23 = puVar23 + 0x10;
                } while (lVar12 != 0);
              }
              if ((uVar8 & 1) != 0) {
                pbVar11 = pbVar19 + lVar15 * 8;
                pbVar13 = pbVar18 + lVar15 * 8;
                uVar26 = *(undefined8 *)pbVar11;
                uVar28 = *(undefined8 *)(pbVar11 + 0x18);
                uVar27 = *(undefined8 *)(pbVar11 + 0x10);
                uVar30 = *(undefined8 *)(pbVar11 + 0x28);
                uVar29 = *(undefined8 *)(pbVar11 + 0x20);
                uVar32 = *(undefined8 *)(pbVar11 + 0x38);
                uVar31 = *(undefined8 *)(pbVar11 + 0x30);
                *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar11 + 8);
                *(undefined8 *)pbVar13 = uVar26;
                *(undefined8 *)(pbVar13 + 0x18) = uVar28;
                *(undefined8 *)(pbVar13 + 0x10) = uVar27;
                *(undefined8 *)(pbVar13 + 0x28) = uVar30;
                *(undefined8 *)(pbVar13 + 0x20) = uVar29;
                *(undefined8 *)(pbVar13 + 0x38) = uVar32;
                *(undefined8 *)(pbVar13 + 0x30) = uVar31;
              }
              if (uVar7 != uVar9) {
                pbVar11 = pbVar19 + uVar9 * 8;
                pbVar13 = pbVar18 + uVar9 * 8;
                goto LAB_0081f6f8;
              }
            }
            pbVar19 = pbVar19 + ((long)pbVar21 - (long)pbVar18);
            pbVar18 = pbVar21;
          }
          if (pbVar18 < pbVar17) {
            lVar15 = (uVar25 + uVar22) - (long)pbVar18;
            uVar7 = param_2 + 4 + lVar15;
            if ((0x3f < uVar7) &&
               ((pbVar19 + lVar15 + param_2 + 4 <= pbVar18 || (pbVar17 <= pbVar19)))) {
              uVar9 = uVar7 & 0xffffffffffffffc0;
              uVar8 = (uVar9 - 0x40 >> 6) + 1;
              lVar15 = 0;
              if (uVar9 - 0x40 != 0) {
                lVar12 = -(uVar8 & 0x7fffffffffffffe);
                do {
                  pbVar17 = pbVar19 + lVar15 + 0x70;
                  pbVar11 = pbVar18 + lVar15 + 0x40;
                  lVar15 = lVar15 + 0x80;
                  uVar26 = *(undefined8 *)(pbVar17 + -0x70);
                  uVar28 = *(undefined8 *)(pbVar17 + -0x58);
                  uVar27 = *(undefined8 *)(pbVar17 + -0x60);
                  uVar30 = *(undefined8 *)(pbVar17 + -0x48);
                  uVar29 = *(undefined8 *)(pbVar17 + -0x50);
                  uVar32 = *(undefined8 *)(pbVar17 + -0x38);
                  uVar31 = *(undefined8 *)(pbVar17 + -0x40);
                  *(undefined8 *)(pbVar11 + -0x38) = *(undefined8 *)(pbVar17 + -0x68);
                  *(undefined8 *)(pbVar11 + -0x40) = uVar26;
                  *(undefined8 *)(pbVar11 + -0x28) = uVar28;
                  *(undefined8 *)(pbVar11 + -0x30) = uVar27;
                  lVar12 = lVar12 + 2;
                  *(undefined8 *)(pbVar11 + -0x18) = uVar30;
                  *(undefined8 *)(pbVar11 + -0x20) = uVar29;
                  *(undefined8 *)(pbVar11 + -8) = uVar32;
                  *(undefined8 *)(pbVar11 + -0x10) = uVar31;
                  uVar26 = *(undefined8 *)(pbVar17 + -0x30);
                  uVar28 = *(undefined8 *)(pbVar17 + -0x18);
                  uVar27 = *(undefined8 *)(pbVar17 + -0x20);
                  uVar30 = *(undefined8 *)(pbVar17 + -8);
                  uVar29 = *(undefined8 *)(pbVar17 + -0x10);
                  uVar32 = *(undefined8 *)(pbVar17 + 8);
                  uVar31 = *(undefined8 *)pbVar17;
                  *(undefined8 *)(pbVar11 + 8) = *(undefined8 *)(pbVar17 + -0x28);
                  *(undefined8 *)pbVar11 = uVar26;
                  *(undefined8 *)(pbVar11 + 0x18) = uVar28;
                  *(undefined8 *)(pbVar11 + 0x10) = uVar27;
                  *(undefined8 *)(pbVar11 + 0x28) = uVar30;
                  *(undefined8 *)(pbVar11 + 0x20) = uVar29;
                  *(undefined8 *)(pbVar11 + 0x38) = uVar32;
                  *(undefined8 *)(pbVar11 + 0x30) = uVar31;
                } while (lVar12 != 0);
              }
              if ((uVar8 & 1) != 0) {
                pbVar17 = pbVar19 + lVar15;
                uVar26 = *(undefined8 *)pbVar17;
                uVar28 = *(undefined8 *)(pbVar17 + 0x18);
                uVar27 = *(undefined8 *)(pbVar17 + 0x10);
                uVar30 = *(undefined8 *)(pbVar17 + 0x28);
                uVar29 = *(undefined8 *)(pbVar17 + 0x20);
                uVar32 = *(undefined8 *)(pbVar17 + 0x38);
                uVar31 = *(undefined8 *)(pbVar17 + 0x30);
                pbVar11 = pbVar18 + lVar15;
                *(undefined8 *)(pbVar11 + 8) = *(undefined8 *)(pbVar17 + 8);
                *(undefined8 *)pbVar11 = uVar26;
                *(undefined8 *)(pbVar11 + 0x18) = uVar28;
                *(undefined8 *)(pbVar11 + 0x10) = uVar27;
                *(undefined8 *)(pbVar11 + 0x28) = uVar30;
                *(undefined8 *)(pbVar11 + 0x20) = uVar29;
                *(undefined8 *)(pbVar11 + 0x38) = uVar32;
                *(undefined8 *)(pbVar11 + 0x30) = uVar31;
              }
              if (uVar9 == uVar7) goto LAB_0081f240;
              pbVar18 = pbVar18 + uVar9;
              pbVar19 = pbVar19 + uVar9;
            }
            pbVar18 = pbVar18 + -4;
            do {
              pbVar18[4] = *pbVar19;
              pbVar18 = pbVar18 + 1;
              pbVar19 = pbVar19 + 1;
            } while ((byte *)(param_2 + uVar25 + uVar22) != pbVar18);
          }
          goto LAB_0081f240;
        }
        puVar23[1] = *(undefined8 *)pbVar19;
        if (0xc < uVar25) {
          pbVar18 = (byte *)(param_2 + 0x18 + uVar22);
          pbVar11 = pbVar17;
          if (pbVar17 <= pbVar18) {
            pbVar11 = pbVar18;
          }
          pbVar13 = (byte *)(puVar23 + 2);
          if ((byte *)0x37 < pbVar11 + ((-0x11 - param_2) - uVar22)) {
            pbVar14 = pbVar17;
            if (pbVar17 <= pbVar18) {
              pbVar14 = pbVar18;
            }
            if ((pbVar19 + ((ulong)(pbVar14 + ((-0x11 - param_2) - uVar22)) & 0xfffffffffffffff8) +
                           0x10 <= pbVar13) ||
               ((byte *)(param_2 + 0x18 +
                        uVar22 + ((ulong)(pbVar14 + ((-0x11 - param_2) - uVar22)) &
                                 0xfffffffffffffff8)) <= pbVar19 + 8)) {
              uVar7 = ((ulong)(pbVar11 + ((-0x11 - param_2) - uVar22)) >> 3) + 1;
              uVar8 = uVar7 & 0x3ffffffffffffff8;
              uVar25 = (uVar8 - 8 >> 3) + 1;
              lVar15 = 0;
              if (uVar8 - 8 != 0) {
                lVar12 = -(uVar25 & 0x3ffffffffffffffe);
                puVar23 = (undefined8 *)(param_2 + 0x40 + uVar22);
                pbVar18 = pbVar19 + 0x48;
                do {
                  uVar26 = *(undefined8 *)(pbVar18 + -0x40);
                  uVar28 = *(undefined8 *)(pbVar18 + -0x28);
                  uVar27 = *(undefined8 *)(pbVar18 + -0x30);
                  lVar15 = lVar15 + 0x10;
                  lVar12 = lVar12 + 2;
                  uVar30 = *(undefined8 *)(pbVar18 + -0x18);
                  uVar29 = *(undefined8 *)(pbVar18 + -0x20);
                  uVar32 = *(undefined8 *)(pbVar18 + -8);
                  uVar31 = *(undefined8 *)(pbVar18 + -0x10);
                  puVar23[-5] = *(undefined8 *)(pbVar18 + -0x38);
                  puVar23[-6] = uVar26;
                  puVar23[-3] = uVar28;
                  puVar23[-4] = uVar27;
                  puVar23[-1] = uVar30;
                  puVar23[-2] = uVar29;
                  puVar23[1] = uVar32;
                  *puVar23 = uVar31;
                  uVar26 = *(undefined8 *)pbVar18;
                  uVar28 = *(undefined8 *)(pbVar18 + 0x18);
                  uVar27 = *(undefined8 *)(pbVar18 + 0x10);
                  uVar30 = *(undefined8 *)(pbVar18 + 0x28);
                  uVar29 = *(undefined8 *)(pbVar18 + 0x20);
                  uVar32 = *(undefined8 *)(pbVar18 + 0x38);
                  uVar31 = *(undefined8 *)(pbVar18 + 0x30);
                  puVar23[3] = *(undefined8 *)(pbVar18 + 8);
                  puVar23[2] = uVar26;
                  puVar23[5] = uVar28;
                  puVar23[4] = uVar27;
                  pbVar18 = pbVar18 + 0x80;
                  puVar23[7] = uVar30;
                  puVar23[6] = uVar29;
                  puVar23[9] = uVar32;
                  puVar23[8] = uVar31;
                  puVar23 = puVar23 + 0x10;
                } while (lVar12 != 0);
              }
              if ((uVar25 & 1) != 0) {
                lVar15 = lVar15 * 8;
                pbVar18 = pbVar13 + lVar15;
                uVar26 = *(undefined8 *)(pbVar19 + lVar15 + 8);
                uVar28 = *(undefined8 *)(pbVar19 + lVar15 + 0x20);
                uVar27 = *(undefined8 *)(pbVar19 + lVar15 + 0x18);
                uVar30 = *(undefined8 *)(pbVar19 + lVar15 + 0x30);
                uVar29 = *(undefined8 *)(pbVar19 + lVar15 + 0x28);
                uVar32 = *(undefined8 *)(pbVar19 + lVar15 + 0x40);
                uVar31 = *(undefined8 *)(pbVar19 + lVar15 + 0x38);
                *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar19 + lVar15 + 0x10);
                *(undefined8 *)pbVar18 = uVar26;
                *(undefined8 *)(pbVar18 + 0x18) = uVar28;
                *(undefined8 *)(pbVar18 + 0x10) = uVar27;
                *(undefined8 *)(pbVar18 + 0x28) = uVar30;
                *(undefined8 *)(pbVar18 + 0x20) = uVar29;
                *(undefined8 *)(pbVar18 + 0x38) = uVar32;
                *(undefined8 *)(pbVar18 + 0x30) = uVar31;
              }
              if (uVar7 == uVar8) goto LAB_0081f240;
              pbVar19 = pbVar19 + uVar8 * 8;
              pbVar13 = pbVar13 + uVar8 * 8;
            }
          }
          do {
            pbVar19 = pbVar19 + 8;
            pbVar18 = pbVar13 + 8;
            *(undefined8 *)pbVar13 = *(undefined8 *)pbVar19;
            pbVar13 = pbVar18;
          } while (pbVar18 < pbVar17);
        }
        goto LAB_0081f240;
      }
      if (((long)uVar22 <= (long)uVar20) && ((byte *)((long)__src + uVar7) == pbVar1)) {
        memmove(pbVar17,__src,uVar7);
        goto LAB_0081f82c;
      }
LAB_0081f824:
      uVar22 = (ulong)(~(uint)__src + (int)param_1);
      goto LAB_0081f82c;
    }
    uVar22 = 0xffffffff;
  }
LAB_0081f82c:
  return uVar22 & 0xffffffff;
}


