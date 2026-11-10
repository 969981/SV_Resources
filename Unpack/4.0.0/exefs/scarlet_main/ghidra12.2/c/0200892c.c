/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0200892c; name: FUN_0200892c
 */


long FUN_0200892c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(char *)(lVar3 + 0x10) < '\0') {
    fVar4 = *(float *)(lVar3 + 0x20);
  }
  else {
    fVar4 = *(float *)(lVar3 + 4);
  }
  fVar4 = *(float *)(param_2 + 4) - fVar4;
  fVar4 = fVar4 * fVar4;
  lVar2 = lVar3;
  if (3.4028235e+38 <= fVar4) {
    lVar2 = 0;
  }
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 != 0) {
    fVar4 = (float)NEON_fminnm(fVar4,0x7f7fffff);
    lVar1 = lVar2;
    do {
      if (*(char *)(lVar3 + 0x10) < '\0') {
        fVar5 = *(float *)(lVar3 + 0x20);
      }
      else {
        fVar5 = *(float *)(lVar3 + 4);
      }
      fVar5 = *(float *)(param_2 + 4) - fVar5;
      fVar5 = fVar5 * fVar5;
      lVar2 = lVar3;
      if (fVar4 <= fVar5) {
        lVar2 = lVar1;
      }
      lVar3 = *(long *)(lVar3 + 0x28);
      if (fVar4 <= fVar5) {
        fVar5 = fVar4;
      }
      lVar1 = lVar2;
      fVar4 = fVar5;
    } while (lVar3 != 0);
  }
  return lVar2;
}


