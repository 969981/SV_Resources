/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133ed4c; name: FUN_0133ed4c
 */


bool FUN_0133ed4c(undefined8 param_1)

{
  ushort uVar1;
  undefined8 local_8;
  
  local_8 = 0xbdff9b14b9ac1207;
  uVar1 = FUN_00f724ec(param_1,&local_8);
  if (0xff < uVar1) {
    local_8 = 0xbb79966c4f081fbd;
    FUN_0133edbc(param_1,&local_8);
  }
  return 0xff < uVar1;
}


