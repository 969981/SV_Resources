/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02945730; name: FUN_02945730
 */


uint FUN_02945730(long param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar2 = (**(code **)(*plVar4 + 0x3d8))();
  uVar3 = (**(code **)(*plVar4 + 0x700))(plVar4,uVar2);
  uVar5 = uVar3 & 0xff;
  if ((uVar5 == 4) || (sVar1 = (**(code **)(*plVar4 + 0x690))(plVar4,uVar3), sVar1 != 0)) {
    uVar5 = 4;
  }
  return uVar5;
}


