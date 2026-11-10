/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052c570; name: FUN_0052c570
 */


long * FUN_0052c570(long *param_1,long *param_2)

{
  long *__src;
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *local_40;
  uint local_34;
  
  if ((char)param_1[7] == '\0') {
    plVar3 = (long *)*param_1;
    __src = param_1 + 2;
    plVar4 = (long *)param_1[1];
LAB_0052c5b8:
    do {
      if (plVar4 == (long *)0x0) {
        uVar1 = (long)plVar3 + (0x10 - (long)param_2);
        param_1[1] = (long)param_2;
LAB_0052c6a0:
        iVar2 = (int)uVar1;
        lVar5 = (long)param_2 + ((uVar1 & 0xffffffff) - 0x10);
        if (iVar2 < 0x11) {
          lVar5 = (long)param_1 + (long)iVar2 + 0x10;
        }
        plVar3 = param_2;
        plVar4 = (long *)0x0;
        if (iVar2 < 0x11) {
          plVar3 = __src;
          plVar4 = param_2;
        }
        *param_1 = lVar5;
        param_1[1] = (long)plVar4;
        return plVar3;
      }
      if (param_2 < plVar3 || (long)param_2 - (long)plVar3 == 0) {
        memcpy(plVar4,__src,(long)param_2 - (long)__src);
        plVar3 = (long *)(param_1[1] + ((long)param_2 - (long)__src));
        param_1[1] = (long)plVar3;
        if ((char)param_1[7] != '\0') {
          return __src;
        }
        uVar1 = *param_1 - (long)param_2;
        param_2 = plVar3;
        goto LAB_0052c6a0;
      }
      if (param_1[6] == 0) {
LAB_0052c6c8:
        *(undefined1 *)(param_1 + 7) = 1;
        *param_1 = (long)(param_1 + 4);
        return __src;
      }
      memcpy(plVar4,__src,(long)plVar3 - (long)__src);
      do {
        uVar1 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],&local_40,&local_34);
        if ((uVar1 & 1) == 0) goto LAB_0052c6c8;
      } while (local_34 == 0);
      plVar4 = (long *)*param_1;
      iVar2 = (int)((long)param_2 - (long)plVar3);
      if (0x10 < (int)local_34) {
        lVar5 = *plVar4;
        plVar3 = (long *)((long)local_40 + ((ulong)local_34 - 0x10));
        local_40[1] = plVar4[1];
        *local_40 = lVar5;
        *param_1 = (long)plVar3;
        param_1[1] = 0;
        param_2 = (long *)((long)local_40 + (long)iVar2);
        plVar4 = (long *)0x0;
        if ((char)param_1[7] != '\0') {
          return __src;
        }
        goto LAB_0052c5b8;
      }
      lVar5 = *plVar4;
      plVar3 = (long *)((long)param_1 + (long)(int)local_34 + 0x10);
      param_1[3] = plVar4[1];
      *__src = lVar5;
      *param_1 = (long)plVar3;
      param_1[1] = (long)local_40;
      param_2 = (long *)((long)__src + (long)iVar2);
      plVar4 = local_40;
    } while ((char)param_1[7] == '\0');
  }
  return param_1 + 2;
}


