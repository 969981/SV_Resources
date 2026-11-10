/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02108090; name: FUN_02108090
 */


bool FUN_02108090(undefined8 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 local_8;
  
  local_8 = 0x230ad8bf6ed52880;
  uVar2 = FUN_00d9bf48();
  uVar1 = FUN_015e7948(param_1,&local_8,uVar2);
  return 0xff < uVar1;
}


