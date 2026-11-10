/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcc3fc; name: FUN_01dcc3fc
 */


float FUN_01dcc3fc(long param_1)

{
  long lVar1;
  float fVar2;
  
  if (param_1 == 0) {
    fVar2 = 0.0;
  }
  else {
    lVar1 = FUN_00c8c7b4(*(undefined8 *)(param_1 + 0x170));
    fVar2 = *(float *)(lVar1 + 0x30);
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x18)) {
      fVar2 = fVar2 + *(float *)(lVar1 + 0x30);
    }
  }
  return fVar2;
}


