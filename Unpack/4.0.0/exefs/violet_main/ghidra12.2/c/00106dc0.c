/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00106dc0; name: FUN_00106dc0
 */


void FUN_00106dc0(float *param_1,float *param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *param_1 = *param_2 + *param_2;
  param_1[1] = *(float *)((long)param_2 + (param_3 & 0x7ffffffffffffffe) * 2) * 1.4142135;
  if (1 < param_4) {
    pfVar2 = param_2 + param_3;
    lVar1 = param_4 - 1;
    pfVar3 = (float *)(param_5 + 0xc);
    param_1 = param_1 + 3;
    do {
      param_2 = param_2 + 1;
      pfVar2 = pfVar2 + -1;
      fVar4 = *param_2;
      lVar1 = lVar1 + -1;
      fVar5 = *pfVar2;
      fVar6 = pfVar3[-1];
      fVar7 = *pfVar3;
      pfVar3 = pfVar3 + 2;
      param_1[-1] = fVar4 * fVar6 - fVar5 * fVar7;
      *param_1 = fVar5 * fVar6 + fVar4 * fVar7;
      param_1 = param_1 + 2;
    } while (lVar1 != 0);
  }
  return;
}


