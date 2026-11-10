/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052c420; name: FUN_0052c420
 */


long * FUN_0052c420(long *param_1,long *param_2)

{
  undefined8 *__dest;
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *__src;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *local_40;
  uint local_34;
  
  if ((char)param_1[7] == '\0') {
    __src = param_1 + 2;
    plVar2 = (long *)*param_1;
    __dest = (undefined8 *)param_1[1];
LAB_0052c454:
    do {
      if (__dest == (undefined8 *)0x0) {
        param_1[1] = (long)param_2;
        if ((int)plVar2 - (int)param_2 != -0x10) {
LAB_0052c534:
          (**(code **)(*(long *)param_1[6] + 0x18))();
        }
        break;
      }
      if (param_2 < plVar2 || (long)param_2 - (long)plVar2 == 0) {
        memcpy(__dest,__src,(long)param_2 - (long)__src);
        param_1[1] = param_1[1] + ((long)param_2 - (long)__src);
        if ((int)*param_1 != (int)param_2) goto LAB_0052c534;
        break;
      }
      if (param_1[6] == 0) {
LAB_0052c548:
        *(undefined1 *)(param_1 + 7) = 1;
        *param_1 = (long)(param_1 + 4);
        break;
      }
      memcpy(__dest,__src,(long)plVar2 - (long)__src);
      do {
        uVar1 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],&local_40,&local_34);
        if ((uVar1 & 1) == 0) goto LAB_0052c548;
      } while (local_34 == 0);
      plVar3 = (long *)*param_1;
      iVar4 = (int)((long)param_2 - (long)plVar2);
      if ((int)local_34 < 0x11) {
        lVar6 = *plVar3;
        plVar2 = (long *)((long)param_1 + (long)(int)local_34 + 0x10);
        param_1[3] = plVar3[1];
        *__src = lVar6;
        *param_1 = (long)plVar2;
        param_1[1] = (long)local_40;
        param_2 = (long *)((long)__src + (long)iVar4);
        __dest = local_40;
        if ((char)param_1[7] != '\0') break;
        goto LAB_0052c454;
      }
      uVar5 = *plVar3;
      plVar2 = (long *)((long)local_40 + ((ulong)local_34 - 0x10));
      local_40[1] = plVar3[1];
      *local_40 = uVar5;
      *param_1 = (long)plVar2;
      param_1[1] = 0;
      param_2 = (long *)((long)local_40 + (long)iVar4);
      __dest = (undefined8 *)0x0;
    } while ((char)param_1[7] == '\0');
    *param_1 = (long)__src;
    param_1[1] = (long)__src;
  }
  else {
    __src = param_2;
  }
  return __src;
}


