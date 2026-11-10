/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a007d0; name: FUN_02a007d0
 */


void FUN_02a007d0(undefined8 *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t __n;
  void *local_28;
  
  if ((param_3 != 0) && (*(char *)((long)param_1 + 0x15) == '\0')) {
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      *(undefined1 *)((long)param_1 + 0x14) = 0;
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        lVar4 = (long)param_1 + 0x19;
        uVar5 = (ulong)(*(byte *)(param_1 + 3) >> 1);
      }
      else {
        uVar5 = param_1[4];
        lVar4 = param_1[5];
      }
      FUN_02a007d0(param_1,lVar4,uVar5);
      if (*(char *)((long)param_1 + 0x15) != '\0') {
        return;
      }
    }
    __n = (size_t)*(int *)(param_1 + 2);
    pvVar3 = (void *)param_1[1];
    if (__n < param_3) {
      do {
        memcpy(pvVar3,param_2,__n);
        iVar1 = *(int *)(param_1 + 2);
        bVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_28,param_1 + 2);
        *(byte *)((long)param_1 + 0x15) = ~bVar2 & 1;
        if ((~bVar2 & 1) != 0) {
          return;
        }
        __n = (size_t)*(int *)(param_1 + 2);
        param_3 = param_3 - (long)iVar1;
        param_2 = (void *)((long)param_2 + (long)iVar1);
        param_1[1] = local_28;
        pvVar3 = local_28;
      } while (__n < param_3);
    }
    memcpy(pvVar3,param_2,param_3);
    param_1[1] = param_1[1] + param_3;
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) - (int)param_3;
  }
  return;
}


