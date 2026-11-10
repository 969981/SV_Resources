/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f93c54; name: FUN_01f93c54
 */


void FUN_01f93c54(long param_1,undefined8 param_2,ulong param_3)

{
  void *__dest;
  long lVar1;
  undefined1 auStack_50 [48];
  
  __dest = (void *)(param_1 + 0x300);
  lVar1 = param_1 + 0x3a0;
  if ((param_3 & 1) == 0) {
    __dest = (void *)(param_1 + 0x2d0);
    lVar1 = param_1 + 0x330;
  }
  FUN_00d5faf0();
  FUN_01f954cc(auStack_50,lVar1);
  memcpy(__dest,auStack_50,0x24);
  return;
}


