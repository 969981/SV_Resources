/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0160c898; name: FUN_0160c898
 */


bool FUN_0160c898(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
  iVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,*(undefined8 *)(param_3 + 8));
  return iVar1 == 1;
}


