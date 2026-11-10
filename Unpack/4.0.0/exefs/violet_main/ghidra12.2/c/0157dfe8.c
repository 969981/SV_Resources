/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157dfe8; name: FUN_0157dfe8
 */


int FUN_0157dfe8(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x107);
  if ((uVar3 & 1) == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    iVar4 = -2;
    if ((uVar3 & 1) == 0) {
      iVar4 = 0;
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x178))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (((uVar3 & 1) == 0) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32),
     (uVar3 & 1) != 0)) {
    iVar4 = iVar4 + 2;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (iVar1 < 0x1e) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      iVar4 = iVar4 - (uVar2 & 1);
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (7 < iVar1) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
      iVar4 = iVar4 + (uVar2 & 1);
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (7 < iVar1) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      iVar4 = iVar4 + (uVar2 & 1);
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (7 < iVar1) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      return iVar4 + (uVar2 & 1);
    }
  }
  return iVar4;
}


