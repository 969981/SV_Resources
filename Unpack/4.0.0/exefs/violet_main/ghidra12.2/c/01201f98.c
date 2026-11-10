/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01201f98; name: FUN_01201f98
 */


void FUN_01201f98(long param_1)

{
  ulong uVar1;
  void *__s;
  
  uVar1 = 0;
  __s = (void *)(param_1 + 0x28);
  do {
    snprintf((char *)((long)__s + -0x20),0x20,"HiddenItemInfo_Auto_%d",(int)uVar1);
    memset(__s,0x80,0x400);
    FUN_0120200c(param_1,uVar1 & 0xffffffff);
    uVar1 = uVar1 + 1;
    __s = (void *)((long)__s + 0x420);
  } while (uVar1 != 100);
  return;
}


