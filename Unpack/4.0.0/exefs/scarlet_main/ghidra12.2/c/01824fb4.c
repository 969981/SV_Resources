/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01824fb4; name: FUN_01824fb4
 */


long FUN_01824fb4(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_3 + 0x20);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x10) < '\0') {
      fVar4 = *(float *)(lVar3 + 0x20);
    }
    else {
      fVar4 = *(float *)(lVar3 + 4);
    }
    fVar4 = (param_1 - fVar4) * (param_1 - fVar4);
    lVar2 = lVar3;
    if (param_2 <= fVar4) {
      lVar2 = 0;
      fVar4 = param_2;
    }
    while (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0) {
      if (*(char *)(lVar3 + 0x10) < '\0') {
        fVar5 = *(float *)(lVar3 + 0x20);
      }
      else {
        fVar5 = *(float *)(lVar3 + 4);
      }
      fVar5 = (param_1 - fVar5) * (param_1 - fVar5);
      lVar1 = lVar3;
      if (fVar4 <= fVar5) {
        lVar1 = lVar2;
        fVar5 = fVar4;
      }
      fVar4 = fVar5;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


