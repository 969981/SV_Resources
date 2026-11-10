/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e5d50; name: FUN_030e5d50
 */


uint FUN_030e5d50(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10;
  if ((int)*(short *)(lVar1 + 10) + (int)*(short *)(lVar1 + 8) < 0x17) {
    lVar1 = FUN_030e7a5c((long *)(param_1 + 0x10));
    if (lVar1 == 0) {
      uVar5 = 0;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulong)*(uint *)(lVar1 + 4);
      uVar5 = (lVar1 - *(long *)(param_1 + 0x20)) * 0x20000000;
    }
    if (-1 < (int)(uVar3 | uVar5)) {
      return *(uint *)(*(long *)(param_1 + 0x10) + ((long)((uVar3 | uVar5) << 0x20) >> 0x1d) + 4) &
             0x400000;
    }
  }
  else {
    lVar1 = FUN_030e7e50((long *)(param_1 + 0x30));
    if (lVar1 == 0) {
      uVar4 = 0;
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(uint *)(lVar1 + 4);
      uVar4 = ((int)lVar1 - (int)*(undefined8 *)(param_1 + 0x40)) * 0x20000000;
    }
    if (-1 < (int)(uVar2 | uVar4)) {
      return (uint)(*(char *)(*(long *)(param_1 + 0x30) + (long)(int)(uVar2 | uVar4) * 0x28 + 0xc)
                   != '\0');
    }
  }
  return 0;
}


