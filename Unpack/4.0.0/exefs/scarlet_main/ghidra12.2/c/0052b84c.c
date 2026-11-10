/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052b84c; name: FUN_0052b84c
 */


/* WARNING: Removing unreachable block (ram,0x0052b8c8) */

undefined8 FUN_0052b84c(long *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  int local_44 [3];
  long local_38;
  
  if ((int)param_3 < 0) {
    return 0;
  }
  if ((int)param_1[1] - (int)*param_1 < (int)param_3) {
    if ((*param_2 & 1) == 0) {
      if (1 < *param_2) {
        param_2[0] = 0;
        param_2[1] = 0;
      }
    }
    else if (*(long *)(param_2 + 8) != 0) {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
    iVar7 = (int)param_1[6];
    if ((int)param_1[5] <= (int)param_1[6]) {
      iVar7 = (int)param_1[5];
    }
    if ((iVar7 != 0x7fffffff) &&
       (iVar7 = (iVar7 - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                ((int)param_1[1] - (int)*param_1),
       ((int)param_3 <= iVar7 && 0 < (int)param_3) && 0 < iVar7)) {
      FUN_002cdbb0(param_2,param_3);
    }
    lVar4 = *param_1;
    lVar8 = param_1[1] - lVar4;
    if ((int)lVar8 < (int)param_3) {
      do {
        while( true ) {
          iVar7 = (int)lVar8;
          if (iVar7 != 0) {
            FUN_0021d540(param_2,lVar4,(long)iVar7);
            param_3 = param_3 - iVar7;
            *param_1 = *param_1 + (long)iVar7;
          }
          if (((0 < *(int *)((long)param_1 + 0x2c)) || (0 < *(int *)((long)param_1 + 0x1c))) ||
             ((int)param_1[3] == (int)param_1[5])) {
            return 0;
          }
          plVar6 = (long *)param_1[2];
          do {
            uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_38,local_44);
            if ((uVar3 & 1) == 0) {
              *param_1 = 0;
              param_1[1] = 0;
              return 0;
            }
          } while (local_44[0] == 0);
          lVar8 = local_38 + local_44[0];
          iVar7 = (int)param_1[3];
          iVar1 = iVar7 - (0x7fffffff - local_44[0]);
          *param_1 = local_38;
          param_1[1] = lVar8;
          if (iVar1 == 0 || iVar7 < 0x7fffffff - local_44[0]) {
            iVar7 = iVar7 + local_44[0];
          }
          else {
            lVar8 = lVar8 - iVar1;
            iVar7 = 0x7fffffff;
            *(int *)((long)param_1 + 0x1c) = iVar1;
            param_1[1] = lVar8;
          }
          lVar8 = lVar8 + *(int *)((long)param_1 + 0x2c);
          iVar1 = (int)param_1[6];
          if ((int)param_1[5] <= (int)param_1[6]) {
            iVar1 = (int)param_1[5];
          }
          *(int *)(param_1 + 3) = iVar7;
          iVar2 = iVar7 - iVar1;
          param_1[1] = lVar8;
          lVar4 = local_38;
          if (iVar2 == 0 || iVar7 < iVar1) break;
          *(int *)((long)param_1 + 0x2c) = iVar2;
          param_1[1] = lVar8 - iVar2;
          lVar8 = (lVar8 - iVar2) - local_38;
          if ((int)param_3 <= (int)lVar8) goto LAB_0052baec;
        }
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
        lVar8 = lVar8 - local_38;
      } while ((int)lVar8 < (int)param_3);
    }
LAB_0052baec:
    FUN_0021d540(param_2,lVar4,(long)(int)param_3);
    *param_1 = *param_1 + (long)(int)param_3;
    return 1;
  }
  uVar3 = (ulong)param_3;
  if ((*param_2 & 1) == 0) {
    uVar5 = (ulong)(*param_2 >> 1);
    if (uVar5 < uVar3) {
LAB_0052b8d8:
      FUN_002ce498(param_2,uVar3 - uVar5,0);
      if ((*param_2 & 1) != 0) goto LAB_0052b90c;
    }
    else {
      param_2[uVar3 + 1] = 0;
      *param_2 = (byte)(param_3 << 1);
    }
LAB_0052b8f0:
    param_2 = param_2 + 1;
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
    if (uVar5 < uVar3) goto LAB_0052b8d8;
    *(undefined1 *)(*(long *)(param_2 + 0x10) + uVar3) = 0;
    *(ulong *)(param_2 + 8) = uVar3;
    if ((*param_2 & 1) == 0) goto LAB_0052b8f0;
LAB_0052b90c:
    param_2 = *(byte **)(param_2 + 0x10);
  }
  memcpy(param_2,(void *)*param_1,uVar3);
  *param_1 = *param_1 + uVar3;
  return 1;
}


