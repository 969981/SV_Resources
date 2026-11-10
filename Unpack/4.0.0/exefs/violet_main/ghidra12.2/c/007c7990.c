/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c7990; name: FUN_007c7990
 */


undefined2 FUN_007c7990(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined *local_38;
  undefined8 uStack_30;
  undefined2 local_24 [2];
  
  FUN_007c9f9c(&DAT_047fa580);
  local_24[0] = 0;
  FUN_007c73d8(param_1,param_2);
  (**(code **)(DAT_047fa5c0 + 0x18))();
  local_38 = PTR_DAT_047d0878 + 0x10;
  uStack_30 = DAT_047fa5c8;
  thunk_FUN_007c5b40(local_24,&local_38,0xffffffff);
  uVar1 = local_24[0];
  FUN_007c9fa4(&DAT_047fa580);
  return uVar1;
}


