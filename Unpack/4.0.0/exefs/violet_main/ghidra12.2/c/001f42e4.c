/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f42e4; name: FUN_001f42e4
 */


long FUN_001f42e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar3 = 0;
  do {
    plVar1 = param_1 + 3;
    plVar2 = param_1 + 4;
    param_1 = (long *)*param_1;
    lVar3 = (*plVar2 + lVar3) - *plVar1;
  } while (param_1 != (long *)0x0);
  return lVar3;
}


