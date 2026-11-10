/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f2b24; name: FUN_034f2b24
 */


void FUN_034f2b24(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  param_2 = param_2 & 0xffffffff;
  do {
    lVar2 = *(long *)(*param_1 + param_2 * 8);
    for (lVar3 = *(long *)(lVar2 + 0x20); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)) {
      if ((~*(byte *)(lVar3 + 0x1d8) & 3) != 0 && (*(byte *)(lVar3 + 0x1d8) & 4) == 0) {
        FUN_03505910(lVar2,lVar3);
      }
    }
    FUN_03506548(lVar2);
    if ((*(long *)(lVar2 + 0x28) == 0) &&
       (((*(long *)(lVar2 + 0x60) == 0 || (*(long *)(*(long *)(lVar2 + 0x60) + 0xa0) == 0)) &&
        (lVar3 = FUN_0349fff0(lVar2 + 0x60), lVar3 != 0)))) {
      FUN_034ecd0c(lVar2,lVar3);
    }
    uVar1 = (int)param_2 + 1;
    param_2 = (ulong)uVar1;
  } while (uVar1 < param_3);
  return;
}


