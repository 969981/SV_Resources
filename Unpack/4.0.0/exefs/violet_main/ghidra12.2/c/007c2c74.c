/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c2c74; name: FUN_007c2c74
 */


long * FUN_007c2c74(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  while( true ) {
    if ((uVar1 & 1) == 0) {
      return (long *)0x0;
    }
    if ((long *)param_1[10] == param_1 + 9) break;
    lVar3 = (long)*(int *)((long)param_1 + 0x5c);
    plVar2 = (long *)(param_1[10] - lVar3);
    while (uVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,param_2), (uVar1 & 1) == 0) {
      plVar2 = (long *)(*(long *)((long)plVar2 + lVar3 + 8) - lVar3);
      if (plVar2 == (long *)((long)(param_1 + 9) - (long)*(int *)((long)param_1 + 0x5c))) {
        return param_1;
      }
    }
    uVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
    param_1 = plVar2;
  }
  return param_1;
}


