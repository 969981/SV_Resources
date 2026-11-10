/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02911af0; name: FUN_02911af0
 */


undefined4 FUN_02911af0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((iVar1 < 6) ||
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 6)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x61);
    uVar3 = 0xfffffffe;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                       *(undefined4 *)(param_1 + 0x98));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar3 = 2;
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


