/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02908224; name: FUN_02908224
 */


uint FUN_02908224(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((((((iVar1 < 8) &&
         (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 8)
         ) && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
              iVar1 < 8)) &&
       ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 8
        && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
           iVar1 < 7)))) &&
      (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 8))
     && ((((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
           iVar1 < 8 &&
           (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
           4 < iVar1)) &&
          ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
           4 < iVar1 &&
           (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             4 < iVar1 &&
             (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             4 < iVar1)) &&
            (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
            5 < iVar1)))))) &&
         ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 4 < iVar1
          && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             4 < iVar1)))))) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar3 = 0xfffffffd;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((((iVar1 < 8) &&
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8))
      && ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8
          && (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
               iVar1 < 8 &&
               (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
               iVar1 < 7)) &&
              (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
              iVar1 < 8)))))) &&
     (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8 &&
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 4 < iVar1))
      && ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 4 < iVar1
          && (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
               4 < iVar1 &&
               (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
               4 < iVar1)) &&
              ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
               5 < iVar1 &&
               ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                                   (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                4 < iVar1 &&
                (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                                   (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                4 < iVar1)))))))))))) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar4 = uVar3 - 3;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar4 = uVar3 | 2;
  }
  if ((uVar2 & 1) == 0) {
    uVar4 = uVar3;
  }
  return uVar4;
}


