/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c501c; name: FUN_001c501c
 */


void FUN_001c501c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  FUN_001ec308(*(undefined8 *)(param_1 + 0x800));
  lVar2 = 0;
  do {
    plVar1 = *(long **)(param_1 + lVar2 * 8);
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      FUN_001c4c88();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  FUN_001ec308(param_1);
  return;
}


