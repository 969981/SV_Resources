/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c0964; name: FUN_002c0964
 */


long * FUN_002c0964(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  long *local_38;
  
  lVar1 = *param_2;
  param_1[1] = param_1[1] + param_2[1];
  *param_1 = *param_1 + lVar1;
  lVar1 = param_2[2];
  param_1[3] = param_1[3] + param_2[3];
  param_1[2] = param_1[2] + lVar1;
  if ((long *)param_2[4] != param_2 + 5) {
    plVar4 = (long *)param_2[4];
    do {
      local_38 = plVar4 + 4;
      lVar1 = FUN_002c1ff4(param_1 + 4,local_38,&DAT_03cc9966,&local_38,auStack_40);
      *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + plVar4[7];
      *(double *)(lVar1 + 0x40) = (double)plVar4[8] + *(double *)(lVar1 + 0x40);
      plVar2 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar2 = plVar4 + 2;
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar3 != plVar4) {
          do {
            lVar1 = *plVar2;
            plVar2 = (long *)(lVar1 + 0x10);
            plVar3 = (long *)*plVar2;
          } while (*plVar3 != lVar1);
        }
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar4 = plVar3;
    } while (plVar3 != param_2 + 5);
  }
  return param_1;
}


