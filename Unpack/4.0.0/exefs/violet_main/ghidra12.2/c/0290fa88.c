/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290fa88; name: FUN_0290fa88
 */


undefined4 FUN_0290fa88(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((((iVar1 < 8) &&
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 8))
      && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 4 < iVar1)
      ) && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
           4 < iVar1)) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if ((iVar1 < 5) ||
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 5))
    {
      plVar2 = *(long **)(param_1 + 0x30);
      uVar4 = 0x46;
    }
    else {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
      if ((iVar1 < 8) &&
         (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8)
         ) {
        return 0;
      }
      plVar2 = *(long **)(param_1 + 0x30);
      uVar4 = 0x4e;
    }
    uVar3 = (**(code **)(*plVar2 + 0x4c0))(plVar2,uVar4);
    uVar5 = 2;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xfffffff8;
  }
  return uVar5;
}


