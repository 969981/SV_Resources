/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052c7dc; name: FUN_0052c7dc
 */


long FUN_0052c7dc(long *param_1,void *param_2,int param_3,long *param_4)

{
  long *__src;
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  size_t __n;
  long lVar7;
  long *local_60;
  uint local_54;
  
  lVar7 = (*param_1 - (long)param_4) + 0x10;
  if ((int)lVar7 < param_3) {
    __src = param_1 + 2;
    plVar1 = param_1 + 4;
    do {
      __n = (size_t)(int)lVar7;
      memcpy(param_4,param_2,__n);
      param_3 = param_3 - (int)lVar7;
      param_2 = (void *)((long)param_2 + __n);
      param_4 = (long *)((long)param_4 + __n);
      do {
        if ((char)param_1[7] != '\0') {
          plVar4 = (long *)*param_1;
          param_4 = __src;
          break;
        }
        plVar3 = (long *)*param_1;
        plVar4 = plVar1;
        plVar5 = __src;
        if (param_1[6] == 0) {
LAB_0052c864:
          *(undefined1 *)(param_1 + 7) = 1;
          *param_1 = (long)plVar1;
        }
        else {
          if ((void *)param_1[1] == (void *)0x0) {
            lVar7 = *plVar3;
            param_1[3] = plVar3[1];
            *__src = lVar7;
            *param_1 = (long)plVar1;
            param_1[1] = (long)plVar3;
          }
          else {
            memcpy((void *)param_1[1],__src,(long)plVar3 - (long)__src);
            do {
              uVar2 = (**(code **)(*(long *)param_1[6] + 0x10))
                                ((long *)param_1[6],&local_60,&local_54);
              if ((uVar2 & 1) == 0) goto LAB_0052c864;
            } while (local_54 == 0);
            plVar6 = (long *)*param_1;
            if (0x10 < (int)local_54) {
              lVar7 = *plVar6;
              plVar4 = (long *)((long)local_60 + ((ulong)local_54 - 0x10));
              local_60[1] = plVar6[1];
              *local_60 = lVar7;
              *param_1 = (long)plVar4;
              param_1[1] = 0;
              plVar5 = local_60;
              goto LAB_0052c874;
            }
            lVar7 = *plVar6;
            plVar4 = (long *)((long)param_1 + (long)(int)local_54 + 0x10);
            param_1[3] = plVar6[1];
            *__src = lVar7;
            *param_1 = (long)plVar4;
            param_1[1] = (long)local_60;
          }
        }
LAB_0052c874:
        param_4 = (long *)((long)plVar5 + (long)((int)param_4 - (int)plVar3));
      } while (plVar4 <= param_4);
      lVar7 = (long)plVar4 + (0x10 - (long)param_4);
    } while ((int)lVar7 < param_3);
  }
  memcpy(param_4,param_2,(long)param_3);
  return (long)param_4 + (long)param_3;
}


