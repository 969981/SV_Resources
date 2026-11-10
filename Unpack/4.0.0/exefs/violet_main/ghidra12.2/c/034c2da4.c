/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c2da4; name: FUN_034c2da4
 */


long FUN_034c2da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  if (*param_4 == 1) {
    lVar1 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x380);
    if (lVar1 != 0) {
      FUN_0347af30(lVar1,param_4,param_2,param_3,param_5);
    }
  }
  else {
    lVar1 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,800);
    if (lVar1 != 0) {
      FUN_034a1dac(lVar1,param_4,param_2,param_3,param_5,0);
    }
  }
  return lVar1;
}


