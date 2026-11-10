/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01304b78; name: FUN_01304b78
 */


void FUN_01304b78(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1] - *param_1 >> 4;
  uVar2 = lVar1 * -0x5075075075075075;
  if (uVar2 < param_2) {
    FUN_0130682c(param_1,param_2 + lVar1 * 0x5075075075075075);
    return;
  }
  if (uVar2 != param_2) {
    param_1[1] = *param_1 + param_2 * 0x230;
  }
  return;
}


