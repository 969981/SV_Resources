/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038dd80; name: FUN_0038dd80
 */


undefined1  [16] FUN_0038dd80(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == 0x8000000000000000) {
    auVar3._8_8_ = param_2 << 0x20;
    auVar3._0_8_ = 0x8000000000000000;
    return auVar3;
  }
  if (param_1 == 0x7fffffffffffffff) {
    auVar2._8_8_ = param_2 << 0x20;
    auVar2._0_8_ = 0x7fffffffffffffff;
    return auVar2;
  }
  uVar1 = param_1 / 1000000;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar1 = ~((long)~param_1 / 1000000);
  }
  auVar4._8_8_ = (param_1 + uVar1 * -1000000) * 1000 & 0xfffffff8 | param_2 << 0x20;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


