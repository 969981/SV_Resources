/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012faa98; name: FUN_012faa98
 */


void FUN_012faa98(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    if (*(long **)(lVar2 + -0x28) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -0x28) + 0x20))();
    }
    plVar1 = (long *)(lVar2 + -0x48);
    lVar2 = lVar2 + -0x60;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


