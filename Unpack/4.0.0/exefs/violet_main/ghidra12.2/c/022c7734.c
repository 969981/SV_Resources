/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022c7734; name: FUN_022c7734
 */


undefined8 FUN_022c7734(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if ((*param_1 != 0) && (plVar2 = *(long **)(*param_1 + 8), plVar2 != (long *)0x0)) {
    plVar1 = (long *)FUN_022c3ac8();
    do {
      if (plVar2 == plVar1) {
        return 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return 0;
}


