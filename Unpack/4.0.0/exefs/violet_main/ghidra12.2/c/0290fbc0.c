/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290fbc0; name: FUN_0290fbc0
 */


int FUN_0290fbc0(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (cVar1 == '\0') {
    return -1;
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar3 < 7) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar3 = iVar3 + -6;
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (6 < iVar4) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar3 = iVar3 + iVar4 + -6;
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (6 < iVar4) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar3 = iVar3 + iVar4 + -6;
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (6 < iVar4) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar3 = iVar3 + iVar4 + -6;
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (6 < iVar4) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar3 = iVar3 + iVar4 + -6;
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (6 < iVar4) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar3 = iVar3 + iVar4 + -6;
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (6 < iVar4) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar3 = iVar3 + iVar4 + -6;
  }
  if (iVar3 < 6) {
    if (iVar3 < 2) {
      if (iVar3 != 1) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
        return -(uVar5 & 1);
      }
    }
    else {
      cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
      if (cVar1 != '\x03') {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
        iVar3 = 2;
        goto LAB_0290fe34;
      }
    }
  }
  else {
    bVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if (5 < bVar2) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      iVar3 = 3;
LAB_0290fe34:
      if ((uVar6 & 1) == 0) {
        iVar3 = 0;
      }
      return iVar3;
    }
  }
  return 0;
}


