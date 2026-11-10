/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122460; name: FUN_00122460
 */


ulong FUN_00122460(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      goto LAB_001224bc;
    }
    if (param_2 == 0xfff0b9d8) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      goto LAB_001224bc;
    }
    plVar2 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar2[1] != '\x16') &&
       (lVar3 = *plVar2, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar3 + 10))) {
      plVar2 = (long *)(lVar3 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      goto LAB_001224bc;
    }
  }
  else {
    plVar2 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (plVar2 < *(long **)(param_1 + 0x10)) goto LAB_001224bc;
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
LAB_001224bc:
  uVar1 = 0;
  switch(*(byte *)(plVar2 + 1) & 0x3f) {
  case 4:
    uVar1 = (ulong)*(byte *)(*plVar2 + 0xb);
    break;
  case 5:
    uVar1 = FUN_0013d7f0(*plVar2);
    return uVar1;
  case 7:
  case 0x14:
    return *(ulong *)(*plVar2 + 0x10);
  }
  return uVar1;
}


