/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f6b1c; name: FUN_001f6b1c
 */


byte * FUN_001f6b1c(uint *param_1,ulong *param_2,undefined4 *param_3,uint param_4,ulong param_5,
                   byte *param_6,byte *param_7,uint param_8)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  pbVar3 = param_6;
  if (param_4 == 0) {
    param_4 = ~(-1 << (ulong)(param_8 & 0x1f)) & 0xff;
    if ((param_4 & *param_6) != param_4) {
      *param_1 = param_4 & *param_6;
      *param_3 = 1;
      return (byte *)0x1;
    }
    pbVar3 = param_6 + 1;
    if (pbVar3 == param_7) {
      *param_1 = param_4;
      return (byte *)0x1;
    }
  }
  uVar2 = param_5;
  if (pbVar3 != param_7) {
    uVar2 = (long)pbVar3 * -7 + (long)param_7 * 7 + param_5;
    do {
      if (0x1f < param_5) {
        return (byte *)0xffffffffffffffff;
      }
      uVar1 = *pbVar3 & 0x7f;
      if (0xffffffffU >> (ulong)((uint)param_5 & 0x1f) < uVar1) {
        return (byte *)0xffffffffffffffff;
      }
      uVar1 = uVar1 << (ulong)((uint)param_5 & 0x1f);
      if (CARRY4(uVar1,param_4)) {
        return (byte *)0xffffffffffffffff;
      }
      param_4 = uVar1 + param_4;
      if (-1 < (char)*pbVar3) {
        *param_2 = param_5;
        *param_1 = param_4;
        *param_3 = 1;
        return pbVar3 + (1 - (long)param_6);
      }
      pbVar3 = pbVar3 + 1;
      param_5 = param_5 + 7;
    } while (param_7 != pbVar3);
  }
  *param_2 = uVar2;
  *param_1 = param_4;
  return param_7 + -(long)param_6;
}


