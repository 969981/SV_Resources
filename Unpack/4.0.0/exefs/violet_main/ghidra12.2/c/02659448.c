/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02659448; name: FUN_02659448
 */


uint FUN_02659448(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (lVar2 = FUN_02657c9c(*param_1 + 8), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}


