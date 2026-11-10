/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b514c; name: FUN_028b514c
 */


void FUN_028b514c(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long local_68;
  void *pvStack_60;
  void *local_58;
  long local_50;
  long *plStack_48;
  
  pvVar1 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)pvVar1 >> 3) < param_2) {
    lVar4 = FUN_028b5404(param_1,param_2 + ((long)pvVar1 - *param_1 >> 3));
    lVar2 = *param_1;
    lVar3 = param_1[1];
    local_50 = 0;
    local_68 = 0;
    plStack_48 = param_1 + 2;
    if (lVar4 != 0) {
      local_68 = FUN_028b5448(lVar4);
    }
    pvStack_60 = (void *)(local_68 + (lVar3 - lVar2 >> 3) * 8);
    local_50 = local_68 + lVar4 * 8;
    pvVar1 = (void *)((long)pvStack_60 + param_2 * 8);
    memset(pvStack_60,0,param_2 << 3);
    local_58 = pvVar1;
    FUN_028b5464(param_1,&local_68);
    FUN_028b54d4(&local_68);
  }
  else {
    pvVar5 = pvVar1;
    if (param_2 != 0) {
      pvVar5 = (void *)((long)pvVar1 + param_2 * 8);
      memset(pvVar1,0,param_2 << 3);
    }
    param_1[1] = (long)pvVar5;
  }
  return;
}


