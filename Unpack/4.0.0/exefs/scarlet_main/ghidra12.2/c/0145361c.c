/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0145361c; name: FUN_0145361c
 */


void FUN_0145361c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    lVar3 = lVar2 + -0x70;
    FUN_00db239c(lVar2 + -0x40);
    plVar1 = (long *)(lVar2 + -0x58);
    lVar2 = lVar3;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


