/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024b5c90; name: FUN_024b5c90
 */


void FUN_024b5c90(long param_1,void *param_2,ulong param_3)

{
  void *__src;
  ulong uVar1;
  size_t sVar2;
  void *__dest;
  
  if (param_3 != 0) {
    __dest = (void *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x10) * 0x28);
    sVar2 = (long)__dest - (long)param_2;
    uVar1 = param_3;
    if (sVar2 != 0) {
      if (param_3 <= (ulong)(((long)sVar2 >> 3) * -0x3333333333333333)) {
        __src = (void *)((long)__dest + param_3 * -0x28);
        memmove(__dest,__src,param_3 * 0x28);
        sVar2 = (long)__src - (long)param_2;
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3;
        memmove((void *)((long)__dest - sVar2),param_2,sVar2);
        memset(param_2,0,param_3 * 0x28);
        return;
      }
      if (__dest != param_2) {
        memmove((void *)((long)param_2 + param_3 * 0x28),param_2,sVar2);
      }
      memset(param_2,0,sVar2);
      uVar1 = param_3 + ((long)sVar2 >> 3) * 0x3333333333333333;
    }
    memset(__dest,0,uVar1 * 0x28);
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3;
  }
  return;
}


