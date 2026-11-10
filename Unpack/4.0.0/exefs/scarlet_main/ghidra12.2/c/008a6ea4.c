/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a6ea4; name: FUN_008a6ea4
 */


float FUN_008a6ea4(long param_1)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0x5b);
  if ((bVar1 & 3) == 2) {
    fVar2 = -*(float *)(param_1 + 0x50);
  }
  else {
    fVar2 = 0.0;
    if ((bVar1 & 3) == 0) {
      fVar2 = *(float *)(param_1 + 0x50) * -0.5;
    }
  }
  bVar1 = bVar1 >> 2 & 3;
  if ((bVar1 == 2) || (bVar1 != 0)) {
    return fVar2;
  }
  return fVar2;
}


