/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122c30; name: FUN_00122c30
 */


undefined8 FUN_00122c30(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        uVar3 = (ulong)*(byte *)(*(long *)(param_1 + 0x18) + 0x48) & 0xf;
        iVar2 = (int)uVar3;
        goto joined_r0x00122d50;
      }
      plVar4 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar4[1] != '\x16') &&
         (lVar1 = *plVar4, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar1 + 10))) {
        lVar1 = lVar1 + (ulong)(~param_2 - 0xf4628) * 0x10;
        plVar4 = (long *)(lVar1 + 0x20);
        uVar3 = (ulong)*(byte *)(lVar1 + 0x28) & 0xf;
        iVar2 = (int)uVar3;
        goto joined_r0x00122d50;
      }
      goto LAB_00122c50;
    }
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
  }
  else {
    plVar4 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar4) {
LAB_00122c50:
      plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
      uVar3 = (ulong)*(byte *)(*(long *)(param_1 + 0x18) + 0x58) & 0xf;
      iVar2 = (int)uVar3;
      goto joined_r0x00122d50;
    }
  }
  uVar3 = (ulong)*(byte *)(plVar4 + 1) & 0xf;
  iVar2 = (int)uVar3;
joined_r0x00122d50:
  if (iVar2 == 7) {
    lVar1 = *(long *)(*plVar4 + 0x18);
  }
  else if ((int)uVar3 == 5) {
    lVar1 = *(long *)(*plVar4 + 0x28);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + uVar3 * 8 + 0x1e0);
  }
  if (lVar1 == 0) {
    return 0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  *plVar4 = lVar1;
  *(undefined1 *)(plVar4 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return 1;
}


