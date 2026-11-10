/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7bc0c; name: FUN_00f7bc0c
 */


void FUN_00f7bc0c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1] - *param_1 >> 4;
  uVar2 = lVar1 * -0x5075075075075075;
  if (uVar2 < param_2) {
    FUN_00f7bd98(param_1,param_2 + lVar1 * 0x5075075075075075);
    return;
  }
  if (param_2 < uVar2) {
    param_1[1] = *param_1 + param_2 * 0x230;
  }
  return;
}


