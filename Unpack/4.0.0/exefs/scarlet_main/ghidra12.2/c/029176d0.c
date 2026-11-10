/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029176d0; name: FUN_029176d0
 */


undefined8 FUN_029176d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if ((uVar2 & 1) != 0) {
    return 0xffffffec;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xac);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
     (uVar2 & 1) != 0)) {
    return 0xfffffffb;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1b1);
  plVar3 = *(long **)(param_1 + 0x30);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x170))(plVar3,*(undefined4 *)(param_1 + 0xa4),0x16e);
    plVar3 = *(long **)(param_1 + 0x30);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(*plVar3 + 0x170))(plVar3,*(undefined4 *)(param_1 + 0xa4),0x11c);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x143),
         (uVar2 & 1) == 0)) {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x108);
        plVar3 = *(long **)(param_1 + 0x30);
        if ((uVar2 & 1) == 0) {
          uVar2 = (**(code **)(*plVar3 + 0x170))(plVar3,*(undefined4 *)(param_1 + 0xa4),0x1f8);
          if (((((uVar2 & 1) == 0) &&
               (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x15d)
               , (uVar2 & 1) == 0)) &&
              (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                 (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1e3),
              (uVar2 & 1) == 0)) &&
             (((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x61),
               (uVar2 & 1) == 0 &&
               (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x18d)
               , (uVar2 & 1) == 0)) &&
              ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1db)
               , (uVar2 & 1) == 0 &&
               (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1fc)
               , (uVar2 & 1) == 0)))))) {
            return 0;
          }
          iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
          if (iVar1 == 0) {
            return 0;
          }
          goto LAB_02917868;
        }
      }
      else {
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
        if (iVar1 < 0x47) {
          return 0;
        }
LAB_02917868:
        plVar3 = *(long **)(param_1 + 0x30);
      }
      lVar5 = *plVar3;
      uVar4 = 0x46;
      goto LAB_029177ec;
    }
    uVar2 = (**(code **)(*plVar3 + 0x3f8))(plVar3,*(undefined4 *)(param_1 + 0x98),4);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if (iVar1 == 0) {
      return 0;
    }
    if (*(short *)(param_1 + 0xb6) == 0x9e) {
      return 0;
    }
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x3d8))(plVar3,1);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  plVar3 = *(long **)(param_1 + 0x30);
  uVar4 = 0x5d;
  lVar5 = *plVar3;
LAB_029177ec:
  uVar2 = (**(code **)(lVar5 + 0x4c8))(plVar3,uVar4);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  return 3;
}


