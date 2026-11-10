/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


