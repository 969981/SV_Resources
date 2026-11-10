/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02178fbc; name: FUN_02178fbc
 */


void FUN_02178fbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_3 + 0x38);
  for (plVar2 = *(long **)(param_3 + 0x30); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    FUN_0217900c(param_1,param_2,*(undefined8 *)(*plVar2 + 0x30));
  }
  return;
}


