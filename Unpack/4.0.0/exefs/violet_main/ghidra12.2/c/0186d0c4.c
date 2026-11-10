/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186d0c4; name: FUN_0186d0c4
 */


void FUN_0186d0c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (0x1f < *(ulong *)(param_1 + 0x88)) {
    FUN_0186d2ac(param_1 + 0x40);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  lVar3 = *(long *)(param_1 + 0x50);
  uVar1 = 0;
  if (lVar3 - lVar2 != 0) {
    uVar1 = (lVar3 - lVar2 >> 3) * 0x55 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x88) + *(long *)(param_1 + 0x80);
  if (uVar1 == uVar4) {
    FUN_0186d4b8(param_1 + 0x40);
    uVar4 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88);
    lVar2 = *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x50);
  }
  if (lVar3 == lVar2) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + (uVar4 / 0x55) * 8) + (uVar4 % 0x55) * 0x30;
  }
  FUN_0186d1b0(param_1 + 0x90,lVar2,param_2);
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  return;
}


