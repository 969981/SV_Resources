/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031a7a0; name: FUN_0031a7a0
 */


undefined8
FUN_0031a7a0(long param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,ulong param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar2 = (long *)*param_4;
  *param_4 = 0;
  param_3 = *param_5 + param_3;
  *param_5 = param_3;
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else if (param_6 < 5) {
    uVar3 = 0;
    while( true ) {
      plVar4 = (long *)plVar2[2];
      plVar1 = param_4;
      if (*plVar2 <= param_3) {
        FUN_00308360(param_1,param_2,plVar2 + 1,param_6,"finish_write_cb");
        uVar3 = 1;
        plVar1 = (long *)(param_1 + 0x1160);
      }
      plVar2[2] = *plVar1;
      *plVar1 = (long)plVar2;
      if (plVar4 == (long *)0x0) break;
      param_3 = *param_5;
      plVar2 = plVar4;
    }
  }
  else {
    uVar3 = 0;
    while( true ) {
      plVar4 = (long *)plVar2[2];
      plVar1 = param_4;
      if (*plVar2 <= param_3) {
        uVar3 = FUN_00350fb0(param_6);
        FUN_00308360(param_1,param_2,plVar2 + 1,uVar3,"finish_write_cb");
        uVar3 = 1;
        plVar1 = (long *)(param_1 + 0x1160);
      }
      plVar2[2] = *plVar1;
      *plVar1 = (long)plVar2;
      if (plVar4 == (long *)0x0) break;
      param_3 = *param_5;
      plVar2 = plVar4;
    }
  }
  if (4 < param_6) {
    FUN_00350fd0(param_6);
  }
  return uVar3;
}


