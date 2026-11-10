/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025c8600; name: FUN_025c8600
 */


undefined8 FUN_025c8600(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 4) == '\0') {
    uVar1 = FUN_02592d00(param_1,0);
    return uVar1;
  }
  FUN_00c46da0((double)*param_2,param_1);
  FUN_00c46da0((double)param_2[1],param_1);
  FUN_00c46da0((double)param_2[2],param_1);
  FUN_00c46da0((double)param_2[3],param_1);
  return 4;
}


