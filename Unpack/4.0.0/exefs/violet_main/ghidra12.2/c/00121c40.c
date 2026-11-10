/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00121c40; name: FUN_00121c40
 */


void FUN_00121c40(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x20);
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 != 0xfff0b9d8) {
        if (((char)((long *)*plVar2)[1] == '\x16') ||
           (lVar3 = *(long *)*plVar2, (int)(uint)*(byte *)(lVar3 + 10) < (int)(-0xf4628 - param_2)))
        goto LAB_00121c68;
        plVar1 = (long *)(lVar3 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
        goto joined_r0x00121d0c;
      }
      plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
    }
joined_r0x00121c9c:
    if ((int)param_3 < 1) goto LAB_00121d10;
LAB_00121cb4:
    plVar2 = (long *)(*plVar2 + (ulong)param_3 * 0x10);
    if (plVar2 < *(long **)(param_1 + 0x10)) goto LAB_00121d38;
  }
  else {
    plVar1 = (long *)(*plVar2 + (ulong)param_2 * 0x10);
    if (plVar1 < *(long **)(param_1 + 0x10)) goto joined_r0x00121c9c;
LAB_00121c68:
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
joined_r0x00121d0c:
    if (0 < (int)param_3) goto LAB_00121cb4;
LAB_00121d10:
    if (-0xf4628 < (int)param_3) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 0x10);
      goto LAB_00121d38;
    }
    if (param_3 == 0xfff0b9d8) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      goto LAB_00121d38;
    }
    if (((char)((long *)*plVar2)[1] != '\x16') &&
       (lVar3 = *(long *)*plVar2, (int)(-0xf4628 - param_3) <= (int)(uint)*(byte *)(lVar3 + 10))) {
      plVar2 = (long *)(lVar3 + (ulong)(~param_3 - 0xf4628) * 0x10 + 0x20);
      goto LAB_00121d38;
    }
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
LAB_00121d38:
  *plVar2 = *plVar1;
  *(char *)(plVar2 + 1) = (char)plVar1[1];
  if (((((int)param_3 < -0xf4628) && ((*(byte *)(plVar1 + 1) >> 6 & 1) != 0)) &&
      ((*(byte *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 9) >> 5 & 1) != 0)) &&
     ((*(byte *)(*plVar1 + 9) & 0x18) != 0)) {
    FUN_00129d70();
    return;
  }
  return;
}


