/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00106b90; name: FUN_00106b90
 */


void FUN_00106b90(long param_1,ulong param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (1 < param_2) {
    pfVar2 = (float *)(param_1 + 0xc);
    lVar3 = param_2 - 1;
    pfVar4 = (float *)(&DAT_03cacd4c + param_3 * 8);
    pfVar5 = (float *)(param_1 + param_3 * 0x10 + -4);
    do {
      lVar3 = lVar3 + -1;
      pfVar1 = pfVar4 + -1;
      fVar11 = *pfVar4;
      pfVar4 = pfVar4 + 2;
      fVar9 = (*pfVar2 + *pfVar5) * 0.5;
      fVar7 = (pfVar2[-1] - pfVar5[-1]) * 0.5;
      fVar6 = pfVar2[-1] - fVar7;
      fVar8 = *pfVar2 - fVar9;
      fVar10 = *pfVar1 * fVar9 + fVar7 * fVar11;
      fVar7 = fVar7 * *pfVar1 - fVar11 * fVar9;
      pfVar2[-1] = fVar6 - fVar10;
      *pfVar2 = fVar8 + fVar7;
      pfVar5[-1] = fVar6 + fVar10;
      *pfVar5 = fVar7 - fVar8;
      pfVar2 = pfVar2 + 2;
      pfVar5 = pfVar5 + -2;
    } while (lVar3 != 0);
  }
  return;
}


