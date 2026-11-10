/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290d3a8; name: FUN_0290d3a8
 */


uint FUN_0290d3a8(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((uVar4 & 1) == 0) {
LAB_0290d460:
    uVar2 = 0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    plVar5 = *(long **)(param_1 + 0x30);
    if (iVar1 < 0x47) {
      iVar1 = (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined4 *)(param_1 + 0x98));
      if ((iVar1 < 0x1f) ||
         ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 8
          && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
             iVar1 < 8)))) goto LAB_0290d460;
      plVar5 = *(long **)(param_1 + 0x30);
    }
    uVar2 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x32);
  }
  uVar2 = uVar2 & 1;
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),1);
  if ((uVar4 & 1) != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar2 = (uVar3 & 1) + uVar2;
  }
  return uVar2;
}


