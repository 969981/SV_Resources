/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a98e0; name: FUN_003a98e0
 */


undefined8 FUN_003a98e0(void)

{
  int iVar1;
  
  FUN_0043b770();
  iVar1 = FUN_0043b710();
  if (((iVar1 - 0x2a0U < 4) || (iVar1 == 4)) || (iVar1 == 0x40)) {
    return 1;
  }
  return 0;
}


