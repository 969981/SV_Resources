/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0217928c; name: FUN_0217928c
 */


void FUN_0217928c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_2 + 0x38);
  for (plVar2 = *(long **)(param_2 + 0x30); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    FUN_021792d4(param_1,*(undefined8 *)(*plVar2 + 0x30));
  }
  return;
}


