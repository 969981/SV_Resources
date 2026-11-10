/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029109bc; name: FUN_029109bc
 */


undefined8 FUN_029109bc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (((iVar1 < 0x1e) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27),
      (uVar2 & 1) != 0)) ||
     ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 0x32
      && (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x14), (uVar2 & 1) != 0)))) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


