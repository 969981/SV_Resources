/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0192e4c4; name: FUN_0192e4c4
 */


long FUN_0192e4c4(long param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long local_48 [3];
  
  plVar2 = (long *)(param_1 + 8);
  if ((long *)*plVar2 == (long *)0x0) {
    plVar3 = plVar2;
LAB_0192e4ec:
    lVar4 = *plVar3;
    if (*plVar3 == 0) {
      FUN_01e1bf30(local_48,param_1,param_3);
      FUN_0192e2ec(param_1,plVar2,plVar3,local_48[0]);
      lVar4 = local_48[0];
    }
    return lVar4;
  }
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar2;
  do {
    if (*param_2 < (ulong)plVar2[4]) {
      plVar1 = (long *)*plVar2;
      plVar3 = plVar2;
      if (plVar1 == (long *)0x0) goto LAB_0192e4ec;
    }
    else {
      if (*param_2 <= (ulong)plVar2[4]) goto LAB_0192e4ec;
      plVar3 = plVar2 + 1;
      plVar1 = (long *)*plVar3;
      if (plVar1 == (long *)0x0) goto LAB_0192e4ec;
    }
    plVar2 = plVar1;
  } while( true );
}


