/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aa6944; name: FUN_01aa6944
 */


void FUN_01aa6944(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    if (*(long **)(lVar2 + -0x28) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x28) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x48) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x48) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x68) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x68) + 0x20))();
    }
    if (*(long **)(lVar2 + -0x88) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x88) + 0x20))();
    }
    plVar1 = (long *)(lVar2 + -0xa8);
    lVar2 = lVar2 + -0xc0;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


