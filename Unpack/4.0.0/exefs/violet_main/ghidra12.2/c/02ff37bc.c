/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ff37bc; name: FUN_02ff37bc
 */


void FUN_02ff37bc(long param_1,ulong param_2)

{
  ulong uVar1;
  uint local_8 [2];
  
  if ((long)param_2 < 0) {
    param_2 = param_2 & 0xffffffff;
  }
  else {
    uVar1 = FUN_00dbb6c8(param_1 + 0x948,param_2,local_8);
    param_2 = (ulong)local_8[0];
    if ((uVar1 & 1) == 0) {
      param_2 = 0xffffff;
    }
  }
  FUN_02ff33a4(param_1 + -0x18,param_2);
  return;
}


