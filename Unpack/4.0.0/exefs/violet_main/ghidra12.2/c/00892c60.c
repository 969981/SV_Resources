/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892c60; name: FUN_00892c60
 */


void FUN_00892c60(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00892e08(param_2,*(undefined8 *)(param_3 + 0x20),*(undefined2 *)(param_3 + 0x4a));
  if ((uVar1 & 1) != 0) {
    FUN_008a5d9c(param_3,param_1);
  }
  FUN_00892df0(param_2,param_1);
  FUN_008a57b0(param_3,param_1,param_2);
  return;
}


