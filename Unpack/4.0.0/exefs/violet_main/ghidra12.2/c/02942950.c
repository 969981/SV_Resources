/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02942950; name: FUN_02942950
 */


void FUN_02942950(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_029429bc(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  if (plVar3 == (long *)0x0) {
    return;
  }
  uVar1 = FUN_01a6acfc();
  uVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3);
  FUN_02942a80(param_1,uVar1,uVar2);
  return;
}


