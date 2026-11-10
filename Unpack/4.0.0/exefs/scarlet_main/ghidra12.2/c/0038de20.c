/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038de20; name: FUN_0038de20
 */


undefined1  [16] FUN_0038de20(ulong param_1,long param_2)

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
  uVar1 = param_1 / 1000;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar1 = ~((long)~param_1 / 1000);
  }
  auVar4._8_8_ = (param_1 + uVar1 * -1000) * 1000000 & 0xffffffc0 | param_2 << 0x20;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


