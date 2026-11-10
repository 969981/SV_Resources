/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d21ec; name: FUN_001d21ec
 */


void FUN_001d21ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x658) != 0) {
    FUN_001ec308();
    *(undefined8 *)(lVar1 + 0x658) = 0;
  }
  return;
}


