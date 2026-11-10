/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018911f8; name: FUN_018911f8
 */


void FUN_018911f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_2) {
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
    if (lVar1 + -400 != param_2) {
      do {
        if (*(long **)(lVar1 + -0x1b0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x1b0) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x1d0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x1d0) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x2a0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x2a0) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x2c0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x2c0) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x2e0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x2e0) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x308) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x308) + 0x20))();
        }
        lVar1 = lVar1 + -400;
      } while (param_2 + 400 != lVar1);
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


