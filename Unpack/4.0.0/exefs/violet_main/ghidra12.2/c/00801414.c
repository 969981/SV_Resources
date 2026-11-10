/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00801414; name: FUN_00801414
 */


long * FUN_00801414(ushort *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (((int)param_2 < 0) || ((int)(uint)*param_1 <= (int)param_2)) {
    return (long *)0x0;
  }
  plVar2 = *(long **)(*(long *)(param_1 + 4) + (ulong)param_2 * 8);
  plVar1 = (long *)0x0;
  if (*plVar2 != -1) {
    plVar1 = plVar2;
  }
  return plVar1;
}


