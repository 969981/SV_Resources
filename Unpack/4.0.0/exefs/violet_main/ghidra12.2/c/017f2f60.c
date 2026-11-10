/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f2f60; name: FUN_017f2f60
 */


undefined4 FUN_017f2f60(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (((((iVar1 < 7) &&
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 7))
       && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 7
          )) && (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                     (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                  iVar1 < 7 &&
                  (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                                     (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                  iVar1 < 7)) &&
                 ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                                     (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                  iVar1 < 7 &&
                  ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                   iVar1 < 7 &&
                   (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
                   5 < iVar1)))))))) &&
     ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 5 < iVar1 &&
      ((((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 5 < iVar1
         && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
            5 < iVar1)) &&
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 5 < iVar1))
       && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 5 < iVar1
          )))))) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    uVar2 = 0xfffffffa;
    if (5 < iVar1) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}


