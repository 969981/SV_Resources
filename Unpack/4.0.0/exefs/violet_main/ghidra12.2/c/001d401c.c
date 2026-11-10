/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d401c; name: FUN_001d401c
 */


undefined8 FUN_001d401c(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar5;
  long lVar4;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (*(long *)(lVar6 + 0x1e8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar6 + 0xa38);
  if (iVar1 == 1 || iVar1 == 6) {
    return 0;
  }
  uVar2 = *(uint *)((long)param_1 + 0x3fc);
  lVar7 = *(long *)(lVar6 + 0x108);
  if ((uVar2 & 0x9000) == 0x1000) {
    if (iVar1 - 3U < 2) {
      plVar5 = (long *)(*(long *)(lVar6 + 0x1e8) + 8);
LAB_001d40ac:
      lVar4 = *plVar5;
      goto LAB_001d40b0;
    }
    if ((iVar1 == 2) || (iVar1 == 5)) {
      plVar5 = (long *)(lVar6 + 0x1518);
      goto LAB_001d40ac;
    }
    *(uint *)((long)param_1 + 0x3fc) = uVar2 & 0xfffeffff;
  }
  else {
    lVar4 = 0;
LAB_001d40b0:
    *(uint *)((long)param_1 + 0x3fc) = uVar2 & 0xfffeffff;
    if ((lVar4 != -1) && (lVar4 <= lVar7)) goto joined_r0x001d40c8;
  }
  FUN_001c6c60(param_1,2);
  *(undefined8 *)(lVar6 + 0xf0) = 0;
joined_r0x001d40c8:
  if (lVar7 == 0) {
    return 0;
  }
  uVar3 = FUN_001e1394(param_1);
  return uVar3;
}


