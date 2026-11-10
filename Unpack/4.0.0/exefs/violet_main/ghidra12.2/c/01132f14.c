/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01132f14; name: FUN_01132f14
 */


long FUN_01132f14(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x178);
  plVar1 = *(long **)(param_1 + 0x180);
  if (plVar2 == plVar1) {
LAB_01132f34:
    if (plVar2 != plVar1) {
      return *plVar2;
    }
  }
  else {
    do {
      if (*(long *)(*plVar2 + 0x1d0) == *param_2) goto LAB_01132f34;
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
  }
  return 0;
}


