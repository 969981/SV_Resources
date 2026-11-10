/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e21dc; name: FUN_033e21dc
 */


void FUN_033e21dc(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  ulong uVar17;
  float *pfVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  
  uVar1 = (uint)(ushort)param_1[0xc6];
  if ((uint)*(ushort *)((long)param_1 + 0x31a) <= (uint)(ushort)param_1[0xc6]) {
    uVar1 = (uint)*(ushort *)((long)param_1 + 0x31a);
  }
  if (param_5 != 0) {
    lVar13 = *(long *)(param_1 + 2);
    uVar14 = *param_1;
    uVar17 = (ulong)*(ushort *)((long)param_1 + 0x316);
    uVar15 = param_1[4];
    do {
      uVar11 = (ulong)(ushort)param_1[0xc5];
      uVar3 = *(ushort *)((long)param_1 + uVar11 * 2 + 0x214);
      uVar5 = uVar14 - *(ushort *)((long)param_1 + (uVar17 & 0xffff) * 2 + 0x294);
      uVar2 = uVar14 - uVar3;
      if (uVar5 <= uVar14 - uVar3) {
        uVar2 = uVar5;
      }
      uVar5 = uVar14 - uVar15;
      if (uVar2 <= uVar14 - uVar15) {
        uVar5 = uVar2;
      }
      uVar2 = param_5;
      if (uVar5 <= param_5) {
        uVar2 = uVar5;
      }
      if (3 < uVar2) {
        puVar8 = param_2;
        puVar9 = param_3;
        puVar10 = param_4;
        uVar14 = uVar2;
        while( true ) {
          param_2 = puVar8 + 2;
          uVar19 = *puVar8;
          puVar7 = (undefined8 *)(lVar13 + (ulong)uVar15 * 4);
          puVar7[1] = puVar8[1];
          *puVar7 = uVar19;
          param_1[4] = param_1[4] + 4;
          if ((uVar1 & 0xfffc) == 0) {
            uVar15 = 0;
            uVar20 = 0;
            uVar19 = 0;
            uVar22 = 0;
            uVar21 = 0;
          }
          else {
            uVar22 = 0;
            uVar21 = 0;
            uVar20 = 0;
            uVar19 = 0;
            lVar12 = 0x14d;
            puVar16 = (ushort *)((long)param_1 + 0x29a);
            pfVar18 = (float *)(param_1 + 0x45);
            do {
              fVar36 = pfVar18[-0x40];
              fVar37 = pfVar18[-0x3f];
              fVar23 = pfVar18[-0x3e];
              fVar28 = pfVar18[-0x3d];
              puVar8 = (undefined8 *)(lVar13 + (ulong)puVar16[-0x43] * 4);
              uVar27 = puVar8[1];
              uVar25 = *puVar8;
              puVar8 = (undefined8 *)(lVar13 + (ulong)puVar16[-0x42] * 4);
              uVar31 = puVar8[1];
              uVar30 = *puVar8;
              puVar8 = (undefined8 *)(lVar13 + (ulong)puVar16[-0x41] * 4);
              uVar33 = puVar8[1];
              uVar32 = *puVar8;
              puVar8 = (undefined8 *)(lVar13 + (ulong)puVar16[-3] * 4);
              uVar39 = puVar8[1];
              uVar38 = *puVar8;
              puVar8 = (undefined8 *)(lVar13 + (ulong)puVar16[-0x40] * 4);
              uVar35 = puVar8[1];
              uVar34 = *puVar8;
              fVar29 = *pfVar18;
              puVar8 = (undefined8 *)(lVar13 + (ulong)puVar16[-2] * 4);
              uVar26 = puVar8[1];
              uVar24 = *puVar8;
              uVar21 = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                                (float)((ulong)uVar25 >> 0x20) * fVar36 +
                                (float)((ulong)uVar30 >> 0x20) * fVar37 +
                                (float)((ulong)uVar32 >> 0x20) * fVar23 +
                                (float)((ulong)uVar34 >> 0x20) * fVar28,
                                (float)uVar21 + (float)uVar25 * fVar36 + (float)uVar30 * fVar37 +
                                (float)uVar32 * fVar23 + (float)uVar34 * fVar28);
              uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                                (float)((ulong)uVar27 >> 0x20) * fVar36 +
                                (float)((ulong)uVar31 >> 0x20) * fVar37 +
                                (float)((ulong)uVar33 >> 0x20) * fVar23 +
                                (float)((ulong)uVar35 >> 0x20) * fVar28,
                                (float)uVar22 + (float)uVar27 * fVar36 + (float)uVar31 * fVar37 +
                                (float)uVar33 * fVar23 + (float)uVar35 * fVar28);
              fVar28 = pfVar18[1];
              puVar8 = (undefined8 *)(lVar13 + (ulong)puVar16[-1] * 4);
              uVar31 = puVar8[1];
              uVar30 = *puVar8;
              fVar23 = pfVar18[2];
              fVar36 = pfVar18[3];
              pfVar18 = pfVar18 + 4;
              puVar8 = (undefined8 *)(lVar13 + (ulong)*puVar16 * 4);
              uVar27 = puVar8[1];
              uVar25 = *puVar8;
              puVar16[-0x43] = puVar16[-0x43] + 4;
              puVar16[-0x42] = puVar16[-0x42] + 4;
              uVar17 = lVar12 - 0x149;
              lVar12 = lVar12 + 4;
              puVar16[-0x41] = puVar16[-0x41] + 4;
              puVar16[-0x40] = puVar16[-0x40] + 4;
              puVar16[-3] = puVar16[-3] + 4;
              puVar16[-2] = puVar16[-2] + 4;
              puVar16[-1] = puVar16[-1] + 4;
              *puVar16 = *puVar16 + 4;
              uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                                fVar29 * (float)((ulong)uVar38 >> 0x20) +
                                (float)((ulong)uVar24 >> 0x20) * fVar28 +
                                (float)((ulong)uVar30 >> 0x20) * fVar23 +
                                (float)((ulong)uVar25 >> 0x20) * fVar36,
                                (float)uVar19 + fVar29 * (float)uVar38 + (float)uVar24 * fVar28 +
                                (float)uVar30 * fVar23 + (float)uVar25 * fVar36);
              uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) +
                                fVar29 * (float)((ulong)uVar39 >> 0x20) +
                                (float)((ulong)uVar26 >> 0x20) * fVar28 +
                                (float)((ulong)uVar31 >> 0x20) * fVar23 +
                                (float)((ulong)uVar27 >> 0x20) * fVar36,
                                (float)uVar20 + fVar29 * (float)uVar39 + (float)uVar26 * fVar28 +
                                (float)uVar31 * fVar23 + (float)uVar27 * fVar36);
              puVar16 = puVar16 + 4;
            } while (uVar17 < (uVar1 & 0xfffc));
            uVar15 = (int)lVar12 - 0x14d;
          }
          if (uVar15 < (ushort)param_1[0xc6]) {
            uVar17 = (ulong)uVar15;
            do {
              uVar3 = *(ushort *)((long)param_1 + uVar17 * 2 + 0x214);
              puVar8 = (undefined8 *)(lVar13 + (ulong)uVar3 * 4);
              uVar25 = puVar8[1];
              uVar24 = *puVar8;
              fVar29 = (float)param_1[uVar17 + 5];
              *(ushort *)((long)param_1 + uVar17 * 2 + 0x214) = uVar3 + 4;
              uVar17 = uVar17 + 1;
              uVar21 = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                                (float)((ulong)uVar24 >> 0x20) * fVar29,
                                (float)uVar21 + (float)uVar24 * fVar29);
              uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                                (float)((ulong)uVar25 >> 0x20) * fVar29,
                                (float)uVar22 + (float)uVar25 * fVar29);
            } while (uVar17 < (ushort)param_1[0xc6]);
          }
          if (uVar15 < *(ushort *)((long)param_1 + 0x31a)) {
            uVar17 = (ulong)uVar15;
            do {
              uVar3 = *(ushort *)((long)param_1 + uVar17 * 2 + 0x294);
              puVar8 = (undefined8 *)(lVar13 + (ulong)uVar3 * 4);
              uVar25 = puVar8[1];
              uVar24 = *puVar8;
              fVar29 = (float)param_1[uVar17 + 0x45];
              *(ushort *)((long)param_1 + uVar17 * 2 + 0x294) = uVar3 + 4;
              uVar17 = uVar17 + 1;
              uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                                (float)((ulong)uVar24 >> 0x20) * fVar29,
                                (float)uVar19 + (float)uVar24 * fVar29);
              uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) +
                                (float)((ulong)uVar25 >> 0x20) * fVar29,
                                (float)uVar20 + (float)uVar25 * fVar29);
            } while (uVar17 < *(ushort *)((long)param_1 + 0x31a));
          }
          uVar14 = uVar14 - 4;
          param_3 = puVar9 + 2;
          puVar9[1] = uVar22;
          *puVar9 = uVar21;
          param_4 = puVar10 + 2;
          puVar10[1] = uVar20;
          *puVar10 = uVar19;
          if (uVar14 < 4) break;
          uVar15 = param_1[4];
          puVar8 = param_2;
          puVar9 = param_3;
          puVar10 = param_4;
        }
        uVar11 = (ulong)(ushort)param_1[0xc5];
        uVar3 = *(ushort *)((long)param_1 + uVar11 * 2 + 0x214);
        uVar14 = *param_1;
      }
      if (uVar14 == uVar3) {
        *(undefined2 *)((long)param_1 + uVar11 * 2 + 0x214) = 0;
        uVar4 = (ushort)param_1[0xc6];
        uVar3 = (short)param_1[0xc5] + 1;
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        *(ushort *)(param_1 + 0xc5) = uVar3 - uVar6 * uVar4;
      }
      uVar17 = (ulong)*(ushort *)((long)param_1 + 0x316);
      if (uVar14 == *(ushort *)((long)param_1 + uVar17 * 2 + 0x294)) {
        *(undefined2 *)((long)param_1 + uVar17 * 2 + 0x294) = 0;
        uVar3 = *(ushort *)((long)param_1 + 0x31a);
        uVar15 = *(ushort *)((long)param_1 + 0x316) + 1 & 0xffff;
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar15 / uVar3;
        }
        uVar15 = uVar15 - uVar5 * uVar3;
        uVar17 = (ulong)uVar15;
        *(short *)((long)param_1 + 0x316) = (short)uVar15;
      }
      uVar15 = param_1[4];
      if (uVar15 == uVar14) {
        uVar15 = 0;
        param_1[4] = 0;
      }
      param_5 = param_5 - uVar2;
    } while (param_5 != 0);
  }
  return;
}


