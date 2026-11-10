/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089b984; name: FUN_0089b984
 */


void FUN_0089b984(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  ushort uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ushort *puVar21;
  long lVar22;
  ushort *puVar23;
  
  if (*(short *)(param_3 + 0x7a) != 0) {
    uVar19 = 0;
    plVar1 = (long *)(param_2 + 0x70);
    do {
      lVar22 = *(long *)(param_3 + 0x70);
      plVar10 = (long *)(**(code **)PTR_DAT_047d2258)(0x40,4,*(undefined8 *)PTR_DAT_047d2268);
      if (plVar10 != (long *)0x0) {
        *plVar10 = (long)plVar10;
        plVar10[1] = (long)plVar10;
        plVar10[4] = 0;
        *(undefined4 *)((long)plVar10 + 0x27) = 0;
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[6] = 0;
        plVar10[7] = 0;
      }
      lVar12 = lVar22 + uVar19 * 0xa0;
      FUN_0089c824(plVar10,lVar12 + 0x18,lVar12 + 0x38,lVar12 + 0x58,
                   *(char *)(lVar12 + 0x10) == '\x01',*(char *)(lVar12 + 0x11) == '\x01',
                   *(char *)(lVar12 + 0x13) == '\x01');
      puVar11 = (undefined8 *)(**(code **)PTR_DAT_047d2258)(0x10,4,*(undefined8 *)PTR_DAT_047d2268);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0;
        puVar11[1] = 0;
      }
      lVar12 = lVar22 + uVar19 * 0xa0;
      plVar10[7] = (long)puVar11;
      *(undefined4 *)puVar11 = *(undefined4 *)(lVar12 + 8);
      puVar21 = (ushort *)(lVar12 + 0x80);
      uVar9 = *puVar21;
      *(uint *)((long)puVar11 + 4) = (uint)uVar9;
      lVar12 = (**(code **)PTR_DAT_047d2258)((ulong)uVar9 << 5,4,*(undefined8 *)PTR_DAT_047d2268);
      if ((lVar12 != 0) && (uVar9 != 0)) {
        if (uVar9 == 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          puVar17 = (undefined8 *)(lVar12 + 0x20);
          do {
            uVar13 = uVar13 + 2;
            *(undefined8 *)((long)puVar17 + -0x14) = 0;
            puVar17[-4] = 0;
            *(undefined1 *)(puVar17 + -3) = 0;
            *(undefined8 *)((long)puVar17 + 0xc) = 0;
            *(undefined1 *)(puVar17 + 1) = 0;
            puVar17[3] = 0;
            puVar17[-1] = 0;
            *puVar17 = 0;
            puVar17 = puVar17 + 8;
          } while (((ulong)uVar9 & 0xfffe) != uVar13);
        }
        if ((uVar9 & 1) != 0) {
          puVar17 = (undefined8 *)(lVar12 + uVar13 * 0x20);
          *(undefined8 *)((long)puVar17 + 0xc) = 0;
          *puVar17 = 0;
          *(undefined1 *)(puVar17 + 1) = 0;
          puVar17[3] = 0;
        }
      }
      puVar11[1] = lVar12;
      if (*puVar21 != 0) {
        uVar13 = 0;
        while( true ) {
          lVar2 = *(long *)(lVar22 + uVar19 * 0xa0 + 0x78) + uVar13 * 0x40;
          uVar7 = *(undefined1 *)(lVar2 + 0x2c);
          uVar5 = *(undefined4 *)(lVar2 + 0x24);
          uVar6 = *(undefined4 *)(lVar2 + 0x28);
          puVar3 = (undefined4 *)(lVar12 + uVar13 * 0x20);
          *puVar3 = *(undefined4 *)(lVar2 + 0x20);
          puVar3[1] = uVar5;
          *(undefined1 *)(puVar3 + 2) = uVar7;
          puVar3[3] = uVar6;
          puVar23 = (ushort *)(lVar2 + 0x38);
          uVar9 = *puVar23;
          uVar20 = (ulong)uVar9;
          puVar3[4] = (uint)uVar9;
          lVar12 = (**(code **)PTR_DAT_047d2258)(uVar20 * 0x38,4,*(undefined8 *)PTR_DAT_047d2268);
          if ((lVar12 != 0) && (uVar9 != 0)) {
            uVar14 = uVar20 & 3;
            if (uVar20 - 1 < 3) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              puVar17 = (undefined8 *)(lVar12 + 0x70);
              do {
                uVar16 = uVar16 + 4;
                *(undefined4 *)((long)puVar17 + -100) = 0;
                puVar17[-0xe] = 0;
                *(undefined1 *)(puVar17 + -0xd) = 0;
                *(undefined1 *)(puVar17 + -8) = 0;
                *(undefined4 *)((long)puVar17 + -0x2c) = 0;
                puVar17[-7] = 0;
                *(undefined1 *)(puVar17 + -6) = 0;
                *(undefined1 *)(puVar17 + -1) = 0;
                *(undefined4 *)((long)puVar17 + 0xc) = 0;
                *puVar17 = 0;
                *(undefined1 *)(puVar17 + 1) = 0;
                *(undefined1 *)(puVar17 + 6) = 0;
                *(undefined4 *)((long)puVar17 + 0x44) = 0;
                puVar17[7] = 0;
                *(undefined1 *)(puVar17 + 8) = 0;
                *(undefined1 *)(puVar17 + 0xd) = 0;
                puVar17 = puVar17 + 0x1c;
              } while ((uVar20 & 0xfffc) != uVar16);
            }
            if ((uVar9 & 3) != 0) {
              puVar17 = (undefined8 *)(lVar12 + uVar16 * 0x38);
              do {
                *(undefined4 *)((long)puVar17 + 0xc) = 0;
                uVar14 = uVar14 - 1;
                *puVar17 = 0;
                *(undefined1 *)(puVar17 + 1) = 0;
                *(undefined1 *)(puVar17 + 6) = 0;
                puVar17 = puVar17 + 7;
              } while (uVar14 != 0);
            }
          }
          *(long *)(puVar3 + 6) = lVar12;
          if (*puVar23 != 0) {
            lVar15 = 0;
            lVar12 = 0;
            uVar20 = 0;
            do {
              if ((long)uVar20 < (long)(int)puVar3[4]) {
                puVar18 = (undefined4 *)(*(long *)(puVar3 + 6) + lVar15);
              }
              else {
                puVar18 = (undefined4 *)0x0;
              }
              puVar4 = (undefined4 *)(*(long *)(lVar2 + 0x30) + lVar12);
              *puVar18 = *puVar4;
              puVar18[1] = 0x3f800000;
              *(undefined1 *)(puVar18 + 2) = *(undefined1 *)(puVar4 + 2);
              puVar18[3] = puVar4[1];
              cVar8 = *(char *)(puVar4 + 0x12);
              *(bool *)(puVar18 + 0xc) = cVar8 != '\0';
              if (cVar8 == '\0') {
                puVar18[4] = puVar4[0xc];
                puVar18[5] = puVar4[0xd];
                puVar18[6] = puVar4[0xe];
                puVar18[7] = puVar4[0xf];
              }
              else {
                puVar18[4] = puVar4[0x11];
                puVar18[5] = (uint)*(byte *)(puVar4 + 0x12);
                *(undefined4 **)(puVar18 + 6) = puVar4 + 0x13;
                *(undefined4 **)(puVar18 + 8) = puVar4 + 0x1b;
                *(undefined4 **)(puVar18 + 10) = puVar4 + 0x23;
              }
              uVar20 = uVar20 + 1;
              lVar12 = lVar12 + 0xac;
              lVar15 = lVar15 + 0x38;
            } while (uVar20 < *puVar23);
          }
          uVar13 = uVar13 + 1;
          if (*puVar21 <= uVar13) break;
          lVar12 = puVar11[1];
        }
      }
      lVar12 = *plVar10;
      *plVar10 = *plVar1;
      *(long **)(lVar12 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar10;
      *plVar1 = lVar12;
      FUN_0089d198(param_1,plVar10,param_3,lVar22 + uVar19 * 0xa0);
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(ushort *)(param_3 + 0x7a));
  }
  return;
}


