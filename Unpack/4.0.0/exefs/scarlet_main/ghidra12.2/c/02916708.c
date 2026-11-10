/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02916708; name: FUN_02916708
 */


undefined4 FUN_02916708(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  sVar5 = *(short *)(param_1 + 0x90);
  if (sVar5 == 200) {
    if (*(char *)(param_1 + 0xc4) == '\b') {
      if (*(char *)(param_1 + 0xc5) == '\x0f') {
        return 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xc4) == '\x0f') {
        return 0;
      }
      if (*(char *)(param_1 + 0xc5) != '\b') {
        return 0;
      }
    }
  }
  else {
    if (sVar5 != 0x50) {
      if (sVar5 != 0x25) {
        return 0;
      }
      cVar1 = *(char *)(param_1 + 0xc4);
      if ((cVar1 != '\a') && (cVar2 = *(char *)(param_1 + 0xc5), cVar2 != '\a')) {
        if ((cVar2 != '\b') && (((cVar1 != '\b' && (cVar1 != '\x05')) && (cVar2 != '\x05')))) {
          return 0;
        }
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        return 0xfffffffe;
      }
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar7 = 0xfffffffc;
      goto LAB_029167dc;
    }
    bVar3 = *(byte *)(param_1 + 0xc4);
    bVar4 = *(byte *)(param_1 + 0xc5);
    if (bVar3 != 9) {
      if (bVar3 == 10) {
        return 0;
      }
      if (bVar4 != 8 &&
          (bVar3 != 8 &&
          (bVar4 != 0xf &&
          (bVar3 != 0xf &&
          (bVar4 != 6 &&
          (bVar3 != 6 &&
          (bVar4 != 2 &&
          (bVar3 != 2 && (bVar4 != 3 && ((bVar3 & 0xf7) != 3 && (bVar4 & 0xfd) != 9)))))))))) {
        return 0;
      }
    }
    if (bVar4 == 5) {
      return 0;
    }
    if (bVar3 == 5) {
      return 0;
    }
    if (bVar4 == 4) {
      return 0;
    }
    if (bVar3 == 4) {
      return 0;
    }
    if (bVar4 == 10) {
      return 0;
    }
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
  uVar7 = 0xfffffffe;
LAB_029167dc:
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
  }
  return uVar7;
}


