/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123020; name: FUN_00123020
 */


void FUN_00123020(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      plVar3 = plVar1 + (long)(int)param_2 * 2;
      goto LAB_0012308c;
    }
    if (param_2 == 0xfff0b9d8) {
      plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      goto LAB_0012308c;
    }
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar3[1] != '\x16') &&
       (lVar2 = *plVar3, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar2 + 10))) {
      plVar3 = (long *)(lVar2 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      goto LAB_0012308c;
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (plVar3 < plVar1) goto LAB_0012308c;
  }
  plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
LAB_0012308c:
  lVar4 = *plVar3;
  FUN_0013cfe0(param_1,lVar4,plVar1 + -4,plVar1 + -2);
  *(byte *)(lVar4 + 10) = *(byte *)(lVar4 + 10) & 0xc0;
  lVar2 = *(long *)(param_1 + 0x10);
  if ((((*(byte *)(lVar2 + -8) >> 6 & 1) != 0) && ((*(byte *)(lVar4 + 9) >> 5 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar2 + -0x10) + 9) & 0x18) != 0)) {
    FUN_00129f00(param_1,lVar4);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar2 + -0x20;
  return;
}


