/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ca6a8; name: FUN_010ca6a8
 */


void FUN_010ca6a8(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_010ca6e8(*(undefined8 *)(param_1 + 0x70));
  if (cVar1 == '\x13') {
    FUN_00e9782c();
    return;
  }
  FUN_010ca6e8(*(undefined8 *)(param_1 + 0x70));
  return;
}


