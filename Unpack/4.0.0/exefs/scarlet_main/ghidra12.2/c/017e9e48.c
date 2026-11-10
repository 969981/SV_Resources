/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e9e48; name: FUN_017e9e48
 */


void FUN_017e9e48(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    if (*(long **)(lVar2 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x40) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x110) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x110) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x130) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x130) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x150) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x150) + 0x20))();
    }
    plVar1 = (long *)(lVar2 + -0x178);
    lVar2 = lVar2 + -400;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


