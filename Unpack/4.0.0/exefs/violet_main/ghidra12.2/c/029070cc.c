/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029070cc; name: FUN_029070cc
 */


int FUN_029070cc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (iVar2 < 8) {
    iVar2 = 0;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar2 = -2;
    if ((uVar4 & 1) == 0) {
      iVar2 = 0;
    }
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar1 = iVar2;
  if (iVar3 < 0x46) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar1 = iVar2 + -2;
    if ((uVar4 & 1) == 0) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


