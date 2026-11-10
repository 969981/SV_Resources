/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018edf1c; name: FUN_018edf1c
 */


void FUN_018edf1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x88;
    if (*(long **)(lVar1 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x10) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x30) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x30) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x50) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x50) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x70) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x70) + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


