/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ea8d0; name: FUN_028ea8d0
 */


void FUN_028ea8d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x40;
    if (*(long **)(lVar1 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -8) + 0x20))();
    }
    FUN_028e6b98(lVar1 + -0x10);
    if (*(long **)(lVar1 + -0x28) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x28) + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


