/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f5860; name: FUN_034f5860
 */


void FUN_034f5860(float param_1,long *param_2,long *param_3,float *param_4,long param_5,long param_6
                 ,ushort param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  
  uVar4 = *(uint *)(param_3 + 1);
  uVar5 = *(uint *)(param_2 + 1);
  uVar2 = uVar4 - (uVar4 >> 0xf & 1) & 0xff;
  uVar3 = uVar5 - (uVar5 >> 0xf & 1) & 0xff;
  if (uVar3 != 0 && uVar2 != 0) {
    uVar8 = 0;
    do {
      lVar10 = uVar8 * ((ulong)((uVar4 & 0xff) + 3) & 0x1fc);
      puVar1 = (undefined8 *)(*param_2 + uVar8 * *(ushort *)(param_2 + 2) * 4);
      puVar6 = (undefined8 *)((long)puVar1 + (ulong)param_7 * 4);
      uVar9 = 0;
      do {
        fVar22 = *param_4 * *(float *)(param_5 + lVar10 * 4 + uVar9 * 4);
        fVar24 = (param_4[1] * *(float *)(param_6 + lVar10 * 4 + uVar9 * 4) - fVar22) * param_1;
        puVar7 = (undefined8 *)(*param_3 + uVar9 * 4 * (ulong)*(ushort *)(param_3 + 2));
        if (1.1920929e-07 <= ABS(fVar24)) {
          fVar31 = fVar24 + fVar22;
          fVar32 = fVar22 + fVar24 * 2.0;
          fVar25 = fVar22 + fVar24 * 3.0;
          fVar26 = fVar24 * 4.0;
          fVar24 = fVar24 * 8.0;
          fVar28 = fVar22 + fVar26;
          fVar29 = fVar31 + fVar26;
          fVar13 = fVar32 + fVar26;
          fVar26 = fVar25 + fVar26;
          puVar11 = puVar1;
          do {
            puVar12 = puVar11 + 4;
            fVar14 = fVar28 * (float)puVar11[2];
            fVar16 = fVar29 * (float)((ulong)puVar11[2] >> 0x20);
            fVar18 = fVar13 * (float)puVar11[3];
            fVar21 = fVar26 * (float)((ulong)puVar11[3] >> 0x20);
            fVar15 = fVar22 * (float)*puVar11;
            fVar17 = fVar31 * (float)((ulong)*puVar11 >> 0x20);
            fVar20 = fVar32 * (float)puVar11[1];
            fVar19 = fVar25 * (float)((ulong)puVar11[1] >> 0x20);
            fVar22 = fVar22 + fVar24;
            fVar31 = fVar31 + fVar24;
            fVar32 = fVar32 + fVar24;
            fVar25 = fVar25 + fVar24;
            fVar28 = fVar28 + fVar24;
            fVar29 = fVar29 + fVar24;
            fVar13 = fVar13 + fVar24;
            fVar26 = fVar26 + fVar24;
            puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) + fVar19,
                                 (float)puVar7[1] + fVar20);
            *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + fVar17,(float)*puVar7 + fVar15);
            puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) + fVar21,
                                 (float)puVar7[3] + fVar18);
            puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) + fVar16,
                                 (float)puVar7[2] + fVar14);
            puVar7 = puVar7 + 4;
            puVar11 = puVar12;
          } while (puVar12 < puVar6);
        }
        else if (1.1920929e-07 <= ABS(fVar22)) {
          puVar11 = puVar1;
          do {
            puVar12 = puVar11 + 4;
            uVar23 = *puVar11;
            uVar30 = puVar11[3];
            uVar27 = puVar11[2];
            puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) +
                                 fVar22 * (float)((ulong)puVar11[1] >> 0x20),
                                 (float)puVar7[1] + fVar22 * (float)puVar11[1]);
            *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) +
                               fVar22 * (float)((ulong)uVar23 >> 0x20),
                               (float)*puVar7 + fVar22 * (float)uVar23);
            puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) +
                                 fVar22 * (float)((ulong)uVar30 >> 0x20),
                                 (float)puVar7[3] + fVar22 * (float)uVar30);
            puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) +
                                 fVar22 * (float)((ulong)uVar27 >> 0x20),
                                 (float)puVar7[2] + fVar22 * (float)uVar27);
            puVar7 = puVar7 + 4;
            puVar11 = puVar12;
          } while (puVar12 < puVar6);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar2);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3);
    uVar5 = *(uint *)(param_2 + 1);
  }
  if (((uVar5 >> 0xf & 1) != 0) && ((*(uint *)(param_3 + 1) >> 0xf & 1) != 0)) {
    uVar3 = uVar3 * ((uVar4 & 0xff) + 3 & 0x1fc);
    uVar8 = (ulong)((*(uint *)(param_3 + 1) & 0xff) - 1);
    fVar22 = *param_4 * *(float *)(param_5 + (ulong)uVar3 * 4 + uVar8 * 4);
    puVar6 = (undefined8 *)
             (*param_2 + (ulong)((uVar5 & 0xff) - 1) * (ulong)*(ushort *)(param_2 + 2) * 4);
    puVar7 = (undefined8 *)(*param_3 + uVar8 * 4 * (ulong)*(ushort *)(param_3 + 2));
    puVar1 = (undefined8 *)((long)puVar6 + (ulong)param_7 * 4);
    param_1 = (param_4[1] * *(float *)(param_6 + (ulong)uVar3 * 4 + uVar8 * 4) - fVar22) * param_1;
    if (1.1920929e-07 <= ABS(param_1)) {
      fVar24 = param_1 + fVar22;
      fVar31 = fVar22 + param_1 * 2.0;
      fVar32 = fVar22 + param_1 * 3.0;
      fVar25 = param_1 * 4.0;
      param_1 = param_1 * 8.0;
      fVar26 = fVar22 + fVar25;
      fVar28 = fVar24 + fVar25;
      fVar29 = fVar31 + fVar25;
      fVar25 = fVar32 + fVar25;
      do {
        puVar11 = puVar6 + 4;
        fVar13 = fVar26 * (float)puVar6[2];
        fVar15 = fVar28 * (float)((ulong)puVar6[2] >> 0x20);
        fVar17 = fVar29 * (float)puVar6[3];
        fVar20 = fVar25 * (float)((ulong)puVar6[3] >> 0x20);
        fVar14 = fVar22 * (float)*puVar6;
        fVar16 = fVar24 * (float)((ulong)*puVar6 >> 0x20);
        fVar18 = fVar31 * (float)puVar6[1];
        fVar21 = fVar32 * (float)((ulong)puVar6[1] >> 0x20);
        fVar22 = fVar22 + param_1;
        fVar24 = fVar24 + param_1;
        fVar31 = fVar31 + param_1;
        fVar32 = fVar32 + param_1;
        fVar26 = fVar26 + param_1;
        fVar28 = fVar28 + param_1;
        fVar29 = fVar29 + param_1;
        fVar25 = fVar25 + param_1;
        puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) + fVar21,(float)puVar7[1] + fVar18);
        *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + fVar16,(float)*puVar7 + fVar14);
        puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) + fVar20,(float)puVar7[3] + fVar17);
        puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) + fVar15,(float)puVar7[2] + fVar13);
        puVar6 = puVar11;
        puVar7 = puVar7 + 4;
      } while (puVar11 < puVar1);
    }
    else if (1.1920929e-07 <= ABS(fVar22)) {
      do {
        puVar11 = puVar6 + 4;
        uVar23 = *puVar6;
        uVar30 = puVar6[3];
        uVar27 = puVar6[2];
        puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) +
                             fVar22 * (float)((ulong)puVar6[1] >> 0x20),
                             (float)puVar7[1] + fVar22 * (float)puVar6[1]);
        *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + fVar22 * (float)((ulong)uVar23 >> 0x20)
                           ,(float)*puVar7 + fVar22 * (float)uVar23);
        puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) +
                             fVar22 * (float)((ulong)uVar30 >> 0x20),
                             (float)puVar7[3] + fVar22 * (float)uVar30);
        puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) +
                             fVar22 * (float)((ulong)uVar27 >> 0x20),
                             (float)puVar7[2] + fVar22 * (float)uVar27);
        puVar6 = puVar11;
        puVar7 = puVar7 + 4;
      } while (puVar11 < puVar1);
    }
  }
  *(ushort *)((long)param_3 + 0x12) = param_7;
  return;
}


