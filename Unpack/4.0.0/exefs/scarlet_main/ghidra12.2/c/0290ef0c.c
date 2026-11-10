/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290ef0c; name: FUN_0290ef0c
 */


int FUN_0290ef0c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),3),
     (uVar3 & 1) == 0)) {
    iVar5 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar5 = -3;
    if ((uVar3 & 1) == 0) {
      iVar5 = 0;
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
  if (((uVar3 & 1) != 0) ||
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6),
     (uVar3 & 1) != 0)) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar5 = iVar5 - (uVar1 & 1);
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1);
  if ((uVar3 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x14);
    iVar5 = iVar5 - (uVar1 & 1);
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar4 = *(long **)(param_1 + 0x30);
  if (iVar2 < 0x1e) {
    uVar3 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x4e);
    iVar2 = iVar5 + -2;
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar5;
    }
    iVar5 = iVar2;
  }
  else {
    iVar2 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0x98));
    if (iVar2 < 0x32) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
      iVar5 = iVar5 - (uVar1 & 1);
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
  iVar2 = iVar5 + 2;
  if ((uVar3 & 1) == 0) {
    iVar2 = iVar5;
  }
  return iVar2;
}


