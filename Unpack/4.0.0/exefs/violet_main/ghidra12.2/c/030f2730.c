/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f2730; name: FUN_030f2730
 */


undefined1  [16] FUN_030f2730(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = FUN_030f27c0();
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == uVar2) {
    uVar3 = uVar2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar2) {
      FUN_030f28d8(param_1,(long)(int)(uVar2 + 1));
      uVar3 = *(uint *)(param_1 + 1);
    }
    *(undefined8 *)(*param_1 + (long)(int)uVar3 * 8) = *param_2;
    *(uint *)(param_1 + 1) = uVar2 + 1;
  }
  auVar4[8] = uVar1 == uVar2;
  auVar4._0_8_ = *param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1d);
  auVar4._9_7_ = 0;
  return auVar4;
}


