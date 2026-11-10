/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cb85c; name: FUN_001cb85c
 */


void FUN_001cb85c(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_001cb8ac();
  while (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    FUN_001cb790(lVar1);
    FUN_001ec308(lVar1);
  }
  FUN_001ec308(param_1);
  return;
}


