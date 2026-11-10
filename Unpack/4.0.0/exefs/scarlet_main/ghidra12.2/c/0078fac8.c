/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


