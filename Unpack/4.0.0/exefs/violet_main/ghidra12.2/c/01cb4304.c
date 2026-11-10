/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cb4304; name: FUN_01cb4304
 */


void FUN_01cb4304(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *__src;
  undefined1 auStack_50 [48];
  
  uVar1 = 0x50;
  if (DAT_0481b800 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  __src = (void *)FUN_019cace0(param_2);
  memcpy(auStack_50,__src,0x2c);
  FUN_01cb4a18(param_1,uVar1,auStack_50);
  return;
}


