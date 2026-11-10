/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017cb270; name: FUN_017cb270
 */


long * FUN_017cb270(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 != param_2) {
    plVar1 = (long *)*param_3;
    *param_3 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar3 = *param_1;
    *param_1 = 0;
    *param_3 = lVar3;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    plVar1 = (long *)param_3[4];
    param_3[3] = param_1[3];
    param_3[4] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar3 = param_1[4];
    param_1[4] = 0;
    param_3[4] = lVar3;
    *(int *)(param_3 + 5) = (int)param_1[5];
    lVar4 = param_1[8];
    lVar3 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = lVar3;
    param_3[8] = lVar4;
    plVar1 = param_3;
    while( true ) {
      plVar5 = param_1 + 9;
      param_3 = plVar1 + 9;
      if (plVar5 == param_2) break;
      plVar2 = (long *)*param_3;
      *param_3 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      lVar3 = *plVar5;
      *plVar5 = 0;
      *param_3 = lVar3;
      plVar1[10] = param_1[10];
      plVar1[0xb] = param_1[0xb];
      plVar2 = (long *)plVar1[0xd];
      plVar1[0xc] = param_1[0xc];
      plVar1[0xd] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      lVar3 = param_1[0xd];
      param_1[0xd] = 0;
      plVar1[0xd] = lVar3;
      *(int *)(plVar1 + 0xe) = (int)param_1[0xe];
      lVar4 = param_1[0x11];
      lVar3 = param_1[0x10];
      plVar1[0xf] = param_1[0xf];
      plVar1[0x10] = lVar3;
      plVar1[0x11] = lVar4;
      plVar1 = param_3;
      param_1 = plVar5;
    }
  }
  return param_3;
}


