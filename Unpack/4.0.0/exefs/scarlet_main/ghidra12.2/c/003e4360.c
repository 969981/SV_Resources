/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e4360; name: FUN_003e4360
 */


int FUN_003e4360(long *param_1,void *param_2,undefined4 *param_3,char *param_4)

{
  void **ppvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *__src;
  int *piVar7;
  undefined1 local_1c [4];
  void *local_18;
  
  local_18 = param_2;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar5 = *(code **)(*(long *)(param_4 + 0x20) + 0x30), pcVar5 != (code *)0x0)) {
    iVar2 = (*pcVar5)();
    return iVar2;
  }
  if (*param_4 == '\0') {
    lVar6 = *(long *)(param_4 + 8);
    if (lVar6 != 1) {
      if (*param_1 == 0) {
        return -1;
      }
      goto joined_r0x003e43d0;
    }
  }
  else {
    if (*param_1 == 0) {
      return -1;
    }
    if (*param_4 == '\x05') {
      uVar4 = *(undefined4 *)(*param_1 + 4);
      *param_3 = uVar4;
      goto LAB_003e43f4;
    }
    lVar6 = *(long *)(param_4 + 8);
joined_r0x003e43d0:
    if (lVar6 == -4) {
      puVar3 = (undefined4 *)*param_1;
      param_1 = (long *)(puVar3 + 2);
      uVar4 = *puVar3;
      *param_3 = uVar4;
      goto LAB_003e43f4;
    }
  }
  uVar4 = *param_3;
LAB_003e43f4:
  switch(uVar4) {
  case 1:
    iVar2 = (int)*param_1;
    if (iVar2 == -1) {
      return -1;
    }
    if (*(long *)(param_4 + 8) != -4) {
      if (iVar2 == 0) {
        if (*(long *)(param_4 + 0x28) == 0) {
          return -1;
        }
      }
      else if (0 < *(long *)(param_4 + 0x28)) {
        return -1;
      }
    }
    local_1c[0] = (undefined1)*param_1;
    iVar2 = 1;
    __src = local_1c;
    break;
  case 2:
  case 10:
    ppvVar1 = (void **)0x0;
    if (param_2 != (void *)0x0) {
      ppvVar1 = &local_18;
    }
    iVar2 = FUN_003e0670(*param_1,ppvVar1);
    return iVar2;
  case 3:
    ppvVar1 = (void **)0x0;
    if (param_2 != (void *)0x0) {
      ppvVar1 = &local_18;
    }
    iVar2 = FUN_003e3400(*param_1,ppvVar1);
    return iVar2;
  default:
    piVar7 = (int *)*param_1;
    if ((*(long *)(param_4 + 0x28) == 0x800) && ((*(byte *)(piVar7 + 4) >> 4 & 1) != 0)) {
      if (param_2 == (void *)0x0) {
        return -2;
      }
      *(void **)(piVar7 + 2) = param_2;
      *piVar7 = 0;
      return -2;
    }
    __src = *(undefined1 **)(piVar7 + 2);
    iVar2 = *piVar7;
    break;
  case 5:
    return 0;
  case 6:
    __src = *(undefined1 **)(*param_1 + 0x18);
    if (__src == (undefined1 *)0x0) {
      return -1;
    }
    iVar2 = *(int *)(*param_1 + 0x14);
    if (iVar2 == 0) {
      return -1;
    }
  }
  if ((param_2 != (void *)0x0) && (iVar2 != 0)) {
    memcpy(param_2,__src,(long)iVar2);
  }
  return iVar2;
}


