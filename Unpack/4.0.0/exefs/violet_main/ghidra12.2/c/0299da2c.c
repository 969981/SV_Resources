/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299da2c; name: FUN_0299da2c
 */


bool FUN_0299da2c(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if ((param_3 & 1) == 0) {
    iVar1 = (**(code **)(*plVar2 + 0x110))(plVar2,*(undefined8 *)(param_2 + 8),0);
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x118))(plVar2,*(undefined8 *)(param_2 + 8),0);
  }
  return iVar1 == 1;
}


