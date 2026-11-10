/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021718e4; name: FUN_021718e4
 */


bool FUN_021718e4(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = param_1 - 0x11U < 10;
  if (!bVar1 && ((param_2 ^ 1) & 1) == 0) {
    bVar1 = param_1 == 0x1b;
  }
  return bVar1;
}


