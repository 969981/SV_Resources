/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f5af0; name: FUN_034f5af0
 */


void FUN_034f5af0(float param_1,undefined8 *param_2,long *param_3,uint param_4,float *param_5,
                 long param_6,long param_7,ushort param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  
  if ((param_4 & 0xff) != 0) {
    puVar1 = (undefined8 *)((long)param_2 + (ulong)param_8 * 4);
    uVar2 = 0;
    do {
      fVar14 = *param_5 * *(float *)(param_6 + uVar2 * 4);
      fVar21 = (param_5[1] * *(float *)(param_7 + uVar2 * 4) - fVar14) * param_1;
      puVar3 = (undefined8 *)(*param_3 + uVar2 * 4 * (ulong)*(ushort *)(param_3 + 2));
      if (1.1920929e-07 <= ABS(fVar21)) {
        fVar15 = fVar21 + fVar14;
        fVar24 = fVar14 + fVar21 * 2.0;
        fVar25 = fVar14 + fVar21 * 3.0;
        fVar16 = fVar21 * 4.0;
        fVar21 = fVar21 * 8.0;
        fVar17 = fVar14 + fVar16;
        fVar19 = fVar15 + fVar16;
        fVar20 = fVar24 + fVar16;
        fVar16 = fVar25 + fVar16;
        puVar4 = param_2;
        do {
          puVar5 = puVar4 + 4;
          fVar6 = fVar17 * (float)puVar4[2];
          fVar8 = fVar19 * (float)((ulong)puVar4[2] >> 0x20);
          fVar10 = fVar20 * (float)puVar4[3];
          fVar12 = fVar16 * (float)((ulong)puVar4[3] >> 0x20);
          fVar7 = fVar14 * (float)*puVar4;
          fVar9 = fVar15 * (float)((ulong)*puVar4 >> 0x20);
          fVar11 = fVar24 * (float)puVar4[1];
          fVar13 = fVar25 * (float)((ulong)puVar4[1] >> 0x20);
          fVar14 = fVar14 + fVar21;
          fVar15 = fVar15 + fVar21;
          fVar24 = fVar24 + fVar21;
          fVar25 = fVar25 + fVar21;
          fVar17 = fVar17 + fVar21;
          fVar19 = fVar19 + fVar21;
          fVar20 = fVar20 + fVar21;
          fVar16 = fVar16 + fVar21;
          puVar3[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) + fVar13,(float)puVar3[1] + fVar11)
          ;
          *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + fVar9,(float)*puVar3 + fVar7);
          puVar3[3] = CONCAT44((float)((ulong)puVar3[3] >> 0x20) + fVar12,(float)puVar3[3] + fVar10)
          ;
          puVar3[2] = CONCAT44((float)((ulong)puVar3[2] >> 0x20) + fVar8,(float)puVar3[2] + fVar6);
          puVar3 = puVar3 + 4;
          puVar4 = puVar5;
        } while (puVar5 < puVar1);
      }
      else if (1.1920929e-07 <= ABS(fVar14)) {
        puVar4 = param_2;
        do {
          puVar5 = puVar4 + 4;
          uVar18 = *puVar4;
          uVar23 = puVar4[3];
          uVar22 = puVar4[2];
          puVar3[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) +
                               fVar14 * (float)((ulong)puVar4[1] >> 0x20),
                               (float)puVar3[1] + fVar14 * (float)puVar4[1]);
          *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) +
                             fVar14 * (float)((ulong)uVar18 >> 0x20),
                             (float)*puVar3 + fVar14 * (float)uVar18);
          puVar3[3] = CONCAT44((float)((ulong)puVar3[3] >> 0x20) +
                               fVar14 * (float)((ulong)uVar23 >> 0x20),
                               (float)puVar3[3] + fVar14 * (float)uVar23);
          puVar3[2] = CONCAT44((float)((ulong)puVar3[2] >> 0x20) +
                               fVar14 * (float)((ulong)uVar22 >> 0x20),
                               (float)puVar3[2] + fVar14 * (float)uVar22);
          puVar3 = puVar3 + 4;
          puVar4 = puVar5;
        } while (puVar5 < puVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != (param_4 & 0xff));
  }
  return;
}


