/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124a808; name: FUN_0124a808
 */


ulong FUN_0124a808(long param_1)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
  if (((uint)uVar5 >> 10 & 1) != 0) {
    uVar4 = 1;
    if (2 < *(uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x36c)) {
      uVar4 = 2;
    }
    uVar5 = FUN_011d40a0(*(long *)(param_1 + 0x10),uVar4);
    return uVar5;
  }
  if ((uVar5 >> 0x21 & 1) == 0) {
LAB_0124a880:
    lVar6 = *(long *)(param_1 + 0x10);
    uVar5 = FUN_011d3d7c(lVar6);
    if ((uVar5 & 1) == 0) {
      plVar3 = (long *)FUN_011d3f10(*(undefined8 *)(lVar6 + 0x290));
      if (plVar3 == (long *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x208))();
        uVar2 = uVar2 ^ 1;
      }
      goto LAB_0124a8d8;
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    if (*(char *)(lVar6 + 0x58) != '\0') {
      uVar5 = 0;
      cVar7 = '\0';
      do {
        bVar1 = (**(code **)(**(long **)(lVar6 + 0x28 + uVar5 * 8) + 0x208))();
        cVar7 = cVar7 + (bVar1 & 1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(byte *)(lVar6 + 0x58));
      if (cVar7 != '\0') goto LAB_0124a880;
    }
  }
  uVar2 = 1;
LAB_0124a8d8:
  return (ulong)(uVar2 & 1);
}


