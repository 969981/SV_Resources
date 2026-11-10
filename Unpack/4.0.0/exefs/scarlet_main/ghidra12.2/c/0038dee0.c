/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038dee0; name: FUN_0038dee0
 */


undefined1  [16] FUN_0038dee0(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (((int)((ulong)param_4 >> 0x20) != 3) || ((int)param_4 < 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = (int)param_4 + (int)param_2;
  uVar2 = uVar1 + 0xc4653600;
  if ((int)uVar1 < 1000000000) {
    uVar2 = uVar1;
  }
  uVar4 = param_2 & 0xffffffff;
  if (1 < param_1 + 0x8000000000000001U) {
    if ((param_3 == 0x7fffffffffffffff) ||
       ((-1 < param_3 && (0x7fffffffffffffff - param_3 <= param_1)))) {
      uVar4 = 0;
      param_1 = 0x7fffffffffffffff;
    }
    else if ((param_3 == -0x8000000000000000) ||
            ((param_3 < 1 && (param_1 <= -0x8000000000000000 - param_3)))) {
      uVar4 = 0;
      param_1 = -0x8000000000000000;
    }
    else {
      param_3 = param_3 + param_1;
      param_1 = 0x7fffffffffffffff;
      if (param_3 != 0x7ffffffffffffffe || (int)uVar1 < 1000000000) {
        param_1 = param_3 + (ulong)(999999999 < (int)uVar1);
      }
      uVar3 = 0;
      if (param_3 != 0x7ffffffffffffffe || (int)uVar1 < 1000000000) {
        uVar3 = uVar2;
      }
      uVar4 = (ulong)uVar3;
    }
  }
  auVar5._8_8_ = param_2 & 0xffffffff00000000 | uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}


