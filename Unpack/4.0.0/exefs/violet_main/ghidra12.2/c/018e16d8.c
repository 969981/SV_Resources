/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e16d8; name: FUN_018e16d8
 */


uint FUN_018e16d8(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((*param_1 == 0) || (uVar2 = FUN_00efcd10(*param_1 + 8), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}


