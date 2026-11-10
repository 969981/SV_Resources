/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017eb39c; name: FUN_017eb39c
 */


void FUN_017eb39c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_2) {
    FUN_017eb460(lVar1 + -0x38);
    if (*(long **)(lVar1 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x40) + 0x20))();
    }
    if (lVar1 + -0x58 != param_2) {
      FUN_017eb460(lVar1 + -0x90);
      if (*(long **)(lVar1 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + -0x98) + 0x20))();
      }
      if (lVar1 + -0xb0 != param_2) {
        do {
          FUN_017eb460(lVar1 + -0xe8);
          if (*(long **)(lVar1 + -0xf0) != (long *)0x0) {
            (**(code **)(**(long **)(lVar1 + -0xf0) + 0x20))();
          }
          lVar1 = lVar1 + -0x58;
        } while (param_2 + 0xb0 != lVar1);
      }
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


