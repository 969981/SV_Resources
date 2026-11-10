/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ebd644; name: FUN_00ebd644
 */


void FUN_00ebd644(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      puVar4 = *(undefined8 **)(param_1 + 0x50);
      puVar1 = *(undefined8 **)(param_1 + 0x58);
      if (puVar4 == puVar1) {
        return;
      }
      FUN_00ebd82c(*puVar4,1);
      if (puVar4 + 1 == puVar1) {
        return;
      }
      FUN_00ebd82c(puVar4[1],1);
      for (puVar4 = puVar4 + 2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
        FUN_00ebd82c(*puVar4,1);
      }
      return;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if (puVar4 == puVar1) {
      return;
    }
    FUN_00ebd82c(*puVar4,0);
    if (puVar4 + 1 == puVar1) {
      return;
    }
    FUN_00ebd82c(puVar4[1],0);
    for (puVar4 = puVar4 + 2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      FUN_00ebd82c(*puVar4,0);
    }
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x108);
  puVar1 = *(undefined8 **)(param_1 + 0x110);
  if (puVar4 != puVar1) {
    puVar5 = puVar4;
    do {
      piVar3 = (int *)*puVar5;
      while (piVar3 != (int *)puVar5[1]) {
        iVar2 = *piVar3;
        piVar3 = piVar3 + 2;
        if (iVar2 == 0x22) goto LAB_00ebd698;
      }
      puVar5 = puVar5 + 9;
    } while (puVar5 != puVar1);
  }
LAB_00ebd6c4:
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if ((puVar4 != puVar1) && (FUN_00ebd82c(*puVar4,1), puVar4 + 1 != puVar1)) {
    FUN_00ebd82c(puVar4[1],1);
    for (puVar4 = puVar4 + 2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      FUN_00ebd82c(*puVar4,1);
    }
  }
  return;
LAB_00ebd698:
  do {
    piVar3 = (int *)*puVar4;
    while (piVar3 != (int *)puVar4[1]) {
      iVar2 = *piVar3;
      piVar3 = piVar3 + 2;
      if (iVar2 == 0x23) {
        puVar4 = *(undefined8 **)(param_1 + 0x50);
        puVar1 = *(undefined8 **)(param_1 + 0x58);
        if (puVar4 == puVar1) {
          return;
        }
        FUN_00ebd82c(*puVar4,0);
        if (puVar4 + 1 == puVar1) {
          return;
        }
        FUN_00ebd82c(puVar4[1],0);
        for (puVar4 = puVar4 + 2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
          FUN_00ebd82c(*puVar4,0);
        }
        return;
      }
    }
    puVar4 = puVar4 + 9;
  } while (puVar4 != puVar1);
  goto LAB_00ebd6c4;
}


