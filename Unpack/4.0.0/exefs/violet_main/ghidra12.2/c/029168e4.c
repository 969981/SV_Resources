/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029168e4; name: FUN_029168e4
 */


undefined8 FUN_029168e4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((iVar1 == 0) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x46),
     (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}


