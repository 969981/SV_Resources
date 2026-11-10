/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b1f30; name: FUN_019b1f30
 */


bool FUN_019b1f30(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 - 0x400U < 8) {
    iVar1 = FUN_0011f920(param_1 - 0x400U);
    return iVar1 != 0;
  }
  if (param_1 == 2) {
    if (DAT_047ec42c == 0) {
      return false;
    }
    puVar2 = &DAT_047ec768;
  }
  else {
    if ((param_1 != 1) || (DAT_047ec4c0 == 0)) {
      return false;
    }
    puVar2 = &DAT_047ec558;
  }
  FUN_001206c0(puVar2);
  return true;
}


