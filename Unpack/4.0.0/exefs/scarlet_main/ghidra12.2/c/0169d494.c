/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169d494; name: thunk_FUN_0169d498
 */


undefined8 thunk_FUN_0169d498(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0169d71c();
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_0169d4c4(), (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_0169d5f0();
  return uVar2;
}


