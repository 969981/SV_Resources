/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010179d4; name: FUN_010179d4
 */


void FUN_010179d4(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x420);
  (**(code **)(*plVar1 + 0x18))(param_1,plVar1);
  *(long **)(param_1 + 0x10) = plVar1;
  return;
}


