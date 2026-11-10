/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d34290; name: FUN_00d34290
 */


uint FUN_00d34290(long param_1,uint param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        uVar2 = *(long *)(param_1 + 0x18) + 0x40;
        bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x00d342f4;
      }
      plVar3 = (long *)**(long **)(param_1 + 0x20);
      if (((char)plVar3[1] != '\x16') &&
         (lVar4 = *plVar3, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar4 + 10))) {
        lVar4 = lVar4 + (ulong)(~param_2 - 0xf4628) * 0x10;
        uVar2 = lVar4 + 0x20;
        bVar1 = *(byte *)(lVar4 + 0x28);
        goto joined_r0x00d342f4;
      }
      goto LAB_00d342b0;
    }
    uVar2 = *(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10;
  }
  else {
    uVar2 = **(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10;
    if (*(ulong *)(param_1 + 0x10) <= uVar2) {
LAB_00d342b0:
      uVar2 = *(long *)(param_1 + 0x18) + 0x50;
      bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x58);
      goto joined_r0x00d342f4;
    }
  }
  bVar1 = *(byte *)(uVar2 + 8);
joined_r0x00d342f4:
  if (((bVar1 & 0xf) == 0) && (uVar2 == *(long *)(param_1 + 0x18) + 0x50U)) {
    return 0xffffffff;
  }
  return bVar1 & 0xf;
}


