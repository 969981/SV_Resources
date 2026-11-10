/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a2e30; name: FUN_003a2e30
 */


long * FUN_003a2e30(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  do {
    plVar1 = plVar2;
    plVar2 = (long *)plVar1[2];
    if (plVar2 == (long *)0x0) goto LAB_003a2e58;
  } while (*plVar1 != *param_2);
  plVar2 = plVar1;
LAB_003a2e58:
  if (*plVar1 != *param_2) {
    plVar1 = plVar2;
  }
  return plVar1;
}


