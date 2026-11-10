/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00106c30; name: FUN_00106c30
 */


void FUN_00106c30(long param_1,long param_2,long param_3,long param_4,long param_5,ulong param_6,
                 ulong param_7,long param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  ushort *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (param_6 < param_7) {
    lVar9 = param_6 * 8;
    lVar4 = param_7 - param_6;
    pfVar6 = (float *)(param_2 + lVar9 + 4);
    pfVar7 = (float *)(param_4 + lVar9 + 4);
    pfVar8 = (float *)(param_3 + lVar9 + 4);
    pfVar10 = (float *)(param_5 + lVar9 + 4);
    puVar5 = (ushort *)(param_8 + param_6 * 2);
    do {
      pfVar3 = (float *)(param_1 + (ulong)*puVar5 * 8);
      lVar4 = lVar4 + -1;
      fVar18 = *pfVar6 + *pfVar7;
      pfVar1 = pfVar8 + -1;
      fVar15 = *pfVar8;
      pfVar8 = pfVar8 + 2;
      pfVar2 = pfVar10 + -1;
      fVar16 = *pfVar10;
      pfVar10 = pfVar10 + 2;
      fVar17 = pfVar6[-1] + pfVar7[-1];
      fVar11 = pfVar6[-1] - pfVar7[-1];
      fVar12 = *pfVar6 - *pfVar7;
      fVar13 = *pfVar1 + *pfVar2;
      fVar14 = fVar15 + fVar16;
      fVar15 = fVar15 - fVar16;
      fVar16 = *pfVar2 - *pfVar1;
      *pfVar3 = fVar17 + fVar13;
      pfVar3[1] = fVar18 + fVar14;
      pfVar6 = pfVar6 + 2;
      pfVar7 = pfVar7 + 2;
      pfVar3[4] = fVar17 - fVar13;
      pfVar3[5] = fVar18 - fVar14;
      pfVar3[2] = fVar11 + fVar15;
      pfVar3[3] = fVar12 + fVar16;
      pfVar3[6] = fVar11 - fVar15;
      pfVar3[7] = fVar12 - fVar16;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  return;
}


