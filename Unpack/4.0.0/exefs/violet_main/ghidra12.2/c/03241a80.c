/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03241a80; name: FUN_03241a80
 */


void FUN_03241a80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar2 = *param_2;
  fVar1 = (float)uVar2;
  fVar9 = (float)param_2[2];
  iVar10 = -(uint)(fVar9 < fVar1);
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  fVar6 = (float)((ulong)param_2[2] >> 0x20);
  iVar12 = -(uint)(fVar6 < fVar3);
  fVar4 = (float)param_2[1];
  fVar7 = (float)param_2[3];
  iVar14 = -(uint)(fVar7 < fVar4);
  if (CONCAT13((byte)((uint)iVar12 >> 0x18) | (byte)((uint)iVar10 >> 0x18) |
               (byte)((uint)iVar14 >> 0x18),
               CONCAT12((byte)((uint)iVar12 >> 0x10) | (byte)((uint)iVar10 >> 0x10) |
                        (byte)((uint)iVar14 >> 0x10),
                        CONCAT11((byte)((uint)iVar12 >> 8) | (byte)((uint)iVar10 >> 8) |
                                 (byte)((uint)iVar14 >> 8),
                                 (byte)iVar12 | (byte)iVar10 | (byte)iVar14))) == 0) {
    fVar11 = (fVar1 + fVar9) * 0.5;
    fVar13 = (fVar3 + fVar6) * 0.5;
    fVar15 = (fVar4 + fVar7) * 0.5;
    fVar1 = (fVar9 - fVar1) * 0.5;
    fVar3 = (fVar6 - fVar3) * 0.5;
    fVar4 = (fVar7 - fVar4) * 0.5;
    fVar16 = (float)param_1[2];
    fVar17 = (float)((ulong)param_1[2] >> 0x20);
    fVar18 = (float)param_1[3];
    fVar19 = (float)((ulong)param_1[3] >> 0x20);
    fVar9 = (float)*param_1;
    fVar6 = (float)((ulong)*param_1 >> 0x20);
    fVar7 = (float)param_1[1];
    fVar8 = (float)((ulong)param_1[1] >> 0x20);
    fVar24 = (float)param_1[4];
    fVar25 = (float)((ulong)param_1[4] >> 0x20);
    fVar26 = (float)param_1[5];
    fVar27 = (float)((ulong)param_1[5] >> 0x20);
    fVar20 = ABS(fVar24 * fVar4) + ABS(fVar9 * fVar1) + ABS(fVar16 * fVar3);
    fVar21 = ABS(fVar25 * fVar4) + ABS(fVar6 * fVar1) + ABS(fVar17 * fVar3);
    fVar22 = ABS(fVar26 * fVar4) + ABS(fVar7 * fVar1) + ABS(fVar18 * fVar3);
    fVar23 = ABS(fVar27 * fVar4) + ABS(fVar8 * fVar1) + ABS(fVar19 * fVar3);
    fVar1 = (float)param_1[6] + fVar24 * fVar15 + fVar9 * fVar11 + fVar16 * fVar13;
    fVar3 = (float)((ulong)param_1[6] >> 0x20) + fVar25 * fVar15 + fVar6 * fVar11 + fVar17 * fVar13;
    fVar4 = (float)param_1[7] + fVar26 * fVar15 + fVar7 * fVar11 + fVar18 * fVar13;
    fVar9 = (float)((ulong)param_1[7] >> 0x20) + fVar27 * fVar15 + fVar8 * fVar11 + fVar19 * fVar13;
    uVar2 = CONCAT44(fVar21 + fVar3,fVar20 + fVar1);
    uVar5 = CONCAT44(fVar23 + fVar9,fVar22 + fVar4);
    param_3[1] = CONCAT44(fVar9 - fVar23,fVar4 - fVar22);
    *param_3 = CONCAT44(fVar3 - fVar21,fVar1 - fVar20);
  }
  else {
    param_3[1] = param_2[1];
    *param_3 = uVar2;
    uVar5 = param_2[3];
    uVar2 = param_2[2];
  }
  param_3[3] = uVar5;
  param_3[2] = uVar2;
  return;
}


