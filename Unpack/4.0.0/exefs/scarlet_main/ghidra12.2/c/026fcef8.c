/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fcef8; name: FUN_026fcef8
 */


undefined1  [16] FUN_026fcef8(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_30 [2] [16];
  
  fVar3 = ABS((float)*param_1 * 0.5);
  fVar1 = (float)param_1[2];
  fVar2 = (float)((ulong)param_1[2] >> 0x20);
  fVar4 = ABS((float)((ulong)*param_1 >> 0x20) * 0.5);
  FUN_024ce01c(CONCAT44(fVar2 - fVar4,fVar1 - fVar3),CONCAT44(fVar2 + fVar4,fVar1 + fVar3),local_30)
  ;
  return local_30[0];
}


