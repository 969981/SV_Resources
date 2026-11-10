/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290b9c0; name: FUN_0290b9c0
 */


uint FUN_0290b9c0(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar3 = *(long **)(param_1 + 0x30);
  if (iVar1 < 0x1e) {
    uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3,0x5a);
    uVar5 = 0xfffffffe;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
  }
  else {
    iVar1 = (**(code **)(*plVar3 + 0x100))(plVar3,*(undefined4 *)(param_1 + 0x98));
    if ((((iVar1 < 7) &&
         (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 7)
         ) && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
              iVar1 < 7)) &&
       (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 7
         && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
            iVar1 < 7)) &&
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 7))
       )) {
      uVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar5 = 0xfffffffe;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (((iVar1 < 8) &&
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8))
       && ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
           iVar1 < 8 &&
           (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 8 &&
             (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 8)) &&
            (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
            iVar1 < 8)))))) {
      uVar5 = uVar5 - 2;
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar5 = uVar5 | uVar2 & 1;
    }
  }
  return uVar5;
}


