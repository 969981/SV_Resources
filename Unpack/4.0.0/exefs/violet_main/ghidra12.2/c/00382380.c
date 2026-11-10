/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00382380; name: FUN_00382380
 */


void FUN_00382380(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  long lVar13;
  uint uVar14;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  long lVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined1 *puVar26;
  undefined1 *puVar25;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *pbVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  undefined4 uVar36;
  ulong uVar37;
  ulong uVar38;
  char *pcVar39;
  int iVar40;
  long lVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  uint uVar44;
  int iVar45;
  undefined1 *puVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  
  pbVar31 = (byte *)*param_1;
  lVar18 = param_1[4];
  puVar46 = (undefined1 *)param_1[3];
  pbVar5 = pbVar31 + ((int)param_1[1] - 5);
  lVar28 = param_1[7];
  iVar40 = (int)puVar46 - (param_2 - (int)lVar18);
  uVar8 = *(uint *)(lVar28 + 0x78);
  uVar10 = *(uint *)(lVar28 + 0x7c);
  uVar14 = *(uint *)(lVar28 + 0x44);
  puVar12 = *(undefined1 **)(lVar28 + 0x48);
  uVar30 = *(ulong *)(lVar28 + 0x50);
  iVar9 = *(int *)(lVar28 + 0x3c);
  uVar11 = *(uint *)(lVar28 + 0x40);
  uVar1 = (ulong)(uVar14 - 1) + 1;
  uVar38 = uVar1 & 0x1ffffffc0;
  uVar35 = (ulong)*(uint *)(lVar28 + 0x58);
  uVar2 = (uVar38 - 0x40 >> 6) + 1;
  lVar33 = *(long *)(lVar28 + 0x68);
  lVar13 = *(long *)(lVar28 + 0x70);
  pcVar39 = "invalid distance too far back";
  puVar43 = puVar46;
LAB_00382468:
  uVar34 = (uint)uVar35;
  if (uVar34 < 0xf) {
    bVar15 = *pbVar31;
    uVar37 = uVar35 & 0x3f;
    pbVar32 = pbVar31 + 1;
    uVar35 = (ulong)(uVar34 + 0x10);
    pbVar31 = pbVar31 + 2;
    uVar30 = ((ulong)bVar15 << uVar37) + uVar30 + ((ulong)*pbVar32 << ((ulong)(uVar34 + 8) & 0x3f));
  }
  uVar37 = uVar30 & (uint)~(-1 << (ulong)(uVar8 & 0x1f));
  while( true ) {
    pbVar32 = (byte *)(lVar33 + uVar37 * 4);
    bVar15 = *pbVar32;
    uVar16 = *(ushort *)(pbVar32 + 2);
    uVar30 = uVar30 >> ((ulong)pbVar32[1] & 0x3f);
    uVar34 = (int)uVar35 - (uint)pbVar32[1];
    uVar35 = (ulong)uVar34;
    uVar20 = (uint)bVar15;
    if (uVar20 == 0) break;
    if ((bVar15 >> 4 & 1) != 0) {
      uVar44 = (uint)uVar16;
      uVar20 = uVar20 & 0xf;
      if ((bVar15 & 0xf) != 0) {
        pbVar32 = pbVar31;
        if (uVar34 < uVar20) {
          pbVar32 = pbVar31 + 1;
          uVar34 = uVar34 + 8;
          uVar30 = ((ulong)*pbVar31 << (uVar35 & 0x3f)) + uVar30;
        }
        uVar29 = (uint)uVar30;
        uVar30 = uVar30 >> uVar20;
        uVar44 = (uVar29 & (-1 << (ulong)uVar20 ^ 0xffffffffU)) + uVar44;
        uVar35 = (ulong)(uVar34 - uVar20);
        pbVar31 = pbVar32;
      }
      uVar34 = (uint)uVar35;
      if (uVar34 < 0xf) {
        bVar15 = *pbVar31;
        uVar37 = uVar35 & 0x3f;
        pbVar32 = pbVar31 + 1;
        uVar35 = (ulong)(uVar34 + 0x10);
        pbVar31 = pbVar31 + 2;
        uVar30 = ((ulong)bVar15 << uVar37) + uVar30 +
                 ((ulong)*pbVar32 << ((ulong)(uVar34 + 8) & 0x3f));
      }
      uVar37 = uVar30 & (uint)~(-1 << (ulong)(uVar10 & 0x1f));
      goto LAB_00382558;
    }
    if ((bVar15 >> 6 & 1) != 0) {
      if ((bVar15 >> 5 & 1) == 0) {
        pcVar39 = "invalid literal/length code";
        goto LAB_00382e98;
      }
      uVar36 = 0x3f3f;
      goto LAB_00382ea0;
    }
    uVar37 = (uVar30 & (uint)~(-1 << (ulong)(uVar20 & 0x1f))) + (ulong)uVar16;
  }
  puVar22 = puVar43 + 1;
  *puVar43 = (char)uVar16;
  goto LAB_003824dc;
LAB_00382558:
  pbVar32 = (byte *)(lVar13 + uVar37 * 4);
  bVar15 = *pbVar32;
  uVar16 = *(ushort *)(pbVar32 + 2);
  puVar22 = (undefined1 *)(ulong)uVar16;
  uVar30 = uVar30 >> ((ulong)pbVar32[1] & 0x3f);
  uVar34 = (int)uVar35 - (uint)pbVar32[1];
  uVar35 = (ulong)uVar34;
  if ((bVar15 >> 4 & 1) != 0) goto LAB_0038258c;
  if ((bVar15 >> 6 & 1) != 0) {
    pcVar39 = "invalid distance code";
    goto LAB_00382e98;
  }
  uVar37 = (uVar30 & (uint)~(-1 << (ulong)(bVar15 & 0x1f))) + (ulong)uVar16;
  goto LAB_00382558;
LAB_0038258c:
  uVar20 = bVar15 & 0xf;
  if (uVar34 < uVar20) {
    uVar30 = ((ulong)*pbVar31 << (uVar35 & 0x3f)) + uVar30;
    uVar29 = uVar34 + 8;
    if (uVar29 < uVar20) {
      uVar30 = ((ulong)pbVar31[1] << ((ulong)uVar29 & 0x3f)) + uVar30;
      pbVar31 = pbVar31 + 2;
      uVar34 = uVar34 + 0x10;
    }
    else {
      pbVar31 = pbVar31 + 1;
      uVar34 = uVar29;
    }
  }
  uVar29 = (uint)uVar30 & (-1 << uVar20 ^ 0xffffffffU);
  uVar35 = (ulong)(uVar34 - uVar20);
  iVar45 = (int)puVar43;
  uVar30 = uVar30 >> uVar20;
  uVar21 = (uint)uVar16;
  uVar34 = uVar29 + uVar21;
  uVar20 = uVar34 - (iVar45 - iVar40);
  if (uVar34 < (uint)(iVar45 - iVar40) || uVar20 == 0) {
    lVar24 = 0;
    uVar20 = uVar44;
    do {
      puVar22 = puVar43 + lVar24 + (1 - (ulong)uVar34);
      puVar25 = puVar43 + lVar24;
      lVar24 = lVar24 + 3;
      *puVar25 = puVar22[-1];
      puVar25[1] = *puVar22;
      uVar20 = uVar20 - 3;
      puVar25[2] = puVar22[1];
    } while (2 < uVar20);
    puVar22 = puVar43 + lVar24;
    if (uVar44 != (uint)lVar24) {
      *puVar22 = puVar43[lVar24 - (ulong)uVar34];
      if (uVar44 - 1 == (uint)lVar24) {
        puVar22 = puVar22 + 1;
      }
      else {
        puVar22[1] = (puVar43 + (lVar24 - (ulong)uVar34))[1];
        puVar22 = puVar22 + 2;
      }
    }
    goto LAB_003824dc;
  }
  if ((uVar11 < uVar20) && (*(int *)(lVar28 + 0x1be8) != 0)) {
LAB_00382e98:
    uVar36 = 0x3f51;
    param_1[6] = (long)pcVar39;
LAB_00382ea0:
    *(undefined4 *)(lVar28 + 8) = uVar36;
    puVar22 = puVar43;
    goto LAB_00382ea8;
  }
  if (uVar14 == 0) {
    uVar37 = (ulong)(iVar9 - uVar20);
    puVar25 = puVar12 + uVar37;
    uVar17 = uVar44 - uVar20;
    if (uVar20 <= uVar44 && uVar17 != 0) {
      iVar4 = iVar40 + -1 + uVar29 + uVar21;
      uVar29 = iVar4 - iVar45;
      uVar44 = uVar17;
      if ((uVar29 < 0x3f) ||
         ((uVar27 = (ulong)(uint)(iVar4 - iVar45), puVar43 < puVar12 + uVar37 + uVar27 + 1 &&
          (puVar25 < puVar43 + uVar27 + 1)))) {
        uVar21 = uVar20 - 1;
        uVar29 = uVar20 & 7;
        puVar22 = puVar43;
      }
      else {
        uVar27 = (ulong)uVar29 + 1;
        uVar23 = uVar27 & 0x1ffffffc0;
        uVar3 = (uVar23 - 0x40 >> 6) + 1;
        lVar24 = 0;
        if (uVar23 - 0x40 != 0) {
          lVar41 = -(uVar3 & 0x7fffffffffffffe);
          do {
            puVar6 = (undefined8 *)(puVar12 + lVar24 + uVar37 + 0x70);
            puVar7 = (undefined8 *)(puVar43 + lVar24 + 0x40);
            lVar24 = lVar24 + 0x80;
            uVar47 = puVar6[-0xe];
            uVar49 = puVar6[-0xb];
            uVar48 = puVar6[-0xc];
            uVar51 = puVar6[-9];
            uVar50 = puVar6[-10];
            uVar53 = puVar6[-7];
            uVar52 = puVar6[-8];
            puVar7[-7] = puVar6[-0xd];
            puVar7[-8] = uVar47;
            puVar7[-5] = uVar49;
            puVar7[-6] = uVar48;
            lVar41 = lVar41 + 2;
            puVar7[-3] = uVar51;
            puVar7[-4] = uVar50;
            puVar7[-1] = uVar53;
            puVar7[-2] = uVar52;
            uVar47 = puVar6[-6];
            uVar49 = puVar6[-3];
            uVar48 = puVar6[-4];
            uVar51 = puVar6[-1];
            uVar50 = puVar6[-2];
            uVar53 = puVar6[1];
            uVar52 = *puVar6;
            puVar7[1] = puVar6[-5];
            *puVar7 = uVar47;
            puVar7[3] = uVar49;
            puVar7[2] = uVar48;
            puVar7[5] = uVar51;
            puVar7[4] = uVar50;
            puVar7[7] = uVar53;
            puVar7[6] = uVar52;
          } while (lVar41 != 0);
        }
        puVar22 = puVar43 + uVar23;
        if ((uVar3 & 1) != 0) {
          puVar6 = (undefined8 *)(puVar25 + lVar24);
          uVar47 = *puVar6;
          uVar49 = puVar6[3];
          uVar48 = puVar6[2];
          uVar51 = puVar6[5];
          uVar50 = puVar6[4];
          uVar53 = puVar6[7];
          uVar52 = puVar6[6];
          puVar7 = (undefined8 *)(puVar43 + lVar24);
          puVar7[1] = puVar6[1];
          *puVar7 = uVar47;
          puVar7[3] = uVar49;
          puVar7[2] = uVar48;
          puVar7[5] = uVar51;
          puVar7[4] = uVar50;
          puVar7[7] = uVar53;
          puVar7[6] = uVar52;
        }
        if (uVar27 == uVar23) goto LAB_003828b4;
        uVar20 = uVar20 - (int)uVar23;
        uVar21 = uVar20 - 1;
        uVar29 = uVar20 & 7;
        puVar25 = puVar25 + uVar23;
      }
      for (; uVar29 != 0; uVar29 = uVar29 - 1) {
        uVar20 = uVar20 - 1;
        *puVar22 = *puVar25;
        puVar22 = puVar22 + 1;
        puVar25 = puVar25 + 1;
      }
      puVar43 = puVar22;
      if (6 < uVar21) {
        do {
          *puVar43 = *puVar25;
          puVar43[1] = puVar25[1];
          puVar43[2] = puVar25[2];
          puVar43[3] = puVar25[3];
          puVar43[4] = puVar25[4];
          puVar43[5] = puVar25[5];
          puVar43[6] = puVar25[6];
          puVar22 = puVar43 + 8;
          uVar20 = uVar20 - 8;
          puVar43[7] = puVar25[7];
          puVar25 = puVar25 + 8;
          puVar43 = puVar22;
        } while (uVar20 != 0);
LAB_003828b0:
        uVar44 = uVar17;
      }
LAB_003828b4:
      puVar25 = puVar22 + -(ulong)uVar34;
      puVar43 = puVar22;
    }
  }
  else {
    uVar37 = (ulong)(uVar14 - uVar20);
    if (uVar14 < uVar20) {
      uVar37 = (ulong)((uVar14 + iVar9) - uVar20);
      uVar20 = uVar20 - uVar14;
      puVar25 = puVar12 + uVar37;
      uVar17 = uVar44 - uVar20;
      if (uVar20 <= uVar44 && uVar17 != 0) {
        iVar4 = ~uVar14 + iVar40 + uVar29 + uVar21;
        uVar44 = iVar4 - iVar45;
        puVar26 = puVar43;
        if ((uVar44 < 0x3f) ||
           ((uVar27 = (ulong)(uint)(iVar4 - iVar45), puVar43 < puVar12 + uVar37 + uVar27 + 1 &&
            (puVar25 < puVar43 + uVar27 + 1)))) {
LAB_00382ca0:
          uVar29 = uVar20 - 1;
          puVar22 = (undefined1 *)(ulong)uVar29;
          for (uVar44 = uVar20 & 7; uVar44 != 0; uVar44 = uVar44 - 1) {
            uVar20 = uVar20 - 1;
            *puVar26 = *puVar25;
            puVar25 = puVar25 + 1;
            puVar26 = puVar26 + 1;
          }
          puVar43 = puVar26;
          if (6 < uVar29) {
            do {
              *puVar43 = *puVar25;
              puVar43[1] = puVar25[1];
              puVar43[2] = puVar25[2];
              puVar43[3] = puVar25[3];
              puVar43[4] = puVar25[4];
              puVar43[5] = puVar25[5];
              puVar43[6] = puVar25[6];
              puVar22 = (undefined1 *)(ulong)(byte)puVar25[7];
              puVar26 = puVar43 + 8;
              uVar20 = uVar20 - 8;
              puVar43[7] = puVar25[7];
              puVar25 = puVar25 + 8;
              puVar43 = puVar26;
            } while (uVar20 != 0);
          }
        }
        else {
          puVar42 = (undefined1 *)((ulong)uVar44 + 1);
          puVar22 = (undefined1 *)((ulong)puVar42 & 0x1ffffffc0);
          uVar27 = ((ulong)(puVar22 + -0x40) >> 6) + 1;
          lVar24 = 0;
          if (puVar22 + -0x40 != (undefined1 *)0x0) {
            lVar41 = -(uVar27 & 0x7fffffffffffffe);
            do {
              puVar6 = (undefined8 *)(puVar12 + lVar24 + uVar37 + 0x70);
              puVar7 = (undefined8 *)(puVar43 + lVar24 + 0x40);
              lVar24 = lVar24 + 0x80;
              uVar47 = puVar6[-0xe];
              uVar49 = puVar6[-0xb];
              uVar48 = puVar6[-0xc];
              uVar51 = puVar6[-9];
              uVar50 = puVar6[-10];
              uVar53 = puVar6[-7];
              uVar52 = puVar6[-8];
              puVar7[-7] = puVar6[-0xd];
              puVar7[-8] = uVar47;
              puVar7[-5] = uVar49;
              puVar7[-6] = uVar48;
              lVar41 = lVar41 + 2;
              puVar7[-3] = uVar51;
              puVar7[-4] = uVar50;
              puVar7[-1] = uVar53;
              puVar7[-2] = uVar52;
              uVar47 = puVar6[-6];
              uVar49 = puVar6[-3];
              uVar48 = puVar6[-4];
              uVar51 = puVar6[-1];
              uVar50 = puVar6[-2];
              uVar53 = puVar6[1];
              uVar52 = *puVar6;
              puVar7[1] = puVar6[-5];
              *puVar7 = uVar47;
              puVar7[3] = uVar49;
              puVar7[2] = uVar48;
              puVar7[5] = uVar51;
              puVar7[4] = uVar50;
              puVar7[7] = uVar53;
              puVar7[6] = uVar52;
            } while (lVar41 != 0);
          }
          puVar26 = puVar43 + (long)puVar22;
          if ((uVar27 & 1) != 0) {
            puVar6 = (undefined8 *)(puVar25 + lVar24);
            uVar47 = *puVar6;
            uVar49 = puVar6[3];
            uVar48 = puVar6[2];
            uVar51 = puVar6[5];
            uVar50 = puVar6[4];
            uVar53 = puVar6[7];
            uVar52 = puVar6[6];
            puVar7 = (undefined8 *)(puVar43 + lVar24);
            puVar7[1] = puVar6[1];
            *puVar7 = uVar47;
            puVar7[3] = uVar49;
            puVar7[2] = uVar48;
            puVar7[5] = uVar51;
            puVar7[4] = uVar50;
            puVar7[7] = uVar53;
            puVar7[6] = uVar52;
          }
          if (puVar42 != puVar22) {
            uVar20 = uVar20 - (int)puVar22;
            puVar25 = puVar25 + (long)puVar22;
            goto LAB_00382ca0;
          }
        }
        puVar43 = puVar26;
        if (uVar17 < uVar14 || uVar17 - uVar14 == 0) {
          puVar25 = puVar12;
          uVar44 = uVar17;
        }
        else {
          if ((uVar14 - 1 < 0x3f) || ((puVar26 < puVar12 + uVar1 && (puVar12 < puVar26 + uVar1)))) {
            puVar22 = (undefined1 *)(ulong)uVar14;
            puVar25 = puVar12;
LAB_00382d54:
            uVar44 = (uint)puVar22;
            uVar20 = uVar44 & 7;
            puVar26 = puVar25;
            puVar42 = puVar43;
            if (((ulong)puVar22 & 7) != 0) {
              do {
                puVar25 = puVar26 + 1;
                puVar22 = (undefined1 *)(ulong)((int)puVar22 - 1);
                uVar20 = uVar20 - 1;
                puVar43 = puVar42 + 1;
                *puVar42 = *puVar26;
                puVar26 = puVar25;
                puVar42 = puVar43;
              } while (uVar20 != 0);
            }
            puVar26 = puVar43;
            if (6 < uVar44 - 1) {
              do {
                *puVar26 = *puVar25;
                puVar26[1] = puVar25[1];
                puVar26[2] = puVar25[2];
                puVar26[3] = puVar25[3];
                puVar26[4] = puVar25[4];
                puVar26[5] = puVar25[5];
                puVar26[6] = puVar25[6];
                puVar43 = puVar26 + 8;
                uVar20 = (int)puVar22 - 8;
                puVar22 = (undefined1 *)(ulong)uVar20;
                puVar26[7] = puVar25[7];
                puVar25 = puVar25 + 8;
                puVar26 = puVar43;
              } while (uVar20 != 0);
              puVar22 = (undefined1 *)0x0;
            }
          }
          else {
            if (uVar38 - 0x40 == 0) {
              lVar24 = 0;
            }
            else {
              lVar24 = 0;
              lVar41 = -(uVar2 & 0x7fffffffffffffe);
              do {
                puVar6 = (undefined8 *)(puVar12 + lVar24 + 0x70);
                puVar7 = (undefined8 *)(puVar26 + lVar24 + 0x40);
                lVar24 = lVar24 + 0x80;
                uVar47 = puVar6[-0xe];
                uVar49 = puVar6[-0xb];
                uVar48 = puVar6[-0xc];
                uVar51 = puVar6[-9];
                uVar50 = puVar6[-10];
                uVar53 = puVar6[-7];
                uVar52 = puVar6[-8];
                puVar7[-7] = puVar6[-0xd];
                puVar7[-8] = uVar47;
                puVar7[-5] = uVar49;
                puVar7[-6] = uVar48;
                lVar41 = lVar41 + 2;
                puVar7[-3] = uVar51;
                puVar7[-4] = uVar50;
                puVar7[-1] = uVar53;
                puVar7[-2] = uVar52;
                uVar47 = puVar6[-6];
                uVar49 = puVar6[-3];
                uVar48 = puVar6[-4];
                uVar51 = puVar6[-1];
                uVar50 = puVar6[-2];
                uVar53 = puVar6[1];
                uVar52 = *puVar6;
                puVar7[1] = puVar6[-5];
                *puVar7 = uVar47;
                puVar7[3] = uVar49;
                puVar7[2] = uVar48;
                puVar7[5] = uVar51;
                puVar7[4] = uVar50;
                puVar7[7] = uVar53;
                puVar7[6] = uVar52;
              } while (lVar41 != 0);
            }
            puVar43 = puVar26 + uVar38;
            if ((uVar2 & 1) != 0) {
              puVar6 = (undefined8 *)(puVar12 + lVar24);
              uVar47 = *puVar6;
              uVar49 = puVar6[3];
              uVar48 = puVar6[2];
              uVar51 = puVar6[5];
              uVar50 = puVar6[4];
              uVar53 = puVar6[7];
              uVar52 = puVar6[6];
              puVar7 = (undefined8 *)(puVar26 + lVar24);
              puVar7[1] = puVar6[1];
              *puVar7 = uVar47;
              puVar7[3] = uVar49;
              puVar7[2] = uVar48;
              puVar7[5] = uVar51;
              puVar7[4] = uVar50;
              puVar7[7] = uVar53;
              puVar7[6] = uVar52;
            }
            puVar22 = (undefined1 *)(ulong)(uVar14 - (int)uVar38);
            puVar25 = puVar12 + uVar38;
            if (uVar1 != uVar38) goto LAB_00382d54;
          }
          puVar25 = puVar43 + -(ulong)uVar34;
          uVar44 = uVar17 - uVar14;
        }
      }
    }
    else {
      puVar25 = puVar12 + uVar37;
      uVar17 = uVar44 - uVar20;
      if (uVar20 <= uVar44 && uVar17 != 0) {
        iVar4 = iVar40 + -1 + uVar29 + uVar21;
        uVar29 = iVar4 - iVar45;
        uVar44 = uVar17;
        if ((uVar29 < 0x3f) ||
           ((uVar27 = (ulong)(uint)(iVar4 - iVar45), puVar43 < puVar12 + uVar37 + uVar27 + 1 &&
            (puVar25 < puVar43 + uVar27 + 1)))) {
          uVar21 = uVar20 - 1;
          uVar29 = uVar20 & 7;
          puVar22 = puVar43;
        }
        else {
          uVar27 = (ulong)uVar29 + 1;
          uVar23 = uVar27 & 0x1ffffffc0;
          uVar3 = (uVar23 - 0x40 >> 6) + 1;
          lVar24 = 0;
          if (uVar23 - 0x40 != 0) {
            lVar41 = -(uVar3 & 0x7fffffffffffffe);
            do {
              puVar6 = (undefined8 *)(puVar12 + lVar24 + uVar37 + 0x70);
              puVar7 = (undefined8 *)(puVar43 + lVar24 + 0x40);
              lVar24 = lVar24 + 0x80;
              uVar47 = puVar6[-0xe];
              uVar49 = puVar6[-0xb];
              uVar48 = puVar6[-0xc];
              uVar51 = puVar6[-9];
              uVar50 = puVar6[-10];
              uVar53 = puVar6[-7];
              uVar52 = puVar6[-8];
              puVar7[-7] = puVar6[-0xd];
              puVar7[-8] = uVar47;
              puVar7[-5] = uVar49;
              puVar7[-6] = uVar48;
              lVar41 = lVar41 + 2;
              puVar7[-3] = uVar51;
              puVar7[-4] = uVar50;
              puVar7[-1] = uVar53;
              puVar7[-2] = uVar52;
              uVar47 = puVar6[-6];
              uVar49 = puVar6[-3];
              uVar48 = puVar6[-4];
              uVar51 = puVar6[-1];
              uVar50 = puVar6[-2];
              uVar53 = puVar6[1];
              uVar52 = *puVar6;
              puVar7[1] = puVar6[-5];
              *puVar7 = uVar47;
              puVar7[3] = uVar49;
              puVar7[2] = uVar48;
              puVar7[5] = uVar51;
              puVar7[4] = uVar50;
              puVar7[7] = uVar53;
              puVar7[6] = uVar52;
            } while (lVar41 != 0);
          }
          puVar22 = puVar43 + uVar23;
          if ((uVar3 & 1) != 0) {
            puVar6 = (undefined8 *)(puVar25 + lVar24);
            uVar47 = *puVar6;
            uVar49 = puVar6[3];
            uVar48 = puVar6[2];
            uVar51 = puVar6[5];
            uVar50 = puVar6[4];
            uVar53 = puVar6[7];
            uVar52 = puVar6[6];
            puVar7 = (undefined8 *)(puVar43 + lVar24);
            puVar7[1] = puVar6[1];
            *puVar7 = uVar47;
            puVar7[3] = uVar49;
            puVar7[2] = uVar48;
            puVar7[5] = uVar51;
            puVar7[4] = uVar50;
            puVar7[7] = uVar53;
            puVar7[6] = uVar52;
          }
          if (uVar27 == uVar23) goto LAB_003828b4;
          uVar20 = uVar20 - (int)uVar23;
          uVar21 = uVar20 - 1;
          uVar29 = uVar20 & 7;
          puVar25 = puVar25 + uVar23;
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          uVar20 = uVar20 - 1;
          *puVar22 = *puVar25;
          puVar22 = puVar22 + 1;
          puVar25 = puVar25 + 1;
        }
        puVar43 = puVar22;
        if (6 < uVar21) {
          do {
            *puVar43 = *puVar25;
            puVar43[1] = puVar25[1];
            puVar43[2] = puVar25[2];
            puVar43[3] = puVar25[3];
            puVar43[4] = puVar25[4];
            puVar43[5] = puVar25[5];
            puVar43[6] = puVar25[6];
            puVar22 = puVar43 + 8;
            uVar20 = uVar20 - 8;
            puVar43[7] = puVar25[7];
            puVar25 = puVar25 + 8;
            puVar43 = puVar22;
          } while (uVar20 != 0);
          goto LAB_003828b0;
        }
        goto LAB_003828b4;
      }
    }
  }
  uVar34 = uVar44 - 3;
  if (2 < uVar44) {
    uVar20 = uVar34 / 3 + 1;
    uVar29 = uVar20 & 3;
    puVar19 = (undefined1 *)(ulong)uVar20;
    puVar26 = puVar25;
    puVar42 = puVar43;
    while( true ) {
      puVar25 = puVar22;
      puVar43 = puVar19;
      if (uVar29 == 0) break;
      *puVar42 = *puVar26;
      puVar42[1] = puVar26[1];
      uVar44 = uVar44 - 3;
      puVar42[2] = puVar26[2];
      uVar29 = uVar29 - 1;
      puVar19 = puVar42 + 3;
      puVar22 = puVar26 + 3;
      puVar26 = puVar26 + 3;
      puVar42 = puVar42 + 3;
    }
    if (8 < uVar34) {
      do {
        *puVar42 = *puVar26;
        puVar42[1] = puVar26[1];
        puVar42[2] = puVar26[2];
        puVar42[3] = puVar26[3];
        puVar42[4] = puVar26[4];
        puVar42[5] = puVar26[5];
        puVar42[6] = puVar26[6];
        puVar42[7] = puVar26[7];
        puVar42[8] = puVar26[8];
        puVar42[9] = puVar26[9];
        puVar42[10] = puVar26[10];
        puVar25 = puVar26 + 0xc;
        puVar43 = puVar42 + 0xc;
        uVar44 = uVar44 - 0xc;
        puVar42[0xb] = puVar26[0xb];
        puVar26 = puVar25;
        puVar42 = puVar43;
      } while (2 < uVar44);
    }
  }
  puVar22 = puVar43;
  if (uVar44 != 0) {
    puVar22 = puVar43 + 1;
    *puVar43 = *puVar25;
    if (uVar44 != 1) {
      puVar43[1] = puVar25[1];
      puVar22 = puVar43 + 2;
    }
  }
LAB_003824dc:
  puVar43 = puVar22;
  if (puVar46 + ((int)lVar18 - 0x101) <= puVar22 || pbVar5 <= pbVar31) {
LAB_00382ea8:
    uVar8 = (uint)uVar35 & 7;
    param_1[3] = (long)puVar22;
    lVar33 = (long)pbVar31 - (uVar35 >> 3);
    *param_1 = lVar33;
    *(int *)(param_1 + 4) = ((int)(puVar46 + ((int)lVar18 - 0x101)) - (int)puVar22) + 0x101;
    *(int *)(param_1 + 1) = ((int)pbVar5 - (int)lVar33) + 5;
    *(ulong *)(lVar28 + 0x50) = uVar30 & (uint)~(-1 << (ulong)uVar8);
    *(uint *)(lVar28 + 0x58) = uVar8;
    return;
  }
  goto LAB_00382468;
}


