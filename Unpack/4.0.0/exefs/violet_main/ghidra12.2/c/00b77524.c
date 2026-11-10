/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b77524; name: FUN_00b77524
 */


void FUN_00b77524(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[1];
  if (!(uVar1 >= uVar4 && uVar1 != uVar4)) {
    if (uVar1 < uVar4) {
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar4 < 3) ||
         (uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
         uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333),
         1 < (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar2 = std::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
      if (uVar2 < uVar4) goto LAB_00b775fc;
    }
    return;
  }
  uVar2 = uVar1;
LAB_00b775fc:
  FUN_00bac300(param_1,uVar2);
  return;
}


