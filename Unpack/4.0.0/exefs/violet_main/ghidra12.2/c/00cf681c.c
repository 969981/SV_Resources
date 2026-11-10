/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf681c; name: FUN_00cf681c
 */


void FUN_00cf681c(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  float fVar4;
  long *local_28;
  
  if (*param_2 == 0) {
    return;
  }
  if (*(short *)(*param_2 + 0x1a) == 0) {
    return;
  }
  if (*(char *)((long)param_2 + 0x14) == '\0') {
    return;
  }
  FUN_00c90ab8(&local_28,param_2);
  if (local_28 == (long *)0x0) {
    return;
  }
  fVar4 = (float)param_1;
  if (((*param_2 == 0) || (*(short *)(*param_2 + 0x1a) == 0)) ||
     (*(char *)((long)param_2 + 0x14) == '\0')) {
LAB_00cf6900:
    uVar2 = (uint)fVar4;
    pcVar3 = *(code **)(*local_28 + 0x60);
  }
  else {
    iVar1 = (int)param_2[2];
    if (iVar1 == 1) {
      (**(code **)(*local_28 + 0x88))(param_1,local_28,(long)param_2 + 0x14);
      goto LAB_00cf6918;
    }
    if (iVar1 == 2) {
      uVar2 = (uint)(fVar4 != 0.0);
      pcVar3 = *(code **)(*local_28 + 0xb0);
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 != 0) goto LAB_00cf6918;
        goto LAB_00cf6900;
      }
      uVar2 = (uint)(fVar4 != 0.0);
      pcVar3 = *(code **)(*local_28 + 0xe0);
    }
  }
  (*pcVar3)(local_28,(long)param_2 + 0x14,uVar2);
LAB_00cf6918:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  return;
}


