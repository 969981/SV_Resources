/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001560f0; name: FUN_001560f0
 */


int FUN_001560f0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1 << (ulong)(-(int)LZCOUNT(param_1 - 1) & 0x1f);
  if (param_1 - 1 == 0) {
    iVar2 = 1;
  }
  iVar1 = 1;
  if (1 < param_1) {
    iVar1 = iVar2;
  }
  return iVar1;
}


