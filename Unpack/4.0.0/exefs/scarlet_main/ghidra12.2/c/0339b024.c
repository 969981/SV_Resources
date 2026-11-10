/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0339b024; name: FUN_0339b024
 */


void FUN_0339b024(long *param_1,ulong *param_2)

{
  void *pvVar1;
  int iVar2;
  long *plVar3;
  undefined4 *__dest;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_58 [4];
  long local_48;
  
  local_48 = (long)(int)param_1[1];
  iVar2 = FUN_03398a74(&local_48,local_58);
  pvVar1 = (void *)*param_2;
  if (param_2[1] < (ulong)((long)pvVar1 + (long)iVar2)) {
    plVar3 = (long *)param_2[6];
    if (plVar3 == (long *)0x0) {
      memcpy(pvVar1,local_58,param_2[1] - (long)pvVar1);
      *param_2 = param_2[1];
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,local_58);
    }
  }
  else {
    memcpy(pvVar1,local_58,(long)iVar2);
    *param_2 = (long)pvVar1 + (long)iVar2;
  }
  lVar4 = (long)(int)param_1[2];
  iVar2 = (int)param_1[1];
  if ((int)param_1[2] < iVar2) {
    lVar5 = lVar4 << 3;
    do {
      lVar6 = *param_1;
      local_48 = (long)*(int *)(lVar6 + lVar5);
      iVar2 = FUN_03398a74(&local_48,local_58);
      pvVar1 = (void *)*param_2;
      __dest = (undefined4 *)((long)pvVar1 + (long)iVar2);
      if ((undefined4 *)param_2[1] < __dest) {
        plVar3 = (long *)param_2[6];
        if (plVar3 == (long *)0x0) {
          memcpy(pvVar1,local_58,(long)param_2[1] - (long)pvVar1);
          __dest = (undefined4 *)param_2[1];
          goto LAB_0339b148;
        }
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,local_58);
        __dest = (undefined4 *)*param_2;
      }
      else {
        memcpy(pvVar1,local_58,(long)iVar2);
LAB_0339b148:
        *param_2 = (ulong)__dest;
      }
      local_58[0] = *(undefined4 *)(lVar6 + lVar5 + 4);
      if ((undefined4 *)param_2[1] < __dest + 1) {
        plVar3 = (long *)param_2[6];
        if (plVar3 == (long *)0x0) {
          memcpy(__dest,local_58,(long)param_2[1] - (long)__dest);
          *param_2 = param_2[1];
        }
        else {
          (**(code **)(*plVar3 + 0x30))(plVar3,param_2,local_58,4);
        }
      }
      else {
        *__dest = local_58[0];
        *param_2 = (ulong)(__dest + 1);
      }
      iVar2 = (int)param_1[1];
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar4 < iVar2);
  }
  *(int *)(param_1 + 2) = iVar2;
  return;
}


