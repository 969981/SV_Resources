/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b5548; name: FUN_007b5548
 */


void FUN_007b5548(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_00792f30(lVar1,2);
    FUN_007b5ad8(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x14c) = 0;
  return;
}


