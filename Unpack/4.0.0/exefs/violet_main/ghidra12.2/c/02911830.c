/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02911830; name: FUN_02911830
 */


int FUN_02911830(long param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (cVar2 != '\0') {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar4 < 7) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar4 = iVar4 + -6;
    }
    iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (6 < iVar5) {
      iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar4 = iVar4 + iVar5 + -6;
    }
    iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (6 < iVar5) {
      iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar4 = iVar4 + iVar5 + -6;
    }
    iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (6 < iVar5) {
      iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar4 = iVar4 + iVar5 + -6;
    }
    iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (6 < iVar5) {
      iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar4 = iVar4 + iVar5 + -6;
    }
    iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (6 < iVar5) {
      iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar4 = iVar4 + iVar5 + -6;
    }
    iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (6 < iVar5) {
      iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar4 = iVar4 + iVar5 + -6;
    }
    if (0x10 < iVar4) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x61);
      bVar1 = (uVar7 & 1) == 0;
      iVar4 = 4;
LAB_02911a14:
      if (bVar1) {
        iVar4 = 0;
      }
      return iVar4;
    }
    if (iVar4 < 9) {
      if (iVar4 < 5) {
        if (iVar4 < 3) {
          uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x55);
          return -(uVar6 & 1);
        }
      }
      else {
        cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
        if (cVar2 != '\x06') {
          uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x4e);
          bVar1 = (uVar7 & 1) == 0;
          iVar4 = 2;
          goto LAB_02911a14;
        }
      }
    }
    else {
      bVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
      if (5 < bVar3) {
        uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        bVar1 = (uVar7 & 1) == 0;
        iVar4 = 3;
        goto LAB_02911a14;
      }
    }
  }
  return 0;
}


