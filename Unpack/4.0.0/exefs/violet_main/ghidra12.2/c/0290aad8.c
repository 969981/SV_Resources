/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290aad8; name: FUN_0290aad8
 */


int FUN_0290aad8(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((*(char *)(param_1 + 0xa0) == '\a') || (*(char *)(param_1 + 0xa1) == '\a')) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar1 < 0x46) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      iVar1 = -(uVar2 & 1);
    }
    else {
      iVar1 = 0;
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar3 == 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      iVar1 = iVar1 - (uVar2 & 1);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
    iVar1 = iVar1 + (uVar2 & 1);
  }
  else {
    iVar1 = 0;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x168);
  if ((uVar4 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
    iVar1 = iVar1 + (uVar2 & 1);
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),1);
  if ((uVar4 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar1 = iVar1 + (uVar2 & 1);
  }
  return iVar1;
}


