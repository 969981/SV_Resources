/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7247c; name: FUN_00f7247c
 */


bool FUN_00f7247c(undefined8 param_1)

{
  ushort uVar1;
  undefined8 local_8;
  
  local_8 = 0xb17cf513982f1c80;
  uVar1 = FUN_00f724ec(param_1,&local_8);
  if (0xff < uVar1) {
    local_8 = 0x50c8375fbd86997a;
    FUN_0133edbc(param_1,&local_8);
  }
  return 0xff < uVar1;
}


