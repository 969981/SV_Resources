/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290ff3c; name: FUN_0290ff3c
 */


undefined4 FUN_0290ff3c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((iVar1 < 0x1e) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a),
     (uVar2 & 1) != 0)) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (((((((iVar1 < 8) &&
            (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
            iVar1 < 8)) &&
           (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
           iVar1 < 8)) &&
          ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
           iVar1 < 8 &&
           (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
           iVar1 < 8)))) &&
         ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 4 < iVar1
          && ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
              4 < iVar1 &&
              (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
              4 < iVar1)))))) &&
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 4 < iVar1))
       && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 4 < iVar1
          )) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if ((((iVar1 < 5) ||
           (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
           iVar1 < 5)) ||
          (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 5
          )) || ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                 iVar1 < 5 ||
                 (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                 iVar1 < 5)))) {
        plVar3 = *(long **)(param_1 + 0x30);
        uVar4 = 0x46;
      }
      else {
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
        if (((iVar1 < 8) &&
            (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
            iVar1 < 8)) &&
           ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
            iVar1 < 8 &&
            ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 8 &&
             (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
             iVar1 < 8)))))) {
          return 0;
        }
        plVar3 = *(long **)(param_1 + 0x30);
        uVar4 = 0x4e;
      }
      uVar2 = (**(code **)(*plVar3 + 0x4c0))(plVar3,uVar4);
      uVar5 = 2;
      if ((uVar2 & 1) == 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0xfffffff8;
    }
  }
  return uVar5;
}


