/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cae760; name: FUN_01cae760
 */


void FUN_01cae760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *__src;
  undefined1 auStack_3f8 [968];
  
  uVar1 = 0x78;
  if (DAT_0481b7e8 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  __src = (void *)FUN_01caff98(param_2);
  memcpy(auStack_3f8,__src,0x3c8);
  FUN_01cb0018(param_1,uVar1,auStack_3f8);
  return;
}


