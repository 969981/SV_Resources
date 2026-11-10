/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e3ee8; name: FUN_019e3ee8
 */


float FUN_019e3ee8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = FUN_014f3a04();
  iVar2 = FUN_014f3a34(param_1);
  fVar3 = (float)FUN_014f39f8();
  return (float)(uint)(iVar1 - iVar2) / fVar3;
}


