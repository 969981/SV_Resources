/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b50f0; name: FUN_008b50f0
 */


char * FUN_008b50f0(char *param_1)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  
  sVar1 = strlen(param_1);
  if (0 < (int)sVar1) {
    uVar2 = 0;
    lVar3 = sVar1 << 0x20;
    do {
      if (param_1[(int)((int)sVar1 + ~(uint)uVar2)] == '%') {
        return param_1 + (lVar3 >> 0x20);
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + -0x100000000;
    } while ((sVar1 & 0xffffffff) != uVar2);
  }
  return param_1;
}


