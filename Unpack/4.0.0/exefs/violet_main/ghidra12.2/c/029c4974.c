/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


