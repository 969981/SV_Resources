/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081f870; name: FUN_0081f870
 */


int FUN_0081f870(ushort *param_1,byte *param_2,int param_3,uint param_4,long param_5,ulong param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  size_t __n;
  ushort uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *__src;
  byte *pbVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if ((param_1 != (ushort *)0x0) && (-1 < (int)param_4)) {
    lVar4 = 0;
    if (param_5 != 0) {
      lVar4 = param_5 + param_6;
    }
    if (param_4 == 0) {
      if (param_3 == 1) {
        return -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      pbVar2 = param_2 + param_4;
      pbVar14 = pbVar2 + -7;
      pbVar9 = param_2;
      puVar22 = param_1;
LAB_0081f93c:
      do {
        __src = (ushort *)((long)puVar22 + 1);
        bVar5 = (byte)*puVar22;
        uVar10 = (ulong)(bVar5 >> 4);
        if (bVar5 >> 4 == 0xf) {
          if (pbVar1 + -0xf <= __src) goto LAB_008200a4;
          uVar13 = 0;
          puVar22 = __src;
          do {
            __src = (ushort *)((long)puVar22 + 1);
            uVar6 = *puVar22;
            uVar13 = uVar13 + (byte)uVar6;
            if (pbVar1 + -0xf <= __src) break;
            puVar22 = __src;
          } while ((byte)uVar6 == 0xff);
          uVar10 = (ulong)uVar13 + 0xf;
          if ((CARRY8((ulong)pbVar9,uVar10)) || (CARRY8((ulong)__src,uVar10))) goto LAB_008200a4;
LAB_0081f990:
          pbVar12 = pbVar9 + uVar10;
          if ((pbVar2 + -0xc < pbVar12) ||
             (puVar22 = (ushort *)((long)__src + uVar10), pbVar1 + -8 < puVar22)) {
            if ((pbVar12 <= pbVar2) && ((byte *)((long)__src + uVar10) == pbVar1)) {
              memmove(pbVar9,__src,uVar10);
              return (int)pbVar12 - (int)param_2;
            }
LAB_008200a4:
            return ~(uint)__src + (int)param_1;
          }
          pbVar7 = pbVar9 + 8;
          pbVar3 = pbVar12;
          if (pbVar12 <= pbVar7) {
            pbVar3 = pbVar7;
          }
          if (pbVar3 + ~(ulong)pbVar9 < &DAT_00000038) {
LAB_0081fa8c:
            do {
              pbVar7 = pbVar9 + 8;
              *(undefined8 *)pbVar9 = *(undefined8 *)__src;
              pbVar9 = pbVar7;
              __src = __src + 4;
            } while (pbVar7 < pbVar12);
          }
          else {
            pbVar23 = pbVar12;
            if (pbVar12 <= pbVar7) {
              pbVar23 = pbVar7;
            }
            if (pbVar9 < (byte *)((long)__src +
                                 ((ulong)(pbVar23 + ~(ulong)pbVar9) & 0xfffffffffffffff8) + 8)) {
              if (__src < pbVar7 + ((ulong)(pbVar23 + ~(ulong)pbVar9) & 0xfffffffffffffff8))
              goto LAB_0081fa8c;
            }
            uVar10 = ((ulong)(pbVar3 + ~(ulong)pbVar9) >> 3) + 1;
            uVar16 = uVar10 & 0x3ffffffffffffff8;
            uVar11 = (uVar16 - 8 >> 3) + 1;
            lVar19 = 0;
            if (uVar16 - 8 != 0) {
              lVar20 = -(uVar11 & 0x3ffffffffffffffe);
              pbVar7 = pbVar9 + 0x40;
              puVar21 = __src + 0x20;
              do {
                uVar24 = *(undefined8 *)(puVar21 + -0x20);
                uVar26 = *(undefined8 *)(puVar21 + -0x14);
                uVar25 = *(undefined8 *)(puVar21 + -0x18);
                lVar19 = lVar19 + 0x10;
                lVar20 = lVar20 + 2;
                uVar28 = *(undefined8 *)(puVar21 + -0xc);
                uVar27 = *(undefined8 *)(puVar21 + -0x10);
                uVar30 = *(undefined8 *)(puVar21 + -4);
                uVar29 = *(undefined8 *)(puVar21 + -8);
                *(undefined8 *)(pbVar7 + -0x38) = *(undefined8 *)(puVar21 + -0x1c);
                *(undefined8 *)(pbVar7 + -0x40) = uVar24;
                *(undefined8 *)(pbVar7 + -0x28) = uVar26;
                *(undefined8 *)(pbVar7 + -0x30) = uVar25;
                *(undefined8 *)(pbVar7 + -0x18) = uVar28;
                *(undefined8 *)(pbVar7 + -0x20) = uVar27;
                *(undefined8 *)(pbVar7 + -8) = uVar30;
                *(undefined8 *)(pbVar7 + -0x10) = uVar29;
                uVar24 = *(undefined8 *)puVar21;
                uVar26 = *(undefined8 *)(puVar21 + 0xc);
                uVar25 = *(undefined8 *)(puVar21 + 8);
                uVar28 = *(undefined8 *)(puVar21 + 0x14);
                uVar27 = *(undefined8 *)(puVar21 + 0x10);
                uVar30 = *(undefined8 *)(puVar21 + 0x1c);
                uVar29 = *(undefined8 *)(puVar21 + 0x18);
                *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(puVar21 + 4);
                *(undefined8 *)pbVar7 = uVar24;
                *(undefined8 *)(pbVar7 + 0x18) = uVar26;
                *(undefined8 *)(pbVar7 + 0x10) = uVar25;
                puVar21 = puVar21 + 0x40;
                *(undefined8 *)(pbVar7 + 0x28) = uVar28;
                *(undefined8 *)(pbVar7 + 0x20) = uVar27;
                *(undefined8 *)(pbVar7 + 0x38) = uVar30;
                *(undefined8 *)(pbVar7 + 0x30) = uVar29;
                pbVar7 = pbVar7 + 0x80;
              } while (lVar20 != 0);
            }
            if ((uVar11 & 1) != 0) {
              puVar21 = __src + lVar19 * 4;
              pbVar7 = pbVar9 + lVar19 * 8;
              uVar24 = *(undefined8 *)puVar21;
              uVar26 = *(undefined8 *)(puVar21 + 0xc);
              uVar25 = *(undefined8 *)(puVar21 + 8);
              uVar28 = *(undefined8 *)(puVar21 + 0x14);
              uVar27 = *(undefined8 *)(puVar21 + 0x10);
              uVar30 = *(undefined8 *)(puVar21 + 0x1c);
              uVar29 = *(undefined8 *)(puVar21 + 0x18);
              *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(puVar21 + 4);
              *(undefined8 *)pbVar7 = uVar24;
              *(undefined8 *)(pbVar7 + 0x18) = uVar26;
              *(undefined8 *)(pbVar7 + 0x10) = uVar25;
              *(undefined8 *)(pbVar7 + 0x28) = uVar28;
              *(undefined8 *)(pbVar7 + 0x20) = uVar27;
              *(undefined8 *)(pbVar7 + 0x38) = uVar30;
              *(undefined8 *)(pbVar7 + 0x30) = uVar29;
            }
            if (uVar10 != uVar16) {
              pbVar9 = pbVar9 + uVar16 * 8;
              __src = __src + uVar16 * 4;
              goto LAB_0081fa8c;
            }
          }
          __src = puVar22 + 1;
          uVar10 = (ulong)*puVar22;
          pbVar7 = pbVar12 + -uVar10;
        }
        else {
          if ((pbVar2 + -0x20 < pbVar9) || (pbVar1 + -0x10 <= __src)) goto LAB_0081f990;
          uVar24 = *(undefined8 *)__src;
          puVar21 = (ushort *)((long)__src + uVar10);
          pbVar12 = pbVar9 + uVar10;
          *(undefined8 *)(pbVar9 + 8) = *(undefined8 *)((long)puVar22 + 9);
          *(undefined8 *)pbVar9 = uVar24;
          __src = puVar21 + 1;
          uVar6 = *puVar21;
          uVar10 = (ulong)uVar6;
          uVar11 = (ulong)bVar5 & 0xf;
          pbVar7 = pbVar12 + -uVar10;
          if ((((int)uVar11 != 0xf) && (7 < uVar6)) && (param_2 <= pbVar7)) {
            *(undefined8 *)pbVar12 = *(undefined8 *)pbVar7;
            *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)(pbVar7 + 8);
            pbVar9 = pbVar12 + uVar11 + 4;
            *(undefined2 *)(pbVar12 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
            puVar22 = __src;
            goto LAB_0081f93c;
          }
        }
        uVar11 = (ulong)bVar5 & 0xf;
        if (uVar11 == 0xf) {
          uVar13 = 0;
          puVar22 = __src;
          if (__src <= pbVar1 + -5) {
            puVar22 = (ushort *)(pbVar1 + -5);
          }
          puVar21 = __src;
          do {
            __src = (ushort *)((long)puVar21 + 1);
            uVar6 = *puVar21;
            if (puVar22 == puVar21) {
              __src = (ushort *)((long)puVar21 + 1);
              goto LAB_008200a4;
            }
            uVar13 = uVar13 + (byte)uVar6;
            puVar21 = __src;
          } while ((byte)uVar6 == 0xff);
          uVar11 = (ulong)uVar13 + 0xf;
          if (CARRY8((ulong)pbVar12,uVar11)) goto LAB_008200a4;
        }
        if ((param_6 >> 0x10 == 0) && (pbVar7 + param_6 < param_2)) goto LAB_008200a4;
        uVar16 = uVar11 + 4;
        pbVar3 = pbVar12 + uVar16;
        pbVar9 = pbVar3;
        puVar22 = __src;
        if (param_2 <= pbVar7) {
          if (uVar10 < 8) {
            pbVar12[0] = 0;
            pbVar12[1] = 0;
            pbVar12[2] = 0;
            pbVar12[3] = 0;
            *pbVar12 = *pbVar7;
            pbVar12[1] = pbVar7[1];
            uVar13 = *(uint *)(&DAT_03cbf740 + uVar10 * 4);
            pbVar12[2] = pbVar7[2];
            pbVar12[3] = pbVar7[3];
            *(undefined4 *)(pbVar12 + 4) = *(undefined4 *)(pbVar7 + uVar13);
            pbVar23 = pbVar7 + uVar13 + -(long)*(int *)(&DAT_03cbf320 + uVar10 * 4);
          }
          else {
            pbVar23 = pbVar7 + 8;
            *(undefined8 *)pbVar12 = *(undefined8 *)pbVar7;
          }
          if (pbVar3 <= pbVar2 + -0xc) {
            *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)pbVar23;
            if (0xc < uVar11) {
              pbVar7 = pbVar12 + 0x18;
              pbVar15 = pbVar3;
              if (pbVar3 <= pbVar7) {
                pbVar15 = pbVar7;
              }
              pbVar18 = pbVar12 + 0x10;
              if ((byte *)0x37 < pbVar15 + (-0x11 - (long)pbVar12)) {
                pbVar8 = pbVar3;
                if (pbVar3 <= pbVar7) {
                  pbVar8 = pbVar7;
                }
                if ((pbVar23 + ((ulong)(pbVar8 + (-0x11 - (long)pbVar12)) & 0xfffffffffffffff8) +
                               0x10 <= pbVar18) ||
                   (pbVar7 + ((ulong)(pbVar8 + (-0x11 - (long)pbVar12)) & 0xfffffffffffffff8) <=
                    pbVar23 + 8)) {
                  uVar10 = ((ulong)(pbVar15 + (-0x11 - (long)pbVar12)) >> 3) + 1;
                  uVar16 = uVar10 & 0x3ffffffffffffff8;
                  uVar11 = (uVar16 - 8 >> 3) + 1;
                  lVar19 = 0;
                  if (uVar16 - 8 != 0) {
                    lVar20 = -(uVar11 & 0x3ffffffffffffffe);
                    pbVar12 = pbVar12 + 0x40;
                    pbVar7 = pbVar23 + 0x48;
                    do {
                      uVar24 = *(undefined8 *)(pbVar7 + -0x40);
                      uVar26 = *(undefined8 *)(pbVar7 + -0x28);
                      uVar25 = *(undefined8 *)(pbVar7 + -0x30);
                      lVar19 = lVar19 + 0x10;
                      lVar20 = lVar20 + 2;
                      uVar28 = *(undefined8 *)(pbVar7 + -0x18);
                      uVar27 = *(undefined8 *)(pbVar7 + -0x20);
                      uVar30 = *(undefined8 *)(pbVar7 + -8);
                      uVar29 = *(undefined8 *)(pbVar7 + -0x10);
                      *(undefined8 *)(pbVar12 + -0x28) = *(undefined8 *)(pbVar7 + -0x38);
                      *(undefined8 *)(pbVar12 + -0x30) = uVar24;
                      *(undefined8 *)(pbVar12 + -0x18) = uVar26;
                      *(undefined8 *)(pbVar12 + -0x20) = uVar25;
                      *(undefined8 *)(pbVar12 + -8) = uVar28;
                      *(undefined8 *)(pbVar12 + -0x10) = uVar27;
                      *(undefined8 *)(pbVar12 + 8) = uVar30;
                      *(undefined8 *)pbVar12 = uVar29;
                      uVar24 = *(undefined8 *)pbVar7;
                      uVar26 = *(undefined8 *)(pbVar7 + 0x18);
                      uVar25 = *(undefined8 *)(pbVar7 + 0x10);
                      uVar28 = *(undefined8 *)(pbVar7 + 0x28);
                      uVar27 = *(undefined8 *)(pbVar7 + 0x20);
                      uVar30 = *(undefined8 *)(pbVar7 + 0x38);
                      uVar29 = *(undefined8 *)(pbVar7 + 0x30);
                      *(undefined8 *)(pbVar12 + 0x18) = *(undefined8 *)(pbVar7 + 8);
                      *(undefined8 *)(pbVar12 + 0x10) = uVar24;
                      *(undefined8 *)(pbVar12 + 0x28) = uVar26;
                      *(undefined8 *)(pbVar12 + 0x20) = uVar25;
                      pbVar7 = pbVar7 + 0x80;
                      *(undefined8 *)(pbVar12 + 0x38) = uVar28;
                      *(undefined8 *)(pbVar12 + 0x30) = uVar27;
                      *(undefined8 *)(pbVar12 + 0x48) = uVar30;
                      *(undefined8 *)(pbVar12 + 0x40) = uVar29;
                      pbVar12 = pbVar12 + 0x80;
                    } while (lVar20 != 0);
                  }
                  if ((uVar11 & 1) != 0) {
                    lVar19 = lVar19 * 8;
                    pbVar12 = pbVar18 + lVar19;
                    uVar24 = *(undefined8 *)(pbVar23 + lVar19 + 8);
                    uVar26 = *(undefined8 *)(pbVar23 + lVar19 + 0x20);
                    uVar25 = *(undefined8 *)(pbVar23 + lVar19 + 0x18);
                    uVar28 = *(undefined8 *)(pbVar23 + lVar19 + 0x30);
                    uVar27 = *(undefined8 *)(pbVar23 + lVar19 + 0x28);
                    uVar30 = *(undefined8 *)(pbVar23 + lVar19 + 0x40);
                    uVar29 = *(undefined8 *)(pbVar23 + lVar19 + 0x38);
                    *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)(pbVar23 + lVar19 + 0x10);
                    *(undefined8 *)pbVar12 = uVar24;
                    *(undefined8 *)(pbVar12 + 0x18) = uVar26;
                    *(undefined8 *)(pbVar12 + 0x10) = uVar25;
                    *(undefined8 *)(pbVar12 + 0x28) = uVar28;
                    *(undefined8 *)(pbVar12 + 0x20) = uVar27;
                    *(undefined8 *)(pbVar12 + 0x38) = uVar30;
                    *(undefined8 *)(pbVar12 + 0x30) = uVar29;
                  }
                  if (uVar10 == uVar16) goto LAB_0081f93c;
                  pbVar23 = pbVar23 + uVar16 * 8;
                  pbVar18 = pbVar18 + uVar16 * 8;
                }
              }
              do {
                pbVar23 = pbVar23 + 8;
                pbVar12 = pbVar18 + 8;
                *(undefined8 *)pbVar18 = *(undefined8 *)pbVar23;
                pbVar18 = pbVar12;
              } while (pbVar12 < pbVar3);
            }
            goto LAB_0081f93c;
          }
          pbVar7 = pbVar12 + 8;
          if (pbVar2 + -5 < pbVar3) goto LAB_008200a4;
          if (pbVar7 < pbVar14) {
            pbVar18 = param_2 + (((ulong)param_4 - 0x10) - (long)pbVar12);
            pbVar15 = pbVar23;
            if (pbVar18 < (byte *)0x38) {
              pbVar8 = pbVar7;
LAB_0081ff78:
              do {
                pbVar18 = pbVar8 + 8;
                *(undefined8 *)pbVar8 = *(undefined8 *)pbVar15;
                pbVar15 = pbVar15 + 8;
                pbVar8 = pbVar18;
              } while (pbVar18 < pbVar14);
            }
            else {
              if ((pbVar7 < pbVar23 + ((ulong)pbVar18 & 0xfffffffffffffff8) + 8) &&
                 (pbVar8 = pbVar7, pbVar23 < pbVar12 + ((ulong)pbVar18 & 0xfffffffffffffff8) + 0x10)
                 ) goto LAB_0081ff78;
              uVar10 = ((ulong)pbVar18 >> 3) + 1;
              uVar17 = uVar10 & 0x3ffffffffffffff8;
              uVar16 = (uVar17 - 8 >> 3) + 1;
              lVar19 = 0;
              if (uVar17 - 8 != 0) {
                lVar20 = -(uVar16 & 0x3ffffffffffffffe);
                pbVar15 = pbVar12 + 0x48;
                pbVar18 = pbVar23 + 0x40;
                do {
                  uVar24 = *(undefined8 *)(pbVar18 + -0x40);
                  uVar26 = *(undefined8 *)(pbVar18 + -0x28);
                  uVar25 = *(undefined8 *)(pbVar18 + -0x30);
                  lVar19 = lVar19 + 0x10;
                  lVar20 = lVar20 + 2;
                  uVar28 = *(undefined8 *)(pbVar18 + -0x18);
                  uVar27 = *(undefined8 *)(pbVar18 + -0x20);
                  uVar30 = *(undefined8 *)(pbVar18 + -8);
                  uVar29 = *(undefined8 *)(pbVar18 + -0x10);
                  *(undefined8 *)(pbVar15 + -0x38) = *(undefined8 *)(pbVar18 + -0x38);
                  *(undefined8 *)(pbVar15 + -0x40) = uVar24;
                  *(undefined8 *)(pbVar15 + -0x28) = uVar26;
                  *(undefined8 *)(pbVar15 + -0x30) = uVar25;
                  *(undefined8 *)(pbVar15 + -0x18) = uVar28;
                  *(undefined8 *)(pbVar15 + -0x20) = uVar27;
                  *(undefined8 *)(pbVar15 + -8) = uVar30;
                  *(undefined8 *)(pbVar15 + -0x10) = uVar29;
                  uVar24 = *(undefined8 *)pbVar18;
                  uVar26 = *(undefined8 *)(pbVar18 + 0x18);
                  uVar25 = *(undefined8 *)(pbVar18 + 0x10);
                  uVar28 = *(undefined8 *)(pbVar18 + 0x28);
                  uVar27 = *(undefined8 *)(pbVar18 + 0x20);
                  uVar30 = *(undefined8 *)(pbVar18 + 0x38);
                  uVar29 = *(undefined8 *)(pbVar18 + 0x30);
                  *(undefined8 *)(pbVar15 + 8) = *(undefined8 *)(pbVar18 + 8);
                  *(undefined8 *)pbVar15 = uVar24;
                  *(undefined8 *)(pbVar15 + 0x18) = uVar26;
                  *(undefined8 *)(pbVar15 + 0x10) = uVar25;
                  pbVar18 = pbVar18 + 0x80;
                  *(undefined8 *)(pbVar15 + 0x28) = uVar28;
                  *(undefined8 *)(pbVar15 + 0x20) = uVar27;
                  *(undefined8 *)(pbVar15 + 0x38) = uVar30;
                  *(undefined8 *)(pbVar15 + 0x30) = uVar29;
                  pbVar15 = pbVar15 + 0x80;
                } while (lVar20 != 0);
              }
              if ((uVar16 & 1) != 0) {
                pbVar15 = pbVar23 + lVar19 * 8;
                pbVar18 = pbVar7 + lVar19 * 8;
                uVar24 = *(undefined8 *)pbVar15;
                uVar26 = *(undefined8 *)(pbVar15 + 0x18);
                uVar25 = *(undefined8 *)(pbVar15 + 0x10);
                uVar28 = *(undefined8 *)(pbVar15 + 0x28);
                uVar27 = *(undefined8 *)(pbVar15 + 0x20);
                uVar30 = *(undefined8 *)(pbVar15 + 0x38);
                uVar29 = *(undefined8 *)(pbVar15 + 0x30);
                *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar15 + 8);
                *(undefined8 *)pbVar18 = uVar24;
                *(undefined8 *)(pbVar18 + 0x18) = uVar26;
                *(undefined8 *)(pbVar18 + 0x10) = uVar25;
                *(undefined8 *)(pbVar18 + 0x28) = uVar28;
                *(undefined8 *)(pbVar18 + 0x20) = uVar27;
                *(undefined8 *)(pbVar18 + 0x38) = uVar30;
                *(undefined8 *)(pbVar18 + 0x30) = uVar29;
              }
              if (uVar10 != uVar17) {
                pbVar15 = pbVar23 + uVar17 * 8;
                pbVar8 = pbVar7 + uVar17 * 8;
                goto LAB_0081ff78;
              }
            }
            pbVar23 = pbVar23 + ((long)pbVar14 - (long)pbVar7);
            pbVar7 = pbVar14;
          }
          if (pbVar7 < pbVar3) {
            pbVar15 = pbVar12 + (uVar11 - (long)pbVar7) + 4;
            if ((byte *)0x3f < pbVar15) {
              if (pbVar7 < pbVar23 + (long)pbVar12 + (uVar11 - (long)pbVar7) + 4) {
                if (pbVar23 < pbVar3) goto LAB_0082005c;
              }
              pbVar12 = (byte *)((ulong)pbVar15 & 0xffffffffffffffc0);
              uVar10 = ((ulong)(pbVar12 + -0x40) >> 6) + 1;
              lVar19 = 0;
              if (pbVar12 + -0x40 != (byte *)0x0) {
                lVar20 = -(uVar10 & 0x7fffffffffffffe);
                do {
                  pbVar18 = pbVar23 + lVar19 + 0x70;
                  pbVar8 = pbVar7 + lVar19 + 0x40;
                  lVar19 = lVar19 + 0x80;
                  uVar24 = *(undefined8 *)(pbVar18 + -0x70);
                  uVar26 = *(undefined8 *)(pbVar18 + -0x58);
                  uVar25 = *(undefined8 *)(pbVar18 + -0x60);
                  uVar28 = *(undefined8 *)(pbVar18 + -0x48);
                  uVar27 = *(undefined8 *)(pbVar18 + -0x50);
                  uVar30 = *(undefined8 *)(pbVar18 + -0x38);
                  uVar29 = *(undefined8 *)(pbVar18 + -0x40);
                  *(undefined8 *)(pbVar8 + -0x38) = *(undefined8 *)(pbVar18 + -0x68);
                  *(undefined8 *)(pbVar8 + -0x40) = uVar24;
                  *(undefined8 *)(pbVar8 + -0x28) = uVar26;
                  *(undefined8 *)(pbVar8 + -0x30) = uVar25;
                  lVar20 = lVar20 + 2;
                  *(undefined8 *)(pbVar8 + -0x18) = uVar28;
                  *(undefined8 *)(pbVar8 + -0x20) = uVar27;
                  *(undefined8 *)(pbVar8 + -8) = uVar30;
                  *(undefined8 *)(pbVar8 + -0x10) = uVar29;
                  uVar24 = *(undefined8 *)(pbVar18 + -0x30);
                  uVar26 = *(undefined8 *)(pbVar18 + -0x18);
                  uVar25 = *(undefined8 *)(pbVar18 + -0x20);
                  uVar28 = *(undefined8 *)(pbVar18 + -8);
                  uVar27 = *(undefined8 *)(pbVar18 + -0x10);
                  uVar30 = *(undefined8 *)(pbVar18 + 8);
                  uVar29 = *(undefined8 *)pbVar18;
                  *(undefined8 *)(pbVar8 + 8) = *(undefined8 *)(pbVar18 + -0x28);
                  *(undefined8 *)pbVar8 = uVar24;
                  *(undefined8 *)(pbVar8 + 0x18) = uVar26;
                  *(undefined8 *)(pbVar8 + 0x10) = uVar25;
                  *(undefined8 *)(pbVar8 + 0x28) = uVar28;
                  *(undefined8 *)(pbVar8 + 0x20) = uVar27;
                  *(undefined8 *)(pbVar8 + 0x38) = uVar30;
                  *(undefined8 *)(pbVar8 + 0x30) = uVar29;
                } while (lVar20 != 0);
              }
              if ((uVar10 & 1) != 0) {
                pbVar18 = pbVar23 + lVar19;
                pbVar8 = pbVar7 + lVar19;
                uVar24 = *(undefined8 *)pbVar18;
                uVar26 = *(undefined8 *)(pbVar18 + 0x18);
                uVar25 = *(undefined8 *)(pbVar18 + 0x10);
                uVar28 = *(undefined8 *)(pbVar18 + 0x28);
                uVar27 = *(undefined8 *)(pbVar18 + 0x20);
                uVar30 = *(undefined8 *)(pbVar18 + 0x38);
                uVar29 = *(undefined8 *)(pbVar18 + 0x30);
                *(undefined8 *)(pbVar8 + 8) = *(undefined8 *)(pbVar18 + 8);
                *(undefined8 *)pbVar8 = uVar24;
                *(undefined8 *)(pbVar8 + 0x18) = uVar26;
                *(undefined8 *)(pbVar8 + 0x10) = uVar25;
                *(undefined8 *)(pbVar8 + 0x28) = uVar28;
                *(undefined8 *)(pbVar8 + 0x20) = uVar27;
                *(undefined8 *)(pbVar8 + 0x38) = uVar30;
                *(undefined8 *)(pbVar8 + 0x30) = uVar29;
              }
              if (pbVar12 == pbVar15) goto LAB_0081f93c;
              pbVar7 = pbVar7 + (long)pbVar12;
              pbVar23 = pbVar23 + (long)pbVar12;
            }
LAB_0082005c:
            do {
              pbVar12 = pbVar7 + 1;
              *pbVar7 = *pbVar23;
              pbVar7 = pbVar12;
              pbVar23 = pbVar23 + 1;
            } while (pbVar3 != pbVar12);
          }
          goto LAB_0081f93c;
        }
        if (pbVar2 + -5 < pbVar3) goto LAB_008200a4;
        uVar10 = (long)param_2 - (long)pbVar7;
        __n = uVar16 - uVar10;
        if (!(uVar16 < uVar10 || __n == 0)) {
          memcpy(pbVar12,(void *)(lVar4 - uVar10),uVar10);
          pbVar9 = pbVar12 + uVar10;
          if (__n <= (ulong)((long)pbVar9 - (long)param_2)) {
            memcpy(pbVar9,param_2,__n);
            pbVar9 = pbVar3;
            goto LAB_0081f93c;
          }
          if ((long)uVar10 < (long)uVar16) {
            pbVar15 = pbVar12 + (long)(param_2 + 1) + -(long)pbVar7;
            pbVar23 = pbVar15;
            if (pbVar15 <= pbVar3) {
              pbVar23 = pbVar3;
            }
            pbVar23 = pbVar23 + (((long)pbVar7 - (long)pbVar12) - (long)param_2);
            pbVar18 = param_2;
            if (pbVar23 < (byte *)0x40) {
              pbVar8 = pbVar9;
            }
            else {
              if (pbVar15 <= pbVar3) {
                pbVar15 = pbVar3;
              }
              if ((pbVar15 + ((long)pbVar7 - (long)pbVar12) <= pbVar9) ||
                 (pbVar8 = pbVar9, pbVar15 <= param_2)) {
                pbVar15 = (byte *)((ulong)pbVar23 & 0xffffffffffffffc0);
                uVar10 = ((ulong)(pbVar15 + -0x40) >> 6) + 1;
                lVar19 = 0;
                if (pbVar15 + -0x40 != (byte *)0x0) {
                  lVar20 = -(uVar10 & 0x7fffffffffffffe);
                  do {
                    pbVar18 = param_2 + lVar19 + 0x70;
                    pbVar8 = pbVar12 + (long)(param_2 + 0x40) + (lVar19 - (long)pbVar7);
                    lVar19 = lVar19 + 0x80;
                    uVar24 = *(undefined8 *)(pbVar18 + -0x70);
                    uVar26 = *(undefined8 *)(pbVar18 + -0x58);
                    uVar25 = *(undefined8 *)(pbVar18 + -0x60);
                    uVar28 = *(undefined8 *)(pbVar18 + -0x48);
                    uVar27 = *(undefined8 *)(pbVar18 + -0x50);
                    uVar30 = *(undefined8 *)(pbVar18 + -0x38);
                    uVar29 = *(undefined8 *)(pbVar18 + -0x40);
                    *(undefined8 *)(pbVar8 + -0x38) = *(undefined8 *)(pbVar18 + -0x68);
                    *(undefined8 *)(pbVar8 + -0x40) = uVar24;
                    *(undefined8 *)(pbVar8 + -0x28) = uVar26;
                    *(undefined8 *)(pbVar8 + -0x30) = uVar25;
                    lVar20 = lVar20 + 2;
                    *(undefined8 *)(pbVar8 + -0x18) = uVar28;
                    *(undefined8 *)(pbVar8 + -0x20) = uVar27;
                    *(undefined8 *)(pbVar8 + -8) = uVar30;
                    *(undefined8 *)(pbVar8 + -0x10) = uVar29;
                    uVar24 = *(undefined8 *)(pbVar18 + -0x30);
                    uVar26 = *(undefined8 *)(pbVar18 + -0x18);
                    uVar25 = *(undefined8 *)(pbVar18 + -0x20);
                    uVar28 = *(undefined8 *)(pbVar18 + -8);
                    uVar27 = *(undefined8 *)(pbVar18 + -0x10);
                    uVar30 = *(undefined8 *)(pbVar18 + 8);
                    uVar29 = *(undefined8 *)pbVar18;
                    *(undefined8 *)(pbVar8 + 8) = *(undefined8 *)(pbVar18 + -0x28);
                    *(undefined8 *)pbVar8 = uVar24;
                    *(undefined8 *)(pbVar8 + 0x18) = uVar26;
                    *(undefined8 *)(pbVar8 + 0x10) = uVar25;
                    *(undefined8 *)(pbVar8 + 0x28) = uVar28;
                    *(undefined8 *)(pbVar8 + 0x20) = uVar27;
                    *(undefined8 *)(pbVar8 + 0x38) = uVar30;
                    *(undefined8 *)(pbVar8 + 0x30) = uVar29;
                  } while (lVar20 != 0);
                }
                pbVar8 = pbVar9 + (long)pbVar15;
                pbVar18 = param_2 + (long)pbVar15;
                if ((uVar10 & 1) != 0) {
                  pbVar12 = param_2 + lVar19;
                  pbVar9 = pbVar9 + lVar19;
                  uVar24 = *(undefined8 *)pbVar12;
                  uVar26 = *(undefined8 *)(pbVar12 + 0x18);
                  uVar25 = *(undefined8 *)(pbVar12 + 0x10);
                  uVar28 = *(undefined8 *)(pbVar12 + 0x28);
                  uVar27 = *(undefined8 *)(pbVar12 + 0x20);
                  uVar30 = *(undefined8 *)(pbVar12 + 0x38);
                  uVar29 = *(undefined8 *)(pbVar12 + 0x30);
                  *(undefined8 *)(pbVar9 + 8) = *(undefined8 *)(pbVar12 + 8);
                  *(undefined8 *)pbVar9 = uVar24;
                  *(undefined8 *)(pbVar9 + 0x18) = uVar26;
                  *(undefined8 *)(pbVar9 + 0x10) = uVar25;
                  *(undefined8 *)(pbVar9 + 0x28) = uVar28;
                  *(undefined8 *)(pbVar9 + 0x20) = uVar27;
                  *(undefined8 *)(pbVar9 + 0x38) = uVar30;
                  *(undefined8 *)(pbVar9 + 0x30) = uVar29;
                }
                pbVar9 = pbVar8;
                if (pbVar15 == pbVar23) goto LAB_0081f93c;
              }
            }
            do {
              pbVar9 = pbVar8 + 1;
              *pbVar8 = *pbVar18;
              pbVar8 = pbVar9;
              pbVar18 = pbVar18 + 1;
            } while (pbVar9 < pbVar3);
          }
          goto LAB_0081f93c;
        }
        memmove(pbVar12,(void *)(lVar4 - uVar10),uVar16);
      } while( true );
    }
  }
  return -1;
}


