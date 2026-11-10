/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00336f3c; name: FUN_00336f3c
 */


void FUN_00336f3c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


