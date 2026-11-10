/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed3d90; name: FUN_01ed3d90
 */


undefined4 FUN_01ed3d90(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return *(undefined4 *)(param_1 + 0x44);
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(undefined1 *)(param_1 + 0x40) = 1;
    return 1;
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar3 == lVar4) {
LAB_01ed3e68:
    uVar1 = 3;
  }
  else {
    do {
      FUN_01ed9418(lVar3);
      lVar3 = lVar3 + 0x318;
    } while (lVar4 != lVar3);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar3 == lVar4) goto LAB_01ed3e68;
    lVar2 = lVar3;
    do {
      if (*(int *)(lVar2 + 0x314) != 2) goto LAB_01ed3e30;
      lVar2 = lVar2 + 0x318;
    } while (lVar4 != lVar2);
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar1;
LAB_01ed3e70:
  *(undefined1 *)(param_1 + 0x40) = 1;
  return uVar1;
LAB_01ed3e30:
  do {
    if (*(int *)(lVar3 + 0x314) == 2) {
      lVar3 = FUN_01ed9b0c((long *)(param_1 + 8));
      lVar4 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar3 = lVar3 + 0x318;
    }
  } while (lVar3 != lVar4);
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  goto LAB_01ed3e70;
}


