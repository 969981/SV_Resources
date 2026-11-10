/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290cccc; name: FUN_0290cccc
 */


undefined8 FUN_0290cccc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_02915c38();
  if (((iVar1 == 1) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46),
      (uVar2 & 1) != 0)) ||
     ((*(short *)(param_1 + 0xb6) != 0x16 &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46),
      (uVar2 & 1) != 0)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


