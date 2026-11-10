/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00122420; name: FUN_00122420
 */


void FUN_00122420(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0012dc70(param_2,*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  return;
}


