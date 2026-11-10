/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f5bf0; name: FUN_034f5bf0
 */


void FUN_034f5bf0(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  
  puVar1 = (undefined8 *)((long)param_3 + (ulong)param_5 * 4);
  if (1.1920929e-07 <= ABS(param_2)) {
    fVar12 = param_2 + param_1;
    fVar19 = param_1 + param_2 * 2.0;
    fVar20 = param_1 + param_2 * 3.0;
    fVar13 = param_2 * 4.0;
    param_2 = param_2 * 8.0;
    fVar14 = param_1 + fVar13;
    fVar16 = fVar12 + fVar13;
    fVar17 = fVar19 + fVar13;
    fVar13 = fVar20 + fVar13;
    do {
      puVar2 = param_3 + 4;
      fVar3 = fVar14 * (float)param_3[2];
      fVar5 = fVar16 * (float)((ulong)param_3[2] >> 0x20);
      fVar7 = fVar17 * (float)param_3[3];
      fVar9 = fVar13 * (float)((ulong)param_3[3] >> 0x20);
      fVar4 = param_1 * (float)*param_3;
      fVar6 = fVar12 * (float)((ulong)*param_3 >> 0x20);
      fVar8 = fVar19 * (float)param_3[1];
      fVar10 = fVar20 * (float)((ulong)param_3[1] >> 0x20);
      param_1 = param_1 + param_2;
      fVar12 = fVar12 + param_2;
      fVar19 = fVar19 + param_2;
      fVar20 = fVar20 + param_2;
      fVar14 = fVar14 + param_2;
      fVar16 = fVar16 + param_2;
      fVar17 = fVar17 + param_2;
      fVar13 = fVar13 + param_2;
      param_4[1] = CONCAT44((float)((ulong)param_4[1] >> 0x20) + fVar10,(float)param_4[1] + fVar8);
      *param_4 = CONCAT44((float)((ulong)*param_4 >> 0x20) + fVar6,(float)*param_4 + fVar4);
      param_4[3] = CONCAT44((float)((ulong)param_4[3] >> 0x20) + fVar9,(float)param_4[3] + fVar7);
      param_4[2] = CONCAT44((float)((ulong)param_4[2] >> 0x20) + fVar5,(float)param_4[2] + fVar3);
      param_3 = puVar2;
      param_4 = param_4 + 4;
    } while (puVar2 < puVar1);
  }
  else if (1.1920929e-07 <= ABS(param_1)) {
    do {
      puVar2 = param_3 + 4;
      uVar11 = *param_3;
      uVar18 = param_3[3];
      uVar15 = param_3[2];
      param_4[1] = CONCAT44((float)((ulong)param_4[1] >> 0x20) +
                            param_1 * (float)((ulong)param_3[1] >> 0x20),
                            (float)param_4[1] + param_1 * (float)param_3[1]);
      *param_4 = CONCAT44((float)((ulong)*param_4 >> 0x20) +
                          param_1 * (float)((ulong)uVar11 >> 0x20),
                          (float)*param_4 + param_1 * (float)uVar11);
      param_4[3] = CONCAT44((float)((ulong)param_4[3] >> 0x20) +
                            param_1 * (float)((ulong)uVar18 >> 0x20),
                            (float)param_4[3] + param_1 * (float)uVar18);
      param_4[2] = CONCAT44((float)((ulong)param_4[2] >> 0x20) +
                            param_1 * (float)((ulong)uVar15 >> 0x20),
                            (float)param_4[2] + param_1 * (float)uVar15);
      param_3 = puVar2;
      param_4 = param_4 + 4;
    } while (puVar2 < puVar1);
  }
  return;
}


