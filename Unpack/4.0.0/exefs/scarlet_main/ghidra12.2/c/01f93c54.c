/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


