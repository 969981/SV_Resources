/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02913ca4; name: FUN_02913ca4
 */


undefined4 FUN_02913ca4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((((iVar1 < 7) &&
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 7))
      && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 7)
      ) && (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 7 &&
             (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 7)) &&
            ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 7 &&
             (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 7)))))) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar3 = 2;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}


