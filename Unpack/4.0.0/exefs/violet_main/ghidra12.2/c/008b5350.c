/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b5350; name: FUN_008b5350
 */


void FUN_008b5350(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00892e08(param_1,param_3,param_4 & 0xff);
  if ((uVar1 & 1) != 0) {
    FUN_00894744(param_3,param_2,param_4);
  }
  FUN_00892df0(param_1,param_2);
  return;
}


