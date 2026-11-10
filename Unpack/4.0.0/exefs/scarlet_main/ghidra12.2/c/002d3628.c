/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d3628; name: FUN_002d3628
 */


void * FUN_002d3628(long param_1,void *param_2,ulong param_3)

{
  int __c;
  uint uVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    __c = *(int *)(param_1 + 0x20);
    lVar3 = *(ulong *)(param_1 + 0x18) - 1;
    __n = param_3 - lVar3;
    pvVar2 = memchr(param_2,__c,__n);
    if (pvVar2 != (void *)0x0) {
      uVar1 = *(uint *)(param_1 + 0x24);
      do {
        if (uVar1 == *(byte *)((long)pvVar2 + lVar3)) {
          return pvVar2;
        }
        pvVar2 = memchr((void *)((long)pvVar2 + 1),__c,(long)param_2 + (__n - ((long)pvVar2 + 1)));
      } while (pvVar2 != (void *)0x0);
    }
  }
  return (void *)0x0;
}


