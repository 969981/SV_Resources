/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290a554; name: FUN_0290a554
 */


uint FUN_0290a554(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar1 < 0x22) {
      uVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
      uVar4 = 0xfffffffe;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar1 < 8) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar4 = uVar4 | uVar2 & 1;
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                     *(undefined4 *)(param_1 + 0x98));
  if ((uVar3 & 1) != 0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (0x3c < iVar1) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
      uVar4 = uVar4 - (uVar2 & 1);
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar1 < 0x28) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
      uVar4 = uVar4 + (uVar2 & 1);
    }
  }
  return uVar4;
}


