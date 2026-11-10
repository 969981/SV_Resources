/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6120c; name: FUN_00c6120c
 */


void * FUN_00c6120c(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    FUN_00c61360();
    return (void *)0x0;
  }
  if (param_2 == (void *)0x0) {
    pvVar4 = (void *)FUN_00c61aa0(lVar3,param_3);
    return pvVar4;
  }
  if (param_3 < 0xffffffffffffff80) {
    uVar1 = 0x20;
    if (0x16 < param_3) {
      uVar1 = param_3 + 0x17 & 0xfffffffffffffff0;
    }
    if (((*(byte *)(lVar3 + 0x370) >> 1 & 1) == 0) ||
       (iVar2 = pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x378)), iVar2 == 0)) {
      lVar5 = FUN_00c625d0(lVar3,(long)param_2 + -0x10,uVar1);
      if ((*(byte *)(lVar3 + 0x370) >> 1 & 1) != 0) {
        pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x378));
      }
      if (lVar5 == 0) {
        pvVar4 = (void *)FUN_00c61aa0(lVar3,param_3);
        if (pvVar4 != (void *)0x0) {
          lVar5 = -0x10;
          if ((*(ulong *)((long)param_2 + -8) & 3) != 0) {
            lVar5 = -8;
          }
          uVar1 = lVar5 + (*(ulong *)((long)param_2 + -8) & 0xfffffffffffffff8);
          if (param_3 <= uVar1) {
            uVar1 = param_3;
          }
          memcpy(pvVar4,param_2,uVar1);
          FUN_00c61360(lVar3,param_2);
        }
      }
      else {
        pvVar4 = (void *)(lVar5 + 0x10);
      }
    }
    else {
      pvVar4 = (void *)0x0;
    }
  }
  else {
    piVar6 = __errno_location();
    pvVar4 = (void *)0x0;
    *piVar6 = 0xc;
  }
  return pvVar4;
}


