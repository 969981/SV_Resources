/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c7350; name: FUN_007c7350
 */


undefined1 FUN_007c7350(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *local_38;
  undefined8 uStack_30;
  undefined1 local_24 [4];
  
  FUN_007c9f9c(&DAT_047fa580);
  local_24[0] = 0;
  FUN_007c73d8(param_1,param_2);
  (**(code **)(DAT_047fa5c0 + 0x18))();
  local_38 = PTR_DAT_047d0878 + 0x10;
  uStack_30 = DAT_047fa5c8;
  thunk_FUN_007c6530(local_24,&local_38,0xffffffff);
  uVar1 = local_24[0];
  FUN_007c9fa4(&DAT_047fa580);
  return uVar1;
}


