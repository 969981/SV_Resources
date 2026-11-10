/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00106cf0; name: FUN_00106cf0
 */


void FUN_00106cf0(long param_1,long param_2,long param_3,long param_4,long param_5,ulong param_6,
                 ulong param_7,long param_8)

{
  float *pfVar1;
  long lVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  
  if (param_6 < param_7) {
    lVar7 = param_6 * 8;
    lVar2 = param_7 - param_6;
    puVar3 = (ushort *)(param_8 + param_6 * 2);
    pfVar4 = (float *)(param_2 + lVar7 + 4);
    pfVar5 = (float *)(param_4 + lVar7 + 4);
    pfVar6 = (float *)(param_5 + lVar7 + 4);
    pfVar8 = (float *)(param_3 + lVar7 + 4);
    do {
      pfVar1 = (float *)(param_1 + (ulong)*puVar3 * 8);
      lVar2 = lVar2 + -1;
      *pfVar1 = pfVar4[-1] + pfVar5[-1];
      pfVar1[1] = *pfVar4 + *pfVar5;
      pfVar1[2] = pfVar4[-1] - pfVar5[-1];
      pfVar1[3] = *pfVar4 - *pfVar5;
      pfVar1[4] = pfVar6[-1] + pfVar8[-1];
      pfVar1[5] = *pfVar6 + *pfVar8;
      pfVar1[6] = pfVar6[-1] - pfVar8[-1];
      pfVar1[7] = *pfVar6 - *pfVar8;
      puVar3 = puVar3 + 1;
      pfVar4 = pfVar4 + 2;
      pfVar5 = pfVar5 + 2;
      pfVar6 = pfVar6 + 2;
      pfVar8 = pfVar8 + 2;
    } while (lVar2 != 0);
  }
  return;
}


