/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c4974; name: FUN_029c4974
 */


void FUN_029c4974(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(long **)(param_1 + 8) != param_2) {
    puVar1 = PTR_DAT_047e31e0 + 0x10;
    plVar3 = *(long **)(param_1 + 8);
    do {
      plVar2 = plVar3 + -0xe;
      *plVar2 = (long)puVar1;
      if ((long *)plVar3[-4] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[-4] + 0x20))();
      }
      if ((long *)plVar3[-8] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[-8] + 0x20))();
      }
      plVar3 = plVar2;
    } while (param_2 != plVar2);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


