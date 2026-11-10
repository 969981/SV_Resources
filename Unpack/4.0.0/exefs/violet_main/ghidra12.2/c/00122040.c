/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122040; name: FUN_00122040
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00122040(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x20);
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 != 0xfff0b9d8) {
        if (((char)((long *)*plVar5)[1] == '\x16') ||
           (lVar6 = *(long *)*plVar5, (int)(uint)*(byte *)(lVar6 + 10) < (int)(-0xf4628 - param_2)))
        goto LAB_00122060;
        uVar3 = lVar6 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20;
        goto joined_r0x00122118;
      }
      uVar3 = *(long *)(param_1 + 0x18) + 0x40;
    }
    else {
      uVar3 = *(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10;
    }
joined_r0x0012209c:
    if (0 < (int)param_3) goto LAB_001220b4;
LAB_0012211c:
    if ((int)param_3 < -0xf4627) {
      if (param_3 == 0xfff0b9d8) {
        uVar4 = *(long *)(param_1 + 0x18) + 0x40;
        bVar1 = *(byte *)(uVar3 + 8);
        goto joined_r0x00122148;
      }
      if (((char)((long *)*plVar5)[1] != '\x16') &&
         (lVar6 = *(long *)*plVar5, (int)(-0xf4628 - param_3) <= (int)(uint)*(byte *)(lVar6 + 10)))
      {
        uVar4 = lVar6 + (ulong)(~param_3 - 0xf4628) * 0x10 + 0x20;
        bVar1 = *(byte *)(uVar3 + 8);
        goto joined_r0x00122148;
      }
      goto LAB_001220c8;
    }
    uVar4 = *(long *)(param_1 + 0x10) + (long)(int)param_3 * 0x10;
  }
  else {
    uVar3 = *plVar5 + (ulong)param_2 * 0x10;
    if (uVar3 < *(ulong *)(param_1 + 0x10)) goto joined_r0x0012209c;
LAB_00122060:
    uVar3 = *(long *)(param_1 + 0x18) + 0x50;
joined_r0x00122118:
    if ((int)param_3 < 1) goto LAB_0012211c;
LAB_001220b4:
    uVar4 = *plVar5 + (ulong)param_3 * 0x10;
    if (*(ulong *)(param_1 + 0x10) <= uVar4) {
LAB_001220c8:
      uVar4 = *(long *)(param_1 + 0x18) + 0x50;
      bVar1 = *(byte *)(uVar3 + 8);
      goto joined_r0x00122148;
    }
  }
  bVar1 = *(byte *)(uVar3 + 8);
joined_r0x00122148:
  if ((((bVar1 & 0xf) == 0) && (uVar3 == *(long *)(param_1 + 0x18) + 0x50U)) ||
     (((*(byte *)(uVar4 + 8) & 0xf) == 0 && (uVar4 == *(long *)(param_1 + 0x18) + 0x50U)))) {
    return 0;
  }
  uVar2 = FUN_00140890(0);
  return uVar2;
}


