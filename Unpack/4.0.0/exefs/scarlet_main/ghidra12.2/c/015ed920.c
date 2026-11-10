/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ed920; name: FUN_015ed920
 */


void FUN_015ed920(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = param_2 + -0.5;
  if (param_2 < 0.5) {
    fVar2 = param_2;
  }
  fVar2 = fVar2 + fVar2;
  pfVar1 = param_3 + 0xc;
  if (param_2 < 0.5) {
    pfVar1 = param_3 + 0x18;
    param_3 = param_3 + 0xc;
  }
  param_1[1] = (1.0 - fVar2) * pfVar1[1] + fVar2 * param_3[1];
  *param_1 = (1.0 - fVar2) * *pfVar1 + fVar2 * *param_3;
  uVar3 = *(undefined8 *)(param_3 + 4);
  fVar4 = (float)*(undefined8 *)(pfVar1 + 4);
  fVar5 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
  fVar6 = (float)*(undefined8 *)(pfVar1 + 6);
  fVar7 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
  *(ulong *)(param_1 + 6) =
       CONCAT44(fVar7 + ((float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20) - fVar7) * fVar2,
                fVar6 + ((float)*(undefined8 *)(param_3 + 6) - fVar6) * fVar2);
  *(ulong *)(param_1 + 4) =
       CONCAT44(fVar5 + ((float)((ulong)uVar3 >> 0x20) - fVar5) * fVar2,
                fVar4 + ((float)uVar3 - fVar4) * fVar2);
  uVar3 = *(undefined8 *)(param_3 + 8);
  fVar4 = (float)*(undefined8 *)(pfVar1 + 8);
  fVar5 = (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
  fVar6 = (float)*(undefined8 *)(pfVar1 + 10);
  fVar7 = (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
  *(ulong *)(param_1 + 10) =
       CONCAT44(fVar7 + ((float)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20) - fVar7) * fVar2,
                fVar6 + ((float)*(undefined8 *)(param_3 + 10) - fVar6) * fVar2);
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar5 + ((float)((ulong)uVar3 >> 0x20) - fVar5) * fVar2,
                fVar4 + ((float)uVar3 - fVar4) * fVar2);
  return;
}


