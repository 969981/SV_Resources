/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1b620; name: FUN_01e1b620
 */


void FUN_01e1b620(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_48 [3];
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 == (long *)0x0) {
    plVar5 = plVar4;
LAB_01e1b684:
    if (*plVar4 == 0) {
      FUN_01e1bd40(local_48,param_1,param_3,param_4);
      FUN_01e1bdc8(param_1,plVar5,plVar4,local_48[0]);
    }
    return;
  }
  uVar1 = *param_2;
  plVar4 = (long *)(param_1 + 8);
  do {
    uVar2 = plVar5[4];
    if (uVar1 <= uVar2 && uVar2 != uVar1) {
      plVar3 = (long *)*plVar5;
      plVar4 = plVar5;
      if (plVar3 == (long *)0x0) {
        goto LAB_01e1b684;
      }
    }
    else {
      if (uVar1 <= uVar2) goto LAB_01e1b684;
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
      if (plVar3 == (long *)0x0) goto LAB_01e1b684;
    }
    plVar5 = plVar3;
  } while( true );
}


