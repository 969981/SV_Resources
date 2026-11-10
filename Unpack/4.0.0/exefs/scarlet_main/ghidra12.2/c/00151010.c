/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00151010; name: FUN_00151010
 */


long FUN_00151010(uint param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  if (0x1ffff < param_2) {
    lVar1 = 0x20000;
  }
  lVar2 = 0x20000;
  if (0 < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 0;
  if ((param_1 | 2) != 0xb) {
    lVar1 = lVar2;
  }
  return lVar1 + lVar2 * 2 + 0xd020;
}


