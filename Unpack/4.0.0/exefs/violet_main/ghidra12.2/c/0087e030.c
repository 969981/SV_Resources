/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087e030; name: FUN_0087e030
 */


int FUN_0087e030(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = -0x7fd9fdff;
  if (param_1 == 0) {
    return -0x7fd9fdff;
  }
  if (param_2 == (int *)0x0) {
    return -0x7fd9fdff;
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    return -0x7fd9fdfd;
  }
  if (*param_2 == 2) {
    iVar3 = -0x7f7ffffb;
    if (*(int *)(param_1 + 0x58) == 1) {
      lVar2 = 0;
    }
    else if (*(int *)(param_1 + 0xa0) == 1) {
      lVar2 = 1;
    }
    else if (*(int *)(param_1 + 0xe8) == 1) {
      lVar2 = 2;
    }
    else {
      if (*(int *)(param_1 + 0x130) != 1) {
        return -0x7f7ffffb;
      }
      lVar2 = 3;
    }
    param_2[4] = 0x1020001;
    lVar2 = param_1 + lVar2 * 0x48;
    iVar1 = (**(code **)(lVar2 + 0x88))(*(undefined8 *)(lVar2 + 0x60));
    if (iVar1 != 0) goto LAB_0087e260;
    if (*(int *)(param_1 + 0x58) == 3) {
      lVar2 = 0;
    }
    else if (*(int *)(param_1 + 0xa0) == 3) {
      lVar2 = 1;
    }
    else if (*(int *)(param_1 + 0xe8) == 3) {
      lVar2 = 2;
    }
    else {
      if (*(int *)(param_1 + 0x130) != 3) {
        return -0x7f7ffffb;
      }
      lVar2 = 3;
    }
    param_1 = param_1 + lVar2 * 0x48;
    param_2[0x68] = 0x1010003;
    iVar1 = (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x60),param_2 + 0x68);
  }
  else {
    if (*param_2 != 1) goto LAB_0087e260;
    iVar3 = -0x7f7ffffb;
    if (*(int *)(param_1 + 0x58) == 1) {
      lVar2 = 0;
    }
    else if (*(int *)(param_1 + 0xa0) == 1) {
      lVar2 = 1;
    }
    else if (*(int *)(param_1 + 0xe8) == 1) {
      lVar2 = 2;
    }
    else {
      if (*(int *)(param_1 + 0x130) != 1) {
        return -0x7f7ffffb;
      }
      lVar2 = 3;
    }
    param_2[4] = 0x1010001;
    lVar2 = param_1 + lVar2 * 0x48;
    iVar1 = (**(code **)(lVar2 + 0x88))(*(undefined8 *)(lVar2 + 0x60));
    if (iVar1 != 0) goto LAB_0087e260;
    if (*(int *)(param_1 + 0x58) == 3) {
      lVar2 = 0;
    }
    else if (*(int *)(param_1 + 0xa0) == 3) {
      lVar2 = 1;
    }
    else if (*(int *)(param_1 + 0xe8) == 3) {
      lVar2 = 2;
    }
    else {
      if (*(int *)(param_1 + 0x130) != 3) {
        return -0x7f7ffffb;
      }
      lVar2 = 3;
    }
    param_1 = param_1 + lVar2 * 0x48;
    param_2[0x50] = 0x1010003;
    iVar1 = (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x60),param_2 + 0x50);
  }
  iVar3 = -0x7f7ffffb;
  if (iVar1 == 0) {
    return 0;
  }
LAB_0087e260:
  return iVar3 + 3;
}


