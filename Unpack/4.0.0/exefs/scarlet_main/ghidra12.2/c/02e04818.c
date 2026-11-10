/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e04818; name: FUN_02e04818
 */


undefined4 FUN_02e04818(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar2 = *(long **)(param_1 + 0x30);
  if (0x1d < iVar1) {
    iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,*(undefined4 *)(param_1 + 0x98));
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
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
      if (((iVar1 < 8) &&
          (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8
          )) && ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
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
        return 0;
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar4 = 2;
      goto LAB_02e0490c;
    }
    plVar2 = *(long **)(param_1 + 0x30);
  }
  uVar3 = (**(code **)(*plVar2 + 0x4c0))(plVar2,0x5a);
  uVar4 = 0xfffffffe;
LAB_02e0490c:
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  return uVar4;
}


