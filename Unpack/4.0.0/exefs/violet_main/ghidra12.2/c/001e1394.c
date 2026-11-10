/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e1394; name: FUN_001e1394
 */


undefined8 FUN_001e1394(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar2 = lVar5 + 0x820;
  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xfffeffff;
  *(uint *)(lVar5 + 0x1c0) = *(uint *)(lVar5 + 0x1c0) & 0xfffffffd;
  if ((*(byte *)(param_1[0x84] + 0x80) & 3) != 0) {
    if (**(long **)(lVar5 + 0x1e8) != 0) {
      lVar2 = **(long **)(lVar5 + 0x1e8);
    }
  }
  if (*(long *)(lVar5 + 0x6e8) != 0) {
    return 0;
  }
  if (*(int *)(lVar5 + 0xa38) - 3U < 2) {
    uVar3 = FUN_001cc9fc(lVar2);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    pcVar4 = "Cannot rewind mime/post data";
LAB_001e1414:
    FUN_001db9c8(lVar5,pcVar4);
  }
  else {
    if (*(long *)(lVar5 + 0x6f0) == 0) {
      if (*(long *)(lVar5 + 0x740) == 0) {
        if ((*(undefined **)(lVar5 + 0x1528) == PTR_FUN_047cb988) &&
           (iVar1 = FUN_001ed434(*(undefined8 *)(lVar5 + 0x1530),0,0), iVar1 != -1)) {
          return 0;
        }
        pcVar4 = "necessary data rewind wasn\'t possible";
        goto LAB_001e1414;
      }
      FUN_001d14e0(lVar5,1);
      iVar1 = (**(code **)(lVar5 + 0x740))(lVar5,1,*(undefined8 *)(lVar5 + 0x7a0));
      FUN_001d14e0(lVar5,0);
      FUN_001db818(lVar5,"the ioctl callback returned %d\n",iVar1);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar4 = "ioctl callback returned error %d";
    }
    else {
      FUN_001d14e0(lVar5,1);
      iVar1 = (**(code **)(lVar5 + 0x6f0))(*(undefined8 *)(lVar5 + 0x778),0,0);
      FUN_001d14e0(lVar5,0);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar4 = "seek callback returned error %d";
    }
    FUN_001db9c8(lVar5,pcVar4,iVar1);
  }
  return 0x41;
}


