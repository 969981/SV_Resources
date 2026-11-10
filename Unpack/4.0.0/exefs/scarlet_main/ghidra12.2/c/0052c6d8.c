/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052c6d8; name: FUN_0052c6d8
 */


long * FUN_0052c6d8(long *param_1,long *param_2)

{
  long *__src;
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *local_40;
  uint local_34;
  
  __src = param_1 + 2;
  plVar1 = param_1 + 4;
  do {
    if ((char)param_1[7] != '\0') {
      return __src;
    }
    plVar4 = (long *)*param_1;
    plVar3 = __src;
    plVar5 = plVar1;
    if (param_1[6] == 0) {
LAB_0052c6fc:
      *(undefined1 *)(param_1 + 7) = 1;
      *param_1 = (long)plVar1;
    }
    else {
      if ((void *)param_1[1] == (void *)0x0) {
        lVar7 = *plVar4;
        param_1[3] = plVar4[1];
        *__src = lVar7;
        *param_1 = (long)plVar1;
        param_1[1] = (long)plVar4;
      }
      else {
        memcpy((void *)param_1[1],__src,(long)plVar4 - (long)__src);
        do {
          uVar2 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],&local_40,&local_34);
          if ((uVar2 & 1) == 0) goto LAB_0052c6fc;
        } while (local_34 == 0);
        plVar6 = (long *)*param_1;
        if (0x10 < (int)local_34) {
          lVar7 = *plVar6;
          plVar5 = (long *)((long)local_40 + ((ulong)local_34 - 0x10));
          local_40[1] = plVar6[1];
          *local_40 = lVar7;
          *param_1 = (long)plVar5;
          param_1[1] = 0;
          plVar3 = local_40;
          goto LAB_0052c70c;
        }
        lVar7 = *plVar6;
        plVar5 = (long *)((long)param_1 + (long)(int)local_34 + 0x10);
        param_1[3] = plVar6[1];
        *__src = lVar7;
        *param_1 = (long)plVar5;
        param_1[1] = (long)local_40;
      }
    }
LAB_0052c70c:
    param_2 = (long *)((long)plVar3 + (long)((int)param_2 - (int)plVar4));
    if (param_2 < plVar5) {
      return param_2;
    }
  } while( true );
}


