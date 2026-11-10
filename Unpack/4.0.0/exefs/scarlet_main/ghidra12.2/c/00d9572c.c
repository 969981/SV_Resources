/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9572c; name: FUN_00d9572c
 */


void FUN_00d9572c(long *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  long *local_28;
  
  if (*param_1 == 0) {
    return;
  }
  if (*(short *)(*param_1 + 0x1a) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x14) == '\0') {
    return;
  }
  FUN_00c90ab8(&local_28,param_1);
  if (local_28 == (long *)0x0) {
    return;
  }
  if ((((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) ||
      (*(char *)((long)param_1 + 0x14) == '\0')) || (iVar1 = (int)param_1[2], iVar1 == 0)) {
    pcVar2 = *(code **)(*local_28 + 0x60);
  }
  else {
    if (iVar1 == 1) {
      (**(code **)(*local_28 + 0x88))((float)(int)param_2,local_28,(long)param_1 + 0x14);
      goto LAB_00d957b8;
    }
    if (iVar1 == 2) {
      param_2 = (uint)(param_2 != 0);
      pcVar2 = *(code **)(*local_28 + 0xb0);
    }
    else {
      if (iVar1 != 3) goto LAB_00d957b8;
      param_2 = (uint)(param_2 != 0);
      pcVar2 = *(code **)(*local_28 + 0xe0);
    }
  }
  (*pcVar2)(local_28,(long)param_1 + 0x14,param_2);
LAB_00d957b8:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  return;
}


