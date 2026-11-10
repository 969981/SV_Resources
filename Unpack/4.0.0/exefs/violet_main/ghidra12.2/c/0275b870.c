/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275b870; name: FUN_0275b870
 */


void FUN_0275b870(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x98;
    if (*(long **)(lVar1 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x40) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x60) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x60) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x80) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x80) + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


