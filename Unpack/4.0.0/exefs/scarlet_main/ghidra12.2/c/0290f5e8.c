/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290f5e8; name: FUN_0290f5e8
 */


undefined8 FUN_0290f5e8(long param_1)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  
  sVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((((sVar2 == 200) && (*(char *)(param_1 + 0xb8) != '\b')) &&
       (*(char *)(param_1 + 0xb8) != '\x11')) &&
      ((*(char *)(param_1 + 0xb9) != '\b' && (*(char *)(param_1 + 0xb9) != '\x11')))) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
     (uVar3 & 1) != 0)) {
    return 2;
  }
  cVar5 = *(char *)(param_1 + 0xb8);
  bVar6 = *(byte *)(param_1 + 0xb9);
  if (cVar5 == '\x0f') {
    cVar7 = '\x0f';
    if ((bVar6 == 8) || (bVar6 == 0x11)) goto LAB_0290f764;
LAB_0290f650:
    cVar7 = *(char *)(param_1 + 0xa0);
    if ((((cVar7 != '\b') && (cVar7 != '\x11')) &&
        (cVar1 = *(char *)(param_1 + 0xa1), cVar1 != '\b')) && (cVar1 != '\x11')) {
      if (((cVar7 == '\x0f') || (cVar1 == '\x0f')) &&
         (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x4e), (uVar3 & 1) != 0)) {
        return 2;
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      if ((uVar3 & 1) != 0) {
        return 2;
      }
      cVar5 = *(char *)(param_1 + 0xb8);
      bVar6 = *(byte *)(param_1 + 0xb9);
    }
  }
  else if ((cVar5 != '\b') && (bVar6 == 0xf)) {
    if (cVar5 == '\x11') {
      cVar7 = '\x11';
      goto LAB_0290f764;
    }
    goto LAB_0290f650;
  }
  cVar7 = cVar5;
  if (cVar5 == '\a') {
    if ((bVar6 | 0x10) == 0x10) {
      cVar7 = '\a';
      goto LAB_0290f764;
    }
  }
  else {
    if ((bVar6 != 7) || (cVar5 == '\0')) goto LAB_0290f764;
    if (cVar5 == '\x10') {
      cVar7 = '\x10';
      goto LAB_0290f764;
    }
  }
  cVar5 = *(char *)(param_1 + 0xa0);
  if (((cVar5 != '\0') && (cVar5 != '\x10')) &&
     (bVar6 = *(byte *)(param_1 + 0xa1), (bVar6 | 0x10) != 0x10)) {
    if (((((bVar6 == 0xd) || (cVar5 == '\r')) || ((cVar5 == '\a' || (bVar6 == 7)))) &&
        (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46)
        , (uVar3 & 1) != 0)) ||
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27),
       (uVar3 & 1) != 0)) {
      return 2;
    }
    cVar7 = *(char *)(param_1 + 0xb8);
  }
LAB_0290f764:
  if ((((cVar7 == *(char *)(param_1 + 0xa0)) || (cVar7 == *(char *)(param_1 + 0xa1))) ||
      ((*(char *)(param_1 + 0xb9) == *(char *)(param_1 + 0xa0) ||
       (*(char *)(param_1 + 0xb9) == *(char *)(param_1 + 0xa1))))) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x17),
     (uVar3 & 1) != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


