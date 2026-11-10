/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b2244; name: FUN_033b2244
 */


undefined4 FUN_033b2244(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  lVar2 = param_1 + 0x50;
  for (pcVar6 = (char *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x84));
      pcVar6 < *(char **)(param_1 + 0x88); pcVar6 = pcVar6 + 1) {
    if (*pcVar6 == '\r' || *pcVar6 == '\n') {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  *(int *)(param_1 + 0x84) = (int)*(char **)(param_1 + 0x88) - (int)*(long *)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    iVar3 = FUN_033b3c20(lVar2);
  }
  else {
    iVar3 = FUN_033b38e0(lVar2);
  }
  if (iVar3 == 8) {
    do {
      iVar3 = *(int *)(param_1 + 0xc0);
      lVar4 = (long)iVar3;
      if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) <= iVar3) {
        FUN_033b3650(param_1 + 0xb8,lVar4 + 1);
        iVar3 = *(int *)(param_1 + 0xc0);
      }
      piVar1 = (int *)(*(long *)(param_1 + 0xb8) + (long)iVar3 * 8);
      *(int *)(param_1 + 0xc0) = (int)(lVar4 + 1);
      *piVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
      piVar1[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80);
      for (pcVar6 = (char *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x84));
          pcVar6 < *(char **)(param_1 + 0x88); pcVar6 = pcVar6 + 1) {
        if (*pcVar6 == '\r' || *pcVar6 == '\n') {
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
          *(undefined4 *)(param_1 + 0xac) = 0;
        }
      }
      *(int *)(param_1 + 0x84) = (int)*(char **)(param_1 + 0x88) - (int)*(long *)(param_1 + 0x90);
      if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
        iVar3 = FUN_033b3c20(lVar2);
      }
      else {
        iVar3 = FUN_033b38e0(lVar2);
      }
      if (iVar3 != 8) {
        if (iVar3 == 6) {
          FUN_033b2684(param_1);
          return 1;
        }
        if (iVar3 != 0xb) {
          return 6;
        }
        for (pcVar6 = (char *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x84));
            pcVar6 < *(char **)(param_1 + 0x88); pcVar6 = pcVar6 + 1) {
          if (*pcVar6 == '\r' || *pcVar6 == '\n') {
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
            *(undefined4 *)(param_1 + 0xac) = 0;
          }
        }
        *(int *)(param_1 + 0x84) = (int)*(char **)(param_1 + 0x88) - (int)*(long *)(param_1 + 0x90);
        if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
          iVar3 = FUN_033b3c20(lVar2);
        }
        else {
          iVar3 = FUN_033b38e0(lVar2);
        }
        FUN_033b2684(param_1);
        uVar5 = 2;
        goto LAB_033b2620;
      }
      iVar3 = *(int *)(param_1 + 0xc0);
      lVar4 = (long)iVar3;
      if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) <= iVar3) {
        FUN_033b3650(param_1 + 0xb8,lVar4 + 1);
        iVar3 = *(int *)(param_1 + 0xc0);
      }
      piVar1 = (int *)(*(long *)(param_1 + 0xb8) + (long)iVar3 * 8);
      *(int *)(param_1 + 0xc0) = (int)(lVar4 + 1);
      *piVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
      piVar1[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80);
      for (pcVar6 = (char *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x84));
          pcVar6 < *(char **)(param_1 + 0x88); pcVar6 = pcVar6 + 1) {
        if (*pcVar6 == '\r' || *pcVar6 == '\n') {
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
          *(undefined4 *)(param_1 + 0xac) = 0;
        }
      }
      *(int *)(param_1 + 0x84) = (int)*(char **)(param_1 + 0x88) - (int)*(long *)(param_1 + 0x90);
      if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
        iVar3 = FUN_033b3c20(lVar2);
      }
      else {
        iVar3 = FUN_033b38e0(lVar2);
      }
      if (iVar3 != 9) {
        return 6;
      }
      for (pcVar6 = (char *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x84));
          pcVar6 < *(char **)(param_1 + 0x88); pcVar6 = pcVar6 + 1) {
        if (*pcVar6 == '\r' || *pcVar6 == '\n') {
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
          *(undefined4 *)(param_1 + 0xac) = 0;
        }
      }
      *(int *)(param_1 + 0x84) = (int)*(char **)(param_1 + 0x88) - (int)*(long *)(param_1 + 0x90);
      if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
        iVar3 = FUN_033b3c20(lVar2);
      }
      else {
        iVar3 = FUN_033b38e0(lVar2);
      }
    } while (iVar3 == 10);
  }
  else if (iVar3 == 0xb) {
    for (pcVar6 = (char *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x84));
        pcVar6 < *(char **)(param_1 + 0x88); pcVar6 = pcVar6 + 1) {
      if (*pcVar6 == '\r' || *pcVar6 == '\n') {
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
    }
    *(int *)(param_1 + 0x84) = (int)*(char **)(param_1 + 0x88) - (int)*(long *)(param_1 + 0x90);
    if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
      iVar3 = FUN_033b3c20(lVar2);
    }
    else {
      iVar3 = FUN_033b38e0(lVar2);
    }
    if (iVar3 == 8) {
      iVar3 = *(int *)(param_1 + 0xc0);
      lVar4 = (long)iVar3;
      if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) <= iVar3) {
        FUN_033b3650(param_1 + 0xb8,lVar4 + 1);
        iVar3 = *(int *)(param_1 + 0xc0);
      }
      piVar1 = (int *)(*(long *)(param_1 + 0xb8) + (long)iVar3 * 8);
      *(int *)(param_1 + 0xc0) = (int)(lVar4 + 1);
      *piVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
      piVar1[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80);
      for (pcVar6 = (char *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x84));
          pcVar6 < *(char **)(param_1 + 0x88); pcVar6 = pcVar6 + 1) {
        if (*pcVar6 == '\r' || *pcVar6 == '\n') {
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
          *(undefined4 *)(param_1 + 0xac) = 0;
        }
      }
      *(int *)(param_1 + 0x84) = (int)*(char **)(param_1 + 0x88) - (int)*(long *)(param_1 + 0x90);
      if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
        iVar3 = FUN_033b3c20(lVar2);
      }
      else {
        iVar3 = FUN_033b38e0(lVar2);
      }
      uVar5 = 3;
LAB_033b2620:
      if (iVar3 != 6) {
        uVar5 = 6;
      }
      return uVar5;
    }
  }
  return 6;
}


