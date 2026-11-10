/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298c9f8; name: FUN_0298c9f8
 */


void FUN_0298c9f8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  (**(code **)(*plVar1 + 0x360))(plVar1,param_3);
  FUN_018ce178(param_1,plVar1);
  return;
}


