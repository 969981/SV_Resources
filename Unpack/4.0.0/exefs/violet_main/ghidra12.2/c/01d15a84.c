/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d15a84; name: FUN_01d15a84
 */


undefined8 FUN_01d15a84(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((*param_2 != 0) && (plVar2 = *(long **)(*param_2 + 8), plVar2 != (long *)0x0)) {
    plVar1 = (long *)FUN_01d15a24();
    do {
      if (plVar2 == plVar1) {
        return 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return 0;
}


