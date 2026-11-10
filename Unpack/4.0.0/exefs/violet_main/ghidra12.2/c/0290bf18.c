/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290bf18; name: FUN_0290bf18
 */


int FUN_0290bf18(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar3 = *(long **)(param_1 + 0x30);
  if (iVar1 < 0x5b) {
    iVar1 = (**(code **)(*plVar3 + 0xa0))(plVar3,*(undefined4 *)(param_1 + 0x98));
    plVar3 = *(long **)(param_1 + 0x30);
    if (iVar1 < 0x28) {
      uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x55);
      iVar1 = -2;
      if ((uVar4 & 1) == 0) {
        iVar1 = 0;
      }
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x32);
      iVar1 = -(uVar2 & 1);
    }
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x4e);
    iVar5 = 2;
    if ((uVar4 & 1) == 0) {
      iVar5 = 0;
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x7f);
    iVar1 = iVar5 + 2;
    if ((uVar4 & 1) == 0) {
      iVar1 = iVar5;
    }
  }
  return iVar1;
}


