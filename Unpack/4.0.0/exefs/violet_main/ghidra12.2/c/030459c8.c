/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030459c8; name: FUN_030459c8
 */


void FUN_030459c8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x2f0))(param_2,param_3);
  if (*plVar1 == -1 || plVar1[2] == -1) {
    return;
  }
  FUN_0304648c(param_1,param_2,*plVar1,plVar1[2],1);
  return;
}


