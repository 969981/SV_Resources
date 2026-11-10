/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f81e0; name: FUN_026f81e0
 */


bool FUN_026f81e0(undefined8 param_1,void *param_2)

{
  float fVar1;
  undefined1 auStack_50 [48];
  
  memcpy(auStack_50,param_2,0x30);
  fVar1 = (float)FUN_026fa890(auStack_50,param_1);
  return fVar1 <= *(float *)((long)param_2 + 0x30) * *(float *)((long)param_2 + 0x30);
}


