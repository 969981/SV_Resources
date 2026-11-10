/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


