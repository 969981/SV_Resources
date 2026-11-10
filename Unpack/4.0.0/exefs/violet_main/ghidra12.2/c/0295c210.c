/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295c210; name: FUN_0295c210
 */


bool FUN_0295c210(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar1 = (**(code **)(*plVar4 + 0x110))();
  uVar2 = FUN_018286d0(uVar1,2);
  uVar3 = (**(code **)(*plVar4 + 0x108))(plVar4);
  return uVar2 < (uVar3 & 0xffff);
}


