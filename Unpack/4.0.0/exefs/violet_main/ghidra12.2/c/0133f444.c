/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133f444; name: FUN_0133f444
 */


void FUN_0133f444(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0xe8))(param_2,param_1);
  plVar1 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2 + -4;
  }
                    /* WARNING: Could not recover jumptable at 0x0133f484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar1[4] + 0x68))();
  return;
}


