/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02178eb0; name: FUN_02178eb0
 */


void FUN_02178eb0(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  for (plVar2 = *(long **)(param_1 + 0x30); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    FUN_02178ef8(*(undefined8 *)(*plVar2 + 0x30),param_2);
  }
  return;
}


