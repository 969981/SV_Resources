/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0189110c; name: FUN_0189110c
 */


void FUN_0189110c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -400;
    if (*(long **)(lVar1 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x40) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x110) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x110) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x130) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x130) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x150) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x150) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x178) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x178) + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


