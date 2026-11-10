/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029434d0; name: FUN_029434d0
 */


bool FUN_029434d0(long param_1)

{
  bool bVar1;
  short sVar2;
  long *plVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x48) == 0) {
    plVar3 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
    sVar2 = (**(code **)(*plVar3 + 0x2a8))();
    bVar1 = sVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


