/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052b6d0; name: FUN_0052b6d0
 */


undefined8 FUN_0052b6d0(long *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  int iVar5;
  size_t __n;
  long *plVar6;
  long lVar7;
  int local_44;
  void *local_38;
  
  pvVar4 = (void *)*param_1;
  lVar7 = param_1[1] - (long)pvVar4;
  if ((int)lVar7 < param_3) {
    do {
      while( true ) {
        __n = (size_t)(int)lVar7;
        memcpy(param_2,pvVar4,__n);
        *param_1 = *param_1 + __n;
        if (((0 < *(int *)((long)param_1 + 0x2c)) || (0 < *(int *)((long)param_1 + 0x1c))) ||
           ((int)param_1[3] == (int)param_1[5])) {
          return 0;
        }
        param_2 = (void *)((long)param_2 + __n);
        plVar6 = (long *)param_1[2];
        param_3 = param_3 - (int)lVar7;
        do {
          uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_38,&local_44);
          if ((uVar3 & 1) == 0) {
            *param_1 = 0;
            param_1[1] = 0;
            return 0;
          }
        } while (local_44 == 0);
        lVar7 = (long)local_38 + (long)local_44;
        iVar5 = (int)param_1[3];
        iVar1 = iVar5 - (0x7fffffff - local_44);
        *param_1 = (long)local_38;
        param_1[1] = lVar7;
        if (iVar1 == 0 || iVar5 < 0x7fffffff - local_44) {
          iVar5 = iVar5 + local_44;
        }
        else {
          lVar7 = lVar7 - iVar1;
          iVar5 = 0x7fffffff;
          *(int *)((long)param_1 + 0x1c) = iVar1;
          param_1[1] = lVar7;
        }
        lVar7 = lVar7 + *(int *)((long)param_1 + 0x2c);
        iVar1 = (int)param_1[6];
        if ((int)param_1[5] <= (int)param_1[6]) {
          iVar1 = (int)param_1[5];
        }
        *(int *)(param_1 + 3) = iVar5;
        iVar2 = iVar5 - iVar1;
        param_1[1] = lVar7;
        pvVar4 = local_38;
        if (iVar2 == 0 || iVar5 < iVar1) break;
        *(int *)((long)param_1 + 0x2c) = iVar2;
        param_1[1] = lVar7 - iVar2;
        lVar7 = (lVar7 - iVar2) - (long)local_38;
        if (param_3 <= (int)lVar7) goto LAB_0052b800;
      }
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      lVar7 = lVar7 - (long)local_38;
    } while ((int)lVar7 < param_3);
  }
LAB_0052b800:
  memcpy(param_2,pvVar4,(long)param_3);
  *param_1 = *param_1 + (long)param_3;
  return 1;
}


