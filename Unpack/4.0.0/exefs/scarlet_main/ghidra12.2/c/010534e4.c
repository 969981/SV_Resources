/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010534e4; name: FUN_010534e4
 */


void FUN_010534e4(float param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 6);
  if (*(float *)((long)param_2 + 0x34) < fVar1) {
    param_1 = *(float *)((long)param_2 + 0x34) + param_1;
    *(float *)((long)param_2 + 0x34) = param_1;
    if (param_1 < fVar1) {
      param_1 = param_1 / fVar1;
      fVar1 = (float)param_2[2];
      fVar2 = (float)((ulong)param_2[2] >> 0x20);
      fVar3 = (float)param_2[3];
      fVar4 = (float)((ulong)param_2[3] >> 0x20);
      param_2[5] = CONCAT44(fVar4 + ((float)((ulong)param_2[1] >> 0x20) - fVar4) * param_1,
                            fVar3 + ((float)param_2[1] - fVar3) * param_1);
      param_2[4] = CONCAT44(fVar2 + ((float)((ulong)*param_2 >> 0x20) - fVar2) * param_1,
                            fVar1 + ((float)*param_2 - fVar1) * param_1);
      return;
    }
  }
  *(undefined1 *)(param_2 + 7) = 1;
  return;
}


