/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


