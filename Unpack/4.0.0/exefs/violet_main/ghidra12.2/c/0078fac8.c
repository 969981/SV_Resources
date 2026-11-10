/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078fac8; name: FUN_0078fac8
 */


long * FUN_0078fac8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 == 0) {
    return (long *)0x0;
  }
  plVar3 = (long *)*param_1;
  lVar1 = *plVar3;
  *(long *)(lVar1 + 8) = plVar3[1];
  *(long *)plVar3[1] = lVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(param_1 + 2) = iVar2 + -1;
  return plVar3;
}


