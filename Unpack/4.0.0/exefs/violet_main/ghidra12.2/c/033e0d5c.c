/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e0d5c; name: FUN_033e0d5c
 */


void FUN_033e0d5c(float param_1,float param_2,uint *param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = (double)NEON_ucvtf((ulong)param_3[0x12]);
  dVar5 = 1.0 / ((double)param_4 * (double)param_1);
  dVar3 = 1.0 - (double)param_2 * (double)param_2;
  dVar1 = dVar4 * -1.7269388197455346 * dVar5;
  dVar2 = 1.0 / dVar1;
  if (dVar1 * dVar3 <= 1.0) {
    dVar2 = dVar3;
  }
  dVar1 = (double)NEON_ucvtf((ulong)*param_3);
  dVar1 = dVar1 * -3.0 * dVar5;
  dVar3 = 0.5756462732485116 -
          (double)(float)SQRT(1.0 - dVar2) * (double)(float)SQRT(1.0 - dVar2) * 0.5756462732485116;
  dVar6 = (double)NEON_fminnm(dVar3 * dVar1,0x3feff7ced916872b);
  dVar2 = exp2(dVar1 * 3.321928094887362);
  dVar1 = (double)NEON_ucvtf((ulong)param_3[6]);
  param_3[0x19] = (uint)(float)(dVar2 - dVar2 * dVar6);
  param_3[0x1a] = (uint)-(float)dVar6;
  dVar2 = dVar1 * -3.0 * dVar5;
  dVar6 = (double)NEON_fminnm(dVar3 * dVar2,0x3feff7ced916872b);
  dVar2 = exp2(dVar2 * 3.321928094887362);
  dVar1 = (double)NEON_ucvtf((ulong)param_3[0xc]);
  param_3[0x1c] = (uint)(float)(dVar2 - dVar2 * dVar6);
  param_3[0x1d] = (uint)-(float)dVar6;
  dVar2 = dVar1 * -3.0 * dVar5;
  dVar1 = (double)NEON_fminnm(dVar3 * dVar2,0x3feff7ced916872b);
  dVar2 = exp2(dVar2 * 3.321928094887362);
  param_3[0x1f] = (uint)(float)(dVar2 - dVar2 * dVar1);
  param_3[0x20] = (uint)-(float)dVar1;
  dVar5 = dVar4 * -3.0 * dVar5;
  dVar1 = (double)NEON_fminnm(dVar3 * dVar5,0x3feff7ced916872b);
  dVar2 = exp2(dVar5 * 3.321928094887362);
  param_3[0x22] = (uint)(float)(dVar2 - dVar2 * dVar1);
  param_3[0x23] = (uint)-(float)dVar1;
  return;
}


