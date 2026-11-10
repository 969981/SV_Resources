/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018776d8; name: FUN_018776d8
 */


void FUN_018776d8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  short sVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_3);
  sVar1 = (**(code **)(*plVar2 + 0x2a8))();
  if (sVar1 == 0) {
    return;
  }
  uVar3 = FUN_01246e90(param_1);
  FUN_01877748(uVar3,plVar2,*(undefined1 *)(param_3 + 1));
  return;
}


