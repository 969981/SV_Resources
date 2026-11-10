/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fcd30; name: FUN_018fcd30
 */


void FUN_018fcd30(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_48 [3];
  
  plVar2 = (long *)(param_1 + 8);
  if ((long *)*plVar2 == (long *)0x0) {
    plVar4 = plVar2;
LAB_018fcd94:
    if (*plVar2 == 0) {
      FUN_018fce38(local_48,param_1,param_3,param_4);
      FUN_018fcde0(param_1,plVar4,plVar2,local_48[0]);
    }
    return;
  }
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  do {
    if (*param_2 < (ulong)plVar4[4]) {
      plVar1 = (long *)*plVar4;
      if (plVar1 == (long *)0x0) {
        plVar2 = plVar4;
        goto LAB_018fcd94;
      }
      plVar3 = plVar4;
    }
    else {
      plVar2 = plVar3;
      if (*param_2 <= (ulong)plVar4[4]) goto LAB_018fcd94;
      plVar2 = plVar4 + 1;
      plVar1 = (long *)*plVar2;
      plVar3 = plVar2;
      if (plVar1 == (long *)0x0) goto LAB_018fcd94;
    }
    plVar4 = plVar1;
  } while( true );
}


