/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029076e8; name: FUN_029076e8
 */


int FUN_029076e8(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  bVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (((bVar1 < 6) &&
      (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d),
      (uVar5 & 1) != 0)) ||
     ((cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
      cVar2 == '\x06' &&
      (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
      (uVar5 & 1) != 0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (iVar3 < 0xb) {
      iVar3 = 0;
    }
    else {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      iVar3 = 2;
      if ((uVar5 & 1) == 0) {
        iVar3 = 0;
      }
    }
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar4 < 5) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      iVar4 = iVar3 + 2;
      if ((uVar5 & 1) == 0) {
        iVar4 = iVar3;
      }
      return iVar4;
    }
  }
  return iVar3;
}


