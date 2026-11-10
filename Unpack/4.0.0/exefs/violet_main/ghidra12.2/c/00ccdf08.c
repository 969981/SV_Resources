/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccdf08; name: FUN_00ccdf08
 */


void FUN_00ccdf08(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1] - *param_1 >> 4;
  uVar2 = lVar1 * -0x5555555555555555;
  if (uVar2 < param_2) {
    FUN_00cce6e4(param_1,param_2 + lVar1 * 0x5555555555555555);
    return;
  }
  if (uVar2 != param_2) {
    param_1[1] = *param_1 + param_2 * 0x30;
  }
  return;
}


