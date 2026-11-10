/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00511630; name: FUN_00511630
 */


void FUN_00511630(long *param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  size_t __n;
  uint uVar5;
  void *local_38;
  
  if ((param_3 != 0) && (*(char *)((long)param_1 + 0x1d) == '\0')) {
    if ((*(char *)((long)param_1 + 0x1c) != '\0') &&
       (*(undefined1 *)((long)param_1 + 0x1c) = 0, (int)param_1[4] != 0)) {
      iVar3 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar5 = *(uint *)(param_1 + 3);
      if ((int)uVar5 < iVar3) {
        do {
          if (0 < (int)uVar5) {
            memset((void *)param_1[2],0x20,(ulong)uVar5);
            uVar5 = *(uint *)(param_1 + 3);
          }
          bVar1 = (**(code **)(*(long *)param_1[1] + 0x10))
                            ((long *)param_1[1],&local_38,param_1 + 3);
          bVar2 = ~bVar1 & 1;
          *(byte *)((long)param_1 + 0x1d) = bVar2;
          if ((~bVar1 & 1) != 0) goto LAB_00511720;
          iVar3 = iVar3 - uVar5;
          uVar5 = *(uint *)(param_1 + 3);
          param_1[2] = (long)local_38;
          pvVar4 = local_38;
        } while ((int)uVar5 < iVar3);
      }
      else {
        pvVar4 = (void *)param_1[2];
      }
      memset(pvVar4,0x20,(long)iVar3);
      param_1[2] = param_1[2] + (long)iVar3;
      *(int *)(param_1 + 3) = (int)param_1[3] - iVar3;
      bVar2 = *(byte *)((long)param_1 + 0x1d);
LAB_00511720:
      if (bVar2 != 0) {
        return;
      }
    }
    iVar3 = (int)param_1[3];
    __n = (size_t)iVar3;
    if (__n < param_3) {
      do {
        if (0 < iVar3) {
          memcpy((void *)param_1[2],param_2,__n);
          param_2 = (void *)((long)param_2 + (long)(int)param_1[3]);
          param_3 = param_3 - (long)(int)param_1[3];
        }
        local_38 = (void *)0x0;
        bVar2 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],&local_38,param_1 + 3);
        *(byte *)((long)param_1 + 0x1d) = ~bVar2 & 1;
        if ((~bVar2 & 1) != 0) {
          return;
        }
        iVar3 = (int)param_1[3];
        __n = (size_t)iVar3;
        param_1[2] = (long)local_38;
        pvVar4 = local_38;
      } while (__n < param_3);
    }
    else {
      pvVar4 = (void *)param_1[2];
    }
    memcpy(pvVar4,param_2,param_3);
    param_1[2] = param_1[2] + param_3;
    *(int *)(param_1 + 3) = (int)param_1[3] - (int)param_3;
  }
  return;
}


