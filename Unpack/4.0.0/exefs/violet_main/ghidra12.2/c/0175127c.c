/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175127c; name: FUN_0175127c
 */


bool FUN_0175127c(undefined8 param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_24;
  float local_18;
  float local_14;
  
  fVar4 = (float)param_1;
  fVar5 = (float)((ulong)param_1 >> 0x20);
  if (param_3 <= 0.0) {
    FUN_0175130c(CONCAT44(fVar5 + (param_2._4_4_ - fVar5),fVar4 + (param_2._0_4_ - fVar4)));
    bVar3 = true;
  }
  else {
    local_14 = param_4 / param_3;
    local_24 = 1.0;
    pfVar1 = &local_24;
    if (local_14 <= 1.0) {
      pfVar1 = &local_14;
    }
    local_18 = 0.0;
    pfVar2 = &local_18;
    if (0.0 <= local_14) {
      pfVar2 = pfVar1;
    }
    fVar6 = *pfVar2;
    FUN_0175130c(CONCAT44(fVar5 + (param_2._4_4_ - fVar5) * fVar6,
                          fVar4 + (param_2._0_4_ - fVar4) * fVar6));
    bVar3 = 1.0 <= fVar6;
  }
  return bVar3;
}


