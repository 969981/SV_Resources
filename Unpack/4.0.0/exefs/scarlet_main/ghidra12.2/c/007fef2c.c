/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fef2c; name: FUN_007fef2c
 */


void FUN_007fef2c(long param_1,void *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__dest;
  
  if ((*(long *)(param_1 + 0x1338) != 0) && (iVar2 = *(int *)(param_1 + 0x1340), iVar2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x1344) + 1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    if (iVar1 - iVar3 * iVar2 != *(int *)(param_1 + 0x1348)) {
      __dest = (void *)(*(long *)(param_1 + 0x1338) + (long)*(int *)(param_1 + 0x1344) * 0x5d0);
      memcpy(__dest,param_2,(ulong)param_3);
      *(uint *)((long)__dest + 0x5c0) = param_3;
      *(undefined8 *)((long)__dest + 0x5c8) = param_4;
      iVar1 = *(int *)(param_1 + 0x1340);
      iVar2 = *(int *)(param_1 + 0x1344) + 1;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar2 / iVar1;
      }
      *(int *)(param_1 + 0x1344) = iVar2 - iVar3 * iVar1;
    }
  }
  return;
}


