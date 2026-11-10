/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290634c; name: FUN_0290634c
 */


int FUN_0290634c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x6f);
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*plVar4 + 0x180))(plVar4,*(undefined4 *)(param_1 + 0xb0),0x163);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*plVar4 + 0x180))(plVar4,*(undefined4 *)(param_1 + 0xb0),0x169);
      plVar4 = *(long **)(param_1 + 0x30);
      if ((uVar3 & 1) == 0) {
        uVar3 = (**(code **)(*plVar4 + 0x180))(plVar4,*(undefined4 *)(param_1 + 0xb0),0x116);
        if ((uVar3 & 1) == 0) {
          iVar5 = 0;
          goto LAB_029063d4;
        }
        plVar4 = *(long **)(param_1 + 0x30);
      }
    }
  }
  uVar1 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x14);
  iVar5 = -(uVar1 & 1);
LAB_029063d4:
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  plVar4 = *(long **)(param_1 + 0x30);
  if (iVar2 < 10) {
    iVar2 = (**(code **)(*plVar4 + 0x130))(plVar4,*(undefined4 *)(param_1 + 0xb0));
    if (6 < iVar2) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      iVar5 = iVar5 - (uVar1 & 1);
    }
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x4e);
    iVar2 = iVar5 + -2;
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar5;
    }
    iVar5 = iVar2;
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar4 = *(long **)(param_1 + 0x30);
  if (iVar2 < 0x51) {
    iVar2 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0x98));
    plVar4 = *(long **)(param_1 + 0x30);
    if (iVar2 < 0x1e) {
      uVar3 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x4e);
      iVar2 = iVar5 + 3;
    }
    else {
      iVar2 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0x98));
      if (0x31 < iVar2) {
        return iVar5;
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      iVar2 = iVar5 + 2;
    }
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar5;
    }
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0xf8))
                      (plVar4,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x98));
    iVar2 = iVar5;
    if ((uVar3 & 1) != 0) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      iVar2 = iVar5 + -2;
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar5;
      }
    }
  }
  return iVar2;
}


