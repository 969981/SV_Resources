/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029187d0; name: FUN_029187d0
 */


uint FUN_029187d0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x16c);
  if (((uVar4 & 1) != 0) &&
     (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
     (uVar4 & 1) != 0)) {
    return 0xfffffffe;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1f5);
  if ((uVar4 & 1) != 0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if (iVar2 <= iVar1) {
      return 0xfffffffb;
    }
  }
  iVar1 = FUN_029196d8(param_1);
  if (iVar1 == 1) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    if ((uVar4 & 1) == 0) {
      return 0xfffffffb;
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar7 = 8;
  }
  else {
    iVar1 = FUN_02919924(param_1);
    if (iVar1 != 1) {
      iVar1 = FUN_029199a4(param_1);
      if (iVar1 == 1) {
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xbc));
        if (iVar1 < 0x23) {
          uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x4e);
          uVar7 = 8;
          if ((uVar4 & 1) == 0) {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
        plVar5 = *(long **)(param_1 + 0x30);
        uVar6 = 0x32;
      }
      else {
        iVar1 = FUN_02919abc(param_1);
        if (iVar1 != 1) {
          return 0xfffffffb;
        }
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xbc));
        if (iVar1 < 0x14) {
          uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x3a);
          uVar7 = 8;
          if ((uVar4 & 1) == 0) {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
        plVar5 = *(long **)(param_1 + 0x30);
        uVar6 = 0x14;
      }
      uVar3 = (**(code **)(*plVar5 + 0x4c0))(plVar5,uVar6);
      return uVar7 | uVar3 & 1;
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar7 = 2;
  }
  if ((uVar4 & 1) == 0) {
    uVar7 = 0;
  }
  return uVar7;
}


