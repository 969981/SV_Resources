/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034aca6c; name: FUN_034aca6c
 */


void FUN_034aca6c(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0xdc) >> 1 & 1) == 0) {
    lVar3 = 0;
    do {
      lVar4 = param_1;
      if (lVar3 == 0) {
        lVar3 = *(long *)(lVar4 + 0xa0);
      }
    } while (((*(byte *)(lVar4 + 0xbd) >> 2 & 1) == 0) &&
            (param_1 = *(long *)(lVar4 + 0x98), *(long *)(lVar4 + 0x98) != 0));
    if (*(long *)(lVar4 + 0x80) != 0) {
      FUN_034ac914(param_2);
    }
    if (lVar3 == 0) {
      do {
        plVar1 = (long *)(lVar4 + 0x98);
        lVar3 = *(long *)(lVar4 + 0xa0);
        lVar4 = *plVar1;
      } while (lVar3 == 0 && *plVar1 != 0);
      if (lVar3 == 0) {
        param_1 = 0;
        goto LAB_034acae4;
      }
    }
    uVar2 = FUN_03471aac(lVar3);
    param_1 = 0;
    if ((uVar2 & 1) == 0) {
      param_1 = lVar3;
    }
  }
LAB_034acae4:
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      FUN_034ac914(param_2);
    }
    param_1 = *(long *)(param_1 + 0xa0);
    if (param_1 == 0) break;
    uVar2 = FUN_03471aac(param_1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  return;
}


