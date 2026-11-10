/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebcefc; name: FUN_01ebcefc
 */


float FUN_01ebcefc(long param_1)

{
  long lVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 0.0;
  }
  lVar1 = *(long *)(param_1 + 0x78);
  fVar2 = *(float *)(lVar1 + 0x290);
  if (*(float *)(lVar1 + 0x290) < *(float *)(lVar1 + 0x294)) {
    fVar2 = *(float *)(lVar1 + 0x294);
  }
  return *(float *)(lVar1 + 0x1a4) - fVar2;
}


