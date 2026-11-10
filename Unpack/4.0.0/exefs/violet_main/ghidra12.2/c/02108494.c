/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02108494; name: FUN_02108494
 */


bool FUN_02108494(undefined8 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 local_8;
  
  local_8 = 0x86af8331d449fb93;
  uVar2 = FUN_00d9bf48();
  uVar1 = FUN_015e7948(param_1,&local_8,uVar2);
  return 0xff < uVar1;
}


