/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f4158; name: FUN_022f4158
 */


ulong FUN_022f4158(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8);
  if (lVar1 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = (lVar1 >> 4) * -0x5555555555555555;
    uVar3 = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0xb8) + 8);
    uVar2 = 1;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    do {
      if (*plVar5 == *param_2) goto LAB_022f41b0;
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 6;
    } while (uVar4 != uVar3);
    uVar2 = 0;
    uVar3 = uVar4;
  }
LAB_022f41b0:
  return uVar2 | uVar3 << 0x20;
}


