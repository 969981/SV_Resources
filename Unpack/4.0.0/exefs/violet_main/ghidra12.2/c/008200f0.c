/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008200f0; name: FUN_008200f0
 */


int FUN_008200f0(ushort *param_1,byte *param_2,int param_3,uint param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *__src;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *__dest;
  byte *pbVar11;
  ushort *puVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if ((param_1 != (ushort *)0x0) && (-1 < (int)param_4)) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        return -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      pbVar2 = param_2 + param_4;
      pbVar13 = pbVar2 + -7;
      puVar5 = param_1;
      __dest = param_2;
LAB_00820194:
      do {
        while( true ) {
          __src = (ushort *)((long)puVar5 + 1);
          bVar3 = (byte)*puVar5;
          uVar7 = (ulong)(bVar3 >> 4);
          if (bVar3 >> 4 == 0xf) break;
          if ((pbVar2 + -0x20 < __dest) || (pbVar1 + -0x10 <= __src)) goto LAB_008201e8;
          uVar21 = *(undefined8 *)__src;
          puVar12 = (ushort *)((long)__src + uVar7);
          pbVar10 = __dest + uVar7;
          *(undefined8 *)(__dest + 8) = *(undefined8 *)((long)puVar5 + 9);
          *(undefined8 *)__dest = uVar21;
          __src = puVar12 + 1;
          uVar4 = *puVar12;
          uVar7 = (ulong)uVar4;
          uVar14 = (ulong)bVar3 & 0xf;
          pbVar11 = pbVar10 + -uVar7;
          if ((((int)uVar14 == 0xf) || (uVar4 < 8)) || (pbVar11 < param_2 + -param_5))
          goto LAB_00820348;
          *(undefined8 *)pbVar10 = *(undefined8 *)pbVar11;
          *(undefined8 *)(pbVar10 + 8) = *(undefined8 *)(pbVar11 + 8);
          *(undefined2 *)(pbVar10 + 0x10) = *(undefined2 *)(pbVar11 + 0x10);
          __dest = pbVar10 + uVar14 + 4;
          puVar5 = __src;
        }
        if (pbVar1 + -0xf <= __src) goto LAB_00820728;
        uVar6 = 0;
        puVar5 = __src;
        do {
          __src = (ushort *)((long)puVar5 + 1);
          uVar4 = *puVar5;
          uVar6 = uVar6 + (byte)uVar4;
          if (pbVar1 + -0xf <= __src) break;
          puVar5 = __src;
        } while ((byte)uVar4 == 0xff);
        uVar7 = (ulong)uVar6 + 0xf;
        if ((CARRY8((ulong)__dest,uVar7)) || (CARRY8((ulong)__src,uVar7))) goto LAB_00820728;
LAB_008201e8:
        pbVar10 = __dest + uVar7;
        if ((pbVar2 + -0xc < pbVar10) ||
           (puVar5 = (ushort *)((long)__src + uVar7), pbVar1 + -8 < puVar5)) {
          if ((pbVar10 <= pbVar2) && ((byte *)((long)__src + uVar7) == pbVar1)) {
            memmove(__dest,__src,uVar7);
            return (int)pbVar10 - (int)param_2;
          }
LAB_00820728:
          return ~(uint)__src + (int)param_1;
        }
        pbVar11 = __dest + 8;
        pbVar9 = pbVar10;
        if (pbVar10 <= pbVar11) {
          pbVar9 = pbVar11;
        }
        if (pbVar9 + ~(ulong)__dest < &DAT_00000038) {
LAB_008202e0:
          do {
            pbVar11 = __dest + 8;
            *(undefined8 *)__dest = *(undefined8 *)__src;
            __src = __src + 4;
            __dest = pbVar11;
          } while (pbVar11 < pbVar10);
        }
        else {
          pbVar16 = pbVar10;
          if (pbVar10 <= pbVar11) {
            pbVar16 = pbVar11;
          }
          if ((__dest < (byte *)((long)__src +
                                ((ulong)(pbVar16 + ~(ulong)__dest) & 0xfffffffffffffff8) + 8)) &&
             (__src < pbVar11 + ((ulong)(pbVar16 + ~(ulong)__dest) & 0xfffffffffffffff8)))
          goto LAB_008202e0;
          uVar7 = ((ulong)(pbVar9 + ~(ulong)__dest) >> 3) + 1;
          uVar8 = uVar7 & 0x3ffffffffffffff8;
          uVar14 = (uVar8 - 8 >> 3) + 1;
          lVar18 = 0;
          if (uVar8 - 8 != 0) {
            lVar20 = -(uVar14 & 0x3ffffffffffffffe);
            pbVar11 = __dest + 0x40;
            puVar12 = __src + 0x20;
            do {
              uVar21 = *(undefined8 *)(puVar12 + -0x20);
              uVar23 = *(undefined8 *)(puVar12 + -0x14);
              uVar22 = *(undefined8 *)(puVar12 + -0x18);
              lVar18 = lVar18 + 0x10;
              lVar20 = lVar20 + 2;
              uVar25 = *(undefined8 *)(puVar12 + -0xc);
              uVar24 = *(undefined8 *)(puVar12 + -0x10);
              uVar27 = *(undefined8 *)(puVar12 + -4);
              uVar26 = *(undefined8 *)(puVar12 + -8);
              *(undefined8 *)(pbVar11 + -0x38) = *(undefined8 *)(puVar12 + -0x1c);
              *(undefined8 *)(pbVar11 + -0x40) = uVar21;
              *(undefined8 *)(pbVar11 + -0x28) = uVar23;
              *(undefined8 *)(pbVar11 + -0x30) = uVar22;
              *(undefined8 *)(pbVar11 + -0x18) = uVar25;
              *(undefined8 *)(pbVar11 + -0x20) = uVar24;
              *(undefined8 *)(pbVar11 + -8) = uVar27;
              *(undefined8 *)(pbVar11 + -0x10) = uVar26;
              uVar21 = *(undefined8 *)puVar12;
              uVar23 = *(undefined8 *)(puVar12 + 0xc);
              uVar22 = *(undefined8 *)(puVar12 + 8);
              uVar25 = *(undefined8 *)(puVar12 + 0x14);
              uVar24 = *(undefined8 *)(puVar12 + 0x10);
              uVar27 = *(undefined8 *)(puVar12 + 0x1c);
              uVar26 = *(undefined8 *)(puVar12 + 0x18);
              *(undefined8 *)(pbVar11 + 8) = *(undefined8 *)(puVar12 + 4);
              *(undefined8 *)pbVar11 = uVar21;
              *(undefined8 *)(pbVar11 + 0x18) = uVar23;
              *(undefined8 *)(pbVar11 + 0x10) = uVar22;
              puVar12 = puVar12 + 0x40;
              *(undefined8 *)(pbVar11 + 0x28) = uVar25;
              *(undefined8 *)(pbVar11 + 0x20) = uVar24;
              *(undefined8 *)(pbVar11 + 0x38) = uVar27;
              *(undefined8 *)(pbVar11 + 0x30) = uVar26;
              pbVar11 = pbVar11 + 0x80;
            } while (lVar20 != 0);
          }
          if ((uVar14 & 1) != 0) {
            puVar12 = __src + lVar18 * 4;
            pbVar11 = __dest + lVar18 * 8;
            uVar21 = *(undefined8 *)puVar12;
            uVar23 = *(undefined8 *)(puVar12 + 0xc);
            uVar22 = *(undefined8 *)(puVar12 + 8);
            uVar25 = *(undefined8 *)(puVar12 + 0x14);
            uVar24 = *(undefined8 *)(puVar12 + 0x10);
            uVar27 = *(undefined8 *)(puVar12 + 0x1c);
            uVar26 = *(undefined8 *)(puVar12 + 0x18);
            *(undefined8 *)(pbVar11 + 8) = *(undefined8 *)(puVar12 + 4);
            *(undefined8 *)pbVar11 = uVar21;
            *(undefined8 *)(pbVar11 + 0x18) = uVar23;
            *(undefined8 *)(pbVar11 + 0x10) = uVar22;
            *(undefined8 *)(pbVar11 + 0x28) = uVar25;
            *(undefined8 *)(pbVar11 + 0x20) = uVar24;
            *(undefined8 *)(pbVar11 + 0x38) = uVar27;
            *(undefined8 *)(pbVar11 + 0x30) = uVar26;
          }
          if (uVar7 != uVar8) {
            __src = __src + uVar8 * 4;
            __dest = __dest + uVar8 * 8;
            goto LAB_008202e0;
          }
        }
        __src = puVar5 + 1;
        uVar7 = (ulong)*puVar5;
        pbVar11 = pbVar10 + -uVar7;
LAB_00820348:
        uVar14 = (ulong)bVar3 & 0xf;
        if (uVar14 == 0xf) {
          uVar6 = 0;
          puVar12 = __src;
          puVar5 = __src;
          if (__src <= pbVar1 + -5) {
            puVar5 = (ushort *)(pbVar1 + -5);
          }
          do {
            __src = (ushort *)((long)puVar12 + 1);
            uVar4 = *puVar12;
            if (puVar5 == puVar12) {
              __src = (ushort *)((long)puVar12 + 1);
              goto LAB_00820728;
            }
            uVar6 = uVar6 + (byte)uVar4;
            puVar12 = __src;
          } while ((byte)uVar4 == 0xff);
          uVar14 = (ulong)uVar6 + 0xf;
          if (CARRY8((ulong)pbVar10,uVar14)) goto LAB_00820728;
        }
        if (pbVar11 < param_2 + -param_5) goto LAB_00820728;
        __dest = pbVar10 + uVar14 + 4;
        if (uVar7 < 8) {
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          *pbVar10 = *pbVar11;
          pbVar10[1] = pbVar11[1];
          uVar6 = *(uint *)(&DAT_03cbf740 + uVar7 * 4);
          pbVar10[2] = pbVar11[2];
          pbVar10[3] = pbVar11[3];
          *(undefined4 *)(pbVar10 + 4) = *(undefined4 *)(pbVar11 + uVar6);
          pbVar9 = pbVar11 + uVar6 + -(long)*(int *)(&DAT_03cbf320 + uVar7 * 4);
        }
        else {
          pbVar9 = pbVar11 + 8;
          *(undefined8 *)pbVar10 = *(undefined8 *)pbVar11;
        }
        puVar5 = __src;
        if (pbVar2 + -0xc < __dest) {
          pbVar11 = pbVar10 + 8;
          if (pbVar2 + -5 < __dest) goto LAB_00820728;
          if (pbVar11 < pbVar13) {
            pbVar19 = param_2 + (((ulong)param_4 - 0x10) - (long)pbVar10);
            pbVar16 = pbVar9;
            if (pbVar19 < (byte *)0x38) {
              pbVar17 = pbVar11;
LAB_00820610:
              do {
                pbVar19 = pbVar17 + 8;
                *(undefined8 *)pbVar17 = *(undefined8 *)pbVar16;
                pbVar16 = pbVar16 + 8;
                pbVar17 = pbVar19;
              } while (pbVar19 < pbVar13);
            }
            else {
              if ((pbVar11 < pbVar9 + ((ulong)pbVar19 & 0xfffffffffffffff8) + 8) &&
                 (pbVar17 = pbVar11, pbVar9 < pbVar10 + ((ulong)pbVar19 & 0xfffffffffffffff8) + 0x10
                 )) goto LAB_00820610;
              uVar7 = ((ulong)pbVar19 >> 3) + 1;
              uVar15 = uVar7 & 0x3ffffffffffffff8;
              uVar8 = (uVar15 - 8 >> 3) + 1;
              lVar18 = 0;
              if (uVar15 - 8 != 0) {
                lVar20 = -(uVar8 & 0x3ffffffffffffffe);
                pbVar16 = pbVar10 + 0x48;
                pbVar19 = pbVar9 + 0x40;
                do {
                  uVar21 = *(undefined8 *)(pbVar19 + -0x40);
                  uVar23 = *(undefined8 *)(pbVar19 + -0x28);
                  uVar22 = *(undefined8 *)(pbVar19 + -0x30);
                  lVar18 = lVar18 + 0x10;
                  lVar20 = lVar20 + 2;
                  uVar25 = *(undefined8 *)(pbVar19 + -0x18);
                  uVar24 = *(undefined8 *)(pbVar19 + -0x20);
                  uVar27 = *(undefined8 *)(pbVar19 + -8);
                  uVar26 = *(undefined8 *)(pbVar19 + -0x10);
                  *(undefined8 *)(pbVar16 + -0x38) = *(undefined8 *)(pbVar19 + -0x38);
                  *(undefined8 *)(pbVar16 + -0x40) = uVar21;
                  *(undefined8 *)(pbVar16 + -0x28) = uVar23;
                  *(undefined8 *)(pbVar16 + -0x30) = uVar22;
                  *(undefined8 *)(pbVar16 + -0x18) = uVar25;
                  *(undefined8 *)(pbVar16 + -0x20) = uVar24;
                  *(undefined8 *)(pbVar16 + -8) = uVar27;
                  *(undefined8 *)(pbVar16 + -0x10) = uVar26;
                  uVar21 = *(undefined8 *)pbVar19;
                  uVar23 = *(undefined8 *)(pbVar19 + 0x18);
                  uVar22 = *(undefined8 *)(pbVar19 + 0x10);
                  uVar25 = *(undefined8 *)(pbVar19 + 0x28);
                  uVar24 = *(undefined8 *)(pbVar19 + 0x20);
                  uVar27 = *(undefined8 *)(pbVar19 + 0x38);
                  uVar26 = *(undefined8 *)(pbVar19 + 0x30);
                  *(undefined8 *)(pbVar16 + 8) = *(undefined8 *)(pbVar19 + 8);
                  *(undefined8 *)pbVar16 = uVar21;
                  *(undefined8 *)(pbVar16 + 0x18) = uVar23;
                  *(undefined8 *)(pbVar16 + 0x10) = uVar22;
                  pbVar19 = pbVar19 + 0x80;
                  *(undefined8 *)(pbVar16 + 0x28) = uVar25;
                  *(undefined8 *)(pbVar16 + 0x20) = uVar24;
                  *(undefined8 *)(pbVar16 + 0x38) = uVar27;
                  *(undefined8 *)(pbVar16 + 0x30) = uVar26;
                  pbVar16 = pbVar16 + 0x80;
                } while (lVar20 != 0);
              }
              if ((uVar8 & 1) != 0) {
                pbVar16 = pbVar9 + lVar18 * 8;
                pbVar19 = pbVar11 + lVar18 * 8;
                uVar21 = *(undefined8 *)pbVar16;
                uVar23 = *(undefined8 *)(pbVar16 + 0x18);
                uVar22 = *(undefined8 *)(pbVar16 + 0x10);
                uVar25 = *(undefined8 *)(pbVar16 + 0x28);
                uVar24 = *(undefined8 *)(pbVar16 + 0x20);
                uVar27 = *(undefined8 *)(pbVar16 + 0x38);
                uVar26 = *(undefined8 *)(pbVar16 + 0x30);
                *(undefined8 *)(pbVar19 + 8) = *(undefined8 *)(pbVar16 + 8);
                *(undefined8 *)pbVar19 = uVar21;
                *(undefined8 *)(pbVar19 + 0x18) = uVar23;
                *(undefined8 *)(pbVar19 + 0x10) = uVar22;
                *(undefined8 *)(pbVar19 + 0x28) = uVar25;
                *(undefined8 *)(pbVar19 + 0x20) = uVar24;
                *(undefined8 *)(pbVar19 + 0x38) = uVar27;
                *(undefined8 *)(pbVar19 + 0x30) = uVar26;
              }
              if (uVar7 != uVar15) {
                pbVar16 = pbVar9 + uVar15 * 8;
                pbVar17 = pbVar11 + uVar15 * 8;
                goto LAB_00820610;
              }
            }
            pbVar9 = pbVar9 + ((long)pbVar13 - (long)pbVar11);
            pbVar11 = pbVar13;
          }
          if (pbVar11 < __dest) {
            pbVar16 = pbVar10 + (uVar14 - (long)pbVar11) + 4;
            if (((byte *)0x3f < pbVar16) &&
               ((pbVar9 + (long)pbVar10 + (uVar14 - (long)pbVar11) + 4 <= pbVar11 ||
                (__dest <= pbVar9)))) {
              pbVar10 = (byte *)((ulong)pbVar16 & 0xffffffffffffffc0);
              uVar7 = ((ulong)(pbVar10 + -0x40) >> 6) + 1;
              lVar18 = 0;
              if (pbVar10 + -0x40 != (byte *)0x0) {
                lVar20 = -(uVar7 & 0x7fffffffffffffe);
                do {
                  pbVar19 = pbVar9 + lVar18 + 0x70;
                  pbVar17 = pbVar11 + lVar18 + 0x40;
                  lVar18 = lVar18 + 0x80;
                  uVar21 = *(undefined8 *)(pbVar19 + -0x70);
                  uVar23 = *(undefined8 *)(pbVar19 + -0x58);
                  uVar22 = *(undefined8 *)(pbVar19 + -0x60);
                  uVar25 = *(undefined8 *)(pbVar19 + -0x48);
                  uVar24 = *(undefined8 *)(pbVar19 + -0x50);
                  uVar27 = *(undefined8 *)(pbVar19 + -0x38);
                  uVar26 = *(undefined8 *)(pbVar19 + -0x40);
                  *(undefined8 *)(pbVar17 + -0x38) = *(undefined8 *)(pbVar19 + -0x68);
                  *(undefined8 *)(pbVar17 + -0x40) = uVar21;
                  *(undefined8 *)(pbVar17 + -0x28) = uVar23;
                  *(undefined8 *)(pbVar17 + -0x30) = uVar22;
                  lVar20 = lVar20 + 2;
                  *(undefined8 *)(pbVar17 + -0x18) = uVar25;
                  *(undefined8 *)(pbVar17 + -0x20) = uVar24;
                  *(undefined8 *)(pbVar17 + -8) = uVar27;
                  *(undefined8 *)(pbVar17 + -0x10) = uVar26;
                  uVar21 = *(undefined8 *)(pbVar19 + -0x30);
                  uVar23 = *(undefined8 *)(pbVar19 + -0x18);
                  uVar22 = *(undefined8 *)(pbVar19 + -0x20);
                  uVar25 = *(undefined8 *)(pbVar19 + -8);
                  uVar24 = *(undefined8 *)(pbVar19 + -0x10);
                  uVar27 = *(undefined8 *)(pbVar19 + 8);
                  uVar26 = *(undefined8 *)pbVar19;
                  *(undefined8 *)(pbVar17 + 8) = *(undefined8 *)(pbVar19 + -0x28);
                  *(undefined8 *)pbVar17 = uVar21;
                  *(undefined8 *)(pbVar17 + 0x18) = uVar23;
                  *(undefined8 *)(pbVar17 + 0x10) = uVar22;
                  *(undefined8 *)(pbVar17 + 0x28) = uVar25;
                  *(undefined8 *)(pbVar17 + 0x20) = uVar24;
                  *(undefined8 *)(pbVar17 + 0x38) = uVar27;
                  *(undefined8 *)(pbVar17 + 0x30) = uVar26;
                } while (lVar20 != 0);
              }
              if ((uVar7 & 1) != 0) {
                pbVar19 = pbVar9 + lVar18;
                pbVar17 = pbVar11 + lVar18;
                uVar21 = *(undefined8 *)pbVar19;
                uVar23 = *(undefined8 *)(pbVar19 + 0x18);
                uVar22 = *(undefined8 *)(pbVar19 + 0x10);
                uVar25 = *(undefined8 *)(pbVar19 + 0x28);
                uVar24 = *(undefined8 *)(pbVar19 + 0x20);
                uVar27 = *(undefined8 *)(pbVar19 + 0x38);
                uVar26 = *(undefined8 *)(pbVar19 + 0x30);
                *(undefined8 *)(pbVar17 + 8) = *(undefined8 *)(pbVar19 + 8);
                *(undefined8 *)pbVar17 = uVar21;
                *(undefined8 *)(pbVar17 + 0x18) = uVar23;
                *(undefined8 *)(pbVar17 + 0x10) = uVar22;
                *(undefined8 *)(pbVar17 + 0x28) = uVar25;
                *(undefined8 *)(pbVar17 + 0x20) = uVar24;
                *(undefined8 *)(pbVar17 + 0x38) = uVar27;
                *(undefined8 *)(pbVar17 + 0x30) = uVar26;
              }
              if (pbVar10 == pbVar16) goto LAB_00820194;
              pbVar9 = pbVar9 + (long)pbVar10;
              pbVar11 = pbVar11 + (long)pbVar10;
            }
            do {
              pbVar10 = pbVar11 + 1;
              *pbVar11 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              pbVar11 = pbVar10;
            } while (__dest != pbVar10);
          }
          goto LAB_00820194;
        }
        *(undefined8 *)(pbVar10 + 8) = *(undefined8 *)pbVar9;
      } while (uVar14 < 0xd);
      pbVar11 = pbVar10 + 0x18;
      pbVar16 = __dest;
      if (__dest <= pbVar11) {
        pbVar16 = pbVar11;
      }
      pbVar19 = pbVar10 + 0x10;
      if ((byte *)0x37 < pbVar16 + (-0x11 - (long)pbVar10)) {
        pbVar17 = __dest;
        if (__dest <= pbVar11) {
          pbVar17 = pbVar11;
        }
        if ((pbVar9 + ((ulong)(pbVar17 + (-0x11 - (long)pbVar10)) & 0xfffffffffffffff8) + 0x10 <=
             pbVar19) ||
           (pbVar11 + ((ulong)(pbVar17 + (-0x11 - (long)pbVar10)) & 0xfffffffffffffff8) <=
            pbVar9 + 8)) {
          uVar7 = ((ulong)(pbVar16 + (-0x11 - (long)pbVar10)) >> 3) + 1;
          uVar8 = uVar7 & 0x3ffffffffffffff8;
          uVar14 = (uVar8 - 8 >> 3) + 1;
          lVar18 = 0;
          if (uVar8 - 8 != 0) {
            lVar20 = -(uVar14 & 0x3ffffffffffffffe);
            pbVar10 = pbVar10 + 0x40;
            pbVar11 = pbVar9 + 0x48;
            do {
              uVar21 = *(undefined8 *)(pbVar11 + -0x40);
              uVar23 = *(undefined8 *)(pbVar11 + -0x28);
              uVar22 = *(undefined8 *)(pbVar11 + -0x30);
              lVar18 = lVar18 + 0x10;
              lVar20 = lVar20 + 2;
              uVar25 = *(undefined8 *)(pbVar11 + -0x18);
              uVar24 = *(undefined8 *)(pbVar11 + -0x20);
              uVar27 = *(undefined8 *)(pbVar11 + -8);
              uVar26 = *(undefined8 *)(pbVar11 + -0x10);
              *(undefined8 *)(pbVar10 + -0x28) = *(undefined8 *)(pbVar11 + -0x38);
              *(undefined8 *)(pbVar10 + -0x30) = uVar21;
              *(undefined8 *)(pbVar10 + -0x18) = uVar23;
              *(undefined8 *)(pbVar10 + -0x20) = uVar22;
              *(undefined8 *)(pbVar10 + -8) = uVar25;
              *(undefined8 *)(pbVar10 + -0x10) = uVar24;
              *(undefined8 *)(pbVar10 + 8) = uVar27;
              *(undefined8 *)pbVar10 = uVar26;
              uVar21 = *(undefined8 *)pbVar11;
              uVar23 = *(undefined8 *)(pbVar11 + 0x18);
              uVar22 = *(undefined8 *)(pbVar11 + 0x10);
              uVar25 = *(undefined8 *)(pbVar11 + 0x28);
              uVar24 = *(undefined8 *)(pbVar11 + 0x20);
              uVar27 = *(undefined8 *)(pbVar11 + 0x38);
              uVar26 = *(undefined8 *)(pbVar11 + 0x30);
              *(undefined8 *)(pbVar10 + 0x18) = *(undefined8 *)(pbVar11 + 8);
              *(undefined8 *)(pbVar10 + 0x10) = uVar21;
              *(undefined8 *)(pbVar10 + 0x28) = uVar23;
              *(undefined8 *)(pbVar10 + 0x20) = uVar22;
              pbVar11 = pbVar11 + 0x80;
              *(undefined8 *)(pbVar10 + 0x38) = uVar25;
              *(undefined8 *)(pbVar10 + 0x30) = uVar24;
              *(undefined8 *)(pbVar10 + 0x48) = uVar27;
              *(undefined8 *)(pbVar10 + 0x40) = uVar26;
              pbVar10 = pbVar10 + 0x80;
            } while (lVar20 != 0);
          }
          if ((uVar14 & 1) != 0) {
            lVar18 = lVar18 * 8;
            pbVar10 = pbVar19 + lVar18;
            uVar21 = *(undefined8 *)(pbVar9 + lVar18 + 8);
            uVar23 = *(undefined8 *)(pbVar9 + lVar18 + 0x20);
            uVar22 = *(undefined8 *)(pbVar9 + lVar18 + 0x18);
            uVar25 = *(undefined8 *)(pbVar9 + lVar18 + 0x30);
            uVar24 = *(undefined8 *)(pbVar9 + lVar18 + 0x28);
            uVar27 = *(undefined8 *)(pbVar9 + lVar18 + 0x40);
            uVar26 = *(undefined8 *)(pbVar9 + lVar18 + 0x38);
            *(undefined8 *)(pbVar10 + 8) = *(undefined8 *)(pbVar9 + lVar18 + 0x10);
            *(undefined8 *)pbVar10 = uVar21;
            *(undefined8 *)(pbVar10 + 0x18) = uVar23;
            *(undefined8 *)(pbVar10 + 0x10) = uVar22;
            *(undefined8 *)(pbVar10 + 0x28) = uVar25;
            *(undefined8 *)(pbVar10 + 0x20) = uVar24;
            *(undefined8 *)(pbVar10 + 0x38) = uVar27;
            *(undefined8 *)(pbVar10 + 0x30) = uVar26;
          }
          if (uVar7 == uVar8) goto LAB_00820194;
          pbVar9 = pbVar9 + uVar8 * 8;
          pbVar19 = pbVar19 + uVar8 * 8;
        }
      }
      do {
        pbVar9 = pbVar9 + 8;
        pbVar10 = pbVar19 + 8;
        *(undefined8 *)pbVar19 = *(undefined8 *)pbVar9;
        pbVar19 = pbVar10;
      } while (pbVar10 < __dest);
      goto LAB_00820194;
    }
  }
  return -1;
}


